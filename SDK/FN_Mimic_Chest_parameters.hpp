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

// Function Mimic_Chest.Mimic_Chest_C.BlueprintGetInteractionString
struct AMimic_Chest_C_BlueprintGetInteractionString_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FText                                       ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ReturnParm)
};

// Function Mimic_Chest.Mimic_Chest_C.OnRep_bBlockedByStairs?
struct AMimic_Chest_C_OnRep_bBlockedByStairs__Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.BlueprintCanInteract
struct AMimic_Chest_C_BlueprintCanInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function Mimic_Chest.Mimic_Chest_C.UserConstructionScript
struct AMimic_Chest_C_UserConstructionScript_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.Twitch__FinishedFunc
struct AMimic_Chest_C_Twitch__FinishedFunc_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.Twitch__UpdateFunc
struct AMimic_Chest_C_Twitch__UpdateFunc_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.OnDeathPlayEffects
struct AMimic_Chest_C_OnDeathPlayEffects_Params
{
	float*                                             Damage;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayTagContainer*                      DamageTags;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
	struct FVector*                                    Momentum;                                                 // (CPF_Parm, CPF_IsPlainOldData)
	struct FHitResult*                                 HitInfo;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
	class AFortPawn**                                  InstigatedBy;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor**                                     DamageCauser;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayEffectContextHandle*               EffectContext;                                            // (CPF_Parm)
};

// Function Mimic_Chest.Mimic_Chest_C.BlueprintOnBeginInteract
struct AMimic_Chest_C_BlueprintOnBeginInteract_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.ReceiveBeginPlay
struct AMimic_Chest_C_ReceiveBeginPlay_Params
{
};

// Function Mimic_Chest.Mimic_Chest_C.BlueprintOnInteract
struct AMimic_Chest_C_BlueprintOnInteract_Params
{
	class AFortPawn**                                  InteractingPawn;                                          // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Mimic_Chest.Mimic_Chest_C.BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature
struct AMimic_Chest_C_BndEvt__Capsule_K2Node_ComponentBoundEvent_18_ComponentBeginOverlapSignature__DelegateSignature_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Mimic_Chest.Mimic_Chest_C.ExecuteUbergraph_Mimic_Chest
struct AMimic_Chest_C_ExecuteUbergraph_Mimic_Chest_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
