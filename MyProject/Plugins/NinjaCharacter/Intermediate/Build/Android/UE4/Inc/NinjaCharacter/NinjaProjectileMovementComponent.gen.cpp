// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaProjectileMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaProjectileMovementComponent() {}
// Cross Module References
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent_NoRegister();
	NINJACHARACTER_API UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UProjectileMovementComponent();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	void UNinjaProjectileMovementComponent::StaticRegisterNativesUNinjaProjectileMovementComponent()
	{
	}
	UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent_NoRegister()
	{
		return UNinjaProjectileMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bFollowGravityDirection_MetaData[];
#endif
		static void NewProp_bFollowGravityDirection_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFollowGravityDirection;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UProjectileMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Movement" },
		{ "Comment", "/**\n * A ProjectileMovementComponent updates the position of another component each\n * frame. This type allows overriding the gravity direction.\n */" },
		{ "IncludePath", "NinjaProjectileMovementComponent.h" },
		{ "ModuleRelativePath", "Public/NinjaProjectileMovementComponent.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ToolTip", "A ProjectileMovementComponent updates the position of another component each\nframe. This type allows overriding the gravity direction." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_MetaData[] = {
		{ "Category", "NinjaProjectileMovement" },
		{ "Comment", "/** If true, rotate projectile trajectory with gravity direction changes. */" },
		{ "ModuleRelativePath", "Public/NinjaProjectileMovementComponent.h" },
		{ "ToolTip", "If true, rotate projectile trajectory with gravity direction changes." },
	};
#endif
	void Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_SetBit(void* Obj)
	{
		((UNinjaProjectileMovementComponent*)Obj)->bFollowGravityDirection = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection = { "bFollowGravityDirection", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UNinjaProjectileMovementComponent), &Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_SetBit, METADATA_PARAMS(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::NewProp_bFollowGravityDirection,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UNinjaProjectileMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::ClassParams = {
		&UNinjaProjectileMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UNinjaProjectileMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UNinjaProjectileMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UNinjaProjectileMovementComponent, 3196691110);
	template<> NINJACHARACTER_API UClass* StaticClass<UNinjaProjectileMovementComponent>()
	{
		return UNinjaProjectileMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UNinjaProjectileMovementComponent(Z_Construct_UClass_UNinjaProjectileMovementComponent, &UNinjaProjectileMovementComponent::StaticClass, TEXT("/Script/NinjaCharacter"), TEXT("UNinjaProjectileMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UNinjaProjectileMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
