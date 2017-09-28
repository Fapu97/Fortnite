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

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Set Success Chance
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Set_Success_Chance_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Set Vehicle Icon
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Set_Vehicle_Icon_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_ConstParm, CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Set Expedition Returns Data
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Set_Expedition_Returns_Data_Params
{
	class UFortExpeditionItem*                         InputPin;                                                 // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Set Rarity
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Set_Rarity_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Set Rating
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Set_Rating_Params
{
	class UFortExpeditionItem*                         Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Get Expedition Item Definition
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Get_Expedition_Item_Definition_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UFortExpeditionItemDefinition*               Item_Def;                                                 // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Set Name
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Set_Name_Params
{
	class UFortItem*                                   Item;                                                     // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.Setup Base Item Data
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_Setup_Base_Item_Data_Params
{
	class UFortExpeditionItem*                         Expedition;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.SetData
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_SetData_Params
{
	class UObject**                                    InData;                                                   // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UCommonListView**                            OwningList;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function BP_InProgressExpeditionsSummaryListItemWidget.BP_InProgressExpeditionsSummaryListItemWidget_C.ExecuteUbergraph_BP_InProgressExpeditionsSummaryListItemWidget
struct UBP_InProgressExpeditionsSummaryListItemWidget_C_ExecuteUbergraph_BP_InProgressExpeditionsSummaryListItemWidget_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
