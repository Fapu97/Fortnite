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

// Function SkillTreeDetailsSquadSlotAttributes.SkillTreeDetailsSquadSlotAttributes_C.IsIconValid
struct USkillTreeDetailsSquadSlotAttributes_C_IsIconValid_Params
{
	bool                                               bIsValid;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsSquadSlotAttributes.SkillTreeDetailsSquadSlotAttributes_C.Update
struct USkillTreeDetailsSquadSlotAttributes_C_Update_Params
{
	struct FText                                       Name;                                                     // (CPF_Parm)
	struct FText                                       Description;                                              // (CPF_Parm)
	struct FFortMultiSizeBrush                         Brush;                                                    // (CPF_Parm)
};

// Function SkillTreeDetailsSquadSlotAttributes.SkillTreeDetailsSquadSlotAttributes_C.PreConstruct
struct USkillTreeDetailsSquadSlotAttributes_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function SkillTreeDetailsSquadSlotAttributes.SkillTreeDetailsSquadSlotAttributes_C.PreConstructFromParent
struct USkillTreeDetailsSquadSlotAttributes_C_PreConstructFromParent_Params
{
};

// Function SkillTreeDetailsSquadSlotAttributes.SkillTreeDetailsSquadSlotAttributes_C.ExecuteUbergraph_SkillTreeDetailsSquadSlotAttributes
struct USkillTreeDetailsSquadSlotAttributes_C_ExecuteUbergraph_SkillTreeDetailsSquadSlotAttributes_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
