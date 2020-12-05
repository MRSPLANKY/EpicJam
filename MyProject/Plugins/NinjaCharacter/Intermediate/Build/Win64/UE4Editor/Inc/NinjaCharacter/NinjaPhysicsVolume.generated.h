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
#ifdef NINJACHARACTER_NinjaPhysicsVolume_generated_h
#error "NinjaPhysicsVolume.generated.h already included, missing '#pragma once' in NinjaPhysicsVolume.h"
#endif
#define NINJACHARACTER_NinjaPhysicsVolume_generated_h

#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_SPARSE_DATA
#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetGravityScale); \
	DECLARE_FUNCTION(execGetGravityScale); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execGetGravity);


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetGravityScale); \
	DECLARE_FUNCTION(execGetGravityScale); \
	DECLARE_FUNCTION(execSetCollisionGravityDirection); \
	DECLARE_FUNCTION(execSetBoxGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetBoxGravityDirection); \
	DECLARE_FUNCTION(execSetSplinePlaneGravityDirection); \
	DECLARE_FUNCTION(execK2_SetPlaneGravityDirection); \
	DECLARE_FUNCTION(execSetSplineGravityDirection); \
	DECLARE_FUNCTION(execSetSegmentGravityDirection); \
	DECLARE_FUNCTION(execSetLineGravityDirection); \
	DECLARE_FUNCTION(execSetPointGravityDirectionFromActor); \
	DECLARE_FUNCTION(execSetPointGravityDirection); \
	DECLARE_FUNCTION(execSetSplineTangentGravityDirection); \
	DECLARE_FUNCTION(execK2_SetFixedGravityDirection); \
	DECLARE_FUNCTION(execGetGravityMagnitude); \
	DECLARE_FUNCTION(execGetGravityDirection); \
	DECLARE_FUNCTION(execGetGravity);


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaPhysicsVolume(); \
	friend struct Z_Construct_UClass_ANinjaPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ANinjaPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaPhysicsVolume)


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS \
private: \
	static void StaticRegisterNativesANinjaPhysicsVolume(); \
	friend struct Z_Construct_UClass_ANinjaPhysicsVolume_Statics; \
public: \
	DECLARE_CLASS(ANinjaPhysicsVolume, APhysicsVolume, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaPhysicsVolume)


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANinjaPhysicsVolume(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaPhysicsVolume) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaPhysicsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaPhysicsVolume); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaPhysicsVolume(ANinjaPhysicsVolume&&); \
	NO_API ANinjaPhysicsVolume(const ANinjaPhysicsVolume&); \
public:


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaPhysicsVolume(ANinjaPhysicsVolume&&); \
	NO_API ANinjaPhysicsVolume(const ANinjaPhysicsVolume&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaPhysicsVolume); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaPhysicsVolume); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaPhysicsVolume)


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TrackedActors() { return STRUCT_OFFSET(ANinjaPhysicsVolume, TrackedActors); } \
	FORCEINLINE static uint32 __PPO__TrackedNinjas() { return STRUCT_OFFSET(ANinjaPhysicsVolume, TrackedNinjas); } \
	FORCEINLINE static uint32 __PPO__GravityDirectionMode() { return STRUCT_OFFSET(ANinjaPhysicsVolume, GravityDirectionMode); } \
	FORCEINLINE static uint32 __PPO__GravityVectorA() { return STRUCT_OFFSET(ANinjaPhysicsVolume, GravityVectorA); } \
	FORCEINLINE static uint32 __PPO__GravityVectorB() { return STRUCT_OFFSET(ANinjaPhysicsVolume, GravityVectorB); } \
	FORCEINLINE static uint32 __PPO__GravityActor() { return STRUCT_OFFSET(ANinjaPhysicsVolume, GravityActor); } \
	FORCEINLINE static uint32 __PPO__GravityScale() { return STRUCT_OFFSET(ANinjaPhysicsVolume, GravityScale); }


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_16_PROLOG
#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_SPARSE_DATA \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_SPARSE_DATA \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACHARACTER_API UClass* StaticClass<class ANinjaPhysicsVolume>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaPhysicsVolume_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
