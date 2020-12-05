// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaPlayerCameraManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaPlayerCameraManager() {}
// Cross Module References
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPlayerCameraManager_NoRegister();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPlayerCameraManager();
	ENGINE_API UClass* Z_Construct_UClass_APlayerCameraManager();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
// End Cross Module References
	void ANinjaPlayerCameraManager::StaticRegisterNativesANinjaPlayerCameraManager()
	{
	}
	UClass* Z_Construct_UClass_ANinjaPlayerCameraManager_NoRegister()
	{
		return ANinjaPlayerCameraManager::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaPlayerCameraManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerCameraManager,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * Object that defines the master camera that the player actually uses to look\n * through. This type is able to handle arbitrary collision capsule orientation.\n */" },
		{ "IncludePath", "NinjaPlayerCameraManager.h" },
		{ "ModuleRelativePath", "Public/NinjaPlayerCameraManager.h" },
		{ "ToolTip", "Object that defines the master camera that the player actually uses to look\nthrough. This type is able to handle arbitrary collision capsule orientation." },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaPlayerCameraManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::ClassParams = {
		&ANinjaPlayerCameraManager::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaPlayerCameraManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANinjaPlayerCameraManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANinjaPlayerCameraManager, 2481699703);
	template<> NINJACHARACTER_API UClass* StaticClass<ANinjaPlayerCameraManager>()
	{
		return ANinjaPlayerCameraManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANinjaPlayerCameraManager(Z_Construct_UClass_ANinjaPlayerCameraManager, &ANinjaPlayerCameraManager::StaticClass, TEXT("/Script/NinjaCharacter"), TEXT("ANinjaPlayerCameraManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaPlayerCameraManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
