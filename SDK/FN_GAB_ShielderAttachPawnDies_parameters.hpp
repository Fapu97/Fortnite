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

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Completed_E6AA24FA40A80C2024C99E9EDD469296
struct UGAB_ShielderAttachPawnDies_C_Completed_E6AA24FA40A80C2024C99E9EDD469296_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Cancelled_E6AA24FA40A80C2024C99E9EDD469296
struct UGAB_ShielderAttachPawnDies_C_Cancelled_E6AA24FA40A80C2024C99E9EDD469296_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.Triggered_E6AA24FA40A80C2024C99E9EDD469296
struct UGAB_ShielderAttachPawnDies_C_Triggered_E6AA24FA40A80C2024C99E9EDD469296_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.K2_ActivateAbilityFromEvent
struct UGAB_ShielderAttachPawnDies_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAB_ShielderAttachPawnDies.GAB_ShielderAttachPawnDies_C.ExecuteUbergraph_GAB_ShielderAttachPawnDies
struct UGAB_ShielderAttachPawnDies_C_ExecuteUbergraph_GAB_ShielderAttachPawnDies_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
