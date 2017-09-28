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

// Function SkillTreeViewer.SkillTreeViewer_C.UpdateResearchPointsVisibility
struct USkillTreeViewer_C_UpdateResearchPointsVisibility_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.HandleBackOutAction
struct USkillTreeViewer_C_HandleBackOutAction_Params
{
	bool                                               PassThrough;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeViewer.SkillTreeViewer_C.UpdateBackgroundMaterialParameters
struct USkillTreeViewer_C_UpdateBackgroundMaterialParameters_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.HandleNodeSelectionChangedBP
struct USkillTreeViewer_C_HandleNodeSelectionChangedBP_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.HandleViewParametersChangedBP
struct USkillTreeViewer_C_HandleViewParametersChangedBP_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.Construct
struct USkillTreeViewer_C_Construct_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.HandleDifferentPageShown
struct USkillTreeViewer_C_HandleDifferentPageShown_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.OnActivated
struct USkillTreeViewer_C_OnActivated_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.OnDeactivated
struct USkillTreeViewer_C_OnDeactivated_Params
{
};

// Function SkillTreeViewer.SkillTreeViewer_C.ExecuteUbergraph_SkillTreeViewer
struct USkillTreeViewer_C_ExecuteUbergraph_SkillTreeViewer_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
