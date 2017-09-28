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

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Kill Emitters and Start Times
struct AB_Placement_Preview_AirStrike_C_Kill_Emitters_and_Start_Times_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.UserConstructionScript
struct AB_Placement_Preview_AirStrike_C_UserConstructionScript_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__FinishedFunc
struct AB_Placement_Preview_AirStrike_C_Spawn_Arrow__FinishedFunc_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.Spawn Arrow__UpdateFunc
struct AB_Placement_Preview_AirStrike_C_Spawn_Arrow__UpdateFunc_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnBounceMotionUpdate
struct AB_Placement_Preview_AirStrike_C_OnBounceMotionUpdate_Params
{
	float*                                             VectorScale;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnInitializeDecoPreview
struct AB_Placement_Preview_AirStrike_C_OnInitializeDecoPreview_Params
{
	class ABuildingActor**                             NewBuildingActor;                                         // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortDecoItemDefinition**                    NewDecoItemDefinition;                                    // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateScale
struct AB_Placement_Preview_AirStrike_C_OnUpdateScale_Params
{
	float*                                             Scale;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector*                                    InWorldSpacePivot;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.OnUpdateVisuals
struct AB_Placement_Preview_AirStrike_C_OnUpdateVisuals_Params
{
	float*                                             DeltaSeconds;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bSafeToPlace;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetScalarParameterValueOnAllPreviewMIDs
struct AB_Placement_Preview_AirStrike_C_SetScalarParameterValueOnAllPreviewMIDs_Params
{
	struct FName*                                      ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float*                                             ParamValue;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SetVectorParameterValueOnAllPreviewMIDs
struct AB_Placement_Preview_AirStrike_C_SetVectorParameterValueOnAllPreviewMIDs_Params
{
	struct FName*                                      ParamName;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FLinearColor*                               ParamValue;                                               // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.SwitchType
struct AB_Placement_Preview_AirStrike_C_SwitchType_Params
{
	TArray<struct FVector>                             Positions_With_Duplicates;                                // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<struct FVector>                             Cleaned_Positions;                                        // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	TArray<int>                                        Duplicated_Entries;                                       // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveBeginPlay
struct AB_Placement_Preview_AirStrike_C_ReceiveBeginPlay_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.RestartLineReticule
struct AB_Placement_Preview_AirStrike_C_RestartLineReticule_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ToggleAirStrikeParticles
struct AB_Placement_Preview_AirStrike_C_ToggleAirStrikeParticles_Params
{
	bool                                               bInToggle;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ReceiveDestroyed
struct AB_Placement_Preview_AirStrike_C_ReceiveDestroyed_Params
{
};

// Function B_Placement_Preview_AirStrike.B_Placement_Preview_AirStrike_C.ExecuteUbergraph_B_Placement_Preview_AirStrike
struct AB_Placement_Preview_AirStrike_C_ExecuteUbergraph_B_Placement_Preview_AirStrike_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
