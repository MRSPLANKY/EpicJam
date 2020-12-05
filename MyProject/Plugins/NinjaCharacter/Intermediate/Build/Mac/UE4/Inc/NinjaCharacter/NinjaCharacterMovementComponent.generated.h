// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef NINJACHARACTER_NinjaCharacterMovementComponent_generated_h
#error "NinjaCharacterMovementComponent.generated.h already included, missing '#pragma once' in NinjaCharacterMovementComponent.h"
#endif
#define NINJACHARACTER_NinjaCharacterMovementComponent_generated_h

#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_SPARSE_DATA
#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS \
	virtual void ClientDisableAlignComponentToGravity_Implementation(); \
	virtual void ClientEnableAlignComponentToGravity_Implementation(); \
	virtual void ClientDisableAlignComponentToFloor_Implementation(); \
	virtual void ClientEnableAlignComponentToFloor_Implementation(); \
	virtual void ClientDisableAlignGravityToBase_Implementation(); \
	virtual void ClientEnableAlignGravityToBase_Implementation(); \
	virtual void ClientSetGravityScale_Implementation(float NewGravityScale); \
	virtual void ClientSetCollisionGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetBoxGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetBoxGravityDirection_Implementation(FVector const& NewGravityBoxOrigin, FVector const& NewGravityBoxExtent); \
	virtual void ClientSetSplinePlaneGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetPlaneGravityDirection_Implementation(FVector const& NewGravityPlaneBase, FVector const& NewGravityPlaneNormal); \
	virtual void ClientSetSplineGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetSegmentGravityDirection_Implementation(FVector const& NewGravitySegmentStart, FVector const& NewGravitySegmentEnd); \
	virtual void ClientSetLineGravityDirection_Implementation(FVector const& NewGravityLineStart, FVector const& NewGravityLineEnd); \
	virtual void ClientSetPointGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetPointGravityDirection_Implementation(FVector const& NewGravityPoint); \
	virtual void ClientSetSplineTangentGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetFixedGravityDirection_Implementation(FVector const& NewFixedGravityDirection); \
 \
	DECLARE_FUNCTION(execClientDisableAlignComponentToGravity); \
	DECLARE_FUNCTION(execClientEnableAlignComponentToGravity); \
	DECLARE_FUNCTION(execSetAlignComponentToGravity); \
	DECLARE_FUNCTION(execClientDisableAlignComponentToFloor); \
	DECLARE_FUNCTION(execClientEnableAlignComponentToFloor); \
	DECLARE_FUNCTION(execSetAlignComponentToFloor); \
	DECLARE_FUNCTION(execClientDisableAlignGravityToBase); \
	DECLARE_FUNCTION(execClientEnableAlignGravityToBase); \
	DECLARE_FUNCTION(execSetAlignGravityToBase); \
	DECLARE_FUNCTION(execClientSetGravityScale); \
	DECLARE_FUNCTION(execClientSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execClientSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execClientSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execClientSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execClientSetPlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execClientSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execClientSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execClientSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execClientSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execClientSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execClientSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execClientSetFixedGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection);


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ClientDisableAlignComponentToGravity_Implementation(); \
	virtual void ClientEnableAlignComponentToGravity_Implementation(); \
	virtual void ClientDisableAlignComponentToFloor_Implementation(); \
	virtual void ClientEnableAlignComponentToFloor_Implementation(); \
	virtual void ClientDisableAlignGravityToBase_Implementation(); \
	virtual void ClientEnableAlignGravityToBase_Implementation(); \
	virtual void ClientSetGravityScale_Implementation(float NewGravityScale); \
	virtual void ClientSetCollisionGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetBoxGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetBoxGravityDirection_Implementation(FVector const& NewGravityBoxOrigin, FVector const& NewGravityBoxExtent); \
	virtual void ClientSetSplinePlaneGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetPlaneGravityDirection_Implementation(FVector const& NewGravityPlaneBase, FVector const& NewGravityPlaneNormal); \
	virtual void ClientSetSplineGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetSegmentGravityDirection_Implementation(FVector const& NewGravitySegmentStart, FVector const& NewGravitySegmentEnd); \
	virtual void ClientSetLineGravityDirection_Implementation(FVector const& NewGravityLineStart, FVector const& NewGravityLineEnd); \
	virtual void ClientSetPointGravityDirectionFromActor_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetPointGravityDirection_Implementation(FVector const& NewGravityPoint); \
	virtual void ClientSetSplineTangentGravityDirection_Implementation(AActor* NewGravityActor); \
	virtual void ClientSetFixedGravityDirection_Implementation(FVector const& NewFixedGravityDirection); \
 \
	DECLARE_FUNCTION(execClientDisableAlignComponentToGravity); \
	DECLARE_FUNCTION(execClientEnableAlignComponentToGravity); \
	DECLARE_FUNCTION(execSetAlignComponentToGravity); \
	DECLARE_FUNCTION(execClientDisableAlignComponentToFloor); \
	DECLARE_FUNCTION(execClientEnableAlignComponentToFloor); \
	DECLARE_FUNCTION(execSetAlignComponentToFloor); \
	DECLARE_FUNCTION(execClientDisableAlignGravityToBase); \
	DECLARE_FUNCTION(execClientEnableAlignGravityToBase); \
	DECLARE_FUNCTION(execSetAlignGravityToBase); \
	DECLARE_FUNCTION(execClientSetGravityScale); \
	DECLARE_FUNCTION(execClientSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execClientSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execClientSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execClientSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execClientSetPlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execClientSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execClientSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execClientSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execClientSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execClientSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execClientSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execClientSetFixedGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection);


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_EVENT_PARMS \
	struct NinjaCharacterMovementComponent_eventClientSetBoxGravityDirection_Parms \
	{ \
		FVector NewGravityBoxOrigin; \
		FVector NewGravityBoxExtent; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetBoxGravityDirectionFromActor_Parms \
	{ \
		AActor* NewGravityActor; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetCollisionGravityDirection_Parms \
	{ \
		AActor* NewGravityActor; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetFixedGravityDirection_Parms \
	{ \
		FVector NewFixedGravityDirection; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetGravityScale_Parms \
	{ \
		float NewGravityScale; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetLineGravityDirection_Parms \
	{ \
		FVector NewGravityLineStart; \
		FVector NewGravityLineEnd; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetPlaneGravityDirection_Parms \
	{ \
		FVector NewGravityPlaneBase; \
		FVector NewGravityPlaneNormal; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetPointGravityDirection_Parms \
	{ \
		FVector NewGravityPoint; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetPointGravityDirectionFromActor_Parms \
	{ \
		AActor* NewGravityActor; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetSegmentGravityDirection_Parms \
	{ \
		FVector NewGravitySegmentStart; \
		FVector NewGravitySegmentEnd; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetSplineGravityDirection_Parms \
	{ \
		AActor* NewGravityActor; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetSplinePlaneGravityDirection_Parms \
	{ \
		AActor* NewGravityActor; \
	}; \
	struct NinjaCharacterMovementComponent_eventClientSetSplineTangentGravityDirection_Parms \
	{ \
		AActor* NewGravityActor; \
	};


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_CALLBACK_WRAPPERS
#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUNinjaCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCharacterMovementComponent)


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS \
private: \
	static void StaticRegisterNativesUNinjaCharacterMovementComponent(); \
	friend struct Z_Construct_UClass_UNinjaCharacterMovementComponent_Statics; \
public: \
	DECLARE_CLASS(UNinjaCharacterMovementComponent, UCharacterMovementComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(UNinjaCharacterMovementComponent)


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UNinjaCharacterMovementComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCharacterMovementComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCharacterMovementComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNinjaCharacterMovementComponent(UNinjaCharacterMovementComponent&&); \
	NO_API UNinjaCharacterMovementComponent(const UNinjaCharacterMovementComponent&); \
public:


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UNinjaCharacterMovementComponent(UNinjaCharacterMovementComponent&&); \
	NO_API UNinjaCharacterMovementComponent(const UNinjaCharacterMovementComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UNinjaCharacterMovementComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UNinjaCharacterMovementComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UNinjaCharacterMovementComponent)


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GravityDirectionMode() { return STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityDirectionMode); } \
	FORCEINLINE static uint32 __PPO__GravityVectorA() { return STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityVectorA); } \
	FORCEINLINE static uint32 __PPO__GravityVectorB() { return STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityVectorB); } \
	FORCEINLINE static uint32 __PPO__GravityActor() { return STRUCT_OFFSET(UNinjaCharacterMovementComponent, GravityActor); }


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_21_PROLOG \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_EVENT_PARMS


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_CALLBACK_WRAPPERS \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_SPARSE_DATA \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_CALLBACK_WRAPPERS \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACHARACTER_API UClass* StaticClass<class UNinjaCharacterMovementComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacterMovementComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
