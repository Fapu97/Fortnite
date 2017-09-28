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

// Function ObjectivesTrackerEntry.ObjectivesTrackerEntry_C.OnTheaterTileClicked
struct UObjectivesTrackerEntry_C_OnTheaterTileClicked_Params
{
};

// Function ObjectivesTrackerEntry.ObjectivesTrackerEntry_C.SetHighlight
struct UObjectivesTrackerEntry_C_SetHighlight_Params
{
	bool                                               Highlighted;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesTrackerEntry.ObjectivesTrackerEntry_C.PreConstruct
struct UObjectivesTrackerEntry_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ObjectivesTrackerEntry.ObjectivesTrackerEntry_C.Construct
struct UObjectivesTrackerEntry_C_Construct_Params
{
};

// Function ObjectivesTrackerEntry.ObjectivesTrackerEntry_C.ExecuteUbergraph_ObjectivesTrackerEntry
struct UObjectivesTrackerEntry_C_ExecuteUbergraph_ObjectivesTrackerEntry_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
