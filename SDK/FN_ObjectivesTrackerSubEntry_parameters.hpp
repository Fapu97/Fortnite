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

// Function ObjectivesTrackerSubEntry.ObjectivesTrackerSubEntry_C.HideIfEmpty
struct UObjectivesTrackerSubEntry_C_HideIfEmpty_Params
{
};

// Function ObjectivesTrackerSubEntry.ObjectivesTrackerSubEntry_C.UpdateObjectiveText
struct UObjectivesTrackerSubEntry_C_UpdateObjectiveText_Params
{
};

// Function ObjectivesTrackerSubEntry.ObjectivesTrackerSubEntry_C.UpdateProgress
struct UObjectivesTrackerSubEntry_C_UpdateProgress_Params
{
};

// Function ObjectivesTrackerSubEntry.ObjectivesTrackerSubEntry_C.Construct
struct UObjectivesTrackerSubEntry_C_Construct_Params
{
};

// Function ObjectivesTrackerSubEntry.ObjectivesTrackerSubEntry_C.OnQuestsUpdated
struct UObjectivesTrackerSubEntry_C_OnQuestsUpdated_Params
{
};

// Function ObjectivesTrackerSubEntry.ObjectivesTrackerSubEntry_C.ExecuteUbergraph_ObjectivesTrackerSubEntry
struct UObjectivesTrackerSubEntry_C_ExecuteUbergraph_ObjectivesTrackerSubEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
