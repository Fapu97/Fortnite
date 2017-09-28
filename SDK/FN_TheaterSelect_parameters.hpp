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

// Function TheaterSelect.TheaterSelect_C.FindWidgetIndexFromTheaterId
struct UTheaterSelect_C_FindWidgetIndexFromTheaterId_Params
{
	struct FString                                     Theater_Id;                                               // (CPF_Parm, CPF_ZeroConstructor)
	int                                                Widget_Index;                                             // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.OnPlayerInputSuspensionChange
struct UTheaterSelect_C_OnPlayerInputSuspensionChange_Params
{
	bool                                               bIsInputSuspended;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.OnTheaterPinClicked
struct UTheaterSelect_C_OnTheaterPinClicked_Params
{
	struct FString                                     TheaterId;                                                // (CPF_Parm, CPF_ZeroConstructor)
};

// Function TheaterSelect.TheaterSelect_C.OnPlayerStateChanged
struct UTheaterSelect_C_OnPlayerStateChanged_Params
{
	struct FFortTeamMemberInfo                         TeamMemberInfo;                                           // (CPF_Parm, CPF_OutParm, CPF_ReferenceParm)
};

// Function TheaterSelect.TheaterSelect_C.OnTheaterDataChanged
struct UTheaterSelect_C_OnTheaterDataChanged_Params
{
};

// Function TheaterSelect.TheaterSelect_C.InitializeContextEvents
struct UTheaterSelect_C_InitializeContextEvents_Params
{
};

// Function TheaterSelect.TheaterSelect_C.RefreshPowerRange
struct UTheaterSelect_C_RefreshPowerRange_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
};

// Function TheaterSelect.TheaterSelect_C.RefreshSelectors
struct UTheaterSelect_C_RefreshSelectors_Params
{
};

// Function TheaterSelect.TheaterSelect_C.GetPowerData
struct UTheaterSelect_C_GetPowerData_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
	int                                                PersonalPower;                                            // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                PersonalPowerRequired;                                    // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.ArePowerRequirementsMet
struct UTheaterSelect_C_ArePowerRequirementsMet_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
	bool                                               bAreRequirementsMet;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.AreQuestRequirementsMet
struct UTheaterSelect_C_AreQuestRequirementsMet_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
	bool                                               bAreRequirementsMet;                                      // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.IsSoloOrPartyLeader
struct UTheaterSelect_C_IsSoloOrPartyLeader_Params
{
	bool                                               bIsSoloOrPartyLeader;                                     // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.RefreshSelectButton
struct UTheaterSelect_C_RefreshSelectButton_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
};

// Function TheaterSelect.TheaterSelect_C.RefreshThreatLevel
struct UTheaterSelect_C_RefreshThreatLevel_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
};

// Function TheaterSelect.TheaterSelect_C.RefreshPowerRequirements
struct UTheaterSelect_C_RefreshPowerRequirements_Params
{
	struct FFortTheaterMapData                         TheaterMapData;                                           // (CPF_Parm)
};

// Function TheaterSelect.TheaterSelect_C.RefreshQuestRequirements
struct UTheaterSelect_C_RefreshQuestRequirements_Params
{
	struct FFortTheaterMapData                         InTheaterMapData;                                         // (CPF_Parm)
};

// Function TheaterSelect.TheaterSelect_C.EnterSelectedTheater
struct UTheaterSelect_C_EnterSelectedTheater_Params
{
};

// Function TheaterSelect.TheaterSelect_C.SetSelectedTheater
struct UTheaterSelect_C_SetSelectedTheater_Params
{
	class UTheaterSelectItem_C*                        TheaterSelectItem;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.RefreshTheaters
struct UTheaterSelect_C_RefreshTheaters_Params
{
};

// Function TheaterSelect.TheaterSelect_C.Initialize
struct UTheaterSelect_C_Initialize_Params
{
};

// Function TheaterSelect.TheaterSelect_C.DialogResult_B51AB1E34579D536990198A22D7C3804
struct UTheaterSelect_C_DialogResult_B51AB1E34579D536990198A22D7C3804_Params
{
	struct FName                                       ResultName;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.Construct
struct UTheaterSelect_C_Construct_Params
{
};

// Function TheaterSelect.TheaterSelect_C.BndEvt__TheaterSelectorLeft_K2Node_ComponentBoundEvent_726_CommonButtonClicked__DelegateSignature
struct UTheaterSelect_C_BndEvt__TheaterSelectorLeft_K2Node_ComponentBoundEvent_726_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.BndEvt__TheaterSelectRight_K2Node_ComponentBoundEvent_741_CommonButtonClicked__DelegateSignature
struct UTheaterSelect_C_BndEvt__TheaterSelectRight_K2Node_ComponentBoundEvent_741_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.BndEvt__SelectButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature
struct UTheaterSelect_C_BndEvt__SelectButton_K2Node_ComponentBoundEvent_93_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.BndEvt__TheaterSwitcher_K2Node_ComponentBoundEvent_1794_OnActiveWidgetChanged__DelegateSignature
struct UTheaterSelect_C_BndEvt__TheaterSwitcher_K2Node_ComponentBoundEvent_1794_OnActiveWidgetChanged__DelegateSignature_Params
{
	class UWidget*                                     ActiveWidget;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                ActiveWidgetIndex;                                        // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.PreConstruct
struct UTheaterSelect_C_PreConstruct_Params
{
	bool*                                              IsDesignTime;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function TheaterSelect.TheaterSelect_C.OnActivated
struct UTheaterSelect_C_OnActivated_Params
{
};

// Function TheaterSelect.TheaterSelect_C.OnNavigationRight
struct UTheaterSelect_C_OnNavigationRight_Params
{
};

// Function TheaterSelect.TheaterSelect_C.OnNavigationLeft
struct UTheaterSelect_C_OnNavigationLeft_Params
{
};

// Function TheaterSelect.TheaterSelect_C.OnDoubleClickedPin
struct UTheaterSelect_C_OnDoubleClickedPin_Params
{
};

// Function TheaterSelect.TheaterSelect_C.ExecuteUbergraph_TheaterSelect
struct UTheaterSelect_C_ExecuteUbergraph_TheaterSelect_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
