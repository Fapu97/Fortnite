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

// Function BlasterPawn.BlasterPawn_C.DestroyLaserBeam
struct ABlasterPawn_C_DestroyLaserBeam_Params
{
};

// Function BlasterPawn.BlasterPawn_C.CreateLaserBeam
struct ABlasterPawn_C_CreateLaserBeam_Params
{
	struct FVector                                     Socket_Location__World_;                                  // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     Impact_Point__World_;                                     // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BlasterPawn.BlasterPawn_C.HideLaserBeam
struct ABlasterPawn_C_HideLaserBeam_Params
{
	bool                                               Hidden;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BlasterPawn.BlasterPawn_C.OnRep_HeadEffectStatus
struct ABlasterPawn_C_OnRep_HeadEffectStatus_Params
{
};

// Function BlasterPawn.BlasterPawn_C.UserConstructionScript
struct ABlasterPawn_C_UserConstructionScript_Params
{
};

// Function BlasterPawn.BlasterPawn_C.LaserBeamAnims__FinishedFunc
struct ABlasterPawn_C_LaserBeamAnims__FinishedFunc_Params
{
};

// Function BlasterPawn.BlasterPawn_C.LaserBeamAnims__UpdateFunc
struct ABlasterPawn_C_LaserBeamAnims__UpdateFunc_Params
{
};

// Function BlasterPawn.BlasterPawn_C.OnDeathServer
struct ABlasterPawn_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function BlasterPawn.BlasterPawn_C.GameplayCue.Impact.Physical.Energy
struct ABlasterPawn_C_GameplayCue_Impact_Physical_Energy_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function BlasterPawn.BlasterPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature
struct ABlasterPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_1_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BlasterPawn.BlasterPawn_C.DestroyLaserBeamMeshSafety
struct ABlasterPawn_C_DestroyLaserBeamMeshSafety_Params
{
};

// Function BlasterPawn.BlasterPawn_C.OnEndSleepEffects
struct ABlasterPawn_C_OnEndSleepEffects_Params
{
};

// Function BlasterPawn.BlasterPawn_C.ActivateEffectsPostSpawnIn
struct ABlasterPawn_C_ActivateEffectsPostSpawnIn_Params
{
};

// Function BlasterPawn.BlasterPawn_C.DeactivateEffectsPreDespawn
struct ABlasterPawn_C_DeactivateEffectsPreDespawn_Params
{
};

// Function BlasterPawn.BlasterPawn_C.OnBeginSleepEffects
struct ABlasterPawn_C_OnBeginSleepEffects_Params
{
};

// Function BlasterPawn.BlasterPawn_C.ExecuteUbergraph_BlasterPawn
struct ABlasterPawn_C_ExecuteUbergraph_BlasterPawn_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
