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

// Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.K2_ActivateAbilityFromEvent
struct UGAT_ConstructorTriggeredAbility_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAT_ConstructorTriggeredAbility.GAT_ConstructorTriggeredAbility_C.ExecuteUbergraph_GAT_ConstructorTriggeredAbility
struct UGAT_ConstructorTriggeredAbility_C_ExecuteUbergraph_GAT_ConstructorTriggeredAbility_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
