// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ENinjaGravityDirectionMode : uint8;
struct FVector;
#ifdef NINJACHARACTER_NinjaCharacter_generated_h
#error "NinjaCharacter.generated.h already included, missing '#pragma once' in NinjaCharacter.h"
#endif
#define NINJACHARACTER_NinjaCharacter_generated_h

#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_13_DELEGATE \
struct _Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms \
{ \
	ENinjaGravityDirectionMode OldGravityDirectionMode; \
	ENinjaGravityDirectionMode CurrentGravityDirectionMode; \
}; \
static inline void FCharMovementGravityChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharMovementGravityChangedSignature, ENinjaGravityDirectionMode OldGravityDirectionMode, ENinjaGravityDirectionMode CurrentGravityDirectionMode) \
{ \
	_Script_NinjaCharacter_eventCharMovementGravityChangedSignature_Parms Parms; \
	Parms.OldGravityDirectionMode=OldGravityDirectionMode; \
	Parms.CurrentGravityDirectionMode=CurrentGravityDirectionMode; \
	CharMovementGravityChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_12_DELEGATE \
struct _Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms \
{ \
	FVector OldAxisZ; \
	FVector CurrentAxisZ; \
}; \
static inline void FCharMovementAxisChangedSignature_DelegateWrapper(const FMulticastScriptDelegate& CharMovementAxisChangedSignature, FVector const& OldAxisZ, FVector const& CurrentAxisZ) \
{ \
	_Script_NinjaCharacter_eventCharMovementAxisChangedSignature_Parms Parms; \
	Parms.OldAxisZ=OldAxisZ; \
	Parms.CurrentAxisZ=CurrentAxisZ; \
	CharMovementAxisChangedSignature.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_SPARSE_DATA
#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execLaunchCharacterRotated);


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execLaunchCharacterRotated);


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_EVENT_PARMS \
	struct NinjaCharacter_eventK2_OnCharMovementAxisChanged_Parms \
	{ \
		FVector OldAxisZ; \
		FVector CurrentAxisZ; \
	}; \
	struct NinjaCharacter_eventK2_OnGravityDirectionChanged_Parms \
	{ \
		ENinjaGravityDirectionMode OldGravityDirectionMode; \
		ENinjaGravityDirectionMode CurrentGravityDirectionMode; \
	};


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_CALLBACK_WRAPPERS
#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANinjaCharacter(); \
	friend struct Z_Construct_UClass_ANinjaCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCharacter)


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_INCLASS \
private: \
	static void StaticRegisterNativesANinjaCharacter(); \
	friend struct Z_Construct_UClass_ANinjaCharacter_Statics; \
public: \
	DECLARE_CLASS(ANinjaCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/NinjaCharacter"), NO_API) \
	DECLARE_SERIALIZER(ANinjaCharacter)


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANinjaCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaCharacter(ANinjaCharacter&&); \
	NO_API ANinjaCharacter(const ANinjaCharacter&); \
public:


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANinjaCharacter(ANinjaCharacter&&); \
	NO_API ANinjaCharacter(const ANinjaCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANinjaCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANinjaCharacter); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANinjaCharacter)


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_PRIVATE_PROPERTY_OFFSET
#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_21_PROLOG \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_EVENT_PARMS


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_SPARSE_DATA \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_RPC_WRAPPERS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_CALLBACK_WRAPPERS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_INCLASS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_PRIVATE_PROPERTY_OFFSET \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_SPARSE_DATA \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_CALLBACK_WRAPPERS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_INCLASS_NO_PURE_DECLS \
	MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h_24_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NINJACHARACTER_API UClass* StaticClass<class ANinjaCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID MyProject_Plugins_NinjaCharacter_Source_NinjaCharacter_Public_NinjaCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
