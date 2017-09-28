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

// Function StoreChaseItem.StoreChaseItem_C.CycleChaseItems
struct UStoreChaseItem_C_CycleChaseItems_Params
{
};

// Function StoreChaseItem.StoreChaseItem_C.ToggleChaseItemTimer
struct UStoreChaseItem_C_ToggleChaseItemTimer_Params
{
	bool                                               IsEnabled;                                                // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

// Function StoreChaseItem.StoreChaseItem_C.Init
struct UStoreChaseItem_C_Init_Params
{
	TArray<class UChaseItemCard_C*>                    inChaseItem;                                              // (CPF_Parm, CPF_OutParm, CPF_ZeroConstructor, CPF_ReferenceParm)
};

// Function StoreChaseItem.StoreChaseItem_C.Construct
struct UStoreChaseItem_C_Construct_Params
{
};

// Function StoreChaseItem.StoreChaseItem_C.ExecuteUbergraph_StoreChaseItem
struct UStoreChaseItem_C_ExecuteUbergraph_StoreChaseItem_Params
{
	int                                                EntryPoint;                                               // (CPF_Parm, CPF_ZeroConstructor, CPF_IsPlainOldData)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
