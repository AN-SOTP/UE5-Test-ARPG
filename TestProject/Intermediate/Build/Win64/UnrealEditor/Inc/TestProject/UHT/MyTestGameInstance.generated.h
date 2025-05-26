// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "MyTestGameInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ECharacterClass : uint8;
#ifdef TESTPROJECT_MyTestGameInstance_generated_h
#error "MyTestGameInstance.generated.h already included, missing '#pragma once' in MyTestGameInstance.h"
#endif
#define TESTPROJECT_MyTestGameInstance_generated_h

#define FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSelectedClass); \
	DECLARE_FUNCTION(execSetSelectedClass);


#define FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMyTestGameInstance(); \
	friend struct Z_Construct_UClass_UMyTestGameInstance_Statics; \
public: \
	DECLARE_CLASS(UMyTestGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UMyTestGameInstance)


#define FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMyTestGameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMyTestGameInstance(UMyTestGameInstance&&); \
	UMyTestGameInstance(const UMyTestGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMyTestGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMyTestGameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMyTestGameInstance) \
	NO_API virtual ~UMyTestGameInstance();


#define FID_TestProject_Source_TestProject_MyTestGameInstance_h_13_PROLOG
#define FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_MyTestGameInstance_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UMyTestGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_MyTestGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
