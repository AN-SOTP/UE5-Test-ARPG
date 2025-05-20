// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/TestAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTestAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UClass* Z_Construct_UClass_UAttributeSet();
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
TESTPROJECT_API UClass* Z_Construct_UClass_UTestAttributeSet();
TESTPROJECT_API UClass* Z_Construct_UClass_UTestAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UTestAttributeSet
void UTestAttributeSet::StaticRegisterNativesUTestAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTestAttributeSet);
UClass* Z_Construct_UClass_UTestAttributeSet_NoRegister()
{
	return UTestAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UTestAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "HideInDetailsView", "" },
		{ "IncludePath", "TestAttributeSet.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxHealth_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[] = {
		{ "Category", "Base Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. */// You can't make a GameplayEffect 'powered' by Damage (Its transient)\n" },
#endif
		{ "ModuleRelativePath", "TestAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Damage is just used for applying negative health mods. Its not a 'persistent' attribute. // You can't make a GameplayEffect 'powered' by Damage (Its transient)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpellDamage_MetaData[] = {
		{ "Category", "Base Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Attribute is the actual spell damage for this actor. It will power spell based GameplayEffects */" },
#endif
		{ "ModuleRelativePath", "TestAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Attribute is the actual spell damage for this actor. It will power spell based GameplayEffects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PhysicalDamage_MetaData[] = {
		{ "Category", "Base Attributes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** This Attribute is the actual physical damage for this actor. It will power physical based GameplayEffects */" },
#endif
		{ "ModuleRelativePath", "TestAttributeSet.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This Attribute is the actual physical damage for this actor. It will power physical based GameplayEffects" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritChance_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CritMultiplier_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArmorDamageReduction_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LifeSteal_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Vitality_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Strength_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Intellect_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackingAttribute1_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StackingAttribute2_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NoStackAttribute_MetaData[] = {
		{ "Category", "Base Attributes" },
		{ "ModuleRelativePath", "TestAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxHealth;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Health;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Damage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SpellDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PhysicalDamage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritChance;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CritMultiplier;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ArmorDamageReduction;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LifeSteal;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Vitality;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Strength;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Intellect;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StackingAttribute1;
	static const UECodeGen_Private::FStructPropertyParams NewProp_StackingAttribute2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NoStackAttribute;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTestAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_MaxHealth = { "MaxHealth", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, MaxHealth), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxHealth_MetaData), NewProp_MaxHealth_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, Health), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Health_MetaData), NewProp_Health_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, Damage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Damage_MetaData), NewProp_Damage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_SpellDamage = { "SpellDamage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, SpellDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpellDamage_MetaData), NewProp_SpellDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_PhysicalDamage = { "PhysicalDamage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, PhysicalDamage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PhysicalDamage_MetaData), NewProp_PhysicalDamage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_CritChance = { "CritChance", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, CritChance), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritChance_MetaData), NewProp_CritChance_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_CritMultiplier = { "CritMultiplier", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, CritMultiplier), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CritMultiplier_MetaData), NewProp_CritMultiplier_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_ArmorDamageReduction = { "ArmorDamageReduction", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, ArmorDamageReduction), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArmorDamageReduction_MetaData), NewProp_ArmorDamageReduction_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_LifeSteal = { "LifeSteal", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, LifeSteal), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LifeSteal_MetaData), NewProp_LifeSteal_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Vitality = { "Vitality", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, Vitality), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Vitality_MetaData), NewProp_Vitality_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Strength = { "Strength", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, Strength), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Strength_MetaData), NewProp_Strength_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Intellect = { "Intellect", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, Intellect), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Intellect_MetaData), NewProp_Intellect_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_StackingAttribute1 = { "StackingAttribute1", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, StackingAttribute1), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackingAttribute1_MetaData), NewProp_StackingAttribute1_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_StackingAttribute2 = { "StackingAttribute2", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, StackingAttribute2), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StackingAttribute2_MetaData), NewProp_StackingAttribute2_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_NoStackAttribute = { "NoStackAttribute", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTestAttributeSet, NoStackAttribute), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NoStackAttribute_MetaData), NewProp_NoStackAttribute_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_MaxHealth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Health,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Damage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_SpellDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_PhysicalDamage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_CritChance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_CritMultiplier,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_ArmorDamageReduction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_LifeSteal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Vitality,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Strength,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_Intellect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_StackingAttribute1,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_StackingAttribute2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTestAttributeSet_Statics::NewProp_NoStackAttribute,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UTestAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTestAttributeSet_Statics::ClassParams = {
	&UTestAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTestAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UTestAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTestAttributeSet()
{
	if (!Z_Registration_Info_UClass_UTestAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTestAttributeSet.OuterSingleton, Z_Construct_UClass_UTestAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTestAttributeSet.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UTestAttributeSet>()
{
	return UTestAttributeSet::StaticClass();
}
void UTestAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_MaxHealth(TEXT("MaxHealth"));
	static const FName Name_Health(TEXT("Health"));
	static const FName Name_Damage(TEXT("Damage"));
	static const FName Name_SpellDamage(TEXT("SpellDamage"));
	static const FName Name_PhysicalDamage(TEXT("PhysicalDamage"));
	static const FName Name_CritChance(TEXT("CritChance"));
	static const FName Name_CritMultiplier(TEXT("CritMultiplier"));
	static const FName Name_ArmorDamageReduction(TEXT("ArmorDamageReduction"));
	static const FName Name_LifeSteal(TEXT("LifeSteal"));
	static const FName Name_Vitality(TEXT("Vitality"));
	static const FName Name_Strength(TEXT("Strength"));
	static const FName Name_Intellect(TEXT("Intellect"));
	static const FName Name_StackingAttribute1(TEXT("StackingAttribute1"));
	static const FName Name_StackingAttribute2(TEXT("StackingAttribute2"));
	static const FName Name_NoStackAttribute(TEXT("NoStackAttribute"));
	const bool bIsValid = true
		&& Name_MaxHealth == ClassReps[(int32)ENetFields_Private::MaxHealth].Property->GetFName()
		&& Name_Health == ClassReps[(int32)ENetFields_Private::Health].Property->GetFName()
		&& Name_Damage == ClassReps[(int32)ENetFields_Private::Damage].Property->GetFName()
		&& Name_SpellDamage == ClassReps[(int32)ENetFields_Private::SpellDamage].Property->GetFName()
		&& Name_PhysicalDamage == ClassReps[(int32)ENetFields_Private::PhysicalDamage].Property->GetFName()
		&& Name_CritChance == ClassReps[(int32)ENetFields_Private::CritChance].Property->GetFName()
		&& Name_CritMultiplier == ClassReps[(int32)ENetFields_Private::CritMultiplier].Property->GetFName()
		&& Name_ArmorDamageReduction == ClassReps[(int32)ENetFields_Private::ArmorDamageReduction].Property->GetFName()
		&& Name_LifeSteal == ClassReps[(int32)ENetFields_Private::LifeSteal].Property->GetFName()
		&& Name_Vitality == ClassReps[(int32)ENetFields_Private::Vitality].Property->GetFName()
		&& Name_Strength == ClassReps[(int32)ENetFields_Private::Strength].Property->GetFName()
		&& Name_Intellect == ClassReps[(int32)ENetFields_Private::Intellect].Property->GetFName()
		&& Name_StackingAttribute1 == ClassReps[(int32)ENetFields_Private::StackingAttribute1].Property->GetFName()
		&& Name_StackingAttribute2 == ClassReps[(int32)ENetFields_Private::StackingAttribute2].Property->GetFName()
		&& Name_NoStackAttribute == ClassReps[(int32)ENetFields_Private::NoStackAttribute].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UTestAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTestAttributeSet);
UTestAttributeSet::~UTestAttributeSet() {}
// End Class UTestAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTestAttributeSet, UTestAttributeSet::StaticClass, TEXT("UTestAttributeSet"), &Z_Registration_Info_UClass_UTestAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTestAttributeSet), 1487522179U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestAttributeSet_h_3618201712(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_TestAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
