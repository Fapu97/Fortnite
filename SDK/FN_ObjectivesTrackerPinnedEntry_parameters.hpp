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

// Function ObjectivesTrackerPinnedEntry.ObjectivesTrackerPinnedEntry_C.OnTheaterTileClicked
struct UObjectivesTrackerPinnedEntry_C_OnTheaterTileClicked_Params
{
};

// Function ObjectivesTrackerPinnedEntry.ObjectivesTrackerPinnedEntry_C.SetHighlight
struct UObjectivesTrackerPinnedEntry_C_SetHighlight_Params
{
	bool                                               Highlighted;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesTrackerPinnedEntry.ObjectivesTrackerPinnedEntry_C.Construct
struct UObjectivesTrackerPinnedEntry_C_Construct_Params
{
};

// Function ObjectivesTrackerPinnedEntry.ObjectivesTrackerPinnedEntry_C.PreConstruct
struct UObjectivesTrackerPinnedEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesTrackerPinnedEntry.ObjectivesTrackerPinnedEntry_C.ExecuteUbergraph_ObjectivesTrackerPinnedEntry
struct UObjectivesTrackerPinnedEntry_C_ExecuteUbergraph_ObjectivesTrackerPinnedEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
