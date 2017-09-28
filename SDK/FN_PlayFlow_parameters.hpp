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

// Function PlayFlow.PlayFlow_C.DoesSelectedTheaterExist
struct UPlayFlow_C_DoesSelectedTheaterExist_Params
{
	struct FString                                     TheaterId;                                                // (CPF_Parm, CPF_ZeroConstructor)
	bool                                               bExist;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayFlow.PlayFlow_C.RemoveRewardsAndMissionInfoPanel
struct UPlayFlow_C_RemoveRewardsAndMissionInfoPanel_Params
{
};

// Function PlayFlow.PlayFlow_C.Remove Context Events
struct UPlayFlow_C_Remove_Context_Events_Params
{
};

// Function PlayFlow.PlayFlow_C.SetCameraForScreen
struct UPlayFlow_C_SetCameraForScreen_Params
{
	class UCommonUserWidget*                           ScreenPanel;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayFlow.PlayFlow_C.OnMissionBackOut
struct UPlayFlow_C_OnMissionBackOut_Params
{
};

// Function PlayFlow.PlayFlow_C.IsScreenActive
struct UPlayFlow_C_IsScreenActive_Params
{
	bool                                               bIsScreenActive;                                          // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function PlayFlow.PlayFlow_C.OnLobbyStarted
struct UPlayFlow_C_OnLobbyStarted_Params
{
};

// Function PlayFlow.PlayFlow_C.InitializeContextEvents
struct UPlayFlow_C_InitializeContextEvents_Params
{
};

// Function PlayFlow.PlayFlow_C.OnTheaterSelected
struct UPlayFlow_C_OnTheaterSelected_Params
{
	struct FString                                     TheaterId;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function PlayFlow.PlayFlow_C.Initialize
struct UPlayFlow_C_Initialize_Params
{
};

// Function PlayFlow.PlayFlow_C.Event Set Screen
struct UPlayFlow_C_Event_Set_Screen_Params
{
};

// Function PlayFlow.PlayFlow_C.Destruct
struct UPlayFlow_C_Destruct_Params
{
};

// Function PlayFlow.PlayFlow_C.Construct
struct UPlayFlow_C_Construct_Params
{
};

// Function PlayFlow.PlayFlow_C.HandleTheaterDataChanged
struct UPlayFlow_C_HandleTheaterDataChanged_Params
{
};

// Function PlayFlow.PlayFlow_C.OnActivated
struct UPlayFlow_C_OnActivated_Params
{
};

// Function PlayFlow.PlayFlow_C.ExecuteUbergraph_PlayFlow
struct UPlayFlow_C_ExecuteUbergraph_PlayFlow_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
