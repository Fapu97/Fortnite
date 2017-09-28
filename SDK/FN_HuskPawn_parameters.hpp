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

// Function HuskPawn.HuskPawn_C.DestroyAwokenSkeletalMesh
struct AHuskPawn_C_DestroyAwokenSkeletalMesh_Params
{
};

// Function HuskPawn.HuskPawn_C.ActivateElementalAmbientParticles
struct AHuskPawn_C_ActivateElementalAmbientParticles_Params
{
	bool                                               Active;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.SetCharacterScalarMIDs
struct AHuskPawn_C_SetCharacterScalarMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Value;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.SetCharacterVectorMIDs
struct AHuskPawn_C_SetCharacterVectorMIDs_Params
{
	struct FName                                       Parameter_Name;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Value;                                                    // (CPF_Parm, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.PickColorFromAnArrayOfColors
struct AHuskPawn_C_PickColorFromAnArrayOfColors_Params
{
	TArray<struct FLinearColor>                        Array_of_Colors;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FLinearColor                                Color;                                                    // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.StopMaterialTimeline
struct AHuskPawn_C_StopMaterialTimeline_Params
{
};

// Function HuskPawn.HuskPawn_C.StopDeathFX
struct AHuskPawn_C_StopDeathFX_Params
{
};

// Function HuskPawn.HuskPawn_C.OnRep_PumpkinHeadActiveGE
struct AHuskPawn_C_OnRep_PumpkinHeadActiveGE_Params
{
};

// Function HuskPawn.HuskPawn_C.PlayAdditiveHitReacts
struct AHuskPawn_C_PlayAdditiveHitReacts_Params
{
	struct FVector                                     HitDirection;                                             // (CPF_Parm, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.UserConstructionScript
struct AHuskPawn_C_UserConstructionScript_Params
{
};

// Function HuskPawn.HuskPawn_C.EnemyDespawnTL__FinishedFunc
struct AHuskPawn_C_EnemyDespawnTL__FinishedFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.EnemyDespawnTL__UpdateFunc
struct AHuskPawn_C_EnemyDespawnTL__UpdateFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.EnemySpawnInTL__FinishedFunc
struct AHuskPawn_C_EnemySpawnInTL__FinishedFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.EnemySpawnInTL__UpdateFunc
struct AHuskPawn_C_EnemySpawnInTL__UpdateFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.EnemySpawnInTL__Spawn__EventFunc
struct AHuskPawn_C_EnemySpawnInTL__Spawn__EventFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.UpdateMaterialParamsTL__FinishedFunc
struct AHuskPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.UpdateMaterialParamsTL__UpdateFunc
struct AHuskPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerSpawnedAnEnemy
struct AHuskPawn_C_FlingerSpawnedAnEnemy_Params
{
	class AFortAIPawn*                                 EnemySpawned;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortProjectileBase*                         ProjectileThatSpawnedThisEnemy;                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.CanFlingerSpawnAnEnemy
struct AHuskPawn_C_CanFlingerSpawnAnEnemy_Params
{
	class AActor*                                      ActorWhoAsked;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerCanSpawnAnEnemy
struct AHuskPawn_C_FlingerCanSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerCan'tSpawnAnEnemy
struct AHuskPawn_C_FlingerCan_tSpawnAnEnemy_Params
{
};

// Function HuskPawn.HuskPawn_C.FlingerThrewAProjectileContainingAnEnemy
struct AHuskPawn_C_FlingerThrewAProjectileContainingAnEnemy_Params
{
	class AFortProjectileBase*                         Projectile;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyFailedToSpawn
struct AHuskPawn_C_FlingerEnemyFailedToSpawn_Params
{
	class AFortProjectileBase*                         FailedProjectile;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.AlertEnemySpawnedByFlinger
struct AHuskPawn_C_AlertEnemySpawnedByFlinger_Params
{
	struct FVector                                     PushMomentum;                                             // (CPF_Parm, CPF_IsPlainOldData)
	float                                              PushDuration;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       OwningFlinger;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.FlingerEnemyDied
struct AHuskPawn_C_FlingerEnemyDied_Params
{
	class APawn*                                       PawnThatDied;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.MantleStart
struct AHuskPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               LowWall;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MidWall;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FullWall;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WindowWall;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.MantleEnd
struct AHuskPawn_C_MantleEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.HuskEvadeStart
struct AHuskPawn_C_HuskEvadeStart_Params
{
};

// Function HuskPawn.HuskPawn_C.VerifyTakerAttack
struct AHuskPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Swoop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Soul_Suck;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Portal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.ResetTakerSpecialAttackTimer
struct AHuskPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Portal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.BeginTakerSwoopAttack
struct AHuskPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.EndTakerSwoopAttack
struct AHuskPawn_C_EndTakerSwoopAttack_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerWallPortalBehavior
struct AHuskPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               Debug;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.IsTakerWallPortalAvailable
struct AHuskPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerAttackFSM
struct AHuskPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundBegin
struct AHuskPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckSoundEnd
struct AHuskPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalAdd
struct AHuskPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function HuskPawn.HuskPawn_C.PortalClear
struct AHuskPawn_C_PortalClear_Params
{
};

// Function HuskPawn.HuskPawn_C.TakerSoulSuckInterrupted
struct AHuskPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalGet
struct AHuskPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class AActor*                                      BT;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.PortalFX
struct AHuskPawn_C_PortalFX_Params
{
};

// Function HuskPawn.HuskPawn_C.PortalCollision
struct AHuskPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.PawnUniqueIDSet
struct AHuskPawn_C_PawnUniqueIDSet_Params
{
};

// Function HuskPawn.HuskPawn_C.OnBeginSleepEffects
struct AHuskPawn_C_OnBeginSleepEffects_Params
{
};

// Function HuskPawn.HuskPawn_C.OnEndSleepEffects
struct AHuskPawn_C_OnEndSleepEffects_Params
{
};

// Function HuskPawn.HuskPawn_C.AdditiveHitReactDelay
struct AHuskPawn_C_AdditiveHitReactDelay_Params
{
};

// Function HuskPawn.HuskPawn_C.ReceiveBeginPlay
struct AHuskPawn_C_ReceiveBeginPlay_Params
{
};

// Function HuskPawn.HuskPawn_C.OnDamagePlayEffects
struct AHuskPawn_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Impact.Physical.Creature
struct AHuskPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.OnDeathPlayEffects
struct AHuskPawn_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Reapplied
struct AHuskPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Shield.Destroyed
struct AHuskPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.GameplayCue.Damage.Shielded
struct AHuskPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.DeactivateEffectsPreDespawn
struct AHuskPawn_C_DeactivateEffectsPreDespawn_Params
{
};

// Function HuskPawn.HuskPawn_C.ActivateEffectsPostSpawnIn
struct AHuskPawn_C_ActivateEffectsPostSpawnIn_Params
{
};

// Function HuskPawn.HuskPawn_C.DespawnEnemy
struct AHuskPawn_C_DespawnEnemy_Params
{
	struct FVector                                     RiftLocationWS;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function HuskPawn.HuskPawn_C.DebugEnemySpawnIn
struct AHuskPawn_C_DebugEnemySpawnIn_Params
{
};

// Function HuskPawn.HuskPawn_C.OnFinishedEncounterSpawn
struct AHuskPawn_C_OnFinishedEncounterSpawn_Params
{
};

// Function HuskPawn.HuskPawn_C.OnStartedEncounterSpawn
struct AHuskPawn_C_OnStartedEncounterSpawn_Params
{
};

// Function HuskPawn.HuskPawn_C.SpawnDeathFX
struct AHuskPawn_C_SpawnDeathFX_Params
{
};

// Function HuskPawn.HuskPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
struct AHuskPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function HuskPawn.HuskPawn_C.ExecuteUbergraph_HuskPawn
struct AHuskPawn_C_ExecuteUbergraph_HuskPawn_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
