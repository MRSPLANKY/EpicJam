// "Ninja Character" plugin, by Javier 'Xaklse' Osset; Copyright 2020


#include "NinjaCharacter.h"

#include "NinjaCharacterMovementComponent.h"
#include "NinjaMath.h"

#include "GameFramework/DamageType.h"
#include "GameFramework/Controller.h"
#include "Components/SkeletalMeshComponent.h"
#include "Engine/World.h"


// Log categories
DEFINE_LOG_CATEGORY_STATIC(LogCharacter, Log, All);


ANinjaCharacter::ANinjaCharacter(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer.SetDefaultSubobjectClass<UNinjaCharacterMovementComponent>(ACharacter::CharacterMovementComponentName))
{
	bCapsuleRotatesControlRotation = false;
}

void ANinjaCharacter::BeginPlay()
{
	Super::BeginPlay();

	// Store current vertical axis and rotation
	LastAxisZ = GetActorAxisZ();
	LastRotation = GetActorQuat();

	// Subscribe to transform change event
	RootComponent->TransformUpdated.AddUObject(this, &ThisClass::TransformUpdated);
}

void ANinjaCharacter::OnRep_ReplicatedBasedMovement()
{
	if (GetLocalRole() != ROLE_SimulatedProxy)
	{
		return;
	}

	// Skip base updates while playing root motion, it is handled inside of OnRep_RootMotion
	if (IsPlayingNetworkedRootMotionMontage())
	{
		return;
	}

	UNinjaCharacterMovementComponent* CharMovement = GetNinjaCharacterMovement();

	CharMovement->bNetworkUpdateReceived = true;
	TGuardValue<bool> bInBaseReplicationGuard(bInBaseReplication, true);

	const bool bBaseChanged = (BasedMovement.MovementBase != ReplicatedBasedMovement.MovementBase || BasedMovement.BoneName != ReplicatedBasedMovement.BoneName);
	if (bBaseChanged)
	{
		// Even though we will copy the replicated based movement info, we need to use SetBase() to set up tick dependencies and trigger notifications
		SetBase(ReplicatedBasedMovement.MovementBase, ReplicatedBasedMovement.BoneName);
	}

	// Make sure to use the values of relative location/rotation etc from the server
	BasedMovement = ReplicatedBasedMovement;

	if (ReplicatedBasedMovement.HasRelativeLocation())
	{
		// Update transform relative to movement base
		const FVector OldLocation = GetActorLocation();
		const FQuat OldRotation = GetActorQuat();
		MovementBaseUtility::GetMovementBaseTransform(ReplicatedBasedMovement.MovementBase, ReplicatedBasedMovement.BoneName, CharMovement->OldBaseLocation, CharMovement->OldBaseQuat);
		const FVector NewLocation = CharMovement->OldBaseLocation + ReplicatedBasedMovement.Location;
		FRotator NewRotation;

		if (ReplicatedBasedMovement.HasRelativeRotation())
		{
			// Relative location, relative rotation
			NewRotation = (FRotationMatrix(ReplicatedBasedMovement.Rotation) * FQuatRotationMatrix(CharMovement->OldBaseQuat)).Rotator();

			if (CharMovement->ShouldRemainVertical())
			{
				NewRotation = CharMovement->ConstrainComponentRotation(NewRotation);
			}
		}
		else
		{
			// Relative location, absolute rotation
			NewRotation = ReplicatedBasedMovement.Rotation;
		}

		// When position or base changes, movement mode will need to be updated. This assumes rotation changes don't affect that
		CharMovement->bJustTeleported |= (bBaseChanged || NewLocation != OldLocation);
		CharMovement->bNetworkSmoothingComplete = false;
		CharMovement->SmoothCorrection(OldLocation, OldRotation, NewLocation, NewRotation.Quaternion());
		OnUpdateSimulatedPosition(OldLocation, OldRotation);
	}
}

