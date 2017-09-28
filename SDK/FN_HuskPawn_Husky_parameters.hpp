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

// Function HuskPawn_Husky.HuskPawn_Husky_C.UserConstructionScript
struct AHuskPawn_Husky_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.IgnitePropaneTank
struct AHuskPawn_Husky_C_IgnitePropaneTank_Params
{
	class AFortPawn*                                   Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              RemainingFuseTime;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               JustDrop;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.FSMRemovePropaneTank
struct AHuskPawn_Husky_C_FSMRemovePropaneTank_Params
{
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.FSMFailedToSpawnTank
struct AHuskPawn_Husky_C_FSMFailedToSpawnTank_Params
{
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.FSMBeginPropaneTankMelee
struct AHuskPawn_Husky_C_FSMBeginPropaneTankMelee_Params
{
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.BeeCloudDespawned
struct AHuskPawn_Husky_C_BeeCloudDespawned_Params
{
	class AFortProjectileBase*                         Cloud;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.ManageBurpEffect
struct AHuskPawn_Husky_C_ManageBurpEffect_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.PlayAdditiveHitReacts
struct AHuskPawn_Husky_C_PlayAdditiveHitReacts_Params
{
	struct FVector*                                    HitDirection;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.SpawnDeathFX
struct AHuskPawn_Husky_C_SpawnDeathFX_Params
{
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.OnDeathPlayEffects
struct AHuskPawn_Husky_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.KillDeathFX_2
struct AHuskPawn_Husky_C_KillDeathFX_2_Params
{
};

// Function HuskPawn_Husky.HuskPawn_Husky_C.ExecuteUbergraph_HuskPawn_Husky
struct AHuskPawn_Husky_C_ExecuteUbergraph_HuskPawn_Husky_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
