// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECTFILE_ProjectFileCharacter_generated_h
#error "ProjectFileCharacter.generated.h already included, missing '#pragma once' in ProjectFileCharacter.h"
#endif
#define PROJECTFILE_ProjectFileCharacter_generated_h

#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_SPARSE_DATA
#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_RPC_WRAPPERS
#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAProjectFileCharacter(); \
	friend struct Z_Construct_UClass_AProjectFileCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectFileCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFile"), NO_API) \
	DECLARE_SERIALIZER(AProjectFileCharacter)


#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAProjectFileCharacter(); \
	friend struct Z_Construct_UClass_AProjectFileCharacter_Statics; \
public: \
	DECLARE_CLASS(AProjectFileCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ProjectFile"), NO_API) \
	DECLARE_SERIALIZER(AProjectFileCharacter)


#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AProjectFileCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AProjectFileCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectFileCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectFileCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectFileCharacter(AProjectFileCharacter&&); \
	NO_API AProjectFileCharacter(const AProjectFileCharacter&); \
public:


#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AProjectFileCharacter(AProjectFileCharacter&&); \
	NO_API AProjectFileCharacter(const AProjectFileCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AProjectFileCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AProjectFileCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AProjectFileCharacter)


#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CameraBoom() { return STRUCT_OFFSET(AProjectFileCharacter, CameraBoom); } \
	FORCEINLINE static uint32 __PPO__FollowCamera() { return STRUCT_OFFSET(AProjectFileCharacter, FollowCamera); }


#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_9_PROLOG
#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_SPARSE_DATA \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_RPC_WRAPPERS \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_INCLASS \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_SPARSE_DATA \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_INCLASS_NO_PURE_DECLS \
	ProjectFile_Source_ProjectFile_ProjectFileCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECTFILE_API UClass* StaticClass<class AProjectFileCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID ProjectFile_Source_ProjectFile_ProjectFileCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
