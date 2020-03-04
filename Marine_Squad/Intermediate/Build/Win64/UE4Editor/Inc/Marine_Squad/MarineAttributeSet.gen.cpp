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
	MARINE_SQUAD_API UFunction* Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UMarineAttributeSet_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UMarineAttributeSet();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange();
	GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics
	{
		struct _Script_Marine_Squad_eventOnHealthChangeDelegate_Parms
		{
			float Health;
			float MaxHealth;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHealth;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Marine_Squad_eventOnHealthChangeDelegate_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_Marine_Squad_eventOnHealthChangeDelegate_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_Marine_Squad, nullptr, "OnHealthChangeDelegate__DelegateSignature", sizeof(_Script_Marine_Squad_eventOnHealthChangeDelegate_Parms), Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_Marine_Squad_OnHealthChangeDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	void UMarineAttributeSet::StaticRegisterNativesUMarineAttributeSet()
	{
		UClass* Class = UMarineAttributeSet::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnRep_AttackPower", &UMarineAttributeSet::execOnRep_AttackPower },
			{ "OnRep_AttackRange", &UMarineAttributeSet::execOnRep_AttackRange },
			{ "OnRep_DefensePower", &UMarineAttributeSet::execOnRep_DefensePower },
			{ "OnRep_Health", &UMarineAttributeSet::execOnRep_Health },
			{ "OnRep_Mana", &UMarineAttributeSet::execOnRep_Mana },
			{ "OnRep_MaxHealth", &UMarineAttributeSet::execOnRep_MaxHealth },
			{ "OnRep_MaxMana", &UMarineAttributeSet::execOnRep_MaxMana },
			{ "OnRep_MoveSpeed", &UMarineAttributeSet::execOnRep_MoveSpeed },
			{ "OnRep_SightRange", &UMarineAttributeSet::execOnRep_SightRange },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_AttackPower", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_AttackRange", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_DefensePower", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "These OnRep functions exist to make sure that the ability system internal representations are synchronized properly during replication" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_Health", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_Mana", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_MaxHealth", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_MaxMana", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_MoveSpeed", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMarineAttributeSet, nullptr, "OnRep_SightRange", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080400, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UMarineAttributeSet_NoRegister()
	{
		return UMarineAttributeSet::StaticClass();
	}
	struct Z_Construct_UClass_UMarineAttributeSet_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SightRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SightRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefensePower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DefensePower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackPower_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AttackPower;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxMana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxMana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mana_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Mana;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMarineAttributeSet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAttributeSet,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UMarineAttributeSet_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackPower, "OnRep_AttackPower" }, // 1121510937
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_AttackRange, "OnRep_AttackRange" }, // 735453772
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_DefensePower, "OnRep_DefensePower" }, // 3939817530
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_Health, "OnRep_Health" }, // 198126258
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_Mana, "OnRep_Mana" }, // 3289701671
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxHealth, "OnRep_MaxHealth" }, // 3670943347
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_MaxMana, "OnRep_MaxMana" }, // 2282386424
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_MoveSpeed, "OnRep_MoveSpeed" }, // 3858434382
		{ &Z_Construct_UFunction_UMarineAttributeSet_OnRep_SightRange, "OnRep_SightRange" }, // 1705502049
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities/MarineAttributeSet.h" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "Mana" },
		{ "HideFromLevelInfos", "" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "Damage is a 'temporary' attribute used by the DamageExecution to calculate final damage, which then turns into -Health" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Damage_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "AttackRange" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "AttackRange affects how far characters can attack" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackRange = { "AttackRange", "OnRep_AttackRange", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, AttackRange), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_SightRange_MetaData[] = {
		{ "Category", "SightRange" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "SightRange affects how far characters can see" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_SightRange = { "SightRange", "OnRep_SightRange", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, SightRange), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_SightRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_SightRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "MoveSpeed" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "MoveSpeed affects how fast characters can move" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MoveSpeed = { "MoveSpeed", "OnRep_MoveSpeed", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, MoveSpeed), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_DefensePower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "Base Damage is divided by DefensePower to get actual damage done, so 1.0 means no bonus" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_DefensePower = { "DefensePower", "OnRep_DefensePower", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, DefensePower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_DefensePower_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_DefensePower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackPower_MetaData[] = {
		{ "Category", "Damage" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "AttackPower of the attacker is multiplied by the base Damage to reduce health, so 1.0 means no bonus" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackPower = { "AttackPower", "OnRep_AttackPower", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, AttackPower), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackPower_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackPower_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxMana_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "MaxMana is its own attribute, since GameplayEffects may modify it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxMana = { "MaxMana", "OnRep_MaxMana", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, MaxMana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxMana_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxMana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Mana_MetaData[] = {
		{ "Category", "Mana" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "Current Mana, used to execute special abilities. Capped by MaxMana" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Mana = { "Mana", "OnRep_Mana", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, Mana), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Mana_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Mana_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "MaxHealth is its own attribute, since GameplayEffects may modify it" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", "OnRep_MaxHealth", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxHealth_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "Health" },
		{ "ModuleRelativePath", "Abilities/MarineAttributeSet.h" },
		{ "ToolTip", "Current Health, when 0 we expect owner to die. Capped by MaxHealth" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Health = { "Health", "OnRep_Health", (EPropertyFlags)0x0010000100000034, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMarineAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Health_MetaData, ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMarineAttributeSet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_SightRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_DefensePower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_AttackPower,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxMana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Mana,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMarineAttributeSet_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMarineAttributeSet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMarineAttributeSet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMarineAttributeSet_Statics::ClassParams = {
		&UMarineAttributeSet::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UMarineAttributeSet_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_UMarineAttributeSet_Statics::PropPointers),
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
	IMPLEMENT_CLASS(UMarineAttributeSet, 2873157034);
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
