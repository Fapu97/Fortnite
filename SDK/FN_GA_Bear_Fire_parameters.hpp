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

// Function GA_Bear_Fire.GA_Bear_Fire_C.Cancelled_0B48E8B547027954C37AA1BF4D77BE31
struct UGA_Bear_Fire_C_Cancelled_0B48E8B547027954C37AA1BF4D77BE31_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Bear_Fire.GA_Bear_Fire_C.Targeted_0B48E8B547027954C37AA1BF4D77BE31
struct UGA_Bear_Fire_C_Targeted_0B48E8B547027954C37AA1BF4D77BE31_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Bear_Fire.GA_Bear_Fire_C.K2_ActivateAbility
struct UGA_Bear_Fire_C_K2_ActivateAbility_Params
{
};

// Function GA_Bear_Fire.GA_Bear_Fire_C.ExecuteUbergraph_GA_Bear_Fire
struct UGA_Bear_Fire_C_ExecuteUbergraph_GA_Bear_Fire_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
