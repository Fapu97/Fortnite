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

// Function ObjectivesTracker.ObjectivesTracker_C.UpdatePinnedQuestTextVisibility
struct UObjectivesTracker_C_UpdatePinnedQuestTextVisibility_Params
{
};

// Function ObjectivesTracker.ObjectivesTracker_C.HandlePinnedQuestsChanged
struct UObjectivesTracker_C_HandlePinnedQuestsChanged_Params
{
};

// Function ObjectivesTracker.ObjectivesTracker_C.HandleQuestsUpdated
struct UObjectivesTracker_C_HandleQuestsUpdated_Params
{
};

// Function ObjectivesTracker.ObjectivesTracker_C.Construct
struct UObjectivesTracker_C_Construct_Params
{
};

// Function ObjectivesTracker.ObjectivesTracker_C.ExecuteUbergraph_ObjectivesTracker
struct UObjectivesTracker_C_ExecuteUbergraph_ObjectivesTracker_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
