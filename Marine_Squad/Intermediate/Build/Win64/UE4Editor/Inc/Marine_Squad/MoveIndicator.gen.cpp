// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/MoveIndicator.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMoveIndicator() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMoveIndicator_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMoveIndicator();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
// End Cross Module References
	void AMoveIndicator::StaticRegisterNativesAMoveIndicator()
	{
	}
	UClass* Z_Construct_UClass_AMoveIndicator_NoRegister()
	{
		return AMoveIndicator::StaticClass();
	}
	struct Z_Construct_UClass_AMoveIndicator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMoveIndicator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMoveIndicator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "MoveIndicator.h" },
		{ "ModuleRelativePath", "MoveIndicator.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMoveIndicator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMoveIndicator>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMoveIndicator_Statics::ClassParams = {
		&AMoveIndicator::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMoveIndicator_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AMoveIndicator_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMoveIndicator()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMoveIndicator_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMoveIndicator, 2016895605);
	template<> MARINE_SQUAD_API UClass* StaticClass<AMoveIndicator>()
	{
		return AMoveIndicator::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMoveIndicator(Z_Construct_UClass_AMoveIndicator, &AMoveIndicator::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AMoveIndicator"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMoveIndicator);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
