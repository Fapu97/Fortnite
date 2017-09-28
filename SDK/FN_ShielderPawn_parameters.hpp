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

// Function ShielderPawn.ShielderPawn_C.SetMiniMapIconStatus
struct AShielderPawn_C_SetMiniMapIconStatus_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnRep_bShieldApplied
struct AShielderPawn_C_OnRep_bShieldApplied_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UpdateShieldFXVisibility
struct AShielderPawn_C_UpdateShieldFXVisibility_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ApplyShield
struct AShielderPawn_C_ApplyShield_Params
{
};

// Function ShielderPawn.ShielderPawn_C.GameTimeString
struct AShielderPawn_C_GameTimeString_Params
{
	struct FString                                     NewParam;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderSpringArm
struct AShielderPawn_C_OnRep_ShielderSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.DebugLineAndSphere
struct AShielderPawn_C_DebugLineAndSphere_Params
{
	bool                                               Line;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                LineColor;                                                // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               Sphere;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                SphereColor;                                              // (CPF_Parm, CPF_IsPlainOldData)
	float                                              VisibilityOffset;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.OnRep_ShielderVisible
struct AShielderPawn_C_OnRep_ShielderVisible_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AttachShielderToSpringArm
struct AShielderPawn_C_AttachShielderToSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AttachSpringArmToAttachPawn
struct AShielderPawn_C_AttachSpringArmToAttachPawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnRep_SpringArmTargetRotation
struct AShielderPawn_C_OnRep_SpringArmTargetRotation_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UserConstructionScript
struct AShielderPawn_C_UserConstructionScript_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__FinishedFunc
struct AShielderPawn_C_InterpShielderToNewLocation__FinishedFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InterpShielderToNewLocation__UpdateFunc
struct AShielderPawn_C_InterpShielderToNewLocation__UpdateFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RotateShielder__FinishedFunc
struct AShielderPawn_C_RotateShielder__FinishedFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RotateShielder__UpdateFunc
struct AShielderPawn_C_RotateShielder__UpdateFunc_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnStunned
struct AShielderPawn_C_OnStunned_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnDamageServer
struct AShielderPawn_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function ShielderPawn.ShielderPawn_C.OnKnockedback
struct AShielderPawn_C_OnKnockedback_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ReceiveBeginPlay
struct AShielderPawn_C_ReceiveBeginPlay_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnDeathServer
struct AShielderPawn_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function ShielderPawn.ShielderPawn_C.ShielderAttachComplete
struct AShielderPawn_C_ShielderAttachComplete_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnEncounterEnemySpawned
struct AShielderPawn_C_OnEncounterEnemySpawned_Params
{
	class UFortAIEncounterInfo*                        Encounter;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortAIPawn*                                 SpawnedEnemy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.SetShielderOrphanStatus
struct AShielderPawn_C_SetShielderOrphanStatus_Params
{
	bool                                               Orphaned;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               GiveZVelocityOnDetach;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FString                                     Reason;                                                   // (CPF_Parm, CPF_ZeroConstructor)
};

// Function ShielderPawn.ShielderPawn_C.OnComponentBeginOverlap
struct AShielderPawn_C_OnComponentBeginOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.VerifyPotentialAttachPawnIsValidAndAttachToIt
struct AShielderPawn_C_VerifyPotentialAttachPawnIsValidAndAttachToIt_Params
{
	class AFortPawn*                                   PotentialAttachPawn;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               HiddenAttach;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.GrabRandomPotentialAttachPawn
struct AShielderPawn_C_GrabRandomPotentialAttachPawn_Params
{
	bool                                               HiddenAttach;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.AttachShielderToPotentialAttachPawn
struct AShielderPawn_C_AttachShielderToPotentialAttachPawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.BindEncounterSpawn
struct AShielderPawn_C_BindEncounterSpawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ReApplyShield
struct AShielderPawn_C_ReApplyShield_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UnBindEncounterSpawn
struct AShielderPawn_C_UnBindEncounterSpawn_Params
{
};

// Function ShielderPawn.ShielderPawn_C.OnComponentEndOverlap
struct AShielderPawn_C_OnComponentEndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.ShielderShieldBroken
struct AShielderPawn_C_ShielderShieldBroken_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AnimateSpringArm
struct AShielderPawn_C_AnimateSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AttachPawnDead
struct AShielderPawn_C_AttachPawnDead_Params
{
	bool                                               Despawn;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.OrphanForceKillTimer
struct AShielderPawn_C_OrphanForceKillTimer_Params
{
};

// Function ShielderPawn.ShielderPawn_C.BindProxOverlap
struct AShielderPawn_C_BindProxOverlap_Params
{
};

// Function ShielderPawn.ShielderPawn_C.UnBindProxOverlap
struct AShielderPawn_C_UnBindProxOverlap_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InterpShielderToSpringArm
struct AShielderPawn_C_InterpShielderToSpringArm_Params
{
};

// Function ShielderPawn.ShielderPawn_C.RotateShielderForward
struct AShielderPawn_C_RotateShielderForward_Params
{
};

// Function ShielderPawn.ShielderPawn_C.AdditiveHitReactDelay
struct AShielderPawn_C_AdditiveHitReactDelay_Params
{
};

// Function ShielderPawn.ShielderPawn_C.InvisibleOrphanTick
struct AShielderPawn_C_InvisibleOrphanTick_Params
{
};

// Function ShielderPawn.ShielderPawn_C.ReceiveEndPlay
struct AShielderPawn_C_ReceiveEndPlay_Params
{
	TEnumAsByte<EEndPlayReason>*                       EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ShielderPawn.ShielderPawn_C.ExecuteUbergraph_ShielderPawn
struct AShielderPawn_C_ExecuteUbergraph_ShielderPawn_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
