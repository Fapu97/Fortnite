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

// Function TheaterSelectQuestRequirements.TheaterSelectQuestRequirements_C.SetRequiredQuestName
struct UTheaterSelectQuestRequirements_C_SetRequiredQuestName_Params
{
	struct FText                                       QuestName;                                                // (CPF_Parm)
};

// Function TheaterSelectQuestRequirements.TheaterSelectQuestRequirements_C.PreConstruct
struct UTheaterSelectQuestRequirements_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelectQuestRequirements.TheaterSelectQuestRequirements_C.ExecuteUbergraph_TheaterSelectQuestRequirements
struct UTheaterSelectQuestRequirements_C_ExecuteUbergraph_TheaterSelectQuestRequirements_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
