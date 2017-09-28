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

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.ReflectDamage
struct UGAT_ReflectDamage_C_ReflectDamage_Params
{
	class UAbilitySystemComponent*                     OriginalDmgCauser;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     ReflectedDmgDealer;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAbilitySystemComponent*                     OriginalDmgReceiver;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       OriginalDmgCauserTags;                                    // (CPF_Parm)
	struct FGameplayTagContainer                       OriginalDmgReceiverTags;                                  // (CPF_Parm)
	float                                              OriginalDmg;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.K2_ActivateAbilityFromEvent
struct UGAT_ReflectDamage_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GAT_ReflectDamage.GAT_ReflectDamage_C.ExecuteUbergraph_GAT_ReflectDamage
struct UGAT_ReflectDamage_C_ExecuteUbergraph_GAT_ReflectDamage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
