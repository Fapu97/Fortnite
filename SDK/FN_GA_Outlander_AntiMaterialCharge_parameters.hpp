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

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.CanDamage
struct UGA_Outlander_AntiMaterialCharge_C_CanDamage_Params
{
	class UObject*                                     Object;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.AntiMaterialForceFeedback
struct UGA_Outlander_AntiMaterialCharge_C_AntiMaterialForceFeedback_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.SendWallAction
struct UGA_Outlander_AntiMaterialCharge_C_SendWallAction_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.SendPawnAction
struct UGA_Outlander_AntiMaterialCharge_C_SendPawnAction_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.IsEnemyOrWall
struct UGA_Outlander_AntiMaterialCharge_C_IsEnemyOrWall_Params
{
	class AActor*                                      In;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Out;                                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.OverlappingHit
struct UGA_Outlander_AntiMaterialCharge_C_OverlappingHit_Params
{
	bool                                               Found;                                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.SendGameplayEndAbility
struct UGA_Outlander_AntiMaterialCharge_C_SendGameplayEndAbility_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.StopMontagePlayCorrectCharge
struct UGA_Outlander_AntiMaterialCharge_C_StopMontagePlayCorrectCharge_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.UnbindOnComponentOverlap
struct UGA_Outlander_AntiMaterialCharge_C_UnbindOnComponentOverlap_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.AddChargeDamage
struct UGA_Outlander_AntiMaterialCharge_C_AddChargeDamage_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.ToggleSteeringReduction
struct UGA_Outlander_AntiMaterialCharge_C_ToggleSteeringReduction_Params
{
	bool                                               EnableSteeringReduction;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.SetupAbility
struct UGA_Outlander_AntiMaterialCharge_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.CheckOverlappingActors
struct UGA_Outlander_AntiMaterialCharge_C_CheckOverlappingActors_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ShouldContinue;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Completed_B8EA350A44D63FB1DD194AAFE0D5BEC0
struct UGA_Outlander_AntiMaterialCharge_C_Completed_B8EA350A44D63FB1DD194AAFE0D5BEC0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Cancelled_B8EA350A44D63FB1DD194AAFE0D5BEC0
struct UGA_Outlander_AntiMaterialCharge_C_Cancelled_B8EA350A44D63FB1DD194AAFE0D5BEC0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Triggered_B8EA350A44D63FB1DD194AAFE0D5BEC0
struct UGA_Outlander_AntiMaterialCharge_C_Triggered_B8EA350A44D63FB1DD194AAFE0D5BEC0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Completed_4B428B5A4D8524C0C30E8C9BB546A2B1
struct UGA_Outlander_AntiMaterialCharge_C_Completed_4B428B5A4D8524C0C30E8C9BB546A2B1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Cancelled_4B428B5A4D8524C0C30E8C9BB546A2B1
struct UGA_Outlander_AntiMaterialCharge_C_Cancelled_4B428B5A4D8524C0C30E8C9BB546A2B1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Triggered_4B428B5A4D8524C0C30E8C9BB546A2B1
struct UGA_Outlander_AntiMaterialCharge_C_Triggered_4B428B5A4D8524C0C30E8C9BB546A2B1_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Completed_F554B74B41AD5D3BE40CF886C8B107ED
struct UGA_Outlander_AntiMaterialCharge_C_Completed_F554B74B41AD5D3BE40CF886C8B107ED_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Cancelled_F554B74B41AD5D3BE40CF886C8B107ED
struct UGA_Outlander_AntiMaterialCharge_C_Cancelled_F554B74B41AD5D3BE40CF886C8B107ED_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Triggered_F554B74B41AD5D3BE40CF886C8B107ED
struct UGA_Outlander_AntiMaterialCharge_C_Triggered_F554B74B41AD5D3BE40CF886C8B107ED_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Completed_A618BD6C43698B190A0701A5D0CDE5E0
struct UGA_Outlander_AntiMaterialCharge_C_Completed_A618BD6C43698B190A0701A5D0CDE5E0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Cancelled_A618BD6C43698B190A0701A5D0CDE5E0
struct UGA_Outlander_AntiMaterialCharge_C_Cancelled_A618BD6C43698B190A0701A5D0CDE5E0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Triggered_A618BD6C43698B190A0701A5D0CDE5E0
struct UGA_Outlander_AntiMaterialCharge_C_Triggered_A618BD6C43698B190A0701A5D0CDE5E0_Params
{
	struct FGameplayAbilityTargetDataHandle            TargetData;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTag                                ApplicationTag;                                           // (CPF_Parm)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.K2_ActivateAbility
struct UGA_Outlander_AntiMaterialCharge_C_K2_ActivateAbility_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.K2_OnEndAbility
struct UGA_Outlander_AntiMaterialCharge_C_K2_OnEndAbility_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.OnAbilityInputReleased
struct UGA_Outlander_AntiMaterialCharge_C_OnAbilityInputReleased_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.DefaultAntiMaterial
struct UGA_Outlander_AntiMaterialCharge_C_DefaultAntiMaterial_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.AntiMaterialChargeOverlap
struct UGA_Outlander_AntiMaterialCharge_C_AntiMaterialChargeOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.BindOverlap
struct UGA_Outlander_AntiMaterialCharge_C_BindOverlap_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.ChargeNoDistance
struct UGA_Outlander_AntiMaterialCharge_C_ChargeNoDistance_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.DistanceCharge
struct UGA_Outlander_AntiMaterialCharge_C_DistanceCharge_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.ChargeUpAndDistance
struct UGA_Outlander_AntiMaterialCharge_C_ChargeUpAndDistance_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.UnBindOverlap
struct UGA_Outlander_AntiMaterialCharge_C_UnBindOverlap_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.StartOverlaps
struct UGA_Outlander_AntiMaterialCharge_C_StartOverlaps_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.Distance no Charge
struct UGA_Outlander_AntiMaterialCharge_C_Distance_no_Charge_Params
{
};

// Function GA_Outlander_AntiMaterialCharge.GA_Outlander_AntiMaterialCharge_C.ExecuteUbergraph_GA_Outlander_AntiMaterialCharge
struct UGA_Outlander_AntiMaterialCharge_C_ExecuteUbergraph_GA_Outlander_AntiMaterialCharge_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
