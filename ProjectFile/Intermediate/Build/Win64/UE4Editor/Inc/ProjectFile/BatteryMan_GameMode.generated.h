// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTFILE_BatteryMan_GameMode_generated_h
#error "BatteryMan_GameMode.generated.h already included, missing '#pragma once' in BatteryMan_GameMode.h"
#endif
#define PROJECTFILE_BatteryMan_GameMode_generated_h

#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_SPARSE_DATA
#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_RPC_WRAPPERS
#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABatteryMan_GameMode(); \
	friend struct Z_Construct_UClass_ABatteryMan_GameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFile"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan_GameMode)


#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_INCLASS \
private: \
	static void StaticRegisterNativesABatteryMan_GameMode(); \
	friend struct Z_Construct_UClass_ABatteryMan_GameMode_Statics; \
public: \
	DECLARE_CLASS(ABatteryMan_GameMode, AGameMode, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFile"), NO_API) \
	DECLARE_SERIALIZER(ABatteryMan_GameMode)


#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABatteryMan_GameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABatteryMan_GameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan_GameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan_GameMode(ABatteryMan_GameMode&&); \
	NO_API ABatteryMan_GameMode(const ABatteryMan_GameMode&); \
public:


#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABatteryMan_GameMode(ABatteryMan_GameMode&&); \
	NO_API ABatteryMan_GameMode(const ABatteryMan_GameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABatteryMan_GameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABatteryMan_GameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABatteryMan_GameMode)


#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerRecharge() { return STRUCT_OFFSET(ABatteryMan_GameMode, PlayerRecharge); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Min() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_X_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_X_Max() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_X_Max); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Min() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_Y_Min); } \
	FORCEINLINE static uint32 __PPO__Spawn_Y_Max() { return STRUCT_OFFSET(ABatteryMan_GameMode, Spawn_Y_Max); }


#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_12_PROLOG
#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_SPARSE_DATA \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_RPC_WRAPPERS \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_INCLASS \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_PRIVATE_PROPERTY_OFFSET \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_SPARSE_DATA \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_INCLASS_NO_PURE_DECLS \
	ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFILE_API UClass* StaticClass<class ABatteryMan_GameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectFile_Source_ProjectFile_BatteryMan_GameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
