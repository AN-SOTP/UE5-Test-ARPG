// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TestAttributeSet.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TESTPROJECT_TestAttributeSet_generated_h
#error "TestAttributeSet.generated.h already included, missing '#pragma once' in TestAttributeSet.h"
#endif
#define TESTPROJECT_TestAttributeSet_generated_h

#define FID_TestProject_Source_TestProject_TestAttributeSet_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUTestAttributeSet(); \
	friend struct Z_Construct_UClass_UTestAttributeSet_Statics; \
public: \
	DECLARE_CLASS(UTestAttributeSet, UAttributeSet, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TestProject"), NO_API) \
	DECLARE_SERIALIZER(UTestAttributeSet) \
	NO_API void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override; \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		MaxHealth=NETFIELD_REP_START, \
		Health, \
		Damage, \
		SpellDamage, \
		PhysicalDamage, \
		CritChance, \
		CritMultiplier, \
		ArmorDamageReduction, \
		LifeSteal, \
		Vitality, \
		Strength, \
		Intellect, \
		StackingAttribute1, \
		StackingAttribute2, \
		NoStackAttribute, \
		NETFIELD_REP_END=NoStackAttribute	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UTestAttributeSet) \
public:


#define FID_TestProject_Source_TestProject_TestAttributeSet_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTestAttributeSet(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UTestAttributeSet) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTestAttributeSet); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTestAttributeSet); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UTestAttributeSet(UTestAttributeSet&&); \
	UTestAttributeSet(const UTestAttributeSet&); \
public: \
	NO_API virtual ~UTestAttributeSet();


#define FID_TestProject_Source_TestProject_TestAttributeSet_h_18_PROLOG
#define FID_TestProject_Source_TestProject_TestAttributeSet_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_TestProject_Source_TestProject_TestAttributeSet_h_21_INCLASS \
	FID_TestProject_Source_TestProject_TestAttributeSet_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TESTPROJECT_API UClass* StaticClass<class UTestAttributeSet>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_TestProject_Source_TestProject_TestAttributeSet_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
