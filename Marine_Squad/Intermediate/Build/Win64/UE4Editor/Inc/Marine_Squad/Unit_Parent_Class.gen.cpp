// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Units/Unit_Parent_Class.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnit_Parent_Class() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AUnit_Parent_Class_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AUnit_Parent_Class();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void AUnit_Parent_Class::StaticRegisterNativesAUnit_Parent_Class()
	{
	}
	UClass* Z_Construct_UClass_AUnit_Parent_Class_NoRegister()
	{
		return AUnit_Parent_Class::StaticClass();
	}
	struct Z_Construct_UClass_AUnit_Parent_Class_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnit_Parent_Class_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnit_Parent_Class_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Units/Unit_Parent_Class.h" },
		{ "ModuleRelativePath", "Units/Unit_Parent_Class.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnit_Parent_Class_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnit_Parent_Class>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AUnit_Parent_Class_Statics::ClassParams = {
		&AUnit_Parent_Class::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnit_Parent_Class_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AUnit_Parent_Class_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnit_Parent_Class()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AUnit_Parent_Class_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AUnit_Parent_Class, 3832767638);
	template<> MARINE_SQUAD_API UClass* StaticClass<AUnit_Parent_Class>()
	{
		return AUnit_Parent_Class::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AUnit_Parent_Class(Z_Construct_UClass_AUnit_Parent_Class, &AUnit_Parent_Class::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AUnit_Parent_Class"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnit_Parent_Class);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
