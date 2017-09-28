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

// Function SkillTreeDetailsPrerequisitesSet.SkillTreeDetailsPrerequisitesSet_C.Initialize
struct USkillTreeDetailsPrerequisitesSet_C_Initialize_Params
{
	TArray<struct FHomebaseNodeInstancePrerequisites>  Prerequisites;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
	bool                                               bShowsSecondarySetIndicator;                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USkillTreeNodeDetailsPanel_C*                ParentDetailsPanel;                                       // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsPrerequisitesSet.SkillTreeDetailsPrerequisitesSet_C.PreConstruct
struct USkillTreeDetailsPrerequisitesSet_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsPrerequisitesSet.SkillTreeDetailsPrerequisitesSet_C.PreConstructFromParent
struct USkillTreeDetailsPrerequisitesSet_C_PreConstructFromParent_Params
{
};

// Function SkillTreeDetailsPrerequisitesSet.SkillTreeDetailsPrerequisitesSet_C.ExecuteUbergraph_SkillTreeDetailsPrerequisitesSet
struct USkillTreeDetailsPrerequisitesSet_C_ExecuteUbergraph_SkillTreeDetailsPrerequisitesSet_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
