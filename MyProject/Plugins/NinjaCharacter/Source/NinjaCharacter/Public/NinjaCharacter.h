// "Ninja Character" plugin, by Javier 'Xaklse' Osset; Copyright 2020


#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "NinjaTypes.h"
#include "NinjaCharacter.generated.h"


DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharMovementAxisChangedSignature, const FVector&, OldAxisZ, const FVector&, CurrentAxisZ);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FCharMovementGravityChangedSignature, ENinjaGravityDirectionMode, OldGravityDirectionMode, ENinjaGravityDirectionMode, CurrentGravityDirectionMode);


/**
 * Pawns are the physical representations of players and creatures in a level.
 * Characters are Pawns that have a mesh, collision, and physics. This type is
 * able to handle arbitrary gravity direction and collision capsule orientation.
 */
UCLASS(Blueprintable)
class NINJACHARACTER_API ANinjaCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	ANinjaCharacter(const FObjectInitializer& ObjectInitializer);

public:
	/**
	 * Event when play begins for this Actor.
	 */
	virtual void BeginPlay() override;

public:
	/** Rep notify for ReplicatedBasedMovement */
	virtual void OnRep_ReplicatedBasedMovement() override;

public:
	/** Apply momentum caused by damage. */
	virtual void ApplyDamageMomentum(float DamageTaken, const FDamageEvent& DamageEvent, APawn* PawnInstigator, AActor* DamageCauser) override;

public:
	/** @return	Pawn's eye location */
	virtual FVector GetPawnViewLocation() const override;

	/** Updates Pawn's rotation to the given rotation, assumed to be the Controller's ControlRotation. Respects the bUseControllerRotation* settings. */
	virtual void FaceRotation(FRotator NewControlRotation, float DeltaTime = 0.0f) override;

public:
	/**
	 * Set a pending launch velocity on the Character. This velocity will be processed on the next
	 * CharacterMovementComponent tick, and will set it to the "falling" state. Triggers the OnLaunched event.
	 * @note This version has a different behavior for the boolean parameters that take into account the Character's orientation
	 * @param LaunchVelocity - the velocity to impart to the Character
	 * @param bHorizontalOverride - if true, replace the horizontal part of the Character's velocity instead of adding to it
	 * @param bVerticalOverride - if true, replace the vertical part of the Character's velocity instead of adding to it
	 */
	UFUNCTION(BlueprintCallable,Category="NinjaCharacter")
	virtual void LaunchCharacterRotated(FVector LaunchVelocity, bool bHorizontalOverride, bool bVerticalOverride);

protected:
	/** Stores vertical axis of the capsule (movement collider). */
	FVector LastAxisZ;

	/** Stores rotation of the capsule (movement collider). */
	FQuat LastRotation;

	/**
	 * Called when the root component is moved or scaled.
	 * @param UpdatedComponent - scene component that has been moved/scaled
	 * @param UpdateTransformFlags - information about how the transform is being updated
	 * @param Teleport - whether to teleport the physics body or not
	 */
	virtual void TransformUpdated(class USceneComponent* UpdatedComponent, EUpdateTransformFlags UpdateTransformFlags, ETeleportType Teleport);

public:
	/** If true, the aim control rotation of the Controller is rotated whenever the capsule is aligned to something. */
	UPROPERTY(EditAnywhere,BlueprintReadWrite,Category="NinjaCharacter")
	uint32 bCapsuleRotatesControlRotation:1;

	/**
	 * Delegate called after changing vertical axis of the capsule (movement collider).
	 * @param OldAxisZ - old vertical axis of the capsule
	 * @param CurrentAxisZ - current vertical axis of the capsule
	 */
	FCharMovementAxisChangedSignature CharMovementAxisChangedDelegate;

protected:
	/**
	 * Called after changing vertical axis of the capsule (movement collider).
	 * @param OldAxisZ - old vertical axis of the capsule
	 * @param CurrentAxisZ - current vertical axis of the capsule
	 */
	void CharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ);

	/**
	 * Called after changing vertical axis of the capsule (movement collider).
	 * @note Can be overriden
	 * @param OldAxisZ - old vertical axis of the capsule
	 * @param CurrentAxisZ - current vertical axis of the capsule
	 */
	virtual void OnCharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ);

public:
	/**
	 * Event called after changing vertical axis of the capsule (movement collider).
	 * @param OldAxisZ - old vertical axis of the capsule
	 * @param CurrentAxisZ - current vertical axis of the capsule
	 */
	UFUNCTION(BlueprintImplementableEvent,Category="NinjaCharacter",Meta=(DisplayName="On Char Axis Changed",ScriptName="OnCharacterMovementAxisChanged"))
	void K2_OnCharMovementAxisChanged(const FVector& OldAxisZ, const FVector& CurrentAxisZ);

public:
	/**
	 * Delegate called after GravityDirectionMode (or related data) has changed in the movement component.
	 * @param OldGravityDirectionMode - previous value of GravityDirectionMode
	 * @param CurrentGravityDirectionMode - current value of GravityDirectionMode
	 */
	FCharMovementGravityChangedSignature GravityDirectionChangedDelegate;

	/**
	 * Called after GravityDirectionMode (or related data) has changed in the movement component.
	 * @param OldGravityDirectionMode - previous value of GravityDirectionMode
	 * @param CurrentGravityDirectionMode - current value of GravityDirectionMode
	 */
	void GravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);

protected:
	/**
	 * Called after GravityDirectionMode (or related data) has changed in the movement component.
	 * @note Can be overriden
	 * @param OldGravityDirectionMode - previous value of GravityDirectionMode
	 * @param CurrentGravityDirectionMode - current value of GravityDirectionMode
	 */
	virtual void OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);

public:
	/**
	 * Event called after GravityDirectionMode (or related data) has changed in the movement component.
	 * @param OldGravityDirectionMode - previous value of GravityDirectionMode
	 * @param CurrentGravityDirectionMode - current value of GravityDirectionMode
	 */
	UFUNCTION(BlueprintImplementableEvent,Category="NinjaCharacter",Meta=(DisplayName="On Char Gravity Direction Changed",ScriptName="OnGravityDirectionChanged"))
	void K2_OnGravityDirectionChanged(ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode);

public:
	/**
	 * Returns NinjaCharacterMovement subobject.
	 */
	class UNinjaCharacterMovementComponent* GetNinjaCharacterMovement() const;

public:
	/**
	 * Return the current local X rotation axis of the root component.
	 * @return current X rotation axis of the root component
	 */
	FVector GetActorAxisX() const;

	/**
	 * Return the current local Y rotation axis of the root component.
	 * @return current Y rotation axis of the root component
	 */
	FVector GetActorAxisY() const;

	/**
	 * Return the current local Z rotation axis of the root component.
	 * @return current Z rotation axis of the root component
	 */
	FVector GetActorAxisZ() const;
};
