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

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_CanActivateAbility
struct UGAB_TakerSwoopMelee_C_K2_CanActivateAbility_Params
{
	struct FGameplayAbilityActorInfo*                  ActorInfo;                                                // (CPF_Parm)
	struct FGameplayTagContainer                       RelevantTags;                                             // (CPF_Parm, CPF_OutParm)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_DE47BE5C495BECAF17E854B5C7774E8D
struct UGAB_TakerSwoopMelee_C_Cancelled_DE47BE5C495BECAF17E854B5C7774E8D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Targeted_DE47BE5C495BECAF17E854B5C7774E8D
struct UGAB_TakerSwoopMelee_C_Targeted_DE47BE5C495BECAF17E854B5C7774E8D_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnCancelled_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnInterrupted_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnBlendOut_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15
struct UGAB_TakerSwoopMelee_C_OnCompleted_A05A301D40A4F2A62FAD9A94D3EB7A15_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_141CFC7A41B512E50566789E6CAF3A88
struct UGAB_TakerSwoopMelee_C_OnCancelled_141CFC7A41B512E50566789E6CAF3A88_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_141CFC7A41B512E50566789E6CAF3A88
struct UGAB_TakerSwoopMelee_C_OnInterrupted_141CFC7A41B512E50566789E6CAF3A88_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnComplete_141CFC7A41B512E50566789E6CAF3A88
struct UGAB_TakerSwoopMelee_C_OnComplete_141CFC7A41B512E50566789E6CAF3A88_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Completed_90CCC07C4CF88E3BB6C7268A426DBA5F
struct UGAB_TakerSwoopMelee_C_Completed_90CCC07C4CF88E3BB6C7268A426DBA5F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F
struct UGAB_TakerSwoopMelee_C_Cancelled_90CCC07C4CF88E3BB6C7268A426DBA5F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F
struct UGAB_TakerSwoopMelee_C_Triggered_90CCC07C4CF88E3BB6C7268A426DBA5F_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_619254B849F0ECCC49367497BECE833B
struct UGAB_TakerSwoopMelee_C_OnCancelled_619254B849F0ECCC49367497BECE833B_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_619254B849F0ECCC49367497BECE833B
struct UGAB_TakerSwoopMelee_C_OnInterrupted_619254B849F0ECCC49367497BECE833B_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnBlendOut_619254B849F0ECCC49367497BECE833B
struct UGAB_TakerSwoopMelee_C_OnBlendOut_619254B849F0ECCC49367497BECE833B_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCompleted_619254B849F0ECCC49367497BECE833B
struct UGAB_TakerSwoopMelee_C_OnCompleted_619254B849F0ECCC49367497BECE833B_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnCancelled_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnInterrupted_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A
struct UGAB_TakerSwoopMelee_C_OnComplete_A8D9EDC44514CE30149C4C924AB5FB2A_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.BeginOutroDeceleration
struct UGAB_TakerSwoopMelee_C_BeginOutroDeceleration_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SwoopTimeoutComplete
struct UGAB_TakerSwoopMelee_C_SwoopTimeoutComplete_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_OnEndAbility
struct UGAB_TakerSwoopMelee_C_K2_OnEndAbility_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.ResetDoOnce
struct UGAB_TakerSwoopMelee_C_ResetDoOnce_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.TransitionFromSwoop
struct UGAB_TakerSwoopMelee_C_TransitionFromSwoop_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.SlowSpeedCancel
struct UGAB_TakerSwoopMelee_C_SlowSpeedCancel_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.K2_ActivateAbility
struct UGAB_TakerSwoopMelee_C_K2_ActivateAbility_Params
{
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.Taker Overlapped An Actor
struct UGAB_TakerSwoopMelee_C_Taker_Overlapped_An_Actor_Params
{
	class AActor*                                      OverlappedActor;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GAB_TakerSwoopMelee.GAB_TakerSwoopMelee_C.ExecuteUbergraph_GAB_TakerSwoopMelee
struct UGAB_TakerSwoopMelee_C_ExecuteUbergraph_GAB_TakerSwoopMelee_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
