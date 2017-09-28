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

// Function MainQuestsTile.MainQuestsTile_C.PopulateFilteredObjectives
struct UMainQuestsTile_C_PopulateFilteredObjectives_Params
{
	class UFortQuestItem*                              Quest;                                                    // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainQuestsTile.MainQuestsTile_C.HandleQuestChanged
struct UMainQuestsTile_C_HandleQuestChanged_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.Construct
struct UMainQuestsTile_C_Construct_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.HandleButtonClick
struct UMainQuestsTile_C_HandleButtonClick_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MainQuestsTile.MainQuestsTile_C.HandleQuestsUpdated
struct UMainQuestsTile_C_HandleQuestsUpdated_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.PlayDialogIfRequired
struct UMainQuestsTile_C_PlayDialogIfRequired_Params
{
};

// Function MainQuestsTile.MainQuestsTile_C.ExecuteUbergraph_MainQuestsTile
struct UMainQuestsTile_C_ExecuteUbergraph_MainQuestsTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
