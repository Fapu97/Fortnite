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

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_InitialStaticMeshAnimationIsComplete
struct AB_Constructor_BASE_C_OnRep_InitialStaticMeshAnimationIsComplete_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseSelfApplyGameplaySpec
struct AB_Constructor_BASE_C_BaseSelfApplyGameplaySpec_Params
{
	struct FGameplayEffectSpecHandle                   GE_Spec;                                                  // (CPF_Parm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetBaseVisualGlow
struct AB_Constructor_BASE_C_SetBaseVisualGlow_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetDamageMultiplier
struct AB_Constructor_BASE_C_SetDamageMultiplier_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_CollectResources
struct AB_Constructor_BASE_C_OnRep_CollectResources_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintGetInteractionString
struct AB_Constructor_BASE_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AddResourceToStack
struct AB_Constructor_BASE_C_AddResourceToStack_Params
{
	struct FStructRecyclingResource                    RecyclingResource;                                        // (CPF_Parm)
	class UFortWorldItemDefinition*                    Stored_Resource;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmountToSpawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FStructRecyclingResource                    SetValue;                                                 // (CPF_Parm, CPF_OutParm)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SpawnResourceForRecycling
struct AB_Constructor_BASE_C_SpawnResourceForRecycling_Params
{
	class UFortWorldItemDefinition*                    ItemDefinition;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                AmountToSpawn;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortResourceType>                     ResourceType;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintCanInteract
struct AB_Constructor_BASE_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnRep_BaseIsPlaced
struct AB_Constructor_BASE_C_OnRep_BaseIsPlaced_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.RecycleResources
struct AB_Constructor_BASE_C_RecycleResources_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupHostileEffects
struct AB_Constructor_BASE_C_SetupHostileEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 HostileEffects;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupFriendlyEffects
struct AB_Constructor_BASE_C_SetupFriendlyEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 FriendlyEffects;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBuildingEffects
struct AB_Constructor_BASE_C_SetupBuildingEffects_Params
{
	class UAbilitySystemComponent*                     AbilitySystemComponent;                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 BuildingEffects;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.Setup Base Effect Array
struct AB_Constructor_BASE_C_Setup_Base_Effect_Array_Params
{
	class UAbilitySystemComponent*                     Instigator_Ability_System;                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FBASEGameplayEffect>                 BASEBuildingEffects;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	TArray<struct FBASEGameplayEffect>                 BASEFriendlyEffects;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
	TArray<struct FBASEGameplayEffect>                 BASEHostileEffects;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.SetupBaseDefaultValues
struct AB_Constructor_BASE_C_SetupBaseDefaultValues_Params
{
	class UAbilitySystemComponent*                     Ability_System_Component;                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                NodesToAffect;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.UserConstructionScript
struct AB_Constructor_BASE_C_UserConstructionScript_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.OnPlaced
struct AB_Constructor_BASE_C_OnPlaced_Params
{
	class UAbilitySystemComponent**                    InstigatorAbilitySystemComponent;                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.Recycling
struct AB_Constructor_BASE_C_Recycling_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_264_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature
struct AB_Constructor_BASE_C_BndEvt__Sphere_K2Node_ComponentBoundEvent_267_ComponentEndOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.AnimateLegs
struct AB_Constructor_BASE_C_AnimateLegs_Params
{
	bool                                               LegsUp;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.StartBuildingActorVisuals
struct AB_Constructor_BASE_C_StartBuildingActorVisuals_Params
{
	class ABuildingSMActor**                           BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent**                       EffectMeshComp;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.StopBuildingActorVisuals
struct AB_Constructor_BASE_C_StopBuildingActorVisuals_Params
{
	class ABuildingSMActor**                           BuildingActor;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent**                       EffectMeshComp;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BlueprintOnInteract
struct AB_Constructor_BASE_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.GetDamageAmp
struct AB_Constructor_BASE_C_GetDamageAmp_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCreated
struct AB_Constructor_BASE_C_ResourcesCreated_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ResourcesCollected
struct AB_Constructor_BASE_C_ResourcesCollected_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.BaseIsReadyToAnimate
struct AB_Constructor_BASE_C_BaseIsReadyToAnimate_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ShowHiddenMeshes
struct AB_Constructor_BASE_C_ShowHiddenMeshes_Params
{
};

// Function B_Constructor_BASE.B_Constructor_BASE_C.ExecuteUbergraph_B_Constructor_BASE
struct AB_Constructor_BASE_C_ExecuteUbergraph_B_Constructor_BASE_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
