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

// Function MissionSelectInfoModal.MissionSelectInfoModal_C.UpdateModifiers
struct UMissionSelectInfoModal_C_UpdateModifiers_Params
{
	TArray<class UFortGameplayModifierItemDefinition*> inModifiers;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function MissionSelectInfoModal.MissionSelectInfoModal_C.Initialize
struct UMissionSelectInfoModal_C_Initialize_Params
{
};

// Function MissionSelectInfoModal.MissionSelectInfoModal_C.Construct
struct UMissionSelectInfoModal_C_Construct_Params
{
};

// Function MissionSelectInfoModal.MissionSelectInfoModal_C.BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature
struct UMissionSelectInfoModal_C_BndEvt__CloseButton_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function MissionSelectInfoModal.MissionSelectInfoModal_C.OnActivated
struct UMissionSelectInfoModal_C_OnActivated_Params
{
};

// Function MissionSelectInfoModal.MissionSelectInfoModal_C.ExecuteUbergraph_MissionSelectInfoModal
struct UMissionSelectInfoModal_C_ExecuteUbergraph_MissionSelectInfoModal_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
