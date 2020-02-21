// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/FloatingSprite.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFloatingSprite() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UFloatingSprite_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UFloatingSprite();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
// End Cross Module References
	void UFloatingSprite::StaticRegisterNativesUFloatingSprite()
	{
	}
	UClass* Z_Construct_UClass_UFloatingSprite_NoRegister()
	{
		return UFloatingSprite::StaticClass();
	}
	struct Z_Construct_UClass_UFloatingSprite_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Sprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Sprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UFloatingSprite_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingSprite_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "FloatingSprite.h" },
		{ "ModuleRelativePath", "FloatingSprite.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UFloatingSprite_Statics::NewProp_Sprite_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "FloatingSprite.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UFloatingSprite_Statics::NewProp_Sprite = { "Sprite", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UFloatingSprite, Sprite), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UFloatingSprite_Statics::NewProp_Sprite_MetaData, ARRAY_COUNT(Z_Construct_UClass_UFloatingSprite_Statics::NewProp_Sprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UFloatingSprite_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UFloatingSprite_Statics::NewProp_Sprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UFloatingSprite_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UFloatingSprite>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UFloatingSprite_Statics::ClassParams = {
		&UFloatingSprite::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UFloatingSprite_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UFloatingSprite_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UFloatingSprite_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UFloatingSprite_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UFloatingSprite()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UFloatingSprite_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UFloatingSprite, 1455229428);
	template<> MARINE_SQUAD_API UClass* StaticClass<UFloatingSprite>()
	{
		return UFloatingSprite::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UFloatingSprite(Z_Construct_UClass_UFloatingSprite, &UFloatingSprite::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("UFloatingSprite"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UFloatingSprite);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
