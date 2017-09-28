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

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.SetupAbility
struct UGA_Commando_Shockwave_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Completed_60F6207840ECA0EA5707139982AC6691
struct UGA_Commando_Shockwave_C_Completed_60F6207840ECA0EA5707139982AC6691_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Cancelled_60F6207840ECA0EA5707139982AC6691
struct UGA_Commando_Shockwave_C_Cancelled_60F6207840ECA0EA5707139982AC6691_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Triggered_60F6207840ECA0EA5707139982AC6691
struct UGA_Commando_Shockwave_C_Triggered_60F6207840ECA0EA5707139982AC6691_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Cancelled_F7C7341E49C6B93C7D967988C9C4848C
struct UGA_Commando_Shockwave_C_Cancelled_F7C7341E49C6B93C7D967988C9C4848C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Targeted_F7C7341E49C6B93C7D967988C9C4848C
struct UGA_Commando_Shockwave_C_Targeted_F7C7341E49C6B93C7D967988C9C4848C_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Completed_B5B79B9E486803E3CAA59BBC1F091E10
struct UGA_Commando_Shockwave_C_Completed_B5B79B9E486803E3CAA59BBC1F091E10_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Cancelled_B5B79B9E486803E3CAA59BBC1F091E10
struct UGA_Commando_Shockwave_C_Cancelled_B5B79B9E486803E3CAA59BBC1F091E10_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.Triggered_B5B79B9E486803E3CAA59BBC1F091E10
struct UGA_Commando_Shockwave_C_Triggered_B5B79B9E486803E3CAA59BBC1F091E10_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.K2_ActivateAbility
struct UGA_Commando_Shockwave_C_K2_ActivateAbility_Params
{
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.FinishAbility
struct UGA_Commando_Shockwave_C_FinishAbility_Params
{
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.PawnLanded
struct UGA_Commando_Shockwave_C_PawnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.ApplyGameplayEffect
struct UGA_Commando_Shockwave_C_ApplyGameplayEffect_Params
{
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.ForceLand
struct UGA_Commando_Shockwave_C_ForceLand_Params
{
};

// Function GA_Commando_Shockwave.GA_Commando_Shockwave_C.ExecuteUbergraph_GA_Commando_Shockwave
struct UGA_Commando_Shockwave_C_ExecuteUbergraph_GA_Commando_Shockwave_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
