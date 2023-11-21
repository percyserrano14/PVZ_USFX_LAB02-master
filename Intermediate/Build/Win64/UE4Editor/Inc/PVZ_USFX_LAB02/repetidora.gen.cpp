// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "PVZ_USFX_LAB02/repetidora.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCoderepetidora() {}
// Cross Module References
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_Arepetidora_NoRegister();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_Arepetidora();
	PVZ_USFX_LAB02_API UClass* Z_Construct_UClass_Ahongo();
	UPackage* Z_Construct_UPackage__Script_PVZ_USFX_LAB02();
// End Cross Module References
	void Arepetidora::StaticRegisterNativesArepetidora()
	{
	}
	UClass* Z_Construct_UClass_Arepetidora_NoRegister()
	{
		return Arepetidora::StaticClass();
	}
	struct Z_Construct_UClass_Arepetidora_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Arepetidora_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_Ahongo,
		(UObject* (*)())Z_Construct_UPackage__Script_PVZ_USFX_LAB02,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Arepetidora_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "repetidora.h" },
		{ "ModuleRelativePath", "repetidora.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Arepetidora_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Arepetidora>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Arepetidora_Statics::ClassParams = {
		&Arepetidora::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_Arepetidora_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Arepetidora_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Arepetidora()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Arepetidora_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Arepetidora, 4252601637);
	template<> PVZ_USFX_LAB02_API UClass* StaticClass<Arepetidora>()
	{
		return Arepetidora::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Arepetidora(Z_Construct_UClass_Arepetidora, &Arepetidora::StaticClass, TEXT("/Script/PVZ_USFX_LAB02"), TEXT("Arepetidora"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Arepetidora);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
