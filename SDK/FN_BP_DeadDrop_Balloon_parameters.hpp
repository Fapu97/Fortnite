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

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.GetAffectingDistance
struct ABP_DeadDrop_Balloon_C_GetAffectingDistance_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.GetAffectingType
struct ABP_DeadDrop_Balloon_C_GetAffectingType_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_PlayDestroyFX
struct ABP_DeadDrop_Balloon_C_OnRep_PlayDestroyFX_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Pick Dead Drop Landing Zone Actor
struct ABP_DeadDrop_Balloon_C_Pick_Dead_Drop_Landing_Zone_Actor_Params
{
	class UBillboardComponent*                         ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Spawn Dead Drop Landing Zone
struct ABP_DeadDrop_Balloon_C_Spawn_Dead_Drop_Landing_Zone_Params
{
	class USceneComponent*                             Spawn_Loc;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Is Balloon Still Falling
struct ABP_DeadDrop_Balloon_C_Is_Balloon_Still_Falling_Params
{
	bool                                               Falling;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Is Server World Start Time Valid
struct ABP_DeadDrop_Balloon_C_Is_Server_World_Start_Time_Valid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Calculate Balloon Rising Lerp Time
struct ABP_DeadDrop_Balloon_C_Calculate_Balloon_Rising_Lerp_Time_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Calculate Balloon Falling Lerp Time
struct ABP_DeadDrop_Balloon_C_Calculate_Balloon_Falling_Lerp_Time_Params
{
	float                                              ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Is Prepare Timer Valid
struct ABP_DeadDrop_Balloon_C_Is_Prepare_Timer_Valid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Is Server World Time Valid
struct ABP_DeadDrop_Balloon_C_Is_Server_World_Time_Valid_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_HideNonDestuctibleBalloon
struct ABP_DeadDrop_Balloon_C_OnRep_HideNonDestuctibleBalloon_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_BalloonShotDown
struct ABP_DeadDrop_Balloon_C_OnRep_BalloonShotDown_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_ServerBalloonRise
struct ABP_DeadDrop_Balloon_C_OnRep_ServerBalloonRise_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_BalloonOnGround
struct ABP_DeadDrop_Balloon_C_OnRep_BalloonOnGround_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_SeperateBalloon
struct ABP_DeadDrop_Balloon_C_OnRep_SeperateBalloon_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.ShouldDie
struct ABP_DeadDrop_Balloon_C_ShouldDie_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AController**                                EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.MoveBalloonDown
struct ABP_DeadDrop_Balloon_C_MoveBalloonDown_Params
{
	float                                              TimeLerpAlpha;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     InitialBalloonPosition;                                   // (CPF_Parm, CPF_IsPlainOldData)
	struct FVector                                     SeperationPosition;                                       // (CPF_Parm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnRep_ServerDropTime
struct ABP_DeadDrop_Balloon_C_OnRep_ServerDropTime_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.BlueprintCanInteract
struct ABP_DeadDrop_Balloon_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.UserConstructionScript
struct ABP_DeadDrop_Balloon_C_UserConstructionScript_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Timeline_1__FinishedFunc
struct ABP_DeadDrop_Balloon_C_Timeline_1__FinishedFunc_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.Timeline_1__UpdateFunc
struct ABP_DeadDrop_Balloon_C_Timeline_1__UpdateFunc_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.BndEvt__Trigger_K2Node_ComponentBoundEvent_36_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DeadDrop_Balloon_C_BndEvt__Trigger_K2Node_ComponentBoundEvent_36_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleMissionEvent_DropBalloon
struct ABP_DeadDrop_Balloon_C_HandleMissionEvent_DropBalloon_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.DropBalloon
struct ABP_DeadDrop_Balloon_C_DropBalloon_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.BndEvt__SuicideTrigger_K2Node_ComponentBoundEvent_330_ComponentBeginOverlapSignature__DelegateSignature
struct ABP_DeadDrop_Balloon_C_BndEvt__SuicideTrigger_K2Node_ComponentBoundEvent_330_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.ReceiveBeginPlay
struct ABP_DeadDrop_Balloon_C_ReceiveBeginPlay_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleMissionEvent_BalloonSeperation
struct ABP_DeadDrop_Balloon_C_HandleMissionEvent_BalloonSeperation_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.BreakRopes
struct ABP_DeadDrop_Balloon_C_BreakRopes_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.GroundDataObject
struct ABP_DeadDrop_Balloon_C_GroundDataObject_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.BalloonRise
struct ABP_DeadDrop_Balloon_C_BalloonRise_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleMissionEvent_PingObjectiveLocation
struct ABP_DeadDrop_Balloon_C_HandleMissionEvent_PingObjectiveLocation_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleMissionEvent_ReduceTimer
struct ABP_DeadDrop_Balloon_C_HandleMissionEvent_ReduceTimer_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.PatrolWardRadius
struct ABP_DeadDrop_Balloon_C_PatrolWardRadius_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleBalloonFallingUpdate
struct ABP_DeadDrop_Balloon_C_HandleBalloonFallingUpdate_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleBalloonRisingUpdate
struct ABP_DeadDrop_Balloon_C_HandleBalloonRisingUpdate_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnDeathServer
struct ABP_DeadDrop_Balloon_C_OnDeathServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.ShowHealthBar
struct ABP_DeadDrop_Balloon_C_ShowHealthBar_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnDamageServer
struct ABP_DeadDrop_Balloon_C_OnDamageServer_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AController**                                InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.CutHole
struct ABP_DeadDrop_Balloon_C_CutHole_Params
{
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleMissionEvent_CompleteLocateObj
struct ABP_DeadDrop_Balloon_C_HandleMissionEvent_CompleteLocateObj_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.HandleMissionEvent_AllowBalloonDamage
struct ABP_DeadDrop_Balloon_C_HandleMissionEvent_AllowBalloonDamage_Params
{
	struct FGuid                                       MissionGuid;                                              // (CPF_Parm, CPF_IsPlainOldData)
	struct FGameplayTagContainer                       ObjectiveHandle;                                          // (CPF_Parm)
	class UFortMissionEventParams*                     Params;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               DO_NOT_USE_THIS_OR_VARIABLES_BELOW;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UObject*                                     EventFocus;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UDataAsset*                                  EventContent;                                             // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      EventInstigator;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GenericInt;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              GenericFloat;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       GenericText;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FGameplayTagContainer                       GameplayTags;                                             // (CPF_Parm)
	struct FFortMissionEvent                           MissionEvent;                                             // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.OnBalloonVisibilityChanged
struct ABP_DeadDrop_Balloon_C_OnBalloonVisibilityChanged_Params
{
	class AActor*                                      Actor;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortTeam>                             TeamObserving;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bVisible;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_DeadDrop_Balloon.BP_DeadDrop_Balloon_C.ExecuteUbergraph_BP_DeadDrop_Balloon
struct ABP_DeadDrop_Balloon_C_ExecuteUbergraph_BP_DeadDrop_Balloon_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
