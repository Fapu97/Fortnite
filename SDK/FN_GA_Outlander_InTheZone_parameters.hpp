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

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.InitializeHighlightColors
struct UGA_Outlander_InTheZone_C_InitializeHighlightColors_Params
{
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.DetermineContainerColor
struct UGA_Outlander_InTheZone_C_DetermineContainerColor_Params
{
	class ABuildingContainer*                          Container;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor                                RarityColor;                                              // (CPF_Parm, CPF_OutParm, CPF_IsPlainOldData)
	bool                                               SpawnParticles;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.Setup Post Fades
struct UGA_Outlander_InTheZone_C_Setup_Post_Fades_Params
{
	bool                                               Activating__T__Or_Deactivating__F_;                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.Activate Deactivate Outline Post Process
struct UGA_Outlander_InTheZone_C_Activate_Deactivate_Outline_Post_Process_Params
{
	float                                              Outline_Weight;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.Deactivate Keen Eye Particles as Objects Leave the Overlap Region
struct UGA_Outlander_InTheZone_C_Deactivate_Keen_Eye_Particles_as_Objects_Leave_the_Overlap_Region_Params
{
	class ABuildingContainer*                          Building_Container;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AFortPawn*                                   Fort_Pawn;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Fort_Pawn_True_Building_Container_False;                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.Set Or Remove Keen Eyes Custom Depth
struct UGA_Outlander_InTheZone_C_Set_Or_Remove_Keen_Eyes_Custom_Depth_Params
{
	class AFortPawn*                                   Character_Mesh;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Render_CustomDepth;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.RevealLootOrEnemies
struct UGA_Outlander_InTheZone_C_RevealLootOrEnemies_Params
{
	class AActor*                                      NewIncomingActor;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.SetupAbility
struct UGA_Outlander_InTheZone_C_SetupAbility_Params
{
	class UAbilitySystemComponent*                     AbilitySystem;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.K2_ActivateAbilityFromEvent
struct UGA_Outlander_InTheZone_C_K2_ActivateAbilityFromEvent_Params
{
	struct FGameplayEventData*                         EventData;                                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.K2_OnEndAbility
struct UGA_Outlander_InTheZone_C_K2_OnEndAbility_Params
{
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.EndOverlap
struct UGA_Outlander_InTheZone_C_EndOverlap_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.OverlapTreasure
struct UGA_Outlander_InTheZone_C_OverlapTreasure_Params
{
	class UPrimitiveComponent*                         OverlappedComponent;                                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AActor*                                      OtherActor;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPrimitiveComponent*                         OtherComp;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                OtherBodyIndex;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bFromSweep;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FHitResult                                  SweepResult;                                              // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.PulseKeenEyes
struct UGA_Outlander_InTheZone_C_PulseKeenEyes_Params
{
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.ActivateInTheZone
struct UGA_Outlander_InTheZone_C_ActivateInTheZone_Params
{
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.DeactivateInTheZone
struct UGA_Outlander_InTheZone_C_DeactivateInTheZone_Params
{
};

// Function GA_Outlander_InTheZone.GA_Outlander_InTheZone_C.ExecuteUbergraph_GA_Outlander_InTheZone
struct UGA_Outlander_InTheZone_C_ExecuteUbergraph_GA_Outlander_InTheZone_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
