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

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.SetupAbility
struct UGA_Constructor_KineticOverload_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.GetCustomAbilitySourceTransform
struct UGA_Constructor_KineticOverload_C_GetCustomAbilitySourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.HitTarget
struct UGA_Constructor_KineticOverload_C_HitTarget_Params
{
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ShouldAbilityRespondToEvent
struct UGA_Constructor_KineticOverload_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayEventData*                         Payload;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Cancelled_AEF31BFB4F9F700D450DB3A243436FC5
struct UGA_Constructor_KineticOverload_C_Cancelled_AEF31BFB4F9F700D450DB3A243436FC5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.Targeted_AEF31BFB4F9F700D450DB3A243436FC5
struct UGA_Constructor_KineticOverload_C_Targeted_AEF31BFB4F9F700D450DB3A243436FC5_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.K2_ActivateAbilityFromEvent
struct UGA_Constructor_KineticOverload_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.AbilityTimeout
struct UGA_Constructor_KineticOverload_C_AbilityTimeout_Params
{
};

// Function GA_Constructor_KineticOverload.GA_Constructor_KineticOverload_C.ExecuteUbergraph_GA_Constructor_KineticOverload
struct UGA_Constructor_KineticOverload_C_ExecuteUbergraph_GA_Constructor_KineticOverload_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