void ANinjaCharacter::ApplyDamageMomentum(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser)
{
	const UDamageType* DmgTypeCDO = DamageEvent.DamageTypeClass->GetDefaultObject<UDamageType>();
	const float ImpulseScale = DmgTypeCDO->DamageImpulse;

	UCharacterMovementComponent* CharMovement = GetCharacterMovement();
	if (ImpulseScale > 3.0f && CharMovement != nullptr)
	{
		FHitResult HitInfo;
		FVector ImpulseDir;
		DamageEvent.GetBestHitInfo(this, PawnInstigator, HitInfo, ImpulseDir);

		FVector Impulse = ImpulseDir * ImpulseScale;
		const bool bMassIndependentImpulse = !DmgTypeCDO->bScaleMomentumByMass;

		// Limit Z momentum added if already going up faster than jump (to avoid blowing character way up into the sky)
		{
			FVector MassScaledImpulse = Impulse;
			if (!bMassIndependentImpulse && CharMovement->Mass > SMALL_NUMBER)
			{
				MassScaledImpulse = MassScaledImpulse / CharMovement->Mass;
			}

			const FVector AxisZ = GetActorAxisZ();
			if ((CharMovement->Velocity | AxisZ) > GetDefault<UCharacterMovementComponent>(CharMovement->GetClass())->JumpZVelocity && (MassScaledImpulse | AxisZ) > 0.0f)
			{
				Impulse = FVector::VectorPlaneProject(Impulse, AxisZ) + AxisZ * ((Impulse | AxisZ) * 0.5f);
			}
		}

		CharMovement->AddImpulse(Impulse, bMassIndependentImpulse);
	}
}

FVector ANinjaCharacter::GetPawnViewLocation() const
{
	return GetActorLocation() + GetActorAxisZ() * BaseEyeHeight;
}

void ANinjaCharacter::FaceRotation(FRotator NewControlRotation, float DeltaTime)
{
	// If going to use yaw component of control rotation alone
	if (bUseControllerRotationYaw && !bUseControllerRotationPitch && !bUseControllerRotationRoll)
	{
		const FVector AxisZ = GetActorAxisZ();
		if (AxisZ.Z == 1.0f)
		{
			// Optimization; just use yaw rotation from the new control rotation
			const FRotator CurrentRotation = GetActorRotation();

			NewControlRotation.Pitch = CurrentRotation.Pitch;
			NewControlRotation.Roll = CurrentRotation.Roll;
		}
		else
		{
			NewControlRotation = FNinjaMath::MakeFromZQuat(AxisZ, NewControlRotation.Quaternion()).Rotator();
		}

#if ENABLE_NAN_DIAGNOSTIC
		if (NewControlRotation.ContainsNaN())
		{
			logOrEnsureNanError(TEXT("ANinjaCharacter::FaceRotation about to apply NaN-containing rotation to actor! New:(%s), Current:(%s)"),
				*NewControlRotation.ToString(), *GetActorRotation().ToString());
		}
#endif

		SetActorRotation(NewControlRotation);
	}
	else
	{
		Super::FaceRotation(NewControlRotation, DeltaTime);
	}
}

void ANinjaCharacter::LaunchCharacterRotated(FVector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride)
{
	UE_LOG(LogCharacter, Verbose, TEXT("ANinjaCharacter::LaunchCharacterRotated '%s' %s"), *GetName(), *LaunchVelocity.ToCompactString());

	UCharacterMovementComponent* CharMovement = GetCharacterMovement();
	if (CharMovement != nullptr)
	{
		if (!bHorizontalOverride && !bVerticalOverride)
		{
			CharMovement->Launch(GetVelocity() + LaunchVelocity);
		}
		else if (bHorizontalOverride && bVerticalOverride)
		{
			CharMovement->Launch(LaunchVelocity);
		}
		else
		{
			FVector FinalVel;
			const FVector Velocity = GetVelocity();
			const FVector AxisZ = GetActorAxisZ();

			if (bHorizontalOverride)
			{
				FinalVel = FVector::VectorPlaneProject(LaunchVelocity, AxisZ) + AxisZ * (Velocity | AxisZ);
			}
			else // if (bVerticalOverride)
			{
				FinalVel = FVector::VectorPlaneProject(Velocity, AxisZ) + AxisZ * (LaunchVelocity | AxisZ);
			}

			CharMovement->Launch(FinalVel);
		}

		OnLaunched(LaunchVelocity, bHorizontalOverride, bVerticalOverride);
	}
}

