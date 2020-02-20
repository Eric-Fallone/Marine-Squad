// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/UnitSelectorCircle.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnitSelectorCircle() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UUnitSelectorCircle_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UUnitSelectorCircle();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UUnitSelectorCircle_DoAction();
	UMG_API UClass* Z_Construct_UClass_UButton_NoRegister();
// End Cross Module References
	void UUnitSelectorCircle::StaticRegisterNativesUUnitSelectorCircle()
	{
		UClass* Class = UUnitSelectorCircle::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DoAction", &UUnitSelectorCircle::execDoAction },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnitSelectorCircle_DoAction_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnitSelectorCircle_DoAction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "UnitSelectorCircle.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnitSelectorCircle_DoAction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnitSelectorCircle, nullptr, "DoAction", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnitSelectorCircle_DoAction_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UUnitSelectorCircle_DoAction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnitSelectorCircle_DoAction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnitSelectorCircle_DoAction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnitSelectorCircle_NoRegister()
	{
		return UUnitSelectorCircle::StaticClass();
	}
	struct Z_Construct_UClass_UUnitSelectorCircle_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MyCoolButton_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyCoolButton;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnitSelectorCircle_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnitSelectorCircle_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnitSelectorCircle_DoAction, "DoAction" }, // 2906626973
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitSelectorCircle_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnitSelectorCircle.h" },
		{ "ModuleRelativePath", "UnitSelectorCircle.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnitSelectorCircle_Statics::NewProp_MyCoolButton_MetaData[] = {
		{ "BindWidget", "" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "UnitSelectorCircle.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UUnitSelectorCircle_Statics::NewProp_MyCoolButton = { "MyCoolButton", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UUnitSelectorCircle, MyCoolButton), Z_Construct_UClass_UButton_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UUnitSelectorCircle_Statics::NewProp_MyCoolButton_MetaData, ARRAY_COUNT(Z_Construct_UClass_UUnitSelectorCircle_Statics::NewProp_MyCoolButton_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UUnitSelectorCircle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UUnitSelectorCircle_Statics::NewProp_MyCoolButton,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnitSelectorCircle_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnitSelectorCircle>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnitSelectorCircle_Statics::ClassParams = {
		&UUnitSelectorCircle::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UUnitSelectorCircle_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UUnitSelectorCircle_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UUnitSelectorCircle_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UUnitSelectorCircle_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnitSelectorCircle()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnitSelectorCircle_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnitSelectorCircle, 796959733);
	template<> MARINE_SQUAD_API UClass* StaticClass<UUnitSelectorCircle>()
	{
		return UUnitSelectorCircle::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnitSelectorCircle(Z_Construct_UClass_UUnitSelectorCircle, &UUnitSelectorCircle::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("UUnitSelectorCircle"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnitSelectorCircle);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
