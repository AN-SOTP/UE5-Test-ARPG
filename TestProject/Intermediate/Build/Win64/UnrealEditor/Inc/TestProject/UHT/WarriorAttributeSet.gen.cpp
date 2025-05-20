// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TestProject/WarriorAttributeSet.h"
#include "GameplayAbilities/Public/AttributeSet.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWarriorAttributeSet() {}

// Begin Cross Module References
GAMEPLAYABILITIES_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayAttributeData();
TESTPROJECT_API UClass* Z_Construct_UClass_UTestAttributeSet();
TESTPROJECT_API UClass* Z_Construct_UClass_UWarriorAttributeSet();
TESTPROJECT_API UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister();
UPackage* Z_Construct_UPackage__Script_TestProject();
// End Cross Module References

// Begin Class UWarriorAttributeSet
void UWarriorAttributeSet::StaticRegisterNativesUWarriorAttributeSet()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UWarriorAttributeSet);
UClass* Z_Construct_UClass_UWarriorAttributeSet_NoRegister()
{
	return UWarriorAttributeSet::StaticClass();
}
struct Z_Construct_UClass_UWarriorAttributeSet_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WarriorAttributeSet.h" },
		{ "ModuleRelativePath", "WarriorAttributeSet.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Rage_MetaData[] = {
		{ "Category", "Warrior Attributes" },
		{ "ModuleRelativePath", "WarriorAttributeSet.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxRage_MetaData[] = {
		{ "Category", "Warrior Attributes" },
		{ "ModuleRelativePath", "WarriorAttributeSet.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Rage;
	static const UECodeGen_Private::FStructPropertyParams NewProp_MaxRage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UWarriorAttributeSet>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_Rage = { "Rage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, Rage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Rage_MetaData), NewProp_Rage_MetaData) }; // 675369593
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_MaxRage = { "MaxRage", nullptr, (EPropertyFlags)0x0010000000000025, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UWarriorAttributeSet, MaxRage), Z_Construct_UScriptStruct_FGameplayAttributeData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxRage_MetaData), NewProp_MaxRage_MetaData) }; // 675369593
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_Rage,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UWarriorAttributeSet_Statics::NewProp_MaxRage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UWarriorAttributeSet_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTestAttributeSet,
	(UObject* (*)())Z_Construct_UPackage__Script_TestProject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UWarriorAttributeSet_Statics::ClassParams = {
	&UWarriorAttributeSet::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::PropPointers),
	0,
	0x003000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UWarriorAttributeSet_Statics::Class_MetaDataParams), Z_Construct_UClass_UWarriorAttributeSet_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UWarriorAttributeSet()
{
	if (!Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton, Z_Construct_UClass_UWarriorAttributeSet_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UWarriorAttributeSet.OuterSingleton;
}
template<> TESTPROJECT_API UClass* StaticClass<UWarriorAttributeSet>()
{
	return UWarriorAttributeSet::StaticClass();
}
void UWarriorAttributeSet::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_Rage(TEXT("Rage"));
	static const FName Name_MaxRage(TEXT("MaxRage"));
	const bool bIsValid = true
		&& Name_Rage == ClassReps[(int32)ENetFields_Private::Rage].Property->GetFName()
		&& Name_MaxRage == ClassReps[(int32)ENetFields_Private::MaxRage].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UWarriorAttributeSet"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UWarriorAttributeSet);
UWarriorAttributeSet::~UWarriorAttributeSet() {}
// End Class UWarriorAttributeSet

// Begin Registration
struct Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WarriorAttributeSet_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UWarriorAttributeSet, UWarriorAttributeSet::StaticClass, TEXT("UWarriorAttributeSet"), &Z_Registration_Info_UClass_UWarriorAttributeSet, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UWarriorAttributeSet), 2432413115U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WarriorAttributeSet_h_3338148690(TEXT("/Script/TestProject"),
	Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WarriorAttributeSet_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_TestProject_Source_TestProject_WarriorAttributeSet_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