void ANinjaCharacter::TransformUpdated(USceneComponent* UpdatedComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport)
{
	// Abort if rotation didn't change
	const FQuat NewRotation = GetActorQuat();
	if (NewRotation == LastRotation)
	{
		return;
	}

	// Abort if angle between new and old component 'up' axes almost equals to 0 degrees
	const FVector NewAxisZ = GetActorAxisZ();
	if ((LastAxisZ | NewAxisZ) >= THRESH_NORMALS_ARE_PARALLEL)
	{
		return;
	}

	CharMovementAxisChanged(LastAxisZ, NewAxisZ);

	// Store current vertical axis and rotation
	LastAxisZ = NewAxisZ;
	LastRotation = NewRotation;
}

void ANinjaCharacter::CharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ)
{
	OnCharMovementAxisChanged(OldAxisZ, CurrentAxisZ);

	CharMovementAxisChangedDelegate.Broadcast(OldAxisZ, CurrentAxisZ);
	K2_OnCharMovementAxisChanged(OldAxisZ, CurrentAxisZ);
}

void ANinjaCharacter::OnCharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ)
{
	if (bCapsuleRotatesControlRotation && Controller != nullptr)
	{
		// Figure out if angle between new and old 'up' axes is less than 180 degrees
		if ((CurrentAxisZ | OldAxisZ) > -THRESH_NORMALS_ARE_PARALLEL)
		{
			// Obtain quaternion rotation difference and apply it to control rotation
			const FQuat ControlRotation = Controller->GetControlRotation().Quaternion();
			const FQuat QuatRotation = FQuat::FindBetweenNormals(OldAxisZ, CurrentAxisZ);

			Controller->SetControlRotation((QuatRotation * ControlRotation).Rotator());
		}
		else
		{
			FVector ControlRotationX, ControlRotationY, ControlRotationZ;
			FRotationMatrix(Controller->GetControlRotation()).GetScaledAxes(
				ControlRotationX, ControlRotationY, ControlRotationZ);

			// Mirror control rotation axes about the plane determined by old 'up' axis
			ControlRotationX = ControlRotationX.MirrorByVector(OldAxisZ * -1.0f);
			ControlRotationY *= -1.0f;

			Controller->SetControlRotation(FMatrix(ControlRotationX, ControlRotationY,
				ControlRotationX ^ ControlRotationY, FVector::ZeroVector).Rotator());
		}
	}
}

void ANinjaCharacter::GravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode)
{
	OnGravityDirectionChanged(OldGravityDirectionMode, CurrentGravityDirectionMode);

	GravityDirectionChangedDelegate.Broadcast(OldGravityDirectionMode, CurrentGravityDirectionMode);
	K2_OnGravityDirectionChanged(OldGravityDirectionMode, CurrentGravityDirectionMode);
}

void ANinjaCharacter::OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode)
{
}

UNinjaCharacterMovementComponent* ANinjaCharacter::GetNinjaCharacterMovement() const
{
	return Cast<UNinjaCharacterMovementComponent>(GetMovementComponent());
}

FVector ANinjaCharacter::GetActorAxisX() const
{
	const UNinjaCharacterMovementComponent* MovementComponent = GetNinjaCharacterMovement();
	if (MovementComponent != nullptr && MovementComponent->UpdatedComponent == RootComponent)
	{
		return MovementComponent->GetComponentAxisX();
	}

	return GetActorQuat().GetAxisX();
}

FVector ANinjaCharacter::GetActorAxisY() const
{
	const UNinjaCharacterMovementComponent* MovementComponent = GetNinjaCharacterMovement();
	if (MovementComponent != nullptr && MovementComponent->UpdatedComponent == RootComponent)
	{
		return MovementComponent->GetComponentAxisY();
	}

	return GetActorQuat().GetAxisY();
}

FVector ANinjaCharacter::GetActorAxisZ() const
{
	const UNinjaCharacterMovementComponent* MovementComponent = GetNinjaCharacterMovement();
	if (MovementComponent != nullptr && MovementComponent->UpdatedComponent == RootComponent)
	{
		return MovementComponent->GetComponentAxisZ();
	}

	return GetActorQuat().GetAxisZ();
}
