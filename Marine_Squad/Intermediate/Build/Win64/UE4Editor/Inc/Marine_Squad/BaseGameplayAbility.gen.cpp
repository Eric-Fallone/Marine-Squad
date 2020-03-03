// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Abilities/BaseGameplayAbility.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseGameplayAbility() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UBaseGameplayAbility();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UGameplayAbility();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void UBaseGameplayAbility::StaticRegisterNativesUBaseGameplayAbility()
	{
	}
	UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister()
	{
		return UBaseGameplayAbility::StaticClass();
	}
	struct Z_Construct_UClass_UBaseGameplayAbility_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBaseGameplayAbility_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGameplayAbility,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/BaseGameplayAbility.h" },
		{ "ModuleRelativePath", "Abilities/BaseGameplayAbility.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBaseGameplayAbility_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBaseGameplayAbility>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams = {
		&UBaseGameplayAbility::StaticClass,
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
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UBaseGameplayAbility_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBaseGameplayAbility()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBaseGameplayAbility_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBaseGameplayAbility, 2908898622);
	template<> MARINE_SQUAD_API UClass* StaticClass<UBaseGameplayAbility>()
	{
		return UBaseGameplayAbility::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBaseGameplayAbility(Z_Construct_UClass_UBaseGameplayAbility, &UBaseGameplayAbility::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("UBaseGameplayAbility"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBaseGameplayAbility);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
