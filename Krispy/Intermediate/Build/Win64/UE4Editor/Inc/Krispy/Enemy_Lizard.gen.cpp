// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Enemy_Lizard.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEnemy_Lizard() {}
// Cross Module References
	KRISPY_API UClass* Z_Construct_UClass_AEnemy_Lizard_NoRegister();
	KRISPY_API UClass* Z_Construct_UClass_AEnemy_Lizard();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Krispy();
// End Cross Module References
	void AEnemy_Lizard::StaticRegisterNativesAEnemy_Lizard()
	{
	}
	UClass* Z_Construct_UClass_AEnemy_Lizard_NoRegister()
	{
		return AEnemy_Lizard::StaticClass();
	}
	UClass* Z_Construct_UClass_AEnemy_Lizard()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Krispy();
			OuterClass = AEnemy_Lizard::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				static TCppClassTypeInfo<TCppClassTypeTraits<AEnemy_Lizard> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Enemy_Lizard.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Enemy_Lizard.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(AEnemy_Lizard, 3450411107);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AEnemy_Lizard(Z_Construct_UClass_AEnemy_Lizard, &AEnemy_Lizard::StaticClass, TEXT("/Script/Krispy"), TEXT("AEnemy_Lizard"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AEnemy_Lizard);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
