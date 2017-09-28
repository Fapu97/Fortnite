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

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.SpawnHeadFX
struct AHuskPawn_Bombshell_C_SpawnHeadFX_Params
{
	class UParticleSystemComponent*                    Output_Get;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.UserConstructionScript
struct AHuskPawn_Bombshell_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.PawnUniqueIDSet
struct AHuskPawn_Bombshell_C_PawnUniqueIDSet_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.OnDeathPlayEffects
struct AHuskPawn_Bombshell_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.OnBeginSleepEffects
struct AHuskPawn_Bombshell_C_OnBeginSleepEffects_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.OnEndSleepEffects
struct AHuskPawn_Bombshell_C_OnEndSleepEffects_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ActivateEffectsPostSpawnIn
struct AHuskPawn_Bombshell_C_ActivateEffectsPostSpawnIn_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.DeactivateEffectsPreDespawn
struct AHuskPawn_Bombshell_C_DeactivateEffectsPreDespawn_Params
{
};

// Function HuskPawn_Bombshell.HuskPawn_Bombshell_C.ExecuteUbergraph_HuskPawn_Bombshell
struct AHuskPawn_Bombshell_C_ExecuteUbergraph_HuskPawn_Bombshell_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
