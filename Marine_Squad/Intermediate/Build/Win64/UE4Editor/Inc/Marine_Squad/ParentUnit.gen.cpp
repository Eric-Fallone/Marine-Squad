// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/ParentUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentUnit() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void AParentUnit::StaticRegisterNativesAParentUnit()
	{
	}
	UClass* Z_Construct_UClass_AParentUnit_NoRegister()
	{
		return AParentUnit::StaticClass();
	}
	struct Z_Construct_UClass_AParentUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParentUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ParentUnit.h" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParentUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParentUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParentUnit_Statics::ClassParams = {
		&AParentUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParentUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParentUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParentUnit, 135628151);
	template<> MARINE_SQUAD_API UClass* StaticClass<AParentUnit>()
	{
		return AParentUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParentUnit(Z_Construct_UClass_AParentUnit, &AParentUnit::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AParentUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParentUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
