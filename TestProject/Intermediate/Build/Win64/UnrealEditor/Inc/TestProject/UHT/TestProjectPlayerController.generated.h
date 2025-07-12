// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestProjectPlayerController.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestProjectPlayerController_generated_h
#error "TestProjectPlayerController.generated.h already included, missing '#pragma once' in TestProjectPlayerController.h"
#endif
#define TESTPROJECT_TestProjectPlayerController_generated_h

#define FID_TestProject_Source_TestProject_TestProjectPlayerController_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATestProjectPlayerController(); \
	friend struct Z_Construct_UClass_ATestProjectPlayerController_Statics; \
public: \
	DECLARE_CLASS(ATestProjectPlayerController, APlayerController, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(ATestProjectPlayerController)


#define FID_TestProject_Source_TestProject_TestProjectPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ATestProjectPlayerController(ATestProjectPlayerController&&); \
	ATestProjectPlayerController(const ATestProjectPlayerController&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATestProjectPlayerController); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATestProjectPlayerController); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATestProjectPlayerController) \
	NO_API virtual ~ATestProjectPlayerController();


#define FID_TestProject_Source_TestProject_TestProjectPlayerController_h_18_PROLOG
#define FID_TestProject_Source_TestProject_TestProjectPlayerController_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestProjectPlayerController_h_21_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_TestProjectPlayerController_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class ATestProjectPlayerController>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestProjectPlayerController_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
