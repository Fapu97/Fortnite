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

// Function HuskPawn_Pitcher.HuskPawn_Pitcher_C.UserConstructionScript
struct AHuskPawn_Pitcher_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Pitcher.HuskPawn_Pitcher_C.OnDeathPlayEffects
struct AHuskPawn_Pitcher_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Pitcher.HuskPawn_Pitcher_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
struct AHuskPawn_Pitcher_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params
{
	TEnumAsByte<EGameplayCueEvent>*                    EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters*                     Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn_Pitcher.HuskPawn_Pitcher_C.ExecuteUbergraph_HuskPawn_Pitcher
struct AHuskPawn_Pitcher_C_ExecuteUbergraph_HuskPawn_Pitcher_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
