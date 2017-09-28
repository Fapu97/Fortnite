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

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.SetupAbility
struct UGA_Commando_Survivalist_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponentRef;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.ApplyHeal
struct UGA_Commando_Survivalist_C_ApplyHeal_Params
{
};

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.K2_ShouldAbilityRespondToEvent
struct UGA_Commando_Survivalist_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayEventData*                         Payload;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.K2_ActivateAbilityFromEvent
struct UGA_Commando_Survivalist_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Commando_Survivalist.GA_Commando_Survivalist_C.ExecuteUbergraph_GA_Commando_Survivalist
struct UGA_Commando_Survivalist_C_ExecuteUbergraph_GA_Commando_Survivalist_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
