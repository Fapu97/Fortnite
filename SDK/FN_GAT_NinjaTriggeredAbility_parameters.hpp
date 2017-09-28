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

// Function GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_NinjaTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAT_NinjaTriggeredAbility.GAT_NinjaTriggeredAbility_C.ExecuteUbergraph_GAT_NinjaTriggeredAbility
struct UGAT_NinjaTriggeredAbility_C_ExecuteUbergraph_GAT_NinjaTriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
