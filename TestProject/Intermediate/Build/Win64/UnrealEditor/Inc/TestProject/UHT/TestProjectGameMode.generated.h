// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestProjectGameMode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectGameMode_generated_h
#error "TestProjectGameMode.generated.h already included, missing '#pragma once' in TestProjectGameMode.h"
#endif
#define TESTPROJECT_TestProjectGameMode_generated_h

#define FID_TestProject_Source_TestProject_TestProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectGameMode(); \
	friend struct Z_Construct_UClass_ATestProjectGameMode_Statics; \
public: \
	DECLARE_CLASS(ATestProjectGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), TESTPROJECT_API) \
	DECLARE_SERIALIZER(ATestProjectGameMode)


#define FID_TestProject_Source_TestProject_TestProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestProjectGameMode(ATestProjectGameMode&&); \
	ATestProjectGameMode(const ATestProjectGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(TESTPROJECT_API, ATestProjectGameMode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectGameMode) \
	TESTPROJECT_API virtual ~ATestProjectGameMode();


#define FID_TestProject_Source_TestProject_TestProjectGameMode_h_9_PROLOG
#define FID_TestProject_Source_TestProject_TestProjectGameMode_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestProjectGameMode_h_12_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestProjectGameMode_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectGameMode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestProjectGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
