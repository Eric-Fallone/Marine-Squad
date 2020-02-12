// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/AIController_MarineSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIController_MarineSquad() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AAIController_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AAIController_MarineSquad();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void AAIController_MarineSquad::StaticRegisterNativesAAIController_MarineSquad()
	{
	}
	UClass* Z_Construct_UClass_AAIController_MarineSquad_NoRegister()
	{
		return AAIController_MarineSquad::StaticClass();
	}
	struct Z_Construct_UClass_AAIController_MarineSquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAIController_MarineSquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AAIController,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAIController_MarineSquad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "AIController_MarineSquad.h" },
		{ "ModuleRelativePath", "AIController_MarineSquad.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAIController_MarineSquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAIController_MarineSquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAIController_MarineSquad_Statics::ClassParams = {
		&AAIController_MarineSquad::StaticClass,
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
		0x009002A0u,
		METADATA_PARAMS(Z_Construct_UClass_AAIController_MarineSquad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AAIController_MarineSquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAIController_MarineSquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAIController_MarineSquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIController_MarineSquad, 1821158156);
	template<> MARINE_SQUAD_API UClass* StaticClass<AAIController_MarineSquad>()
	{
		return AAIController_MarineSquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIController_MarineSquad(Z_Construct_UClass_AAIController_MarineSquad, &AAIController_MarineSquad::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AAIController_MarineSquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIController_MarineSquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
