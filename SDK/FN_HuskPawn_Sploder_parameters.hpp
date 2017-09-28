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

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.OnRep_SploderPropaneTank
struct AHuskPawn_Sploder_C_OnRep_SploderPropaneTank_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.OnRep_HoldingTank
struct AHuskPawn_Sploder_C_OnRep_HoldingTank_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.OnRep_PropaneTank
struct AHuskPawn_Sploder_C_OnRep_PropaneTank_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.OnRep_TankDropped
struct AHuskPawn_Sploder_C_OnRep_TankDropped_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.UserConstructionScript
struct AHuskPawn_Sploder_C_UserConstructionScript_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.ReceiveBeginPlay
struct AHuskPawn_Sploder_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.OnDeathServer
struct AHuskPawn_Sploder_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.ObjectRetrieved
struct AHuskPawn_Sploder_C_ObjectRetrieved_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.SploderThrowsTank
struct AHuskPawn_Sploder_C_SploderThrowsTank_Params
{
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.PlayAdditiveHitReacts
struct AHuskPawn_Sploder_C_PlayAdditiveHitReacts_Params
{
	struct FVector*                                    HitDirection;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.OnOutOfControlResistanceServer
struct AHuskPawn_Sploder_C_OnOutOfControlResistanceServer_Params
{
	float*                                             ImpactDamageDone;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      SourceTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	class AController**                                EffectInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     EffectCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn_Sploder.HuskPawn_Sploder_C.ExecuteUbergraph_HuskPawn_Sploder
struct AHuskPawn_Sploder_C_ExecuteUbergraph_HuskPawn_Sploder_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
