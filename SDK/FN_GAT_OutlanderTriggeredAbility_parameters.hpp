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

// Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_OutlanderTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAT_OutlanderTriggeredAbility.GAT_OutlanderTriggeredAbility_C.ExecuteUbergraph_GAT_OutlanderTriggeredAbility
struct UGAT_OutlanderTriggeredAbility_C_ExecuteUbergraph_GAT_OutlanderTriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
