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

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ShouldDie
struct AB_BGA_SploderPropaneTank_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController**                                EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnRep_TankWarningFXEnabled
struct AB_BGA_SploderPropaneTank_C_OnRep_TankWarningFXEnabled_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.Propane Tank Warning FX and Audio Status
struct AB_BGA_SploderPropaneTank_C_Propane_Tank_Warning_FX_and_Audio_Status_Params
{
	bool                                               Enabled;                                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnRep_Thrown
struct AB_BGA_SploderPropaneTank_C_OnRep_Thrown_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.SetTankInBT
struct AB_BGA_SploderPropaneTank_C_SetTankInBT_Params
{
	class UObject*                                     ObjectToPassToBT;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnRep_TankOnGround
struct AB_BGA_SploderPropaneTank_C_OnRep_TankOnGround_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnRep_Dropped
struct AB_BGA_SploderPropaneTank_C_OnRep_Dropped_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnRep_IsDestroyed
struct AB_BGA_SploderPropaneTank_C_OnRep_IsDestroyed_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.UserConstructionScript
struct AB_BGA_SploderPropaneTank_C_UserConstructionScript_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.TankWiggle__FinishedFunc
struct AB_BGA_SploderPropaneTank_C_TankWiggle__FinishedFunc_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.TankWiggle__UpdateFunc
struct AB_BGA_SploderPropaneTank_C_TankWiggle__UpdateFunc_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ExpandBeforeExplode__FinishedFunc
struct AB_BGA_SploderPropaneTank_C_ExpandBeforeExplode__FinishedFunc_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ExpandBeforeExplode__UpdateFunc
struct AB_BGA_SploderPropaneTank_C_ExpandBeforeExplode__UpdateFunc_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ReceiveHit
struct AB_BGA_SploderPropaneTank_C_ReceiveHit_Params
{
	class UPrimitiveComponent**                        MyComp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     Other;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent**                        OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSelfMoved;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector*                                    HitLocation;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    HitNormal;                                                // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector*                                    NormalImpulse;                                            // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 Hit;                                                      // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_29_OnProjectileStopDelegate__DelegateSignature
struct AB_BGA_SploderPropaneTank_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_29_OnProjectileStopDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_32_OnProjectileBounceDelegate__DelegateSignature
struct AB_BGA_SploderPropaneTank_C_BndEvt__ProjectileMovement_K2Node_ComponentBoundEvent_32_OnProjectileBounceDelegate__DelegateSignature_Params
{
	struct FHitResult                                  ImpactResult;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	struct FVector                                     ImpactVelocity;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnDamageServer
struct AB_BGA_SploderPropaneTank_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ReceiveDestroyed
struct AB_BGA_SploderPropaneTank_C_ReceiveDestroyed_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.OnDeathServer
struct AB_BGA_SploderPropaneTank_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.BounceOrImpactSound
struct AB_BGA_SploderPropaneTank_C_BounceOrImpactSound_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.BounceOrImpactTankWiggle
struct AB_BGA_SploderPropaneTank_C_BounceOrImpactTankWiggle_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ExpandThenExplode
struct AB_BGA_SploderPropaneTank_C_ExpandThenExplode_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ExplodeNow
struct AB_BGA_SploderPropaneTank_C_ExplodeNow_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.DropOrExplodeTank
struct AB_BGA_SploderPropaneTank_C_DropOrExplodeTank_Params
{
	bool                                               MeleeDrop;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class APawn*                                       DamageInstigator;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Drop;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.DelayExplosion?
struct AB_BGA_SploderPropaneTank_C_DelayExplosion__Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.MeleeDamageLaunchesTank
struct AB_BGA_SploderPropaneTank_C_MeleeDamageLaunchesTank_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.TankBaseDestroyed
struct AB_BGA_SploderPropaneTank_C_TankBaseDestroyed_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.MyBaseDiedOrWasReconfigured
struct AB_BGA_SploderPropaneTank_C_MyBaseDiedOrWasReconfigured_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EEndPlayReason>                        EndPlayReason;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.AIKnowsTankHasDropped
struct AB_BGA_SploderPropaneTank_C_AIKnowsTankHasDropped_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.RemindAI
struct AB_BGA_SploderPropaneTank_C_RemindAI_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.MyBaseTookDamage
struct AB_BGA_SploderPropaneTank_C_MyBaseTookDamage_Params
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

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ReceiveBeginPlay
struct AB_BGA_SploderPropaneTank_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.UpdateTankPhysics
struct AB_BGA_SploderPropaneTank_C_UpdateTankPhysics_Params
{
	float                                              ProjectileGravityScale;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              InitialSpeed;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     Velocity;                                                 // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.BndEvt__PropaneTankCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature
struct AB_BGA_SploderPropaneTank_C_BndEvt__PropaneTankCapsule_K2Node_ComponentBoundEvent_0_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.FauxBounceOffOfPawn
struct AB_BGA_SploderPropaneTank_C_FauxBounceOffOfPawn_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.DampenVelocityNearImportantTarget
struct AB_BGA_SploderPropaneTank_C_DampenVelocityNearImportantTarget_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.HastenExplosion
struct AB_BGA_SploderPropaneTank_C_HastenExplosion_Params
{
};

// Function B_BGA_SploderPropaneTank.B_BGA_SploderPropaneTank_C.ExecuteUbergraph_B_BGA_SploderPropaneTank
struct AB_BGA_SploderPropaneTank_C_ExecuteUbergraph_B_BGA_SploderPropaneTank_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
