// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/PlayerController_MarineSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_MarineSquad() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerController_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerController_MarineSquad();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
// End Cross Module References
	void APlayerController_MarineSquad::StaticRegisterNativesAPlayerController_MarineSquad()
	{
	}
	UClass* Z_Construct_UClass_APlayerController_MarineSquad_NoRegister()
	{
		return APlayerController_MarineSquad::StaticClass();
	}
	struct Z_Construct_UClass_APlayerController_MarineSquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedUnits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedUnits_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerController_MarineSquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController_MarineSquad.h" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits = { "SelectedUnits", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, SelectedUnits), METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_Inner = { "SelectedUnits", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_MarineSquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerController_MarineSquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_MarineSquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::ClassParams = {
		&APlayerController_MarineSquad::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerController_MarineSquad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerController_MarineSquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerController_MarineSquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerController_MarineSquad, 1205719452);
	template<> MARINE_SQUAD_API UClass* StaticClass<APlayerController_MarineSquad>()
	{
		return APlayerController_MarineSquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerController_MarineSquad(Z_Construct_UClass_APlayerController_MarineSquad, &APlayerController_MarineSquad::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("APlayerController_MarineSquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_MarineSquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
