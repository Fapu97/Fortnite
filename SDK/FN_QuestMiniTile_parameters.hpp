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

// Function QuestMiniTile.QuestMiniTile_C.PlayTileAnimation
struct UQuestMiniTile_C_PlayTileAnimation_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.ToggleCurrentQuestTileTimer
struct UQuestMiniTile_C_ToggleCurrentQuestTileTimer_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.SetState
struct UQuestMiniTile_C_SetState_Params
{
	class UFortQuestItem*                              InCurrentQuest;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               QuestFound;                                               // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.Init
struct UQuestMiniTile_C_Init_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.PreConstruct
struct UQuestMiniTile_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function QuestMiniTile.QuestMiniTile_C.Construct
struct UQuestMiniTile_C_Construct_Params
{
};

// Function QuestMiniTile.QuestMiniTile_C.ExecuteUbergraph_QuestMiniTile
struct UQuestMiniTile_C_ExecuteUbergraph_QuestMiniTile_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
