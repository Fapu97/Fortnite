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

// Function GAB_HuskBeehiveAreaOfEffect.GAB_HuskBeehiveAreaOfEffect_C.K2_CanActivateAbility
struct UGAB_HuskBeehiveAreaOfEffect_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GAB_HuskBeehiveAreaOfEffect.GAB_HuskBeehiveAreaOfEffect_C.K2_ActivateAbility
struct UGAB_HuskBeehiveAreaOfEffect_C_K2_ActivateAbility_Params
{
};

// Function GAB_HuskBeehiveAreaOfEffect.GAB_HuskBeehiveAreaOfEffect_C.ExecuteUbergraph_GAB_HuskBeehiveAreaOfEffect
struct UGAB_HuskBeehiveAreaOfEffect_C_ExecuteUbergraph_GAB_HuskBeehiveAreaOfEffect_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
