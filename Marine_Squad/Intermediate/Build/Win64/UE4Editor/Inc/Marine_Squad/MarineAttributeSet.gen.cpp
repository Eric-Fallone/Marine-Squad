// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Abilities/MarineAttributeSet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarineAttributeSet() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UMarineAttributeSet_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UMarineAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void UMarineAttributeSet::StaticRegisterNativesUMarineAttributeSet()
	{
	}
	UClass* Z_Construct_UClass_UMarineAttributeSet_NoRegister()
	{
		return UMarineAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UMarineAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarineAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/MarineAttributeSet.h" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarineAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarineAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMarineAttributeSet_Statics::ClassParams = {
		&UMarineAttributeSet::StaticClass,
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
		0x003000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMarineAttributeSet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMarineAttributeSet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMarineAttributeSet, 1336534022);
	template<> MARINE_SQUAD_API UClass* StaticClass<UMarineAttributeSet>()
	{
		return UMarineAttributeSet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMarineAttributeSet(Z_Construct_UClass_UMarineAttributeSet, &UMarineAttributeSet::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("UMarineAttributeSet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMarineAttributeSet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
