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
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_AttackMove();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_CastAbility();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_CastAbilityHelper();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_KillSelf();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_Move();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_OnHealthChange();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_StartSelect();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_StopMoving();
	MARINE_SQUAD_API UFunction* Z_Construct_UFunction_AParentUnit_StopSelect();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UWidgetComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UBaseGameplayAbility_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UMarineAttributeSet_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_UMarine_AbilitySystemComponent_NoRegister();
	GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAbilitySystemInterface_NoRegister();
// End Cross Module References
	static FName NAME_AParentUnit_CastAbility = FName(TEXT("CastAbility"));
	void AParentUnit::CastAbility(int32 abilityslot)
	{
		ParentUnit_eventCastAbility_Parms Parms;
		Parms.abilityslot=abilityslot;
		ProcessEvent(FindFunctionChecked(NAME_AParentUnit_CastAbility),&Parms);
	}
	static FName NAME_AParentUnit_CastAbilityHelper = FName(TEXT("CastAbilityHelper"));
	void AParentUnit::CastAbilityHelper(int32 ability)
	{
		ParentUnit_eventCastAbilityHelper_Parms Parms;
		Parms.ability=ability;
		ProcessEvent(FindFunctionChecked(NAME_AParentUnit_CastAbilityHelper),&Parms);
	}
	void AParentUnit::StaticRegisterNativesAParentUnit()
	{
		UClass* Class = AParentUnit::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AttackMove", &AParentUnit::execAttackMove },
			{ "KillSelf", &AParentUnit::execKillSelf },
			{ "Move", &AParentUnit::execMove },
			{ "OnHealthChange", &AParentUnit::execOnHealthChange },
			{ "StartSelect", &AParentUnit::execStartSelect },
			{ "StopMoving", &AParentUnit::execStopMoving },
			{ "StopSelect", &AParentUnit::execStopSelect },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AParentUnit_AttackMove_Statics
	{
		struct ParentUnit_eventAttackMove_Parms
		{
			FVector MoveLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParentUnit_AttackMove_Statics::NewProp_MoveLocation = { "MoveLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventAttackMove_Parms, MoveLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_AttackMove_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_AttackMove_Statics::NewProp_MoveLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_AttackMove_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_AttackMove_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "AttackMove", sizeof(ParentUnit_eventAttackMove_Parms), Z_Construct_UFunction_AParentUnit_AttackMove_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_AttackMove_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_AttackMove_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_AttackMove_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_AttackMove()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_AttackMove_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_CastAbility_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_abilityslot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AParentUnit_CastAbility_Statics::NewProp_abilityslot = { "abilityslot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventCastAbility_Parms, abilityslot), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_CastAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_CastAbility_Statics::NewProp_abilityslot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_CastAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasicFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "GetValueFuntions\n 0 - q\n 1 - w\n 2 - e\n 4 - r" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_CastAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "CastAbility", sizeof(ParentUnit_eventCastAbility_Parms), Z_Construct_UFunction_AParentUnit_CastAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_CastAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_CastAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_CastAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_CastAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_CastAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ability;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::NewProp_ability = { "ability", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventCastAbilityHelper_Parms, ability), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::NewProp_ability,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasicFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "CastAbilityHelper", sizeof(ParentUnit_eventCastAbilityHelper_Parms), Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_CastAbilityHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_CastAbilityHelper_Statics::FuncParams);
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
		{ "ToolTip", "set from blueprint" },
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
	struct Z_Construct_UFunction_AParentUnit_Move_Statics
	{
		struct ParentUnit_eventMove_Parms
		{
			FVector MoveLocation;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_MoveLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AParentUnit_Move_Statics::NewProp_MoveLocation = { "MoveLocation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventMove_Parms, MoveLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_Move_Statics::NewProp_MoveLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_Move_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "command methods" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "Move", sizeof(ParentUnit_eventMove_Parms), Z_Construct_UFunction_AParentUnit_Move_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_Move_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics
	{
		struct ParentUnit_eventOnHealthChange_Parms
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
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventOnHealthChange_Parms, MaxHealth), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ParentUnit_eventOnHealthChange_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::NewProp_MaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"BasicUnitGetMethod\")\nfloat GetAttackDamage();" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "OnHealthChange", sizeof(ParentUnit_eventOnHealthChange_Parms), Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_OnHealthChange()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_OnHealthChange_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_StartSelect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_StartSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasicFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "UFUNCTION(BlueprintCallable, Category = \"AttackFunction\")\nvoid ChangeHealth(float DamageTaken);" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_StartSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "StartSelect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_StartSelect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_StartSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_StartSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_StartSelect_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_StopMoving_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_StopMoving_Statics::Function_MetaDataParams[] = {
		{ "Category", "MoveFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_StopMoving_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "StopMoving", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_StopMoving_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_StopMoving_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_StopMoving()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_StopMoving_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AParentUnit_StopSelect_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AParentUnit_StopSelect_Statics::Function_MetaDataParams[] = {
		{ "Category", "BasicFunction" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AParentUnit_StopSelect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AParentUnit, nullptr, "StopSelect", 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AParentUnit_StopSelect_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_AParentUnit_StopSelect_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AParentUnit_StopSelect()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AParentUnit_StopSelect_Statics::FuncParams);
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GraveMarkerModel_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GraveMarkerModel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isDead_MetaData[];
#endif
		static void NewProp_isDead_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isDead;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionCircle_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectionCircle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentTarget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentTarget;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TeamNumber_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_TeamNumber;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAbilitiesInitialized_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_bAbilitiesInitialized;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_KeyBoundAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_KeyBoundAbilities;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_KeyBoundAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameplayAbilities_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_GameplayAbilities;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_GameplayAbilities_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttributeSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttributeSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySystemComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySystemComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AParentUnit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AParentUnit_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AParentUnit_AttackMove, "AttackMove" }, // 3564913698
		{ &Z_Construct_UFunction_AParentUnit_CastAbility, "CastAbility" }, // 881688636
		{ &Z_Construct_UFunction_AParentUnit_CastAbilityHelper, "CastAbilityHelper" }, // 3024926561
		{ &Z_Construct_UFunction_AParentUnit_KillSelf, "KillSelf" }, // 500280134
		{ &Z_Construct_UFunction_AParentUnit_Move, "Move" }, // 2883667559
		{ &Z_Construct_UFunction_AParentUnit_OnHealthChange, "OnHealthChange" }, // 1740266412
		{ &Z_Construct_UFunction_AParentUnit_StartSelect, "StartSelect" }, // 542494766
		{ &Z_Construct_UFunction_AParentUnit_StopMoving, "StopMoving" }, // 1891109490
		{ &Z_Construct_UFunction_AParentUnit_StopSelect, "StopSelect" }, // 2094125952
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "ParentUnit.h" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_GraveMarkerModel_MetaData[] = {
		{ "Category", "UnitDeath" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_GraveMarkerModel = { "GraveMarkerModel", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, GraveMarkerModel), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_GraveMarkerModel_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_GraveMarkerModel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead_MetaData[] = {
		{ "Category", "UnitDeath" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "unit dealth" },
	};
#endif
	void Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead_SetBit(void* Obj)
	{
		((AParentUnit*)Obj)->isDead = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead = { "isDead", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AParentUnit), &Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead_SetBit, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_SelectionCircle_MetaData[] = {
		{ "Category", "UnitTarget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_SelectionCircle = { "SelectionCircle", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, SelectionCircle), Z_Construct_UClass_UWidgetComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_SelectionCircle_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_SelectionCircle_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget_MetaData[] = {
		{ "Category", "UnitTarget" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget = { "CurrentTarget", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, CurrentTarget), Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber_MetaData[] = {
		{ "Category", "PlayerTeam" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "0 non player controlled\n1 or more is player number" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber = { "TeamNumber", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, TeamNumber), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_bAbilitiesInitialized_MetaData[] = {
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "UBaseGameplayAbility QAbility;\nUBaseGameplayAbility WAbility;\nUBaseGameplayAbility EAbility;\nUBaseGameplayAbility RAbility;" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_bAbilitiesInitialized = { "bAbilitiesInitialized", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, bAbilitiesInitialized), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_bAbilitiesInitialized_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_bAbilitiesInitialized_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "Abilties set to a specifc key q,w,e,r" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities = { "KeyBoundAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, KeyBoundAbilities), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities_Inner = { "KeyBoundAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "ParentUnit.h" },
		{ "ToolTip", "Abilities to grant to this character on creation. These will be activated by tag or event and are not bound to specific inputs" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0024080000000015, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, GameplayAbilities), METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities_MetaData)) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities_Inner = { "GameplayAbilities", nullptr, (EPropertyFlags)0x0004000000000000, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UBaseGameplayAbility_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_AttributeSet_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_AttributeSet = { "AttributeSet", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, AttributeSet), Z_Construct_UClass_UMarineAttributeSet_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_AttributeSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_AttributeSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AParentUnit_Statics::NewProp_AbilitySystemComponent_MetaData[] = {
		{ "Category", "Abilities" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "ParentUnit.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AParentUnit_Statics::NewProp_AbilitySystemComponent = { "AbilitySystemComponent", nullptr, (EPropertyFlags)0x00200800000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AParentUnit, AbilitySystemComponent), Z_Construct_UClass_UMarine_AbilitySystemComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AParentUnit_Statics::NewProp_AbilitySystemComponent_MetaData, ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::NewProp_AbilitySystemComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AParentUnit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_GraveMarkerModel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_isDead,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_SelectionCircle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_CurrentTarget,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_TeamNumber,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_bAbilitiesInitialized,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_KeyBoundAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_GameplayAbilities_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_AttributeSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AParentUnit_Statics::NewProp_AbilitySystemComponent,
	};
		const UE4CodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_AParentUnit_Statics::InterfaceParams[] = {
			{ Z_Construct_UClass_UAbilitySystemInterface_NoRegister, (int32)VTABLE_OFFSET(AParentUnit, IAbilitySystemInterface), false },
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
		InterfaceParams,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		ARRAY_COUNT(Z_Construct_UClass_AParentUnit_Statics::PropPointers),
		ARRAY_COUNT(InterfaceParams),
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
	IMPLEMENT_CLASS(AParentUnit, 128278237);
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
