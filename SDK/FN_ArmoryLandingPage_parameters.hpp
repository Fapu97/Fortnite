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

// Function ArmoryLandingPage.ArmoryLandingPage_C.PushCollectionBookScreen
struct UArmoryLandingPage_C_PushCollectionBookScreen_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update CollectionBook Tile Locked State
struct UArmoryLandingPage_C_Update_CollectionBook_Tile_Locked_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Transform Tile Locked State
struct UArmoryLandingPage_C_Update_Transform_Tile_Locked_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Survivors Tile Bang State
struct UArmoryLandingPage_C_Update_Survivors_Tile_Bang_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Defenders Tile Bang State
struct UArmoryLandingPage_C_Update_Defenders_Tile_Bang_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Hero Tile Bang State
struct UArmoryLandingPage_C_Update_Hero_Tile_Bang_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update CraftingInventory Tile Bang State
struct UArmoryLandingPage_C_Update_CraftingInventory_Tile_Bang_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Resource Tile Bang State
struct UArmoryLandingPage_C_Update_Resource_Tile_Bang_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Armory Tile Bangs
struct UArmoryLandingPage_C_Update_Armory_Tile_Bangs_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get FortPC
struct UArmoryLandingPage_C_Get_FortPC_Params
{
	class AFortPlayerController*                       AsFort_Player_Controller;                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get Item from Transform Seen State
struct UArmoryLandingPage_C_Get_Item_from_Transform_Seen_State_Params
{
	class UFortAccountItem*                            TransformKey;                                             // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortAccountItem*                            OutItem;                                                  // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Update Transform Tile Bang State
struct UArmoryLandingPage_C_Update_Transform_Tile_Bang_State_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_ArmoryLandingPageTile_C_1_ToolTipWidget
struct UArmoryLandingPage_C_Get_ArmoryLandingPageTile_C_1_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_ArmoryLandingPageTile_C_2_ToolTipWidget
struct UArmoryLandingPage_C_Get_ArmoryLandingPageTile_C_2_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_ArmoryLandingPageTile_C_0_ToolTipWidget
struct UArmoryLandingPage_C_Get_ArmoryLandingPageTile_C_0_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_TileCollectionBook_ToolTipWidget
struct UArmoryLandingPage_C_Get_TileCollectionBook_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_ResourcesInventoryTile_ToolTipWidget
struct UArmoryLandingPage_C_Get_ResourcesInventoryTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_TransformInventoryTile_ToolTipWidget
struct UArmoryLandingPage_C_Get_TransformInventoryTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Get_CraftingInventoryTile_ToolTipWidget
struct UArmoryLandingPage_C_Get_CraftingInventoryTile_ToolTipWidget_Params
{
	class UWidget*                                     ReturnValue;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReturnParm, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.OnItemManagementScreenOp
struct UArmoryLandingPage_C_OnItemManagementScreenOp_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BindNavigationDelegates
struct UArmoryLandingPage_C_BindNavigationDelegates_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.PushItemTransformScreen
struct UArmoryLandingPage_C_PushItemTransformScreen_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.PushItemManagementScreen
struct UArmoryLandingPage_C_PushItemManagementScreen_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.Construct
struct UArmoryLandingPage_C_Construct_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.OnActivated
struct UArmoryLandingPage_C_OnActivated_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.OnDeactivated
struct UArmoryLandingPage_C_OnDeactivated_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__TileCollectionBook_K2Node_ComponentBoundEvent_212_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__TileCollectionBook_K2Node_ComponentBoundEvent_212_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.OnCollectionBookNav
struct UArmoryLandingPage_C_OnCollectionBookNav_Params
{
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__CraftingInventoryTile_K2Node_ComponentBoundEvent_793_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__CraftingInventoryTile_K2Node_ComponentBoundEvent_793_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__ArmoryLandingPageTile_C_0_K2Node_ComponentBoundEvent_812_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__ArmoryLandingPageTile_C_0_K2Node_ComponentBoundEvent_812_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__ArmoryLandingPageTile_C_2_K2Node_ComponentBoundEvent_832_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__ArmoryLandingPageTile_C_2_K2Node_ComponentBoundEvent_832_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__ArmoryLandingPageTile_C_1_K2Node_ComponentBoundEvent_853_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__ArmoryLandingPageTile_C_1_K2Node_ComponentBoundEvent_853_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__TransformInventoryTile_K2Node_ComponentBoundEvent_885_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__TransformInventoryTile_K2Node_ComponentBoundEvent_885_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.BndEvt__ResourcesInventoryTile_K2Node_ComponentBoundEvent_920_CommonButtonClicked__DelegateSignature
struct UArmoryLandingPage_C_BndEvt__ResourcesInventoryTile_K2Node_ComponentBoundEvent_920_CommonButtonClicked__DelegateSignature_Params
{
	class UCommonButton*                               Button;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function ArmoryLandingPage.ArmoryLandingPage_C.ExecuteUbergraph_ArmoryLandingPage
struct UArmoryLandingPage_C_ExecuteUbergraph_ArmoryLandingPage_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
