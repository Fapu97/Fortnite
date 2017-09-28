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

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.KillPawnOnceTransformedToChest
struct AHuskPawn_Mimic_C_KillPawnOnceTransformedToChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChest
struct AHuskPawn_Mimic_C_BecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.BecomeChestIfConditionsSatisfied
struct AHuskPawn_Mimic_C_BecomeChestIfConditionsSatisfied_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.InitMimic
struct AHuskPawn_Mimic_C_InitMimic_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.UserConstructionScript
struct AHuskPawn_Mimic_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceiveBeginPlay
struct AHuskPawn_Mimic_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.OnDeathPlayEffects
struct AHuskPawn_Mimic_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.TryToBecomeChest
struct AHuskPawn_Mimic_C_TryToBecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.Event_LastTimeDamaged
struct AHuskPawn_Mimic_C_Event_LastTimeDamaged_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReturnToSpawnAndBecomeChest
struct AHuskPawn_Mimic_C_ReturnToSpawnAndBecomeChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ResetTimerForBecomingChest
struct AHuskPawn_Mimic_C_ResetTimerForBecomingChest_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ReceivePossessed
struct AHuskPawn_Mimic_C_ReceivePossessed_Params
{
	class AController**                                NewController;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.DisableRibbons
struct AHuskPawn_Mimic_C_DisableRibbons_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.EnableRibbons
struct AHuskPawn_Mimic_C_EnableRibbons_Params
{
};

// Function HuskPawn_Mimic.HuskPawn_Mimic_C.ExecuteUbergraph_HuskPawn_Mimic
struct AHuskPawn_Mimic_C_ExecuteUbergraph_HuskPawn_Mimic_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
