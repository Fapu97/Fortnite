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

// Function StoreSummary.StoreSummary_C.SetCardsFromOtherStoreItemCards
struct UStoreSummary_C_SetCardsFromOtherStoreItemCards_Params
{
	TArray<class UStoreItemCard_C*>                    StoreItemCards;                                           // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function StoreSummary.StoreSummary_C.ShowDetailsPanel
struct UStoreSummary_C_ShowDetailsPanel_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreSummary.StoreSummary_C.Focus
struct UStoreSummary_C_Focus_Params
{
};

// Function StoreSummary.StoreSummary_C.BndEvt__TileView_K2Node_ComponentBoundEvent_1_OnListViewItemClicked__DelegateSignature
struct UStoreSummary_C_BndEvt__TileView_K2Node_ComponentBoundEvent_1_OnListViewItemClicked__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreSummary.StoreSummary_C.BndEvt__TileView_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature
struct UStoreSummary_C_BndEvt__TileView_K2Node_ComponentBoundEvent_2_OnListViewItemClicked__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreSummary.StoreSummary_C.BndEvt__TileView_K2Node_ComponentBoundEvent_154_OnListViewItemSelected__DelegateSignature
struct UStoreSummary_C_BndEvt__TileView_K2Node_ComponentBoundEvent_154_OnListViewItemSelected__DelegateSignature_Params
{
	class UObject*                                     Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	bool                                               bIsSelected;                                              // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreSummary.StoreSummary_C.BndEvt__CloseSummary_Button_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature
struct UStoreSummary_C_BndEvt__CloseSummary_Button_K2Node_ComponentBoundEvent_189_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreSummary.StoreSummary_C.Construct
struct UStoreSummary_C_Construct_Params
{
};

// Function StoreSummary.StoreSummary_C.ExecuteUbergraph_StoreSummary
struct UStoreSummary_C_ExecuteUbergraph_StoreSummary_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
