#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Parameters
//---------------------------------------------------------------------------

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.SetupPreviewImageOverride
struct UGA_Outlander_LlamaFragment_Base_C_SetupPreviewImageOverride_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.Authority
struct UGA_Outlander_LlamaFragment_Base_C_Authority_Params
{
	bool                                               Auth;                                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.SetupAbility
struct UGA_Outlander_LlamaFragment_Base_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.K2_ShouldUseDecoTool
struct UGA_Outlander_LlamaFragment_Base_C_K2_ShouldUseDecoTool_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.K2_CanActivateAbility
struct UGA_Outlander_LlamaFragment_Base_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.LlamaFragment
struct UGA_Outlander_LlamaFragment_Base_C_LlamaFragment_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.ActivateFragment
struct UGA_Outlander_LlamaFragment_Base_C_ActivateFragment_Params
{
	struct FGameplayTag                                ActivateEvent;                                            // (CPF_Parm, CPF_OutParm)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Outlander_LlamaFragment_Base_C_OnCancelled_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Outlander_LlamaFragment_Base_C_OnInterrupted_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.OnBlendOut_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Outlander_LlamaFragment_Base_C_OnBlendOut_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.OnCompleted_AEBC8CA9454DB4A76A8336BD4EE30254
struct UGA_Outlander_LlamaFragment_Base_C_OnCompleted_AEBC8CA9454DB4A76A8336BD4EE30254_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.K2_ActivateAbility
struct UGA_Outlander_LlamaFragment_Base_C_K2_ActivateAbility_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.SpawnFragment
struct UGA_Outlander_LlamaFragment_Base_C_SpawnFragment_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.ProjectileStop
struct UGA_Outlander_LlamaFragment_Base_C_ProjectileStop_Params
{
	struct FHitResult                                  ImpactResult;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.SpawnProjectile
struct UGA_Outlander_LlamaFragment_Base_C_SpawnProjectile_Params
{
};

// Function GA_Outlander_LlamaFragment_Base.GA_Outlander_LlamaFragment_Base_C.ExecuteUbergraph_GA_Outlander_LlamaFragment_Base
struct UGA_Outlander_LlamaFragment_Base_C_ExecuteUbergraph_GA_Outlander_LlamaFragment_Base_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
