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

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.K2_CanActivateAbility
struct UGAB_HuskBeehiveRanged_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.Completed_649D4C464F3D6EAB2763FEA90893B790
struct UGAB_HuskBeehiveRanged_C_Completed_649D4C464F3D6EAB2763FEA90893B790_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.Cancelled_649D4C464F3D6EAB2763FEA90893B790
struct UGAB_HuskBeehiveRanged_C_Cancelled_649D4C464F3D6EAB2763FEA90893B790_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.Triggered_649D4C464F3D6EAB2763FEA90893B790
struct UGAB_HuskBeehiveRanged_C_Triggered_649D4C464F3D6EAB2763FEA90893B790_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.K2_ActivateAbility
struct UGAB_HuskBeehiveRanged_C_K2_ActivateAbility_Params
{
};

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.K2_TriggerFromAnimation
struct UGAB_HuskBeehiveRanged_C_K2_TriggerFromAnimation_Params
{
	struct FGameplayTag*                               ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_HuskBeehiveRanged.GAB_HuskBeehiveRanged_C.ExecuteUbergraph_GAB_HuskBeehiveRanged
struct UGAB_HuskBeehiveRanged_C_ExecuteUbergraph_GAB_HuskBeehiveRanged_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
