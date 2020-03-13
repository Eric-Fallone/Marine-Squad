// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/HUD_MarineSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeHUD_MarineSquad() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AHUD_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AHUD_MarineSquad();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
// End Cross Module References
	void AHUD_MarineSquad::StaticRegisterNativesAHUD_MarineSquad()
	{
		UClass* Class = AHUD_MarineSquad::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActorAtMousePos", &AHUD_MarineSquad::execGetActorAtMousePos },
			{ "GetMouseWorldPos", &AHUD_MarineSquad::execGetMouseWorldPos },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "HUD_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD_MarineSquad, nullptr, "GetActorAtMousePos", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics
	{
		struct HUD_MarineSquad_eventGetMouseWorldPos_Parms
		{
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(HUD_MarineSquad_eventGetMouseWorldPos_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::Function_MetaDataParams[] = {
		{ "Category", "HUD" },
		{ "ModuleRelativePath", "HUD_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AHUD_MarineSquad, nullptr, "GetMouseWorldPos", sizeof(HUD_MarineSquad_eventGetMouseWorldPos_Parms), Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AHUD_MarineSquad_NoRegister()
	{
		return AHUD_MarineSquad::StaticClass();
	}
	struct Z_Construct_UClass_AHUD_MarineSquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FoundUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_FoundUnits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_FoundUnits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AHUD_MarineSquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AHUD_MarineSquad_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AHUD_MarineSquad_GetActorAtMousePos, "GetActorAtMousePos" }, // 1732506327
		{ &Z_Construct_UFunction_AHUD_MarineSquad_GetMouseWorldPos, "GetMouseWorldPos" }, // 1124073183
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_MarineSquad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "HUD_MarineSquad.h" },
		{ "ModuleRelativePath", "HUD_MarineSquad.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits_MetaData[] = {
		{ "Category", "HUD_MarineSquad" },
		{ "ModuleRelativePath", "HUD_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits = { "FoundUnits", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AHUD_MarineSquad, FoundUnits), METADATA_PARAMS(Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits_Inner = { "FoundUnits", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AHUD_MarineSquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AHUD_MarineSquad_Statics::NewProp_FoundUnits_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AHUD_MarineSquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AHUD_MarineSquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AHUD_MarineSquad_Statics::ClassParams = {
		&AHUD_MarineSquad::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AHUD_MarineSquad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AHUD_MarineSquad_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AHUD_MarineSquad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AHUD_MarineSquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AHUD_MarineSquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AHUD_MarineSquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AHUD_MarineSquad, 1723314067);
	template<> MARINE_SQUAD_API UClass* StaticClass<AHUD_MarineSquad>()
	{
		return AHUD_MarineSquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AHUD_MarineSquad(Z_Construct_UClass_AHUD_MarineSquad, &AHUD_MarineSquad::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AHUD_MarineSquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AHUD_MarineSquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
