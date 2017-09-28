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

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.OnRep_TargetPawnToTrack
struct AB_BGA_Outlander_Fragment_Bear_C_OnRep_TargetPawnToTrack_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ToggleFireCue
struct AB_BGA_Outlander_Fragment_Bear_C_ToggleFireCue_Params
{
	bool                                               bEnable;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.Is Pawn Inside Pitch Limits
struct AB_BGA_Outlander_Fragment_Bear_C_Is_Pawn_Inside_Pitch_Limits_Params
{
	class AFortPawn*                                   Pawn;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bInsidePitchLimits;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.IsValidTarget
struct AB_BGA_Outlander_Fragment_Bear_C_IsValidTarget_Params
{
	class AFortPawn*                                   PotentialTarget;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeSimpleRangeCheck;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeFiringLimitCheck;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIncludeObstructionCheck;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bValidTarget;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.OnPotentialTargetUntouched
struct AB_BGA_Outlander_Fragment_Bear_C_OnPotentialTargetUntouched_Params
{
	class AFortPawn*                                   UntouchedPotentialTarget;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.OnNewPotentialTargetTouched
struct AB_BGA_Outlander_Fragment_Bear_C_OnNewPotentialTargetTouched_Params
{
	class AFortPawn*                                   PotentialTargetPawn;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ShouldFire
struct AB_BGA_Outlander_Fragment_Bear_C_ShouldFire_Params
{
	bool                                               ShouldFire;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ClearTargetAcquisitionTimer
struct AB_BGA_Outlander_Fragment_Bear_C_ClearTargetAcquisitionTimer_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ClearFiringTimer
struct AB_BGA_Outlander_Fragment_Bear_C_ClearFiringTimer_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SpawnImpactEffects
struct AB_BGA_Outlander_Fragment_Bear_C_SpawnImpactEffects_Params
{
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SpawnTracer
struct AB_BGA_Outlander_Fragment_Bear_C_SpawnTracer_Params
{
	bool                                               bLeftTracer;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.UpdateRotation
struct AB_BGA_Outlander_Fragment_Bear_C_UpdateRotation_Params
{
	class AActor*                                      LookAtActor;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SetTargetAcquisitionTimer
struct AB_BGA_Outlander_Fragment_Bear_C_SetTargetAcquisitionTimer_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SetFiringTimer
struct AB_BGA_Outlander_Fragment_Bear_C_SetFiringTimer_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.AttemptFire
struct AB_BGA_Outlander_Fragment_Bear_C_AttemptFire_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.AttemptAcquireTarget
struct AB_BGA_Outlander_Fragment_Bear_C_AttemptAcquireTarget_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.GetTargetingSourceTransform
struct AB_BGA_Outlander_Fragment_Bear_C_GetTargetingSourceTransform_Params
{
	struct FTransform                                  ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.UserConstructionScript
struct AB_BGA_Outlander_Fragment_Bear_C_UserConstructionScript_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SpawnTimeline__FinishedFunc
struct AB_BGA_Outlander_Fragment_Bear_C_SpawnTimeline__FinishedFunc_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SpawnTimeline__UpdateFunc
struct AB_BGA_Outlander_Fragment_Bear_C_SpawnTimeline__UpdateFunc_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ReceiveBeginPlay
struct AB_BGA_Outlander_Fragment_Bear_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.GameplayCue.Impact.Physical
struct AB_BGA_Outlander_Fragment_Bear_C_GameplayCue_Impact_Physical_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ReceiveTick
struct AB_BGA_Outlander_Fragment_Bear_C_ReceiveTick_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.OnDeathPlayEffects
struct AB_BGA_Outlander_Fragment_Bear_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.OnDeathServer
struct AB_BGA_Outlander_Fragment_Bear_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_Outlander_Fragment_Bear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_271_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature
struct AB_BGA_Outlander_Fragment_Bear_C_BndEvt__SightRadiusSphereComponent_K2Node_ComponentBoundEvent_275_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.KilledTargetPawn
struct AB_BGA_Outlander_Fragment_Bear_C_KilledTargetPawn_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.GameplayCue.Weapons.Activation
struct AB_BGA_Outlander_Fragment_Bear_C_GameplayCue_Weapons_Activation_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.SetTargetPawn
struct AB_BGA_Outlander_Fragment_Bear_C_SetTargetPawn_Params
{
	class AFortPawn*                                   NewTargetPawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.OnTargetPawnDied
struct AB_BGA_Outlander_Fragment_Bear_C_OnTargetPawnDied_Params
{
	class AActor*                                      DamagedActor;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController*                                 InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         FHitComponent;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FName                                       BoneName;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.Lifespan_Adjust
struct AB_BGA_Outlander_Fragment_Bear_C_Lifespan_Adjust_Params
{
	float                                              LifeTime;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.Range_Adjust
struct AB_BGA_Outlander_Fragment_Bear_C_Range_Adjust_Params
{
	bool                                               UpgradedRange;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.FireRate_Adjust
struct AB_BGA_Outlander_Fragment_Bear_C_FireRate_Adjust_Params
{
	float                                              RoundsPerSecond;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.FireVentParticles
struct AB_BGA_Outlander_Fragment_Bear_C_FireVentParticles_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.PlaySpawnAnimation
struct AB_BGA_Outlander_Fragment_Bear_C_PlaySpawnAnimation_Params
{
};

// Function B_BGA_Outlander_Fragment_Bear.B_BGA_Outlander_Fragment_Bear_C.ExecuteUbergraph_B_BGA_Outlander_Fragment_Bear
struct AB_BGA_Outlander_Fragment_Bear_C_ExecuteUbergraph_B_BGA_Outlander_Fragment_Bear_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
