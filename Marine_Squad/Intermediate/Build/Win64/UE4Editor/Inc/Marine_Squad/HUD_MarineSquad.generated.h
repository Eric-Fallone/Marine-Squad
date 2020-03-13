// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef MARINE_SQUAD_HUD_MarineSquad_generated_h
#error "HUD_MarineSquad.generated.h already included, missing '#pragma once' in HUD_MarineSquad.h"
#endif
#define MARINE_SQUAD_HUD_MarineSquad_generated_h

#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetActorAtMousePos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorAtMousePos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseWorldPos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMouseWorldPos(); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetActorAtMousePos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetActorAtMousePos(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetMouseWorldPos) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(FVector*)Z_Param__Result=P_THIS->GetMouseWorldPos(); \
		P_NATIVE_END; \
	}


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHUD_MarineSquad(); \
	friend struct Z_Construct_UClass_AHUD_MarineSquad_Statics; \
public: \
	DECLARE_CLASS(AHUD_MarineSquad, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AHUD_MarineSquad)


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_INCLASS \
private: \
	static void StaticRegisterNativesAHUD_MarineSquad(); \
	friend struct Z_Construct_UClass_AHUD_MarineSquad_Statics; \
public: \
	DECLARE_CLASS(AHUD_MarineSquad, AHUD, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Marine_Squad"), NO_API) \
	DECLARE_SERIALIZER(AHUD_MarineSquad)


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_MarineSquad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_MarineSquad) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_MarineSquad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_MarineSquad); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_MarineSquad(AHUD_MarineSquad&&); \
	NO_API AHUD_MarineSquad(const AHUD_MarineSquad&); \
public:


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHUD_MarineSquad(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHUD_MarineSquad(AHUD_MarineSquad&&); \
	NO_API AHUD_MarineSquad(const AHUD_MarineSquad&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHUD_MarineSquad); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHUD_MarineSquad); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHUD_MarineSquad)


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_PRIVATE_PROPERTY_OFFSET
#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_15_PROLOG
#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_RPC_WRAPPERS \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_INCLASS \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_PRIVATE_PROPERTY_OFFSET \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_INCLASS_NO_PURE_DECLS \
	Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MARINE_SQUAD_API UClass* StaticClass<class AHUD_MarineSquad>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Marine_Squad_Source_Marine_Squad_HUD_MarineSquad_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
