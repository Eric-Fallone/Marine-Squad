// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Player/MyHUD_MarineSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyHUD_MarineSquad() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMyHUD_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMyHUD_MarineSquad();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void AMyHUD_MarineSquad::StaticRegisterNativesAMyHUD_MarineSquad()
	{
	}
	UClass* Z_Construct_UClass_AMyHUD_MarineSquad_NoRegister()
	{
		return AMyHUD_MarineSquad::StaticClass();
	}
	struct Z_Construct_UClass_AMyHUD_MarineSquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyHUD_MarineSquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyHUD_MarineSquad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "Player/MyHUD_MarineSquad.h" },
		{ "ModuleRelativePath", "Player/MyHUD_MarineSquad.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyHUD_MarineSquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyHUD_MarineSquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMyHUD_MarineSquad_Statics::ClassParams = {
		&AMyHUD_MarineSquad::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyHUD_MarineSquad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMyHUD_MarineSquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyHUD_MarineSquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMyHUD_MarineSquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMyHUD_MarineSquad, 2161660233);
	template<> MARINE_SQUAD_API UClass* StaticClass<AMyHUD_MarineSquad>()
	{
		return AMyHUD_MarineSquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMyHUD_MarineSquad(Z_Construct_UClass_AMyHUD_MarineSquad, &AMyHUD_MarineSquad::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AMyHUD_MarineSquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyHUD_MarineSquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
