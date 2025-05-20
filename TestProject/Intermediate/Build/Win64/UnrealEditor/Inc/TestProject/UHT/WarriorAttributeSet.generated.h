// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WarriorAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_WarriorAttributeSet_generated_h
#error "WarriorAttributeSet.generated.h already included, missing '#pragma once' in WarriorAttributeSet.h"
#endif
#define TESTPROJECT_WarriorAttributeSet_generated_h

#define FID_TestProject_Source_TestProject_WarriorAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUWarriorAttributeSet(); \
	friend struct Z_Construct_UClass_UWarriorAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UWarriorAttributeSet, UTestAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UWarriorAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		Rage=NETFIELD_REP_START, \
		MaxRage, \
		NETFIELD_REP_END=MaxRage	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_TestProject_Source_TestProject_WarriorAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UWarriorAttributeSet(UWarriorAttributeSet&&); \
	UWarriorAttributeSet(const UWarriorAttributeSet&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UWarriorAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UWarriorAttributeSet); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UWarriorAttributeSet) \
	NO_API virtual ~UWarriorAttributeSet();


#define FID_TestProject_Source_TestProject_WarriorAttributeSet_h_12_PROLOG
#define FID_TestProject_Source_TestProject_WarriorAttributeSet_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_WarriorAttributeSet_h_15_INCLASS_NO_PURE_DECLS \
	FID_TestProject_Source_TestProject_WarriorAttributeSet_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UWarriorAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_WarriorAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
