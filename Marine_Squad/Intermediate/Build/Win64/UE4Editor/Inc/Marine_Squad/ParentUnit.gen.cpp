// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/ParentUnit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeParentUnit() {}
// Cross Module References
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_Attack();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_KillSelf();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_TakeDamage();
// End Cross Module References
	void AParentUnit::StaticRegisterNativesAParentUnit()
	{
		UClass* Class = AParentUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Attack", &AParentUnit::execAttack },
			{ "KillSelf", &AParentUnit::execKillSelf },
			{ "TakeDamage", &AParentUnit::execTakeDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParentUnit_Attack_Statics
	{
		struct ParentUnit_eventAttack_Parms
		{
			AParentUnit* target;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_target;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AParentUnit_Attack_Statics::NewProp_target = { "target", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventAttack_Parms, target), Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_Attack_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_Attack_Statics::NewProp_target,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_Attack_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttackFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_Attack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "Attack", sizeof(ParentUnit_eventAttack_Parms), Z_Construct_UFunction_AParentUnit_Attack_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_Attack_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_Attack_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_Attack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_Attack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_Attack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_KillSelf_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_KillSelf_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasicFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_KillSelf_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "KillSelf", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_KillSelf_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_KillSelf_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_KillSelf()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_KillSelf_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_TakeDamage_Statics
	{
		struct ParentUnit_eventTakeDamage_Parms
		{
			float DamageTaken;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DamageTaken;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::NewProp_DamageTaken = { "DamageTaken", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventTakeDamage_Parms, DamageTaken), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::NewProp_DamageTaken,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::Function_MetaDataParams[] = {
		{ "Category", "AttackFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "TakeDamage", sizeof(ParentUnit_eventTakeDamage_Parms), Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_TakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_TakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AParentUnit_NoRegister()
	{
		return AParentUnit::StaticClass();
	}
	struct Z_Construct_UClass_AParentUnit_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthPercent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthPercent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthMax_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthMax;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagCurrent_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagCurrent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagTotal_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagTotal;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MagSize_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MagSize;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttackRange_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttackRange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TeamNumber;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParentUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParentUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParentUnit_Attack, "Attack" }, // 3925236933
		{ &Z_Construct_UFunction_AParentUnit_KillSelf, "KillSelf" }, // 71911389
		{ &Z_Construct_UFunction_AParentUnit_TakeDamage, "TakeDamage" }, // 879445681
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ParentUnit.h" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "UnitTarget" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, CurrentTarget), Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, RotationSpeed), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_RotationSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_RotationSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, MoveSpeed), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_MoveSpeed_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_MoveSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthPercent_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "used for the HP bar element" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthPercent = { "HealthPercent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, HealthPercent), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthPercent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthPercent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthCurrent_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthCurrent = { "HealthCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, HealthCurrent), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthCurrent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthMax_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthMax = { "HealthMax", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, HealthMax), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthMax_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthMax_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_MagCurrent_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_MagCurrent = { "MagCurrent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, MagCurrent), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_MagCurrent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_MagCurrent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_MagTotal_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_MagTotal = { "MagTotal", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, MagTotal), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_MagTotal_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_MagTotal_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_MagSize_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_MagSize = { "MagSize", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, MagSize), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_MagSize_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_MagSize_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackDamage_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackDamage = { "AttackDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, AttackDamage), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackDamage_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackRange_MetaData[] = {
		{ "Category", "UnitStats" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "Unit Stats" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackRange = { "AttackRange", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, AttackRange), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackRange_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackRange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Category", "PlayerTeam" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "0 non player controlled\n1 or more is player number" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, TeamNumber), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParentUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_RotationSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_MoveSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthPercent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_HealthMax,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_MagCurrent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_MagTotal,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_MagSize,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_AttackRange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AParentUnit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AParentUnit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AParentUnit_Statics::ClassParams = {
		&AParentUnit::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AParentUnit_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AParentUnit()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AParentUnit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AParentUnit, 2886326583);
	template<> MARINE_SQUAD_API UClass* StaticClass<AParentUnit>()
	{
		return AParentUnit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AParentUnit(Z_Construct_UClass_AParentUnit, &AParentUnit::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("AParentUnit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AParentUnit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
