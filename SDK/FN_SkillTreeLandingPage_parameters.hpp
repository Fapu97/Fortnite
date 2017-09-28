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

// Function SkillTreeLandingPage.SkillTreeLandingPage_C.OnButtonHovered
struct USkillTreeLandingPage_C_OnButtonHovered_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeLandingPage.SkillTreeLandingPage_C.CreateAndAddPageButton
struct USkillTreeLandingPage_C_CreateAndAddPageButton_Params
{
	struct FName*                                      SkillTreePageId;                                          // (CPF_ConstParm, CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm, CPF_IsPlainOldData)
	bool*                                              IsResearchTree;                                           // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortSkillTreePageSelectorButton*            ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function SkillTreeLandingPage.SkillTreeLandingPage_C.Construct
struct USkillTreeLandingPage_C_Construct_Params
{
};

// Function SkillTreeLandingPage.SkillTreeLandingPage_C.OnActivated
struct USkillTreeLandingPage_C_OnActivated_Params
{
};

// Function SkillTreeLandingPage.SkillTreeLandingPage_C.ExecuteUbergraph_SkillTreeLandingPage
struct USkillTreeLandingPage_C_ExecuteUbergraph_SkillTreeLandingPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
