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

// Function GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C.K2_ActivateAbilityFromEvent
struct UGAT_ReflectDamage_Melee_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAT_ReflectDamage_Melee.GAT_ReflectDamage_Melee_C.ExecuteUbergraph_GAT_ReflectDamage_Melee
struct UGAT_ReflectDamage_Melee_C_ExecuteUbergraph_GAT_ReflectDamage_Melee_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
