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

// Function BP_CompletedExpeditionsSummaryWidget.BP_CompletedExpeditionsSummaryWidget_C.Get Visibility State
struct UBP_CompletedExpeditionsSummaryWidget_C_Get_Visibility_State_Params
{
	int                                                A;                                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_CompletedExpeditionsSummaryWidget.BP_CompletedExpeditionsSummaryWidget_C.Reset Vehicle Type Visual States
struct UBP_CompletedExpeditionsSummaryWidget_C_Reset_Vehicle_Type_Visual_States_Params
{
};

// Function BP_CompletedExpeditionsSummaryWidget.BP_CompletedExpeditionsSummaryWidget_C.Update Vehicle Type Widgets
struct UBP_CompletedExpeditionsSummaryWidget_C_Update_Vehicle_Type_Widgets_Params
{
};

// Function BP_CompletedExpeditionsSummaryWidget.BP_CompletedExpeditionsSummaryWidget_C.Determine Show States
struct UBP_CompletedExpeditionsSummaryWidget_C_Determine_Show_States_Params
{
};

// Function BP_CompletedExpeditionsSummaryWidget.BP_CompletedExpeditionsSummaryWidget_C.Update Completed Expeditions
struct UBP_CompletedExpeditionsSummaryWidget_C_Update_Completed_Expeditions_Params
{
	int                                                Completed;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
