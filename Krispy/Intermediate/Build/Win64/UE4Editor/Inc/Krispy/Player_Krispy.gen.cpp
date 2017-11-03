// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Player_Krispy.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayer_Krispy() {}
// Cross Module References
	KRISPY_API UClass* Z_Construct_UClass_APlayer_Krispy_NoRegister();
	KRISPY_API UClass* Z_Construct_UClass_APlayer_Krispy();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_Krispy();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
// End Cross Module References
	void APlayer_Krispy::StaticRegisterNativesAPlayer_Krispy()
	{
	}
	UClass* Z_Construct_UClass_APlayer_Krispy_NoRegister()
	{
		return APlayer_Krispy::StaticClass();
	}
	UClass* Z_Construct_UClass_APlayer_Krispy()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_ACharacter();
			Z_Construct_UPackage__Script_Krispy();
			OuterClass = APlayer_Krispy::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20900080u;


				UProperty* NewProp_health = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("health"), RF_Public|RF_Transient|RF_MarkAsNative) UFloatProperty(CPP_PROPERTY_BASE(health, APlayer_Krispy), 0x0010000000000005);
				UProperty* NewProp_cameraBoom = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("cameraBoom"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(cameraBoom, APlayer_Krispy), 0x00100000000a001d, Z_Construct_UClass_USpringArmComponent_NoRegister());
				UProperty* NewProp_camera = new(EC_InternalUseOnlyConstructor, OuterClass, TEXT("camera"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(camera, APlayer_Krispy), 0x00100000000a001d, Z_Construct_UClass_UCameraComponent_NoRegister());
				static TCppClassTypeInfo<TCppClassTypeTraits<APlayer_Krispy> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("HideCategories"), TEXT("Navigation"));
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("Player_Krispy.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Player_Krispy.h"));
				MetaData->SetValue(OuterClass, TEXT("ObjectInitializerConstructorDeclared"), TEXT(""));
				MetaData->SetValue(NewProp_health, TEXT("Category"), TEXT("Character"));
				MetaData->SetValue(NewProp_health, TEXT("ModuleRelativePath"), TEXT("Player_Krispy.h"));
				MetaData->SetValue(NewProp_cameraBoom, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_cameraBoom, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_cameraBoom, TEXT("ModuleRelativePath"), TEXT("Player_Krispy.h"));
				MetaData->SetValue(NewProp_camera, TEXT("Category"), TEXT("Camera"));
				MetaData->SetValue(NewProp_camera, TEXT("EditInline"), TEXT("true"));
				MetaData->SetValue(NewProp_camera, TEXT("ModuleRelativePath"), TEXT("Player_Krispy.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayer_Krispy, 709851955);
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayer_Krispy(Z_Construct_UClass_APlayer_Krispy, &APlayer_Krispy::StaticClass, TEXT("/Script/Krispy"), TEXT("APlayer_Krispy"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayer_Krispy);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
