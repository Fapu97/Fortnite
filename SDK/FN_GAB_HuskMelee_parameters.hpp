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

// Function GAB_HuskMelee.GAB_HuskMelee_C.Completed_39FC57D848D381E3A3C7E798E995ED9A
struct UGAB_HuskMelee_C_Completed_39FC57D848D381E3A3C7E798E995ED9A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.Cancelled_39FC57D848D381E3A3C7E798E995ED9A
struct UGAB_HuskMelee_C_Cancelled_39FC57D848D381E3A3C7E798E995ED9A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.Triggered_39FC57D848D381E3A3C7E798E995ED9A
struct UGAB_HuskMelee_C_Triggered_39FC57D848D381E3A3C7E798E995ED9A_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.OnCancelled_3012237E40D07AA69417C79DC2677F69
struct UGAB_HuskMelee_C_OnCancelled_3012237E40D07AA69417C79DC2677F69_Params
{
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.OnInterrupted_3012237E40D07AA69417C79DC2677F69
struct UGAB_HuskMelee_C_OnInterrupted_3012237E40D07AA69417C79DC2677F69_Params
{
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.OnComplete_3012237E40D07AA69417C79DC2677F69
struct UGAB_HuskMelee_C_OnComplete_3012237E40D07AA69417C79DC2677F69_Params
{
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.K2_ActivateAbility
struct UGAB_HuskMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.K2_OnEndAbility
struct UGAB_HuskMelee_C_K2_OnEndAbility_Params
{
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.ContinuousMoveTowardsTarget
struct UGAB_HuskMelee_C_ContinuousMoveTowardsTarget_Params
{
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.GameplayEffectContainerApplied
struct UGAB_HuskMelee_C_GameplayEffectContainerApplied_Params
{
	struct FGameplayAbilityTargetDataHandle            Target_Data;                                              // (CPF_Parm)
};

// Function GAB_HuskMelee.GAB_HuskMelee_C.ExecuteUbergraph_GAB_HuskMelee
struct UGAB_HuskMelee_C_ExecuteUbergraph_GAB_HuskMelee_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
