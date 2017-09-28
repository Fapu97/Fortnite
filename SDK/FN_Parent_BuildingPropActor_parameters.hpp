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

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Add to TOD Light Array
struct AParent_BuildingPropActor_C_Add_to_TOD_Light_Array_Params
{
	class ULightComponent*                             NewItem;                                                  // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set  MID Values For Lights
struct AParent_BuildingPropActor_C_Set__MID_Values_For_Lights_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.Set Light parameters
struct AParent_BuildingPropActor_C_Set_Light_parameters_Params
{
	float                                              Previous_to_Current_Day_Phase_Alpha;                      // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.UserConstructionScript
struct AParent_BuildingPropActor_C_UserConstructionScript_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnDayPhaseChanged
struct AParent_BuildingPropActor_C_OnDayPhaseChanged_Params
{
	TEnumAsByte<EFortDayPhase>*                        CurrentDayPhase;                                          // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<EFortDayPhase>*                        PreviousDayPhase;                                         // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool*                                              bAtCreation;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ReceiveBeginPlay
struct AParent_BuildingPropActor_C_ReceiveBeginPlay_Params
{
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.OnBounceAnimationUpdate
struct AParent_BuildingPropActor_C_OnBounceAnimationUpdate_Params
{
	struct FFortBounceData*                            Data;                                                     // (CPF_Parm)
};

// Function Parent_BuildingPropActor.Parent_BuildingPropActor_C.ExecuteUbergraph_Parent_BuildingPropActor
struct AParent_BuildingPropActor_C_ExecuteUbergraph_Parent_BuildingPropActor_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
