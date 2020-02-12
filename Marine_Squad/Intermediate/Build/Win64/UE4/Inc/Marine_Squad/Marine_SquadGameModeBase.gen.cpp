// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/Marine_SquadGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMarine_SquadGameModeBase() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMarine_SquadGameModeBase_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMarine_SquadGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void AMarine_SquadGameModeBase::StaticRegisterNativesAMarine_SquadGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AMarine_SquadGameModeBase_NoRegister()
	{
		return AMarine_SquadGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AMarine_SquadGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Marine_SquadGameModeBase.h" },
		{ "ModuleRelativePath", "Marine_SquadGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMarine_SquadGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::ClassParams = {
		&AMarine_SquadGameModeBase::StaticClass,
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
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMarine_SquadGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMarine_SquadGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMarine_SquadGameModeBase, 4102016034);
	template<> MARINE_SQUAD_API UClass* StaticClass<AMarine_SquadGameModeBase>()
	{
		return AMarine_SquadGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMarine_SquadGameModeBase(Z_Construct_UClass_AMarine_SquadGameModeBase, &AMarine_SquadGameModeBase::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AMarine_SquadGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMarine_SquadGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
