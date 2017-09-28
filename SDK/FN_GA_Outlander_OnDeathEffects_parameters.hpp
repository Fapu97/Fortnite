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

// Function GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C.K2_ActivateAbilityFromEvent
struct UGA_Outlander_OnDeathEffects_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Outlander_OnDeathEffects.GA_Outlander_OnDeathEffects_C.ExecuteUbergraph_GA_Outlander_OnDeathEffects
struct UGA_Outlander_OnDeathEffects_C_ExecuteUbergraph_GA_Outlander_OnDeathEffects_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
