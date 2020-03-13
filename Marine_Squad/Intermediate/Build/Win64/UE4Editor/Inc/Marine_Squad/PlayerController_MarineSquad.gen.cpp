// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Marine_Squad/PlayerController_MarineSquad.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerController_MarineSquad() {}
// Cross Module References
	MARINE_SQUAD_API UEnum* Z_Construct_UEnum_Marine_Squad_ECommandsEnum();
	UPackage* Z_Construct_UPackage__Script_Marine_Squad();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerController_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerController_MarineSquad();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_APlayerCamera_MarineSquad_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AParentUnit_NoRegister();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AHUD_MarineSquad_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	MARINE_SQUAD_API UClass* Z_Construct_UClass_AMoveIndicator_NoRegister();
// End Cross Module References
	static UEnum* ECommandsEnum_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Marine_Squad_ECommandsEnum, Z_Construct_UPackage__Script_Marine_Squad(), TEXT("ECommandsEnum"));
		}
		return Singleton;
	}
	template<> MARINE_SQUAD_API UEnum* StaticEnum<ECommandsEnum>()
	{
		return ECommandsEnum_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_ECommandsEnum(ECommandsEnum_StaticEnum, TEXT("/Script/Marine_Squad"), TEXT("ECommandsEnum"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Marine_Squad_ECommandsEnum_Hash() { return 1500511547U; }
	UEnum* Z_Construct_UEnum_Marine_Squad_ECommandsEnum()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Marine_Squad();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("ECommandsEnum"), 0, Get_Z_Construct_UEnum_Marine_Squad_ECommandsEnum_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "ECommandsEnum::VE_Move", (int64)ECommandsEnum::VE_Move },
				{ "ECommandsEnum::VE_Rotate", (int64)ECommandsEnum::VE_Rotate },
				{ "ECommandsEnum::VE_Attack", (int64)ECommandsEnum::VE_Attack },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
				{ "VE_Attack.DisplayName", "Attack" },
				{ "VE_Move.DisplayName", "Move" },
				{ "VE_Rotate.DisplayName", "Rotate" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Marine_Squad,
				nullptr,
				"ECommandsEnum",
				"ECommandsEnum",
				Enumerators,
				ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	void APlayerController_MarineSquad::StaticRegisterNativesAPlayerController_MarineSquad()
	{
	}
	UClass* Z_Construct_UClass_APlayerController_MarineSquad_NoRegister()
	{
		return APlayerController_MarineSquad::StaticClass();
	}
	struct Z_Construct_UClass_APlayerController_MarineSquad_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CAMPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CAMPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Margin;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FocusedUnit_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_FocusedUnit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AllUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_AllUnits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AllUnits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectedUnits_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SelectedUnits;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SelectedUnits_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HUDPtr_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HUDPtr;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SelectionKeyTimeDown_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SelectionKeyTimeDown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitFiveType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitFiveType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitFourType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitFourType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitThreeType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitThreeType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitTwoType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitTwoType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnitOneType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_UnitOneType;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IndicatorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_IndicatorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandEnum_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CommandEnum;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CommandEnum_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerController_MarineSquad_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APlayerController,
		(UObject* (*)())Z_Construct_UPackage__Script_Marine_Squad,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "PlayerController_MarineSquad.h" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CAMPtr_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CAMPtr = { "CAMPtr", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, CAMPtr), Z_Construct_UClass_APlayerCamera_MarineSquad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CAMPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CAMPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_Margin_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, Margin), METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_Margin_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_Margin_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_FocusedUnit_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
		{ "ToolTip", "this is used to determ which unit\n-1 is no unit selected\n0-4 is number of unit in the array" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_FocusedUnit = { "FocusedUnit", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, FocusedUnit), METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_FocusedUnit_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_FocusedUnit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits = { "AllUnits", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, AllUnits), METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits_Inner = { "AllUnits", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits = { "SelectedUnits", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, SelectedUnits), METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_Inner = { "SelectedUnits", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AParentUnit_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_HUDPtr_MetaData[] = {
		{ "Category", "Hud" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_HUDPtr = { "HUDPtr", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, HUDPtr), Z_Construct_UClass_AHUD_MarineSquad_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_HUDPtr_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_HUDPtr_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectionKeyTimeDown_MetaData[] = {
		{ "Category", "TimeIsAfter" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectionKeyTimeDown = { "SelectionKeyTimeDown", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, SelectionKeyTimeDown), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectionKeyTimeDown_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectionKeyTimeDown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFiveType_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFiveType = { "UnitFiveType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, UnitFiveType), Z_Construct_UClass_AParentUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFiveType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFiveType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFourType_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFourType = { "UnitFourType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, UnitFourType), Z_Construct_UClass_AParentUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFourType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFourType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitThreeType_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitThreeType = { "UnitThreeType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, UnitThreeType), Z_Construct_UClass_AParentUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitThreeType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitThreeType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitTwoType_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitTwoType = { "UnitTwoType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, UnitTwoType), Z_Construct_UClass_AParentUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitTwoType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitTwoType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitOneType_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
		{ "ToolTip", "unit spawns classes" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitOneType = { "UnitOneType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, UnitOneType), Z_Construct_UClass_AParentUnit_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitOneType_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitOneType_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_IndicatorToSpawn_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_IndicatorToSpawn = { "IndicatorToSpawn", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, IndicatorToSpawn), Z_Construct_UClass_AMoveIndicator_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_IndicatorToSpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_IndicatorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum_MetaData[] = {
		{ "Category", "PlayerController_MarineSquad" },
		{ "ModuleRelativePath", "PlayerController_MarineSquad.h" },
		{ "ToolTip", ", BlueprintReadWrite, Category=\"Enum\")" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum = { "CommandEnum", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerController_MarineSquad, CommandEnum), Z_Construct_UEnum_Marine_Squad_ECommandsEnum, METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum_MetaData, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerController_MarineSquad_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CAMPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_Margin,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_FocusedUnit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_AllUnits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectedUnits_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_HUDPtr,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_SelectionKeyTimeDown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFiveType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitFourType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitThreeType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitTwoType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_UnitOneType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_IndicatorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerController_MarineSquad_Statics::NewProp_CommandEnum_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerController_MarineSquad_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerController_MarineSquad>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerController_MarineSquad_Statics::ClassParams = {
		&APlayerController_MarineSquad::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerController_MarineSquad_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::PropPointers),
		0,
		0x009002A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerController_MarineSquad_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_APlayerController_MarineSquad_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerController_MarineSquad()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerController_MarineSquad_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerController_MarineSquad, 1042650957);
	template<> MARINE_SQUAD_API UClass* StaticClass<APlayerController_MarineSquad>()
	{
		return APlayerController_MarineSquad::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerController_MarineSquad(Z_Construct_UClass_APlayerController_MarineSquad, &APlayerController_MarineSquad::StaticClass, TEXT("/Script/Marine_Squad"), TEXT("APlayerController_MarineSquad"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerController_MarineSquad);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
