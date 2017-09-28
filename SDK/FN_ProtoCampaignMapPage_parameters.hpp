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

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.SetBackgroundImage
struct UProtoCampaignMapPage_C_SetBackgroundImage_Params
{
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.CheckForMainQuest
struct UProtoCampaignMapPage_C_CheckForMainQuest_Params
{
	bool                                               TargetQuestFound;                                         // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                TargetQuestPageIndex;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.GetMainQuest
struct UProtoCampaignMapPage_C_GetMainQuest_Params
{
	class UFortQuestItem*                              outCurentMainQuest;                                       // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.PreConstruct
struct UProtoCampaignMapPage_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.Construct
struct UProtoCampaignMapPage_C_Construct_Params
{
};

// Function ProtoCampaignMapPage.ProtoCampaignMapPage_C.ExecuteUbergraph_ProtoCampaignMapPage
struct UProtoCampaignMapPage_C_ExecuteUbergraph_ProtoCampaignMapPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
