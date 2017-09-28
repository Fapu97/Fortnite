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

// Function TakerPawn.TakerPawn_C.StopMaterialTimeline
struct ATakerPawn_C_StopMaterialTimeline_Params
{
};

// Function TakerPawn.TakerPawn_C.StopDeathFX
struct ATakerPawn_C_StopDeathFX_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerAirborneTest
struct ATakerPawn_C_TakerAirborneTest_Params
{
	struct FVector                                     ImpactPointOrTraceEndBelowTaker;                          // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               Airborne;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.SetTakerRotationRate
struct ATakerPawn_C_SetTakerRotationRate_Params
{
	float                                              YawRate;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ResetTakerRotationRateToDefault
struct ATakerPawn_C_ResetTakerRotationRateToDefault_Params
{
};

// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckMontageSection
struct ATakerPawn_C_OnRep_SoulSuckMontageSection_Params
{
};

// Function TakerPawn.TakerPawn_C.MarkForDeath
struct ATakerPawn_C_MarkForDeath_Params
{
};

// Function TakerPawn.TakerPawn_C.OnRep_SoulSuckEffectActivated
struct ATakerPawn_C_OnRep_SoulSuckEffectActivated_Params
{
};

// Function TakerPawn.TakerPawn_C.ApplyPortalEffect
struct ATakerPawn_C_ApplyPortalEffect_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Portal_Out_Direction;                                     // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.UserConstructionScript
struct ATakerPawn_C_UserConstructionScript_Params
{
};

// Function TakerPawn.TakerPawn_C.Timeline_0__FinishedFunc
struct ATakerPawn_C_Timeline_0__FinishedFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.Timeline_0__UpdateFunc
struct ATakerPawn_C_Timeline_0__UpdateFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.Timeline_0__Spawn__EventFunc
struct ATakerPawn_C_Timeline_0__Spawn__EventFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__FinishedFunc
struct ATakerPawn_C_UpdateMaterialParamsTL__FinishedFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.UpdateMaterialParamsTL__UpdateFunc
struct ATakerPawn_C_UpdateMaterialParamsTL__UpdateFunc_Params
{
};

// Function TakerPawn.TakerPawn_C.MantleStart
struct ATakerPawn_C_MantleStart_Params
{
	struct FVector                                     StartPos;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     MidPos;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     EndPos;                                                   // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               LowWall;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               MidWall;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               FullWall;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               WindowWall;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.MantleEnd
struct ATakerPawn_C_MantleEnd_Params
{
};

// Function TakerPawn.TakerPawn_C.HuskEvadeStart
struct ATakerPawn_C_HuskEvadeStart_Params
{
};

// Function TakerPawn.TakerPawn_C.VerifyTakerAttack
struct ATakerPawn_C_VerifyTakerAttack_Params
{
	bool                                               SpecialAttack;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Swoop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Soul_Suck;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Portal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ResetTakerSpecialAttackTimer
struct ATakerPawn_C_ResetTakerSpecialAttackTimer_Params
{
	bool                                               Swoop;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               SoulSuckMelee;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Portal;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerWallPortalBehavior
struct ATakerPawn_C_TakerWallPortalBehavior_Params
{
	class AActor*                                      BuildingPart;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBTTask_BlueprintBase*                       Task;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     DesiredMoveLocation;                                      // (CPF_Parm, CPF_IsPlainOldData)
	bool                                               Debug;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.IsTakerWallPortalAvailable
struct ATakerPawn_C_IsTakerWallPortalAvailable_Params
{
	bool                                               Portal_Available_;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerAttackFSM
struct ATakerPawn_C_TakerAttackFSM_Params
{
	bool                                               SuccessfulHit;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.PortalAdd
struct ATakerPawn_C_PortalAdd_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function TakerPawn.TakerPawn_C.PortalClear
struct ATakerPawn_C_PortalClear_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckInterrupted
struct ATakerPawn_C_TakerSoulSuckInterrupted_Params
{
};

// Function TakerPawn.TakerPawn_C.PortalGet
struct ATakerPawn_C_PortalGet_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingActor*>                      BuildingActorList;                                        // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	class AActor*                                      BT;                                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.PortalFX
struct ATakerPawn_C_PortalFX_Params
{
};

// Function TakerPawn.TakerPawn_C.PortalCollision
struct ATakerPawn_C_PortalCollision_Params
{
	bool                                               Collide_;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.ReceiveBeginPlay
struct ATakerPawn_C_ReceiveBeginPlay_Params
{
};

// Function TakerPawn.TakerPawn_C.BeginTakerSwoopAttack
struct ATakerPawn_C_BeginTakerSwoopAttack_Params
{
};

// Function TakerPawn.TakerPawn_C.EndTakerSwoopAttack
struct ATakerPawn_C_EndTakerSwoopAttack_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundBegin
struct ATakerPawn_C_TakerSoulSuckSoundBegin_Params
{
	bool                                               Success;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckSoundEnd
struct ATakerPawn_C_TakerSoulSuckSoundEnd_Params
{
};

// Function TakerPawn.TakerPawn_C.DoPortal
struct ATakerPawn_C_DoPortal_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     PortalOutDirection;                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOn
struct ATakerPawn_C_TakerSoulSuckEffectOn_Params
{
};

// Function TakerPawn.TakerPawn_C.TakerSoulSuckEffectOff
struct ATakerPawn_C_TakerSoulSuckEffectOff_Params
{
};

// Function TakerPawn.TakerPawn_C.OnDeathPlayEffects
struct ATakerPawn_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature
struct ATakerPawn_C_BndEvt__FortLOSComponent_K2Node_ComponentBoundEvent_66_OnHasBeenFoundDelSignature__DelegateSignature_Params
{
	class AFortPlayerController*                       PlayerController;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Impact.Physical.Creature
struct ATakerPawn_C_GameplayCue_Impact_Physical_Creature_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.ModifySwoopOverlap
struct ATakerPawn_C_ModifySwoopOverlap_Params
{
};

// Function TakerPawn.TakerPawn_C.StartOverlapBox
struct ATakerPawn_C_StartOverlapBox_Params
{
};

// Function TakerPawn.TakerPawn_C.StopOverlapBox
struct ATakerPawn_C_StopOverlapBox_Params
{
};

// Function TakerPawn.TakerPawn_C.OnDamagePlayEffects
struct ATakerPawn_C_OnDamagePlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.AdditiveHitReactDelay
struct ATakerPawn_C_AdditiveHitReactDelay_Params
{
};

// Function TakerPawn.TakerPawn_C.SpawnDeathFX
struct ATakerPawn_C_SpawnDeathFX_Params
{
};

// Function TakerPawn.TakerPawn_C.DoPortalFailsafe
struct ATakerPawn_C_DoPortalFailsafe_Params
{
	class ABuildingActor*                              BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class ABuildingSMActor*>                    ModifiedBuildings;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FVector                                     PortalOutDirection;                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.OnBeginSleepEffects
struct ATakerPawn_C_OnBeginSleepEffects_Params
{
};

// Function TakerPawn.TakerPawn_C.OnEndSleepEffects
struct ATakerPawn_C_OnEndSleepEffects_Params
{
};

// Function TakerPawn.TakerPawn_C.BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature
struct ATakerPawn_C_BndEvt__CapsuleComponent_K2Node_ComponentBoundEvent_2_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function TakerPawn.TakerPawn_C.OnStartedEncounterSpawn
struct ATakerPawn_C_OnStartedEncounterSpawn_Params
{
};

// Function TakerPawn.TakerPawn_C.OnFinishedEncounterSpawn
struct ATakerPawn_C_OnFinishedEncounterSpawn_Params
{
};

// Function TakerPawn.TakerPawn_C.GameplayCue.GameplayModifiers.OnLowHealth.Enrage
struct ATakerPawn_C_GameplayCue_GameplayModifiers_OnLowHealth_Enrage_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Reapplied
struct ATakerPawn_C_GameplayCue_Shield_Reapplied_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Shield.Destroyed
struct ATakerPawn_C_GameplayCue_Shield_Destroyed_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.GameplayCue.Damage.Shielded
struct ATakerPawn_C_GameplayCue_Damage_Shielded_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function TakerPawn.TakerPawn_C.ExecuteUbergraph_TakerPawn
struct ATakerPawn_C_ExecuteUbergraph_TakerPawn_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
