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

// Function SkillTreeNodeDetailsCost.SkillTreeNodeDetailsCost_C.DoDesignTimeRandomization
struct USkillTreeNodeDetailsCost_C_DoDesignTimeRandomization_Params
{
};

// Function SkillTreeNodeDetailsCost.SkillTreeNodeDetailsCost_C.Update
struct USkillTreeNodeDetailsCost_C_Update_Params
{
	struct FFortItemQuantityPair                       ItemQuantityPair;                                         // (CPF_Parm)
};

// Function SkillTreeNodeDetailsCost.SkillTreeNodeDetailsCost_C.PreConstruct
struct USkillTreeNodeDetailsCost_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeNodeDetailsCost.SkillTreeNodeDetailsCost_C.PreConstructFromParent
struct USkillTreeNodeDetailsCost_C_PreConstructFromParent_Params
{
};

// Function SkillTreeNodeDetailsCost.SkillTreeNodeDetailsCost_C.ExecuteUbergraph_SkillTreeNodeDetailsCost
struct USkillTreeNodeDetailsCost_C_ExecuteUbergraph_SkillTreeNodeDetailsCost_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
