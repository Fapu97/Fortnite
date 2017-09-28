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

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Completed_04B647A04AB380AFDCCBD9B139883995
struct UGAB_ShielderTeleportOut_C_Completed_04B647A04AB380AFDCCBD9B139883995_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Cancelled_04B647A04AB380AFDCCBD9B139883995
struct UGAB_ShielderTeleportOut_C_Cancelled_04B647A04AB380AFDCCBD9B139883995_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.Triggered_04B647A04AB380AFDCCBD9B139883995
struct UGAB_ShielderTeleportOut_C_Triggered_04B647A04AB380AFDCCBD9B139883995_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderTeleportOut_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.K2_OnEndAbility
struct UGAB_ShielderTeleportOut_C_K2_OnEndAbility_Params
{
};

// Function GAB_ShielderTeleportOut.GAB_ShielderTeleportOut_C.ExecuteUbergraph_GAB_ShielderTeleportOut
struct UGAB_ShielderTeleportOut_C_ExecuteUbergraph_GAB_ShielderTeleportOut_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
