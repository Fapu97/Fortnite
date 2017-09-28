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

// Function DifficultySelectModal.DifficultySelectModal_C.Initialize
struct UDifficultySelectModal_C_Initialize_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.InitializeDifficulty
struct UDifficultySelectModal_C_InitializeDifficulty_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateTeamPowerText
struct UDifficultySelectModal_C_UpdateTeamPowerText_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateDifficultySelectButtons
struct UDifficultySelectModal_C_UpdateDifficultySelectButtons_Params
{
	bool                                               Enable;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateDifficultyBar
struct UDifficultySelectModal_C_UpdateDifficultyBar_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnCustomDifficultyIncrease
struct UDifficultySelectModal_C_OnCustomDifficultyIncrease_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnCustomDifficultyDecrease
struct UDifficultySelectModal_C_OnCustomDifficultyDecrease_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnCustomDifficultyNavigation
struct UDifficultySelectModal_C_OnCustomDifficultyNavigation_Params
{
	bool                                               ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.FetchMaxDifficultyWithMissionAlerts
struct UDifficultySelectModal_C_FetchMaxDifficultyWithMissionAlerts_Params
{
	int                                                MaxDifficulty;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.SetRecommendedDifficulties
struct UDifficultySelectModal_C_SetRecommendedDifficulties_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.FetchRecommendedDifficulties
struct UDifficultySelectModal_C_FetchRecommendedDifficulties_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateTextCustom
struct UDifficultySelectModal_C_UpdateTextCustom_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateTextHardest
struct UDifficultySelectModal_C_UpdateTextHardest_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateTextAny
struct UDifficultySelectModal_C_UpdateTextAny_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.SetupButtonGroup
struct UDifficultySelectModal_C_SetupButtonGroup_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.SetRewards
struct UDifficultySelectModal_C_SetRewards_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnDifficultyButtonHovered
struct UDifficultySelectModal_C_OnDifficultyButtonHovered_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnClose
struct UDifficultySelectModal_C_OnClose_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.GetSelectedDifficulty
struct UDifficultySelectModal_C_GetSelectedDifficulty_Params
{
	int                                                Selected_Difficulty;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.FetchAvailableDifficulties
struct UDifficultySelectModal_C_FetchAvailableDifficulties_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.UpdateText
struct UDifficultySelectModal_C_UpdateText_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnActivated
struct UDifficultySelectModal_C_OnActivated_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__IconTextButton_160_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__IconTextButton_160_K2Node_ComponentBoundEvent_9_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnBeginIntro
struct UDifficultySelectModal_C_OnBeginIntro_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.IntroEnded
struct UDifficultySelectModal_C_IntroEnded_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.Construct
struct UDifficultySelectModal_C_Construct_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OutroEnded
struct UDifficultySelectModal_C_OutroEnded_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.OnBeginOutro
struct UDifficultySelectModal_C_OnBeginOutro_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__ButtonAnyDifficulty_K2Node_ComponentBoundEvent_533_CommonSelectedStateChanged__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__ButtonAnyDifficulty_K2Node_ComponentBoundEvent_533_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__ButtonHardestDifficulty_K2Node_ComponentBoundEvent_635_CommonSelectedStateChanged__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__ButtonHardestDifficulty_K2Node_ComponentBoundEvent_635_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__ButtonStart_K2Node_ComponentBoundEvent_735_CommonButtonClicked__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__ButtonStart_K2Node_ComponentBoundEvent_735_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.Init
struct UDifficultySelectModal_C_Init_Params
{
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__ButtonMyDifficulty_K2Node_ComponentBoundEvent_77_CommonSelectedStateChanged__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__ButtonMyDifficulty_K2Node_ComponentBoundEvent_77_CommonSelectedStateChanged__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               Selected;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_129_CommonButtonClicked__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__IconTextButton_0_K2Node_ComponentBoundEvent_129_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.BndEvt__IconTextButton_K2Node_ComponentBoundEvent_157_CommonButtonClicked__DelegateSignature
struct UDifficultySelectModal_C_BndEvt__IconTextButton_K2Node_ComponentBoundEvent_157_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.ExecuteUbergraph_DifficultySelectModal
struct UDifficultySelectModal_C_ExecuteUbergraph_DifficultySelectModal_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function DifficultySelectModal.DifficultySelectModal_C.DifficultySelected__DelegateSignature
struct UDifficultySelectModal_C_DifficultySelected__DelegateSignature_Params
{
	int                                                Difficulty;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                MinDifficulty;                                            // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               UseQuestPlayIfAvailable;                                  // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
