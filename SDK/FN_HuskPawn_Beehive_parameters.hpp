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

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.OnRep_HiveBroken
struct AHuskPawn_Beehive_C_OnRep_HiveBroken_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.UserConstructionScript
struct AHuskPawn_Beehive_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.IgnitePropaneTank
struct AHuskPawn_Beehive_C_IgnitePropaneTank_Params
{
	class AFortPawn*                                   Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingFuseTime;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               JustDrop;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.FSMRemovePropaneTank
struct AHuskPawn_Beehive_C_FSMRemovePropaneTank_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.FSMFailedToSpawnTank
struct AHuskPawn_Beehive_C_FSMFailedToSpawnTank_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.FSMBeginPropaneTankMelee
struct AHuskPawn_Beehive_C_FSMBeginPropaneTankMelee_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.BeeCloudDespawned
struct AHuskPawn_Beehive_C_BeeCloudDespawned_Params
{
	class AFortProjectileBase*                         Cloud;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.ManageBurpEffect
struct AHuskPawn_Beehive_C_ManageBurpEffect_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.ReceiveBeginPlay
struct AHuskPawn_Beehive_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.BeeTrail
struct AHuskPawn_Beehive_C_BeeTrail_Params
{
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.OnDeathServer
struct AHuskPawn_Beehive_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.OnDamageServer
struct AHuskPawn_Beehive_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.GameplayCue.Abilities.Activation.NPC.Generic.RangedCooldownFX
struct AHuskPawn_Beehive_C_GameplayCue_Abilities_Activation_NPC_Generic_RangedCooldownFX_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn_Beehive.HuskPawn_Beehive_C.ExecuteUbergraph_HuskPawn_Beehive
struct AHuskPawn_Beehive_C_ExecuteUbergraph_HuskPawn_Beehive_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
