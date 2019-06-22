// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "VR_MovementGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVR_MovementGameModeBase() {}
// Cross Module References
	VR_MOVEMENT_API UClass* Z_Construct_UClass_AVR_MovementGameModeBase_NoRegister();
	VR_MOVEMENT_API UClass* Z_Construct_UClass_AVR_MovementGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_VR_Movement();
// End Cross Module References
	void AVR_MovementGameModeBase::StaticRegisterNativesAVR_MovementGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AVR_MovementGameModeBase_NoRegister()
	{
		return AVR_MovementGameModeBase::StaticClass();
	}
	UClass* Z_Construct_UClass_AVR_MovementGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AGameModeBase,
				(UObject* (*)())Z_Construct_UPackage__Script_VR_Movement,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "VR_MovementGameModeBase.h" },
				{ "ModuleRelativePath", "VR_MovementGameModeBase.h" },
				{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AVR_MovementGameModeBase>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AVR_MovementGameModeBase::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900288u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AVR_MovementGameModeBase, 132087688);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AVR_MovementGameModeBase(Z_Construct_UClass_AVR_MovementGameModeBase, &AVR_MovementGameModeBase::StaticClass, TEXT("/Script/VR_Movement"), TEXT("AVR_MovementGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVR_MovementGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
