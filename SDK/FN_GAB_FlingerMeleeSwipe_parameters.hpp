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

// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Completed_75D3277A479B3F48D2AD2889328C3F32
struct UGAB_FlingerMeleeSwipe_C_Completed_75D3277A479B3F48D2AD2889328C3F32_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Cancelled_75D3277A479B3F48D2AD2889328C3F32
struct UGAB_FlingerMeleeSwipe_C_Cancelled_75D3277A479B3F48D2AD2889328C3F32_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.Triggered_75D3277A479B3F48D2AD2889328C3F32
struct UGAB_FlingerMeleeSwipe_C_Triggered_75D3277A479B3F48D2AD2889328C3F32_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.K2_ActivateAbility
struct UGAB_FlingerMeleeSwipe_C_K2_ActivateAbility_Params
{
};

// Function GAB_FlingerMeleeSwipe.GAB_FlingerMeleeSwipe_C.ExecuteUbergraph_GAB_FlingerMeleeSwipe
struct UGAB_FlingerMeleeSwipe_C_ExecuteUbergraph_GAB_FlingerMeleeSwipe_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
