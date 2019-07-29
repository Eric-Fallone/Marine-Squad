// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MARINE_SQUAD_PlayerController_MarineSquad_generated_h
#error "PlayerController_MarineSquad.generated.h already included, missing '#pragma once' in PlayerController_MarineSquad.h"
#endif
#define MARINE_SQUAD_PlayerController_MarineSquad_generated_h

#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_RPC_WRAPPERS
#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_RPC_WRAPPERS_NO_PURE_DECLS
#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerController_MarineSquad(); \
	friend struct Z_Construct_UClass_APlayerController_MarineSquad_Statics; \
public: \
	DECLARE_CLASS(APlayerController_MarineSquad, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_MarineSquad)


#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerController_MarineSquad(); \
	friend struct Z_Construct_UClass_APlayerController_MarineSquad_Statics; \
public: \
	DECLARE_CLASS(APlayerController_MarineSquad, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(APlayerController_MarineSquad)


#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerController_MarineSquad(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerController_MarineSquad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_MarineSquad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_MarineSquad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController_MarineSquad(APlayerController_MarineSquad&&); \
	NO_API APlayerController_MarineSquad(const APlayerController_MarineSquad&); \
public:


#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerController_MarineSquad(APlayerController_MarineSquad&&); \
	NO_API APlayerController_MarineSquad(const APlayerController_MarineSquad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerController_MarineSquad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerController_MarineSquad); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerController_MarineSquad)


#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__SelectedUnits() { return STRUCT_OFFSET(APlayerController_MarineSquad, SelectedUnits); } \
	FORCEINLINE static uint32 __PPO__Margin() { return STRUCT_OFFSET(APlayerController_MarineSquad, Margin); } \
	FORCEINLINE static uint32 __PPO__CAMPtr() { return STRUCT_OFFSET(APlayerController_MarineSquad, CAMPtr); }


#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_15_PROLOG
#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_INCLASS \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class APlayerController_MarineSquad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_PlayerController_MarineSquad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
