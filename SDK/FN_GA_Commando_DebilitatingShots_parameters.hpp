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

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAbility
struct UGA_Commando_DebilitatingShots_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupDebilitationTraining
struct UGA_Commando_DebilitatingShots_C_SetupDebilitationTraining_Params
{
	struct FGameplayEffectSpecHandle                   EffectspecOutInstant;                                     // (CPF_Parm, CPF_OutParm)
	struct FGameplayEffectSpecHandle                   EffectspecOutDuration;                                    // (CPF_Parm, CPF_OutParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupAppliedEffect
struct UGA_Commando_DebilitatingShots_C_SetupAppliedEffect_Params
{
	float                                              Magnitude;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stack_Count;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectSpecHandle                   EffectSpecHandle;                                         // (CPF_Parm)
	struct FGameplayEffectSpecHandle                   EffectspecHandleOut;                                      // (CPF_Parm, CPF_OutParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.SetupGameplayEffect
struct UGA_Commando_DebilitatingShots_C_SetupGameplayEffect_Params
{
	struct FGameplayTag                                EventTag;                                                 // (CPF_Parm)
	class AActor*                                      HitActor;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     OptionalObject;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayAbilityTargetDataHandle            Target_Data;                                              // (CPF_Parm, CPF_OutParm)
	class UClass*                                      DebilitatingShots;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Effect_Level;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                Stack_Count;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ShouldAbilityRespondToEvent
struct UGA_Commando_DebilitatingShots_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayEventData*                         Payload;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.K2_ActivateAbilityFromEvent
struct UGA_Commando_DebilitatingShots_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Commando_DebilitatingShots.GA_Commando_DebilitatingShots_C.ExecuteUbergraph_GA_Commando_DebilitatingShots
struct UGA_Commando_DebilitatingShots_C_ExecuteUbergraph_GA_Commando_DebilitatingShots_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
