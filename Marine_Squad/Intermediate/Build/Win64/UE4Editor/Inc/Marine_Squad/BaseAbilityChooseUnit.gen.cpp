// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Abilities/BaseAbilityChooseUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbilityChooseUnit() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_ABaseAbilityChooseUnit_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_ABaseAbilityChooseUnit();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
// End Cross Module References
	void ABaseAbilityChooseUnit::StaticRegisterNativesABaseAbilityChooseUnit()
	{
	}
	UClass* Z_Construct_UClass_ABaseAbilityChooseUnit_NoRegister()
	{
		return ABaseAbilityChooseUnit::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAbilityChooseUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetedUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TargetedUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CastingUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/BaseAbilityChooseUnit.h" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_TargetedUnit_MetaData[] = {
		{ "Category", "UnitSelect" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_TargetedUnit = { "TargetedUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseUnit, TargetedUnit), Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_TargetedUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_TargetedUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_CastingUnit_MetaData[] = {
		{ "Category", "UnitSelect" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_CastingUnit = { "CastingUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseUnit, CastingUnit), Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_CastingUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_CastingUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "UnitSelect" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseUnit, Range), METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_Range_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_TargetedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_CastingUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::NewProp_Range,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAbilityChooseUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::ClassParams = {
		&ABaseAbilityChooseUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAbilityChooseUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAbilityChooseUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAbilityChooseUnit, 3357930517);
	template<> MARINE_SQUAD_API UClass* StaticClass<ABaseAbilityChooseUnit>()
	{
		return ABaseAbilityChooseUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAbilityChooseUnit(Z_Construct_UClass_ABaseAbilityChooseUnit, &ABaseAbilityChooseUnit::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("ABaseAbilityChooseUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAbilityChooseUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
