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

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetupAbility
struct UGA_Ninja_MantisLeap_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.SetJumpHeight
struct UGA_Ninja_MantisLeap_C_SetJumpHeight_Params
{
	class APlayerPawn_Ninja_C*                         Ninja_Pawn;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPlayerPawn*                             Ninja_Pawn_Out;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Jump_Height;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ShouldAbilityRespondToEvent
struct UGA_Ninja_MantisLeap_C_K2_ShouldAbilityRespondToEvent_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayEventData*                         Payload;                                                  // (CPF_Parm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Cancelled_023C704A4687994EABB842B14222FB9B
struct UGA_Ninja_MantisLeap_C_Cancelled_023C704A4687994EABB842B14222FB9B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Targeted_023C704A4687994EABB842B14222FB9B
struct UGA_Ninja_MantisLeap_C_Targeted_023C704A4687994EABB842B14222FB9B_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.K2_ActivateAbilityFromEvent
struct UGA_Ninja_MantisLeap_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.OnPawnLanded
struct UGA_Ninja_MantisLeap_C_OnPawnLanded_Params
{
	struct FHitResult                                  Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.Leapt
struct UGA_Ninja_MantisLeap_C_Leapt_Params
{
};

// Function GA_Ninja_MantisLeap.GA_Ninja_MantisLeap_C.ExecuteUbergraph_GA_Ninja_MantisLeap
struct UGA_Ninja_MantisLeap_C_ExecuteUbergraph_GA_Ninja_MantisLeap_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
