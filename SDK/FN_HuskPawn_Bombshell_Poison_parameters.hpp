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

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.UserConstructionScript
struct AHuskPawn_Bombshell_Poison_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.ReceiveBeginPlay
struct AHuskPawn_Bombshell_Poison_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.OnDeathPlayEffects
struct AHuskPawn_Bombshell_Poison_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.OnBeginSleepEffects
struct AHuskPawn_Bombshell_Poison_C_OnBeginSleepEffects_Params
{
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.OnEndSleepEffects
struct AHuskPawn_Bombshell_Poison_C_OnEndSleepEffects_Params
{
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.ActivateEffectsPostSpawnIn
struct AHuskPawn_Bombshell_Poison_C_ActivateEffectsPostSpawnIn_Params
{
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.DeactivateEffectsPreDespawn
struct AHuskPawn_Bombshell_Poison_C_DeactivateEffectsPreDespawn_Params
{
};

// Function HuskPawn_Bombshell_Poison.HuskPawn_Bombshell_Poison_C.ExecuteUbergraph_HuskPawn_Bombshell_Poison
struct AHuskPawn_Bombshell_Poison_C_ExecuteUbergraph_HuskPawn_Bombshell_Poison_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
