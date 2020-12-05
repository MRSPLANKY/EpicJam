// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NinjaCharacter/Public/NinjaPhysicsVolume.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNinjaPhysicsVolume() {}
// Cross Module References
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolume_NoRegister();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaPhysicsVolume();
	ENGINE_API UClass* Z_Construct_UClass_APhysicsVolume();
	UPackage* Z_Construct_UPackage__Script_NinjaCharacter();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	NINJACHARACTER_API UEnum* Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode();
	NINJACHARACTER_API UClass* Z_Construct_UClass_ANinjaCharacter_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UTextRenderComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetGravityScale)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NewGravityScale);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetGravityScale(Z_Param_NewGravityScale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execGetGravityScale)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGravityScale();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetCollisionGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCollisionGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetBoxGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxGravityDirectionFromActor(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetBoxGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityBoxOrigin);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityBoxExtent);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetBoxGravityDirection(Z_Param_Out_NewGravityBoxOrigin,Z_Param_Out_NewGravityBoxExtent);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetSplinePlaneGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplinePlaneGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execK2_SetPlaneGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPlaneBase);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPlaneNormal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetPlaneGravityDirection(Z_Param_Out_NewGravityPlaneBase,Z_Param_Out_NewGravityPlaneNormal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetSplineGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetSegmentGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravitySegmentStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravitySegmentEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSegmentGravityDirection(Z_Param_Out_NewGravitySegmentStart,Z_Param_Out_NewGravitySegmentEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetLineGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityLineStart);
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityLineEnd);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLineGravityDirection(Z_Param_Out_NewGravityLineStart,Z_Param_Out_NewGravityLineEnd);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetPointGravityDirectionFromActor)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointGravityDirectionFromActor(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetPointGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPointGravityDirection(Z_Param_Out_NewGravityPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execSetSplineTangentGravityDirection)
	{
		P_GET_OBJECT(AActor,Z_Param_NewGravityActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSplineTangentGravityDirection(Z_Param_NewGravityActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execK2_SetFixedGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_NewGravityDirection);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->K2_SetFixedGravityDirection(Z_Param_Out_NewGravityDirection);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execGetGravityMagnitude)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetGravityMagnitude(Z_Param_Out_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execGetGravityDirection)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravityDirection(Z_Param_Out_Point);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ANinjaPhysicsVolume::execGetGravity)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_Point);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetGravity(Z_Param_Out_Point);
		P_NATIVE_END;
	}
	void ANinjaPhysicsVolume::StaticRegisterNativesANinjaPhysicsVolume()
	{
		UClass* Class = ANinjaPhysicsVolume::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetGravity", &ANinjaPhysicsVolume::execGetGravity },
			{ "GetGravityDirection", &ANinjaPhysicsVolume::execGetGravityDirection },
			{ "GetGravityMagnitude", &ANinjaPhysicsVolume::execGetGravityMagnitude },
			{ "GetGravityScale", &ANinjaPhysicsVolume::execGetGravityScale },
			{ "K2_SetFixedGravityDirection", &ANinjaPhysicsVolume::execK2_SetFixedGravityDirection },
			{ "K2_SetPlaneGravityDirection", &ANinjaPhysicsVolume::execK2_SetPlaneGravityDirection },
			{ "SetBoxGravityDirection", &ANinjaPhysicsVolume::execSetBoxGravityDirection },
			{ "SetBoxGravityDirectionFromActor", &ANinjaPhysicsVolume::execSetBoxGravityDirectionFromActor },
			{ "SetCollisionGravityDirection", &ANinjaPhysicsVolume::execSetCollisionGravityDirection },
			{ "SetGravityScale", &ANinjaPhysicsVolume::execSetGravityScale },
			{ "SetLineGravityDirection", &ANinjaPhysicsVolume::execSetLineGravityDirection },
			{ "SetPointGravityDirection", &ANinjaPhysicsVolume::execSetPointGravityDirection },
			{ "SetPointGravityDirectionFromActor", &ANinjaPhysicsVolume::execSetPointGravityDirectionFromActor },
			{ "SetSegmentGravityDirection", &ANinjaPhysicsVolume::execSetSegmentGravityDirection },
			{ "SetSplineGravityDirection", &ANinjaPhysicsVolume::execSetSplineGravityDirection },
			{ "SetSplinePlaneGravityDirection", &ANinjaPhysicsVolume::execSetSplinePlaneGravityDirection },
			{ "SetSplineTangentGravityDirection", &ANinjaPhysicsVolume::execSetSplineTangentGravityDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics
	{
		struct NinjaPhysicsVolume_eventGetGravity_Parms
		{
			FVector Point;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravity_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Obtains the gravity vector that influences a given point in space.\n\x09 * @param Point - given point in space affected by gravity\n\x09 * @return current gravity\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Obtains the gravity vector that influences a given point in space.\n@param Point - given point in space affected by gravity\n@return current gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "GetGravity", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventGetGravity_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventGetGravityDirection_Parms
		{
			FVector Point;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravityDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravityDirection_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Obtains the normalized direction of gravity that influences a given point\n\x09 * in space.\n\x09 * @note Could return zero gravity\n\x09 * @param Point - given point in space affected by gravity\n\x09 * @return normalized direction of gravity\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Obtains the normalized direction of gravity that influences a given point\nin space.\n@note Could return zero gravity\n@param Point - given point in space affected by gravity\n@return normalized direction of gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "GetGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventGetGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics
	{
		struct NinjaPhysicsVolume_eventGetGravityMagnitude_Parms
		{
			FVector Point;
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Point;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravityMagnitude_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_Point_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_Point = { "Point", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravityMagnitude_Parms, Point), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_Point_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_Point_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::NewProp_Point,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Obtains the absolute (positive) magnitude of gravity that influences a\n\x09 * given point in space.\n\x09 * @param Point - given point in space affected by gravity\n\x09 * @return magnitude of gravity\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Obtains the absolute (positive) magnitude of gravity that influences a\ngiven point in space.\n@param Point - given point in space affected by gravity\n@return magnitude of gravity" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "GetGravityMagnitude", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventGetGravityMagnitude_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics
	{
		struct NinjaPhysicsVolume_eventGetGravityScale_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventGetGravityScale_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Obtains the scale factor that affects magnitude of current gravity.\n\x09 * @return gravity scale factor\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Obtains the scale factor that affects magnitude of current gravity.\n@return gravity scale factor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "GetGravityScale", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventGetGravityScale_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventK2_SetFixedGravityDirection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection = { "NewGravityDirection", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventK2_SetFixedGravityDirection_Parms, NewGravityDirection), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::NewProp_NewGravityDirection,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new fixed gravity direction.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityDirection - new gravity direction, assumes it isn't normalized\n\x09 */" },
		{ "DisplayName", "Set Fixed Gravity Direction" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ScriptName", "SetFixedGravityDirection" },
		{ "ToolTip", "Sets a new fixed gravity direction.\n@note It can be influenced by GravityScale\n@param NewGravityDirection - new gravity direction, assumes it isn't normalized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "K2_SetFixedGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventK2_SetFixedGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventK2_SetPlaneGravityDirection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal = { "NewGravityPlaneNormal", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventK2_SetPlaneGravityDirection_Parms, NewGravityPlaneNormal), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase = { "NewGravityPlaneBase", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventK2_SetPlaneGravityDirection_Parms, NewGravityPlaneBase), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneNormal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::NewProp_NewGravityPlaneBase,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new infinite plane which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityPlaneBase - a point that belongs to the plane\n\x09 * @param NewGravityPlaneNormal - normal of the plane, assumes it isn't normalized\n\x09 */" },
		{ "DisplayName", "Set Plane Gravity Direction" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ScriptName", "SetPlaneGravityDirection" },
		{ "ToolTip", "Sets a new infinite plane which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityPlaneBase - a point that belongs to the plane\n@param NewGravityPlaneNormal - normal of the plane, assumes it isn't normalized" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "K2_SetPlaneGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventK2_SetPlaneGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetBoxGravityDirection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent = { "NewGravityBoxExtent", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetBoxGravityDirection_Parms, NewGravityBoxExtent), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin = { "NewGravityBoxOrigin", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetBoxGravityDirection_Parms, NewGravityBoxOrigin), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxExtent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::NewProp_NewGravityBoxOrigin,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new axis-aligned box which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityBoxOrigin - origin of the box\n\x09 * @param NewGravityBoxExtent - extents of the box\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new axis-aligned box which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityBoxOrigin - origin of the box\n@param NewGravityBoxExtent - extents of the box" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetBoxGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetBoxGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics
	{
		struct NinjaPhysicsVolume_eventSetBoxGravityDirectionFromActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetBoxGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new axis-aligned box which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides its collision bounding box as gravity target\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new axis-aligned box which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides its collision bounding box as gravity target" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetBoxGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetBoxGravityDirectionFromActor_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetCollisionGravityDirection_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetCollisionGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new collision geometry which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new collision geometry which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that owns the PrimitiveComponent that has collision geometry" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetCollisionGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetCollisionGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics
	{
		struct NinjaPhysicsVolume_eventSetGravityScale_Parms
		{
			float NewGravityScale;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_NewGravityScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::NewProp_NewGravityScale = { "NewGravityScale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetGravityScale_Parms, NewGravityScale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::NewProp_NewGravityScale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::Function_MetaDataParams[] = {
		{ "BlueprintSetter", "" },
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new scale factor that affects magnitude of current gravity.\n\x09 * @param NewGravityScale - new gravity scale factor\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new scale factor that affects magnitude of current gravity.\n@param NewGravityScale - new gravity scale factor" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetGravityScale", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetGravityScale_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetLineGravityDirection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd = { "NewGravityLineEnd", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetLineGravityDirection_Parms, NewGravityLineEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart = { "NewGravityLineStart", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetLineGravityDirection_Parms, NewGravityLineStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::NewProp_NewGravityLineStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new infinite line which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityLineStart - a point that belongs to the infinite line\n\x09 * @param NewGravityLineEnd - another point that belongs to the infinite line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new infinite line which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityLineStart - a point that belongs to the infinite line\n@param NewGravityLineEnd - another point that belongs to the infinite line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetLineGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetLineGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetPointGravityDirection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::NewProp_NewGravityPoint = { "NewGravityPoint", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetPointGravityDirection_Parms, NewGravityPoint), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::NewProp_NewGravityPoint_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::NewProp_NewGravityPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new point which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityPoint - new point which gravity direction points to\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new point which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityPoint - new point which gravity direction points to" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetPointGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetPointGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics
	{
		struct NinjaPhysicsVolume_eventSetPointGravityDirectionFromActor_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetPointGravityDirectionFromActor_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new point which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides its location as gravity point\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new point which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides its location as gravity point" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetPointGravityDirectionFromActor", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetPointGravityDirectionFromActor_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetSegmentGravityDirection_Parms
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd = { "NewGravitySegmentEnd", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetSegmentGravityDirection_Parms, NewGravitySegmentEnd), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart = { "NewGravitySegmentStart", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetSegmentGravityDirection_Parms, NewGravitySegmentStart), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::NewProp_NewGravitySegmentStart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new segment line which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravitySegmentStart - start point of the segment line\n\x09 * @param NewGravitySegmentEnd - end point of the segment line\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new segment line which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravitySegmentStart - start point of the segment line\n@param NewGravitySegmentEnd - end point of the segment line" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetSegmentGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetSegmentGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetSplineGravityDirection_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetSplineGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new spline which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new spline which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetSplineGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetSplineGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetSplinePlaneGravityDirection_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetSplinePlaneGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new infinite plane determined by closest spline point and spline\n\x09 * up vector which gravity direction points to.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new infinite plane determined by closest spline point and spline\nup vector which gravity direction points to.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetSplinePlaneGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetSplinePlaneGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics
	{
		struct NinjaPhysicsVolume_eventSetSplineTangentGravityDirection_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor = { "NewGravityActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(NinjaPhysicsVolume_eventSetSplineTangentGravityDirection_Parms, NewGravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::NewProp_NewGravityActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/**\n\x09 * Sets a new gravity direction determined by closest spline tangent.\n\x09 * @note It can be influenced by GravityScale\n\x09 * @param NewGravityActor - Actor that provides a spline\n\x09 */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Sets a new gravity direction determined by closest spline tangent.\n@note It can be influenced by GravityScale\n@param NewGravityActor - Actor that provides a spline" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ANinjaPhysicsVolume, nullptr, "SetSplineTangentGravityDirection", nullptr, nullptr, sizeof(NinjaPhysicsVolume_eventSetSplineTangentGravityDirection_Parms), Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ANinjaPhysicsVolume_NoRegister()
	{
		return ANinjaPhysicsVolume::StaticClass();
	}
	struct Z_Construct_UClass_ANinjaPhysicsVolume_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GravityScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_GravityScale;
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedNinjas_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedNinjas;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedNinjas_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrackedActors_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_TrackedActors;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrackedActors_Inner;
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TextRenderComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TextRenderComponent;
#endif // WITH_EDITORONLY_DATA
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_EDITORONLY_DATA
#endif // WITH_EDITORONLY_DATA
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANinjaPhysicsVolume_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APhysicsVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_NinjaCharacter,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ANinjaPhysicsVolume_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravity, "GetGravity" }, // 973368445
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityDirection, "GetGravityDirection" }, // 1462709358
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityMagnitude, "GetGravityMagnitude" }, // 3929725102
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_GetGravityScale, "GetGravityScale" }, // 2909692956
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetFixedGravityDirection, "K2_SetFixedGravityDirection" }, // 4098951499
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_K2_SetPlaneGravityDirection, "K2_SetPlaneGravityDirection" }, // 3651239447
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirection, "SetBoxGravityDirection" }, // 1163662644
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetBoxGravityDirectionFromActor, "SetBoxGravityDirectionFromActor" }, // 1532955397
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetCollisionGravityDirection, "SetCollisionGravityDirection" }, // 2821216455
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetGravityScale, "SetGravityScale" }, // 1876193912
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetLineGravityDirection, "SetLineGravityDirection" }, // 2986421047
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirection, "SetPointGravityDirection" }, // 3871372649
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetPointGravityDirectionFromActor, "SetPointGravityDirectionFromActor" }, // 1307737659
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetSegmentGravityDirection, "SetSegmentGravityDirection" }, // 4068444617
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineGravityDirection, "SetSplineGravityDirection" }, // 324823698
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplinePlaneGravityDirection, "SetSplinePlaneGravityDirection" }, // 733853320
		{ &Z_Construct_UFunction_ANinjaPhysicsVolume_SetSplineTangentGravityDirection, "SetSplineTangentGravityDirection" }, // 422669542
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * A PhysicsVolume is a bounding volume that affects Actor physics. This type\n * allows overriding the gravity direction.\n */" },
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "NinjaPhysicsVolume.h" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
		{ "ToolTip", "A PhysicsVolume is a bounding volume that affects Actor physics. This type\nallows overriding the gravity direction." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityScale_MetaData[] = {
		{ "BlueprintSetter", "SetGravityScale" },
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** Gravity vector is multiplied by this amount. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Gravity vector is multiplied by this amount." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityScale = { "GravityScale", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, GravityScale), METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityScale_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityActor_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** Optional Actor that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Optional Actor that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityActor = { "GravityActor", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, GravityActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityActor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorB_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** Stores additional information that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Stores additional information that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorB = { "GravityVectorB", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, GravityVectorB), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorB_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorB_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorA_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** Stores information that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Stores information that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorA = { "GravityVectorA", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, GravityVectorA), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorA_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorA_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** Mode that determines direction of gravity. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "Mode that determines direction of gravity." },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode = { "GravityDirectionMode", nullptr, (EPropertyFlags)0x0020080000020815, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, GravityDirectionMode), Z_Construct_UEnum_NinjaCharacter_ENinjaGravityDirectionMode, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** List of tracked Ninjas that are affected by gravity settings. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "List of tracked Ninjas that are affected by gravity settings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas = { "TrackedNinjas", nullptr, (EPropertyFlags)0x0020080000022815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, TrackedNinjas), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas_Inner = { "TrackedNinjas", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_ANinjaCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** List of tracked Actors that are affected by gravity settings. */" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "List of tracked Actors that are affected by gravity settings." },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors = { "TrackedActors", nullptr, (EPropertyFlags)0x0020080000022815, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, TrackedActors), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors_Inner = { "TrackedActors", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_EDITORONLY_DATA
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TextRenderComponent_MetaData[] = {
		{ "Category", "NinjaPhysicsVolume" },
		{ "Comment", "/** The TextRenderComponent subobject. */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/NinjaPhysicsVolume.h" },
		{ "ToolTip", "The TextRenderComponent subobject." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TextRenderComponent = { "TextRenderComponent", nullptr, (EPropertyFlags)0x00200808000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANinjaPhysicsVolume, TextRenderComponent), Z_Construct_UClass_UTextRenderComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TextRenderComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TextRenderComponent_MetaData)) };
#endif // WITH_EDITORONLY_DATA
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANinjaPhysicsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityScale,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorB,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityVectorA,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_GravityDirectionMode_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedNinjas_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TrackedActors_Inner,
#if WITH_EDITORONLY_DATA
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANinjaPhysicsVolume_Statics::NewProp_TextRenderComponent,
#endif // WITH_EDITORONLY_DATA
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANinjaPhysicsVolume_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANinjaPhysicsVolume>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANinjaPhysicsVolume_Statics::ClassParams = {
		&ANinjaPhysicsVolume::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ANinjaPhysicsVolume_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ANinjaPhysicsVolume_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANinjaPhysicsVolume()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANinjaPhysicsVolume_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANinjaPhysicsVolume, 570306590);
	template<> NINJACHARACTER_API UClass* StaticClass<ANinjaPhysicsVolume>()
	{
		return ANinjaPhysicsVolume::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANinjaPhysicsVolume(Z_Construct_UClass_ANinjaPhysicsVolume, &ANinjaPhysicsVolume::StaticClass, TEXT("/Script/NinjaCharacter"), TEXT("ANinjaPhysicsVolume"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANinjaPhysicsVolume);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
