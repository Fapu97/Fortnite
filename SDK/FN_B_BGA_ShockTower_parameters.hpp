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

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.OnRep_Target_Location
struct AB_BGA_ShockTower_C_OnRep_Target_Location_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.OnRep_Kill_Tower
struct AB_BGA_ShockTower_C_OnRep_Kill_Tower_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Fire_Weapon
struct AB_BGA_ShockTower_C_Fire_Weapon_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Overlap_Enemy_Check
struct AB_BGA_ShockTower_C_Overlap_Enemy_Check_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.UserConstructionScript
struct AB_BGA_ShockTower_C_UserConstructionScript_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Intro__FinishedFunc
struct AB_BGA_ShockTower_C_Intro__FinishedFunc_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Intro__UpdateFunc
struct AB_BGA_ShockTower_C_Intro__UpdateFunc_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.TurnTop__FinishedFunc
struct AB_BGA_ShockTower_C_TurnTop__FinishedFunc_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.TurnTop__UpdateFunc
struct AB_BGA_ShockTower_C_TurnTop__UpdateFunc_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.ShockTowerSetup
struct AB_BGA_ShockTower_C_ShockTowerSetup_Params
{
	float                                              ShockTowerReFireDelay;                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DamageRadius;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Duration;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxInitialTargets;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MaxChainTargets;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.GameplayCue.Abilities.Activation.Outlander.ShockTower.Fire
struct AB_BGA_ShockTower_C_GameplayCue_Abilities_Activation_Outlander_ShockTower_Fire_Params
{
	TEnumAsByte<EGameplayCueEvent>                     EventType;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FGameplayCueParameters                      Parameters;                                               // (CPF_Parm)
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Pass_First_Targets_Array
struct AB_BGA_ShockTower_C_Pass_First_Targets_Array_Params
{
	TArray<struct FVector>                             HitActorLocation;                                         // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Pass_Second_Targets_Array
struct AB_BGA_ShockTower_C_Pass_Second_Targets_Array_Params
{
	TArray<struct FVector>                             TargetLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FVector                                     SourceLocation;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.Pass_Third_Targets_Array
struct AB_BGA_ShockTower_C_Pass_Third_Targets_Array_Params
{
	TArray<struct FVector>                             TargetLocation;                                           // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	struct FVector                                     SourceLocation;                                           // (CPF_Parm, CPF_IsPlainOldData)
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.ReceiveBeginPlay
struct AB_BGA_ShockTower_C_ReceiveBeginPlay_Params
{
};

// Function B_BGA_ShockTower.B_BGA_ShockTower_C.ExecuteUbergraph_B_BGA_ShockTower
struct AB_BGA_ShockTower_C_ExecuteUbergraph_B_BGA_ShockTower_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
