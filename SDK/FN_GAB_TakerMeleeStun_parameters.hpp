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

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_CanActivateAbility
struct UGAB_TakerMeleeStun_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnCancelled_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnCancelled_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnInterrupted_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.OnComplete_513D85AB446CCC17A8F8AAA9835468D1
struct UGAB_TakerMeleeStun_C_OnComplete_513D85AB446CCC17A8F8AAA9835468D1_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042
struct UGAB_TakerMeleeStun_C_Completed_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042
struct UGAB_TakerMeleeStun_C_Cancelled_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042
struct UGAB_TakerMeleeStun_C_Triggered_CD3FAA114BAC3C495E2C9A8E0E5E4042_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.MoveTimerComplete
struct UGAB_TakerMeleeStun_C_MoveTimerComplete_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ResetDoOnce
struct UGAB_TakerMeleeStun_C_ResetDoOnce_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_OnEndAbility
struct UGAB_TakerMeleeStun_C_K2_OnEndAbility_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.K2_ActivateAbility
struct UGAB_TakerMeleeStun_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerMeleeStun.GAB_TakerMeleeStun_C.ExecuteUbergraph_GAB_TakerMeleeStun
struct UGAB_TakerMeleeStun_C_ExecuteUbergraph_GAB_TakerMeleeStun_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
