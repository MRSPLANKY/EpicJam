// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaCharacterMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaCharacterMovementComponent() {}
// Cross Module References
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister();
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCharacterMovementComponent();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NINJACHARACTER_API UEnum* Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode();
// End Cross Module References
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientDisableAlignComponentToGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDisableAlignComponentToGravity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientEnableAlignComponentToGravity)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEnableAlignComponentToGravity_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetAlignComponentToGravity)
	{
		P_GET_UBOOL(Z_Param_bNewAlignComponentToGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignComponentToGravity(Z_Param_bNewAlignComponentToGravity);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientDisableAlignComponentToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDisableAlignComponentToFloor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientEnableAlignComponentToFloor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEnableAlignComponentToFloor_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetAlignComponentToFloor)
	{
		P_GET_UBOOL(Z_Param_bNewAlignComponentToFloor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignComponentToFloor(Z_Param_bNewAlignComponentToFloor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientDisableAlignGravityToBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientDisableAlignGravityToBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientEnableAlignGravityToBase)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientEnableAlignGravityToBase_Implementation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetAlignGravityToBase)
	{
		P_GET_UBOOL(Z_Param_bNewAlignGravityToBase);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAlignGravityToBase(Z_Param_bNewAlignGravityToBase);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetGravityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetGravityScale_Implementation(Z_Param_NewGravityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetCollisionGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetCollisionGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetCollisionGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetBoxGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetBoxGravityDirectionFromActor_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetBoxGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityBoxOrigin);
		P_GET_STRUCT(FVector,Z_Param_NewGravityBoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetBoxGravityDirection_Implementation(Z_Param_NewGravityBoxOrigin,Z_Param_NewGravityBoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetBoxGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxGravityDirectionFromActor(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetBoxGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityBoxOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityBoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxGravityDirection(Z_Param_Out_NewGravityBoxOrigin,Z_Param_Out_NewGravityBoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetSplinePlaneGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetSplinePlaneGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSplinePlaneGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePlaneGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetPlaneGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityPlaneBase);
		P_GET_STRUCT(FVector,Z_Param_NewGravityPlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetPlaneGravityDirection_Implementation(Z_Param_NewGravityPlaneBase,Z_Param_NewGravityPlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execK2_SetPlaneGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPlaneBase);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetPlaneGravityDirection(Z_Param_Out_NewGravityPlaneBase,Z_Param_Out_NewGravityPlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetSplineGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetSplineGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSplineGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetSegmentGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravitySegmentStart);
		P_GET_STRUCT(FVector,Z_Param_NewGravitySegmentEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetSegmentGravityDirection_Implementation(Z_Param_NewGravitySegmentStart,Z_Param_NewGravitySegmentEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSegmentGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravitySegmentStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravitySegmentEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSegmentGravityDirection(Z_Param_Out_NewGravitySegmentStart,Z_Param_Out_NewGravitySegmentEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetLineGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityLineStart);
		P_GET_STRUCT(FVector,Z_Param_NewGravityLineEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetLineGravityDirection_Implementation(Z_Param_NewGravityLineStart,Z_Param_NewGravityLineEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetLineGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityLineStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityLineEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineGravityDirection(Z_Param_Out_NewGravityLineStart,Z_Param_Out_NewGravityLineEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetPointGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetPointGravityDirectionFromActor_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetPointGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewGravityPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetPointGravityDirection_Implementation(Z_Param_NewGravityPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetPointGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointGravityDirectionFromActor(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetPointGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointGravityDirection(Z_Param_Out_NewGravityPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetSplineTangentGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetSplineTangentGravityDirection_Implementation(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execSetSplineTangentGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineTangentGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execClientSetFixedGravityDirection)
	{
		P_GET_STRUCT(FVector,Z_Param_NewFixedGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClientSetFixedGravityDirection_Implementation(Z_Param_NewFixedGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execK2_SetFixedGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetFixedGravityDirection(Z_Param_Out_NewGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execGetGravityMagnitude)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGravityMagnitude();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UNinjaCharacterMovementComponent::execGetGravityDirection)
	{
		P_GET_UBOOL(Z_Param_bAvoidZeroGravity);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_bAvoidZeroGravity);
		P_NATIVE_END;
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor = FName(TEXT("ClientDisableAlignComponentToFloor"));
	void UNinjaCharacterMovementComponent::ClientDisableAlignComponentToFloor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity = FName(TEXT("ClientDisableAlignComponentToGravity"));
	void UNinjaCharacterMovementComponent::ClientDisableAlignComponentToGravity()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase = FName(TEXT("ClientDisableAlignGravityToBase"));
	void UNinjaCharacterMovementComponent::ClientDisableAlignGravityToBase()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor = FName(TEXT("ClientEnableAlignComponentToFloor"));
	void UNinjaCharacterMovementComponent::ClientEnableAlignComponentToFloor()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity = FName(TEXT("ClientEnableAlignComponentToGravity"));
	void UNinjaCharacterMovementComponent::ClientEnableAlignComponentToGravity()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase = FName(TEXT("ClientEnableAlignGravityToBase"));
	void UNinjaCharacterMovementComponent::ClientEnableAlignGravityToBase()
	{
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase),NULL);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection = FName(TEXT("ClientSetBoxGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetBoxGravityDirection(FVector const& NewGravityBoxOrigin, FVector const& NewGravityBoxExtent)
	{
		NinjaCharacterMovementComponent_eventClientSetBoxGravityDirection_Parms Parms;
		Parms.NewGravityBoxOrigin=NewGravityBoxOrigin;
		Parms.NewGravityBoxExtent=NewGravityBoxExtent;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor = FName(TEXT("ClientSetBoxGravityDirectionFromActor"));
	void UNinjaCharacterMovementComponent::ClientSetBoxGravityDirectionFromActor(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventClientSetBoxGravityDirectionFromActor_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection = FName(TEXT("ClientSetCollisionGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetCollisionGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventClientSetCollisionGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection = FName(TEXT("ClientSetFixedGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetFixedGravityDirection(FVector const& NewFixedGravityDirection)
	{
		NinjaCharacterMovementComponent_eventClientSetFixedGravityDirection_Parms Parms;
		Parms.NewFixedGravityDirection=NewFixedGravityDirection;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetGravityScale = FName(TEXT("ClientSetGravityScale"));
	void UNinjaCharacterMovementComponent::ClientSetGravityScale(float NewGravityScale)
	{
		NinjaCharacterMovementComponent_eventClientSetGravityScale_Parms Parms;
		Parms.NewGravityScale=NewGravityScale;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetGravityScale),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection = FName(TEXT("ClientSetLineGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetLineGravityDirection(FVector const& NewGravityLineStart, FVector const& NewGravityLineEnd)
	{
		NinjaCharacterMovementComponent_eventClientSetLineGravityDirection_Parms Parms;
		Parms.NewGravityLineStart=NewGravityLineStart;
		Parms.NewGravityLineEnd=NewGravityLineEnd;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection = FName(TEXT("ClientSetPlaneGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetPlaneGravityDirection(FVector const& NewGravityPlaneBase, FVector const& NewGravityPlaneNormal)
	{
		NinjaCharacterMovementComponent_eventClientSetPlaneGravityDirection_Parms Parms;
		Parms.NewGravityPlaneBase=NewGravityPlaneBase;
		Parms.NewGravityPlaneNormal=NewGravityPlaneNormal;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection = FName(TEXT("ClientSetPointGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetPointGravityDirection(FVector const& NewGravityPoint)
	{
		NinjaCharacterMovementComponent_eventClientSetPointGravityDirection_Parms Parms;
		Parms.NewGravityPoint=NewGravityPoint;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor = FName(TEXT("ClientSetPointGravityDirectionFromActor"));
	void UNinjaCharacterMovementComponent::ClientSetPointGravityDirectionFromActor(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventClientSetPointGravityDirectionFromActor_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection = FName(TEXT("ClientSetSegmentGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetSegmentGravityDirection(FVector const& NewGravitySegmentStart, FVector const& NewGravitySegmentEnd)
	{
		NinjaCharacterMovementComponent_eventClientSetSegmentGravityDirection_Parms Parms;
		Parms.NewGravitySegmentStart=NewGravitySegmentStart;
		Parms.NewGravitySegmentEnd=NewGravitySegmentEnd;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection = FName(TEXT("ClientSetSplineGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetSplineGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventClientSetSplineGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection = FName(TEXT("ClientSetSplinePlaneGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetSplinePlaneGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventClientSetSplinePlaneGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection),&Parms);
	}
	static FName NAME_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection = FName(TEXT("ClientSetSplineTangentGravityDirection"));
	void UNinjaCharacterMovementComponent::ClientSetSplineTangentGravityDirection(AActor* NewGravityActor)
	{
		NinjaCharacterMovementComponent_eventClientSetSplineTangentGravityDirection_Parms Parms;
		Parms.NewGravityActor=NewGravityActor;
		ProcessEvent(FindFunctionChecked(NAME_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection),&Parms);
	}
	void UNinjaCharacterMovementComponent::StaticRegisterNativesUNinjaCharacterMovementComponent()
	{
		UClass* Class = UNinjaCharacterMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ClientDisableAlignComponentToFloor", &UNinjaCharacterMovementComponent::execClientDisableAlignComponentToFloor },
			{ "ClientDisableAlignComponentToGravity", &UNinjaCharacterMovementComponent::execClientDisableAlignComponentToGravity },
			{ "ClientDisableAlignGravityToBase", &UNinjaCharacterMovementComponent::execClientDisableAlignGravityToBase },
			{ "ClientEnableAlignComponentToFloor", &UNinjaCharacterMovementComponent::execClientEnableAlignComponentToFloor },
			{ "ClientEnableAlignComponentToGravity", &UNinjaCharacterMovementComponent::execClientEnableAlignComponentToGravity },
			{ "ClientEnableAlignGravityToBase", &UNinjaCharacterMovementComponent::execClientEnableAlignGravityToBase },
			{ "ClientSetBoxGravityDirection", &UNinjaCharacterMovementComponent::execClientSetBoxGravityDirection },
			{ "ClientSetBoxGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execClientSetBoxGravityDirectionFromActor },
			{ "ClientSetCollisionGravityDirection", &UNinjaCharacterMovementComponent::execClientSetCollisionGravityDirection },
			{ "ClientSetFixedGravityDirection", &UNinjaCharacterMovementComponent::execClientSetFixedGravityDirection },
			{ "ClientSetGravityScale", &UNinjaCharacterMovementComponent::execClientSetGravityScale },
			{ "ClientSetLineGravityDirection", &UNinjaCharacterMovementComponent::execClientSetLineGravityDirection },
			{ "ClientSetPlaneGravityDirection", &UNinjaCharacterMovementComponent::execClientSetPlaneGravityDirection },
			{ "ClientSetPointGravityDirection", &UNinjaCharacterMovementComponent::execClientSetPointGravityDirection },
			{ "ClientSetPointGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execClientSetPointGravityDirectionFromActor },
			{ "ClientSetSegmentGravityDirection", &UNinjaCharacterMovementComponent::execClientSetSegmentGravityDirection },
			{ "ClientSetSplineGravityDirection", &UNinjaCharacterMovementComponent::execClientSetSplineGravityDirection },
			{ "ClientSetSplinePlaneGravityDirection", &UNinjaCharacterMovementComponent::execClientSetSplinePlaneGravityDirection },
			{ "ClientSetSplineTangentGravityDirection", &UNinjaCharacterMovementComponent::execClientSetSplineTangentGravityDirection },
			{ "GetGravityDirection", &UNinjaCharacterMovementComponent::execGetGravityDirection },
			{ "GetGravityMagnitude", &UNinjaCharacterMovementComponent::execGetGravityMagnitude },
			{ "K2_SetFixedGravityDirection", &UNinjaCharacterMovementComponent::execK2_SetFixedGravityDirection },
			{ "K2_SetPlaneGravityDirection", &UNinjaCharacterMovementComponent::execK2_SetPlaneGravityDirection },
			{ "SetAlignComponentToFloor", &UNinjaCharacterMovementComponent::execSetAlignComponentToFloor },
			{ "SetAlignComponentToGravity", &UNinjaCharacterMovementComponent::execSetAlignComponentToGravity },
			{ "SetAlignGravityToBase", &UNinjaCharacterMovementComponent::execSetAlignGravityToBase },
			{ "SetBoxGravityDirection", &UNinjaCharacterMovementComponent::execSetBoxGravityDirection },
			{ "SetBoxGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execSetBoxGravityDirectionFromActor },
			{ "SetCollisionGravityDirection", &UNinjaCharacterMovementComponent::execSetCollisionGravityDirection },
			{ "SetLineGravityDirection", &UNinjaCharacterMovementComponent::execSetLineGravityDirection },
			{ "SetPointGravityDirection", &UNinjaCharacterMovementComponent::execSetPointGravityDirection },
			{ "SetPointGravityDirectionFromActor", &UNinjaCharacterMovementComponent::execSetPointGravityDirectionFromActor },
			{ "SetSegmentGravityDirection", &UNinjaCharacterMovementComponent::execSetSegmentGravityDirection },
			{ "SetSplineGravityDirection", &UNinjaCharacterMovementComponent::execSetSplineGravityDirection },
			{ "SetSplinePlaneGravityDirection", &UNinjaCharacterMovementComponent::execSetSplinePlaneGravityDirection },
			{ "SetSplineTangentGravityDirection", &UNinjaCharacterMovementComponent::execSetSplineTangentGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables bAlignComponentToFloor flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Disables bAlignComponentToFloor flag for clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientDisableAlignComponentToFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables bAlignComponentToGravity flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Disables bAlignComponentToGravity flag for clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientDisableAlignComponentToGravity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Disables bAlignGravityToBase flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Disables bAlignGravityToBase flag for clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientDisableAlignGravityToBase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enables bAlignComponentToFloor flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Enables bAlignComponentToFloor flag for clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientEnableAlignComponentToFloor", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enables bAlignComponentToGravity flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Enables bAlignComponentToGravity flag for clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientEnableAlignComponentToGravity", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Enables bAlignGravityToBase flag for clients.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Enables bAlignGravityToBase flag for clients." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientEnableAlignGravityToBase", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent = { "NewGravityBoxExtent", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetBoxGravityDirection_Parms, NewGravityBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin = { "NewGravityBoxOrigin", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetBoxGravityDirection_Parms, NewGravityBoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new axis-aligned box for gravity to clients.\n\x09 * @param NewGravityBoxOrigin - origin of the box\n\x09 * @param NewGravityBoxExtent - extents of the box\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new axis-aligned box for gravity to clients.\n@param NewGravityBoxOrigin - origin of the box\n@param NewGravityBoxExtent - extents of the box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetBoxGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetBoxGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01880CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetBoxGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new axis-aligned box for gravity to clients.\n\x09 * @param NewGravityActor - Actor that provides its collision bounding box as gravity target\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new axis-aligned box for gravity to clients.\n@param NewGravityActor - Actor that provides its collision bounding box as gravity target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetBoxGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetBoxGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetCollisionGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new collision geometry for gravity to clients.\n\x09 * @param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new collision geometry for gravity to clients.\n@param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetCollisionGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetCollisionGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewFixedGravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewFixedGravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection = { "NewFixedGravityDirection", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetFixedGravityDirection_Parms, NewFixedGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::NewProp_NewFixedGravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new fixed gravity direction to clients.\n\x09 * @param NewFixedGravityDirection - new fixed gravity direction, assumes it is normalized\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new fixed gravity direction to clients.\n@param NewFixedGravityDirection - new fixed gravity direction, assumes it is normalized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetFixedGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetFixedGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01880CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics
	{
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewGravityScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::NewProp_NewGravityScale = { "NewGravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetGravityScale_Parms, NewGravityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::NewProp_NewGravityScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates gravity scale factor to clients.\n\x09 * @param NewGravityScale - new gravity scale factor\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates gravity scale factor to clients.\n@param NewGravityScale - new gravity scale factor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetGravityScale", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetGravityScale_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityLineEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityLineStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd = { "NewGravityLineEnd", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetLineGravityDirection_Parms, NewGravityLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineStart = { "NewGravityLineStart", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetLineGravityDirection_Parms, NewGravityLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::NewProp_NewGravityLineStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new infinite line for gravity to clients.\n\x09 * @param NewGravityLineStart - a point that belongs to the infinite line\n\x09 * @param NewGravityLineEnd - another point that belongs to the infinite line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new infinite line for gravity to clients.\n@param NewGravityLineStart - a point that belongs to the infinite line\n@param NewGravityLineEnd - another point that belongs to the infinite line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetLineGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetLineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01880CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal = { "NewGravityPlaneNormal", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetPlaneGravityDirection_Parms, NewGravityPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase = { "NewGravityPlaneBase", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetPlaneGravityDirection_Parms, NewGravityPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new infinite plane for gravity to clients.\n\x09 * @param NewGravityPlaneBase - a point that belongs to the plane\n\x09 * @param NewGravityPlaneNormal - normal of the plane, assumes it is normalized\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new infinite plane for gravity to clients.\n@param NewGravityPlaneBase - a point that belongs to the plane\n@param NewGravityPlaneNormal - normal of the plane, assumes it is normalized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetPlaneGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetPlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01880CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::NewProp_NewGravityPoint = { "NewGravityPoint", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetPointGravityDirection_Parms, NewGravityPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::NewProp_NewGravityPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new gravity point to clients.\n\x09 * @param NewGravityPoint - new point which gravity direction points to\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new gravity point to clients.\n@param NewGravityPoint - new point which gravity direction points to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetPointGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetPointGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01880CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetPointGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new gravity point to clients.\n\x09 * @param NewGravityActor - Actor that provides its location as gravity point\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new gravity point to clients.\n@param NewGravityActor - Actor that provides its location as gravity point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetPointGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetPointGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd = { "NewGravitySegmentEnd", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetSegmentGravityDirection_Parms, NewGravitySegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart = { "NewGravitySegmentStart", nullptr, (EPropertyFlags)0x0010000008000082, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetSegmentGravityDirection_Parms, NewGravitySegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new segment line for gravity to clients.\n\x09 * @param NewGravitySegmentStart - start point of the segment line\n\x09 * @param NewGravitySegmentEnd - end point of the segment line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new segment line for gravity to clients.\n@param NewGravitySegmentStart - start point of the segment line\n@param NewGravitySegmentEnd - end point of the segment line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetSegmentGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetSegmentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01880CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetSplineGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new spline for gravity to clients.\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new spline for gravity to clients.\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetSplineGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetSplineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetSplinePlaneGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new infinite plane determined by closest spline point for\n\x09 * gravity to clients.\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new infinite plane determined by closest spline point for\ngravity to clients.\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetSplinePlaneGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetSplinePlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics
	{
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventClientSetSplineTangentGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/**\n\x09 * Replicates a new spline gravity direction to clients.\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Replicates a new spline gravity direction to clients.\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "ClientSetSplineTangentGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventClientSetSplineTangentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x01080CC0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventGetGravityDirection_Parms
		{
			bool bAvoidZeroGravity;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static void NewProp_bAvoidZeroGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAvoidZeroGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventGetGravityDirection_Parms*)Obj)->bAvoidZeroGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity = { "bAvoidZeroGravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventGetGravityDirection_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::NewProp_bAvoidZeroGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Obtains the normalized direction of the current gravity.\n\x09 * @note Could return no gravity direction due to zero gravity\n\x09 * @param bAvoidZeroGravity - if true, a gravity direction is always returned\n\x09 * @return normalized direction of current gravity\n\x09 */" },
		{ "CPP_Default_bAvoidZeroGravity", "false" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Obtains the normalized direction of the current gravity.\n@note Could return no gravity direction due to zero gravity\n@param bAvoidZeroGravity - if true, a gravity direction is always returned\n@return normalized direction of current gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventGetGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics
	{
		struct NinjaCharacterMovementComponent_eventGetGravityMagnitude_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventGetGravityMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Obtains the absolute (positive) magnitude of the current gravity.\n\x09 * @return magnitude of current gravity\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Obtains the absolute (positive) magnitude of the current gravity.\n@return magnitude of current gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "GetGravityMagnitude", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventGetGravityMagnitude_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventK2_SetFixedGravityDirection_Parms
		{
			FVector NewGravityDirection;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityDirection_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventK2_SetFixedGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new fixed gravity direction.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityDirection - new gravity direction, assumes it isn't normalized\n\x09 */" },
		{ "DisplayName", "Set Fixed Gravity Direction" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ScriptName", "SetFixedGravityDirection" },
		{ "ToolTip", "Sets a new fixed gravity direction.\n@note It can be influenced by GravityScale\n@param NewGravityDirection - new gravity direction, assumes it isn't normalized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "K2_SetFixedGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventK2_SetFixedGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms
		{
			FVector NewGravityPlaneBase;
			FVector NewGravityPlaneNormal;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneNormal_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneNormal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityPlaneBase_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityPlaneBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal = { "NewGravityPlaneNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms, NewGravityPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase = { "NewGravityPlaneBase", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms, NewGravityPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new infinite plane which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityPlaneBase - a point that belongs to the plane\n\x09 * @param NewGravityPlaneNormal - normal of the plane, assumes it isn't normalized\n\x09 */" },
		{ "DisplayName", "Set Plane Gravity Direction" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ScriptName", "SetPlaneGravityDirection" },
		{ "ToolTip", "Sets a new infinite plane which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityPlaneBase - a point that belongs to the plane\n@param NewGravityPlaneNormal - normal of the plane, assumes it isn't normalized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "K2_SetPlaneGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventK2_SetPlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms
		{
			bool bNewAlignComponentToFloor;
		};
		static void NewProp_bNewAlignComponentToFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewAlignComponentToFloor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms*)Obj)->bNewAlignComponentToFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor = { "bNewAlignComponentToFloor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::NewProp_bNewAlignComponentToFloor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new state for bAlignComponentToFloor flag.\n\x09 * @param bNewAlignComponentToFloor - new value for bAlignComponentToFloor flag\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new state for bAlignComponentToFloor flag.\n@param bNewAlignComponentToFloor - new value for bAlignComponentToFloor flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetAlignComponentToFloor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetAlignComponentToFloor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms
		{
			bool bNewAlignComponentToGravity;
		};
		static void NewProp_bNewAlignComponentToGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewAlignComponentToGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms*)Obj)->bNewAlignComponentToGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity = { "bNewAlignComponentToGravity", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::NewProp_bNewAlignComponentToGravity,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new state for bAlignComponentToGravity flag.\n\x09 * @param bNewAlignComponentToGravity - new value for bAlignComponentToGravity flag\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new state for bAlignComponentToGravity flag.\n@param bNewAlignComponentToGravity - new value for bAlignComponentToGravity flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetAlignComponentToGravity", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetAlignComponentToGravity_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms
		{
			bool bNewAlignGravityToBase;
		};
		static void NewProp_bNewAlignGravityToBase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bNewAlignGravityToBase;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase_SetBit(void* Obj)
	{
		((NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms*)Obj)->bNewAlignGravityToBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase = { "bNewAlignGravityToBase", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms), &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::NewProp_bNewAlignGravityToBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new state for bAlignGravityToBase flag.\n\x09 * @param bNewAlignGravityToBase - new value for bAlignGravityToBase flag\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new state for bAlignGravityToBase flag.\n@param bNewAlignGravityToBase - new value for bAlignGravityToBase flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetAlignGravityToBase", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetAlignGravityToBase_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms
		{
			FVector NewGravityBoxOrigin;
			FVector NewGravityBoxExtent;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxExtent_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxExtent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityBoxOrigin_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityBoxOrigin;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent = { "NewGravityBoxExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms, NewGravityBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin = { "NewGravityBoxOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms, NewGravityBoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new axis-aligned box which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityBoxOrigin - origin of the box\n\x09 * @param NewGravityBoxExtent - extents of the box\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new axis-aligned box which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityBoxOrigin - origin of the box\n@param NewGravityBoxExtent - extents of the box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetBoxGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetBoxGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetBoxGravityDirectionFromActor_Parms
		{
			AActor* NewGravityActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetBoxGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new axis-aligned box which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides its collision bounding box as gravity target\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new axis-aligned box which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides its collision bounding box as gravity target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetBoxGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetBoxGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetCollisionGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetCollisionGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new collision geometry which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new collision geometry which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetCollisionGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetCollisionGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms
		{
			FVector NewGravityLineStart;
			FVector NewGravityLineEnd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityLineEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityLineStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityLineStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd = { "NewGravityLineEnd", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms, NewGravityLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart = { "NewGravityLineStart", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms, NewGravityLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new infinite line which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityLineStart - a point that belongs to the infinite line\n\x09 * @param NewGravityLineEnd - another point that belongs to the infinite line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new infinite line which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityLineStart - a point that belongs to the infinite line\n@param NewGravityLineEnd - another point that belongs to the infinite line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetLineGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetLineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetPointGravityDirection_Parms
		{
			FVector NewGravityPoint;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravityPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravityPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint = { "NewGravityPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetPointGravityDirection_Parms, NewGravityPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::NewProp_NewGravityPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new point which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityPoint - new point which gravity direction points to\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new point which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityPoint - new point which gravity direction points to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetPointGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetPointGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetPointGravityDirectionFromActor_Parms
		{
			AActor* NewGravityActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetPointGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new point which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides its location as gravity point\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new point which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides its location as gravity point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetPointGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetPointGravityDirectionFromActor_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms
		{
			FVector NewGravitySegmentStart;
			FVector NewGravitySegmentEnd;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentEnd_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NewGravitySegmentStart_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NewGravitySegmentStart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd = { "NewGravitySegmentEnd", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms, NewGravitySegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart = { "NewGravitySegmentStart", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms, NewGravitySegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new segment line which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravitySegmentStart - start point of the segment line\n\x09 * @param NewGravitySegmentEnd - end point of the segment line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new segment line which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravitySegmentStart - start point of the segment line\n@param NewGravitySegmentEnd - end point of the segment line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSegmentGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetSegmentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSplineGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSplineGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new spline which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new spline which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSplineGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetSplineGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSplinePlaneGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSplinePlaneGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new infinite plane determined by closest spline point and spline\n\x09 * up vector which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new infinite plane determined by closest spline point and spline\nup vector which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSplinePlaneGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetSplinePlaneGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics
	{
		struct NinjaCharacterMovementComponent_eventSetSplineTangentGravityDirection_Parms
		{
			AActor* NewGravityActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NewGravityActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaCharacterMovementComponent_eventSetSplineTangentGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "Pawn|Components|NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * Sets a new gravity direction determined by closest spline tangent.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Sets a new gravity direction determined by closest spline tangent.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UNinjaCharacterMovementComponent, nullptr, "SetSplineTangentGravityDirection", nullptr, nullptr, sizeof(NinjaCharacterMovementComponent_eventSetSplineTangentGravityDirection_Parms), Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent_NoRegister()
	{
		return UNinjaCharacterMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRotateVelocityOnGround_MetaData[];
#endif
		static void NewProp_bRotateVelocityOnGround_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRotateVelocityOnGround;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlwaysRotateAroundCenter_MetaData[];
#endif
		static void NewProp_bAlwaysRotateAroundCenter_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlwaysRotateAroundCenter;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignComponentToGravity_MetaData[];
#endif
		static void NewProp_bAlignComponentToGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignComponentToGravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignComponentToFloor_MetaData[];
#endif
		static void NewProp_bAlignComponentToFloor_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignComponentToFloor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAlignGravityToBase_MetaData[];
#endif
		static void NewProp_bAlignGravityToBase_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAlignGravityToBase;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDisableGravityReplication_MetaData[];
#endif
		static void NewProp_bDisableGravityReplication_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDisableGravityReplication;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GravityActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityVectorB_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityVectorB;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityVectorA_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GravityVectorA;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityDirectionMode_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_GravityDirectionMode;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_GravityDirectionMode_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bLandOnAnySurface_MetaData[];
#endif
		static void NewProp_bLandOnAnySurface_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bLandOnAnySurface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bRevertToDefaultGravity_MetaData[];
#endif
		static void NewProp_bRevertToDefaultGravity_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bRevertToDefaultGravity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UCharacterMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToFloor, "ClientDisableAlignComponentToFloor" }, // 3689485151
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignComponentToGravity, "ClientDisableAlignComponentToGravity" }, // 3636174264
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientDisableAlignGravityToBase, "ClientDisableAlignGravityToBase" }, // 2366137961
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToFloor, "ClientEnableAlignComponentToFloor" }, // 1393033217
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignComponentToGravity, "ClientEnableAlignComponentToGravity" }, // 743683745
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientEnableAlignGravityToBase, "ClientEnableAlignGravityToBase" }, // 4033359189
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirection, "ClientSetBoxGravityDirection" }, // 993033513
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetBoxGravityDirectionFromActor, "ClientSetBoxGravityDirectionFromActor" }, // 3123791345
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetCollisionGravityDirection, "ClientSetCollisionGravityDirection" }, // 378024649
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetFixedGravityDirection, "ClientSetFixedGravityDirection" }, // 464574826
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetGravityScale, "ClientSetGravityScale" }, // 2300022885
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetLineGravityDirection, "ClientSetLineGravityDirection" }, // 2321920387
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPlaneGravityDirection, "ClientSetPlaneGravityDirection" }, // 3995810080
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirection, "ClientSetPointGravityDirection" }, // 2315966060
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetPointGravityDirectionFromActor, "ClientSetPointGravityDirectionFromActor" }, // 3743565531
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSegmentGravityDirection, "ClientSetSegmentGravityDirection" }, // 1730778161
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineGravityDirection, "ClientSetSplineGravityDirection" }, // 2220604
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplinePlaneGravityDirection, "ClientSetSplinePlaneGravityDirection" }, // 1976159185
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_ClientSetSplineTangentGravityDirection, "ClientSetSplineTangentGravityDirection" }, // 93880804
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityDirection, "GetGravityDirection" }, // 2041041811
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_GetGravityMagnitude, "GetGravityMagnitude" }, // 580487609
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetFixedGravityDirection, "K2_SetFixedGravityDirection" }, // 1100971641
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_K2_SetPlaneGravityDirection, "K2_SetPlaneGravityDirection" }, // 757912915
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToFloor, "SetAlignComponentToFloor" }, // 2806006523
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignComponentToGravity, "SetAlignComponentToGravity" }, // 608040625
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetAlignGravityToBase, "SetAlignGravityToBase" }, // 522624236
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirection, "SetBoxGravityDirection" }, // 3015066534
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetBoxGravityDirectionFromActor, "SetBoxGravityDirectionFromActor" }, // 2250279926
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetCollisionGravityDirection, "SetCollisionGravityDirection" }, // 3805655174
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetLineGravityDirection, "SetLineGravityDirection" }, // 1271364447
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirection, "SetPointGravityDirection" }, // 3005330827
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetPointGravityDirectionFromActor, "SetPointGravityDirectionFromActor" }, // 2662587896
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSegmentGravityDirection, "SetSegmentGravityDirection" }, // 3661008788
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineGravityDirection, "SetSplineGravityDirection" }, // 354536686
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplinePlaneGravityDirection, "SetSplinePlaneGravityDirection" }, // 671812841
		{ &Z_Construct_UFunction_UNinjaCharacterMovementComponent_SetSplineTangentGravityDirection, "SetSplineTangentGravityDirection" }, // 407871619
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A MovementComponent updates the position of the associated PrimitiveComponent\n * during its tick. This type handles the movement for Characters, and is able\n * to handle arbitrary gravity direction and collision capsule orientation.\n */" },
		{ "IncludePath", "NinjaCharacterMovementComponent.h" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A MovementComponent updates the position of the associated PrimitiveComponent\nduring its tick. This type handles the movement for Characters, and is able\nto handle arbitrary gravity direction and collision capsule orientation." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true and the Character is aligned to something while walking, velocity direction is also rotated.\n\x09 * @note Activating this prevents speed loss on component rotation change.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and the Character is aligned to something while walking, velocity direction is also rotated.\n@note Activating this prevents speed loss on component rotation change." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bRotateVelocityOnGround = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround = { "bRotateVelocityOnGround", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true and the Character is aligned to something, always rotate the Character around its center. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and the Character is aligned to something, always rotate the Character around its center." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlwaysRotateAroundCenter = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter = { "bAlwaysRotateAroundCenter", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_MetaData[] = {
		{ "BlueprintSetter", "SetAlignComponentToGravity" },
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, rotate the Character and align it to the gravity direction. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, rotate the Character and align it to the gravity direction." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlignComponentToGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity = { "bAlignComponentToGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_MetaData[] = {
		{ "BlueprintSetter", "SetAlignComponentToFloor" },
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true and a floor is found, rotate the Character and align it to floor normal vector.\n\x09 * @note Activation of \"Use Flat Base for Floor Checks\" should be avoided.\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and a floor is found, rotate the Character and align it to floor normal vector.\n@note Activation of \"Use Flat Base for Floor Checks\" should be avoided." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlignComponentToFloor = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor = { "bAlignComponentToFloor", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_MetaData[] = {
		{ "BlueprintSetter", "SetAlignGravityToBase" },
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true and a floor is found, rotate gravity direction and align it to floor base.\n\x09 * @note For \"Fixed\" gravity mode, gravity direction is set to reverse floor normal vector\n\x09 * @note For \"Point\" gravity mode, gravity direction points to base's location\n\x09 * @note For \"Box\" gravity mode, gravity direction points to base's bounding box\n\x09 * @note For \"Collision\" gravity mode, gravity direction points to base's collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true and a floor is found, rotate gravity direction and align it to floor base.\n@note For \"Fixed\" gravity mode, gravity direction is set to reverse floor normal vector\n@note For \"Point\" gravity mode, gravity direction points to base's location\n@note For \"Box\" gravity mode, gravity direction points to base's bounding box\n@note For \"Collision\" gravity mode, gravity direction points to base's collision geometry" },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bAlignGravityToBase = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase = { "bAlignGravityToBase", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If true, gravity data isn't replicated from server to clients. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, gravity data isn't replicated from server to clients." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bDisableGravityReplication = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication = { "bDisableGravityReplication", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Optional Actor that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Optional Actor that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor = { "GravityActor", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Stores additional information that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Stores additional information that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB = { "GravityVectorB", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityVectorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Stores information that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Stores information that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA = { "GravityVectorA", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityVectorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** Mode that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "Mode that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode = { "GravityDirectionMode", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/** If false when landing on a surface, gravity direction is also checked to know if the surface is walkable. */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If false when landing on a surface, gravity direction is also checked to know if the surface is walkable." },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bLandOnAnySurface = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface = { "bLandOnAnySurface", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_MetaData[] = {
		{ "Category", "NinjaCharacterMovement" },
		{ "Comment", "/**\n\x09 * If true, revert to engine's hardcoded gravity direction when entering the DefaultPhysicsVolume.\n\x09 * @note The DefaultPhysicsVolume is found in areas of the level with no PhysicsVolume\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaCharacterMovementComponent.h" },
		{ "ToolTip", "If true, revert to engine's hardcoded gravity direction when entering the DefaultPhysicsVolume.\n@note The DefaultPhysicsVolume is found in areas of the level with no PhysicsVolume" },
	};
#endif
	void Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_SetBit(void* Obj)
	{
		((UNinjaCharacterMovementComponent*)Obj)->bRevertToDefaultGravity = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity = { "bRevertToDefaultGravity", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaCharacterMovementComponent), &Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRotateVelocityOnGround,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlwaysRotateAroundCenter,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToGravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignComponentToFloor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bAlignGravityToBase,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bDisableGravityReplication,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityVectorA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_GravityDirectionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bLandOnAnySurface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::NewProp_bRevertToDefaultGravity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaCharacterMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::ClassParams = {
		&UNinjaCharacterMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaCharacterMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNinjaCharacterMovementComponent, 2827847859);
	template<> NINJACHARACTER_API UClass* StaticClass<UNinjaCharacterMovementComponent>()
	{
		return UNinjaCharacterMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNinjaCharacterMovementComponent(Z_Construct_UClass_UNinjaCharacterMovementComponent, &UNinjaCharacterMovementComponent::StaticClass, TEXT("/Script/NinjaCharacter"), TEXT("UNinjaCharacterMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaCharacterMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
