// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFPSProject_init() {}
	FPSPROJECT_API UFunction* Z_Construct_UDelegateFunction_FPSProject_OnPickUp__DelegateSignature();
	FPSPROJECT_API UFunction* Z_Construct_UDelegateFunction_FPSProject_OnUseItem__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_FPSProject;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_FPSProject()
	{
		if (!Z_Registration_Info_UPackage__Script_FPSProject.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProject_OnPickUp__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_FPSProject_OnUseItem__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/FPSProject",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xF7437753,
				0xA06DA6F3,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_FPSProject.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_FPSProject.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_FPSProject(Z_Construct_UPackage__Script_FPSProject, TEXT("/Script/FPSProject"), Z_Registration_Info_UPackage__Script_FPSProject, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xF7437753, 0xA06DA6F3));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
