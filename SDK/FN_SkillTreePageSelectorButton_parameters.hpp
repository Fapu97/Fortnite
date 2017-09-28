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

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Handle Unclaimed Resources Updated
struct USkillTreePageSelectorButton_C_Handle_Unclaimed_Resources_Updated_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Toggle Unclaimed Research Timer
struct USkillTreePageSelectorButton_C_Toggle_Unclaimed_Research_Timer_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Determine Unclaimed Resources at Threshold
struct USkillTreePageSelectorButton_C_Determine_Unclaimed_Resources_at_Threshold_Params
{
	bool                                               Result;                                                   // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Get Skill Tree Page Data
struct USkillTreePageSelectorButton_C_Get_Skill_Tree_Page_Data_Params
{
	TArray<struct FName>                               OutPageData;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor)
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Is Button Unlocked
struct USkillTreePageSelectorButton_C_Is_Button_Unlocked_Params
{
	bool                                               Unlocked;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Update Bang State
struct USkillTreePageSelectorButton_C_Update_Bang_State_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.HandleDifferentSkillTreePageSet
struct USkillTreePageSelectorButton_C_HandleDifferentSkillTreePageSet_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Skill Node Purchased
struct USkillTreePageSelectorButton_C_Skill_Node_Purchased_Params
{
	struct FName                                       NodeID;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Construct
struct USkillTreePageSelectorButton_C_Construct_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.OnHomebaseInventoryUpdated
struct USkillTreePageSelectorButton_C_OnHomebaseInventoryUpdated_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.HandleRefreshSkillTreeNodePage
struct USkillTreePageSelectorButton_C_HandleRefreshSkillTreeNodePage_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.Destruct
struct USkillTreePageSelectorButton_C_Destruct_Params
{
};

// Function SkillTreePageSelectorButton.SkillTreePageSelectorButton_C.ExecuteUbergraph_SkillTreePageSelectorButton
struct USkillTreePageSelectorButton_C_ExecuteUbergraph_SkillTreePageSelectorButton_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
