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

// Function SkillTreeNodeDetailsHeader.SkillTreeNodeDetailsHeader_C.Update
struct USkillTreeNodeDetailsHeader_C_Update_Params
{
	struct FText                                       Name;                                                     // (CPF_Parm)
	bool                                               bShowsBrush;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FFortMultiSizeBrush                         Brush;                                                    // (CPF_Parm)
};

// Function SkillTreeNodeDetailsHeader.SkillTreeNodeDetailsHeader_C.PreConstruct
struct USkillTreeNodeDetailsHeader_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeNodeDetailsHeader.SkillTreeNodeDetailsHeader_C.ExecuteUbergraph_SkillTreeNodeDetailsHeader
struct USkillTreeNodeDetailsHeader_C_ExecuteUbergraph_SkillTreeNodeDetailsHeader_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
