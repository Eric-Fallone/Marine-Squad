// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Abilities/BaseAbilityChooseLocation.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseAbilityChooseLocation() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_ABaseAbilityChooseLocation_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_ABaseAbilityChooseLocation();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_AGameplayAbilityTargetActor();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
// End Cross Module References
	void ABaseAbilityChooseLocation::StaticRegisterNativesABaseAbilityChooseLocation()
	{
	}
	UClass* Z_Construct_UClass_ABaseAbilityChooseLocation_NoRegister()
	{
		return ABaseAbilityChooseLocation::StaticClass();
	}
	struct Z_Construct_UClass_ABaseAbilityChooseLocation_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TargetLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CastingUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CastingUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Range_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Range;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Radius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Radius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameplayAbilityTargetActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/BaseAbilityChooseLocation.h" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseLocation.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_TargetLocation_MetaData[] = {
		{ "Category", "GroundSelect" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_TargetLocation = { "TargetLocation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseLocation, TargetLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_TargetLocation_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_TargetLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_CastingUnit_MetaData[] = {
		{ "Category", "GroundSelect" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_CastingUnit = { "CastingUnit", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseLocation, CastingUnit), Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_CastingUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_CastingUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Range_MetaData[] = {
		{ "Category", "GroundSelect" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Range = { "Range", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseLocation, Range), METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Range_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Range_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Radius_MetaData[] = {
		{ "Category", "GroundSelect" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Abilities/BaseAbilityChooseLocation.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Radius = { "Radius", nullptr, (EPropertyFlags)0x0011000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseAbilityChooseLocation, Radius), METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Radius_MetaData, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Radius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_TargetLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_CastingUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Range,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::NewProp_Radius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseAbilityChooseLocation>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::ClassParams = {
		&ABaseAbilityChooseLocation::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::PropPointers),
		0,
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseAbilityChooseLocation()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABaseAbilityChooseLocation_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABaseAbilityChooseLocation, 4085458087);
	template<> MARINE_SQUAD_API UClass* StaticClass<ABaseAbilityChooseLocation>()
	{
		return ABaseAbilityChooseLocation::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABaseAbilityChooseLocation(Z_Construct_UClass_ABaseAbilityChooseLocation, &ABaseAbilityChooseLocation::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("ABaseAbilityChooseLocation"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseAbilityChooseLocation);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
