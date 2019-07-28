// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/PlayerCamera_MarineSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerCamera_MarineSquad() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerCamera_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerCamera_MarineSquad();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void APlayerCamera_MarineSquad::StaticRegisterNativesAPlayerCamera_MarineSquad()
	{
	}
	UClass* Z_Construct_UClass_APlayerCamera_MarineSquad_NoRegister()
	{
		return APlayerCamera_MarineSquad::StaticClass();
	}
	struct Z_Construct_UClass_APlayerCamera_MarineSquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerCamera_MarineSquad.h" },
		{ "ModuleRelativePath", "PlayerCamera_MarineSquad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerCamera_MarineSquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::ClassParams = {
		&APlayerCamera_MarineSquad::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerCamera_MarineSquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerCamera_MarineSquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerCamera_MarineSquad, 1488177695);
	template<> MARINE_SQUAD_API UClass* StaticClass<APlayerCamera_MarineSquad>()
	{
		return APlayerCamera_MarineSquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerCamera_MarineSquad(Z_Construct_UClass_APlayerCamera_MarineSquad, &APlayerCamera_MarineSquad::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("APlayerCamera_MarineSquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerCamera_MarineSquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
