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

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_CanActivateAbility
struct UGAB_BlasterRanged_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0
struct UGAB_BlasterRanged_C_OnInterrupted_F2E0D80F47E87F169FADB1814583F0E0_Params
{
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.OnComplete_F2E0D80F47E87F169FADB1814583F0E0
struct UGAB_BlasterRanged_C_OnComplete_F2E0D80F47E87F169FADB1814583F0E0_Params
{
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Completed_B70914E34DF839C9F27FBA8D66801C0D
struct UGAB_BlasterRanged_C_Completed_B70914E34DF839C9F27FBA8D66801C0D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Cancelled_B70914E34DF839C9F27FBA8D66801C0D
struct UGAB_BlasterRanged_C_Cancelled_B70914E34DF839C9F27FBA8D66801C0D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Triggered_B70914E34DF839C9F27FBA8D66801C0D
struct UGAB_BlasterRanged_C_Triggered_B70914E34DF839C9F27FBA8D66801C0D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_ActivateAbility
struct UGAB_BlasterRanged_C_K2_ActivateAbility_Params
{
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.Reset Ending Montage DoOnce
struct UGAB_BlasterRanged_C_Reset_Ending_Montage_DoOnce_Params
{
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.K2_OnEndAbility
struct UGAB_BlasterRanged_C_K2_OnEndAbility_Params
{
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.StopFiring
struct UGAB_BlasterRanged_C_StopFiring_Params
{
};

// Function GAB_BlasterRanged.GAB_BlasterRanged_C.ExecuteUbergraph_GAB_BlasterRanged
struct UGAB_BlasterRanged_C_ExecuteUbergraph_GAB_BlasterRanged_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
