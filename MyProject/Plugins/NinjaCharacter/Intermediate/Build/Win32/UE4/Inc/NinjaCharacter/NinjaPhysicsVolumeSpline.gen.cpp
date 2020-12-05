// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaPhysicsVolumeSpline.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaPhysicsVolumeSpline() {}
// Cross Module References
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline_NoRegister();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	void ANinjaPhysicsVolumeSpline::StaticRegisterNativesANinjaPhysicsVolumeSpline()
	{
	}
	UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline_NoRegister()
	{
		return ANinjaPhysicsVolumeSpline::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplineComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplineComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ANinjaPhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A PhysicsVolume is a bounding volume that affects Actor physics. This type\n * allows overriding the gravity direction with the help of a spline.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NinjaPhysicsVolumeSpline.h" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolumeSpline.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A PhysicsVolume is a bounding volume that affects Actor physics. This type\nallows overriding the gravity direction with the help of a spline." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** The SplineComponent subobject. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolumeSpline.h" },
		{ "ToolTip", "The SplineComponent subobject." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent = { "SplineComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolumeSpline, SplineComponent), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::NewProp_SplineComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaPhysicsVolumeSpline>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::ClassParams = {
		&ANinjaPhysicsVolumeSpline::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaPhysicsVolumeSpline()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANinjaPhysicsVolumeSpline_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANinjaPhysicsVolumeSpline, 3091101401);
	template<> NINJACHARACTER_API UClass* StaticClass<ANinjaPhysicsVolumeSpline>()
	{
		return ANinjaPhysicsVolumeSpline::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANinjaPhysicsVolumeSpline(Z_Construct_UClass_ANinjaPhysicsVolumeSpline, &ANinjaPhysicsVolumeSpline::StaticClass, TEXT("/Script/NinjaCharacter"), TEXT("ANinjaPhysicsVolumeSpline"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaPhysicsVolumeSpline);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
