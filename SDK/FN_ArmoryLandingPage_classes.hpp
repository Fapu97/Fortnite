#pragma once

// Fortnite (Alpha) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass ArmoryLandingPage.ArmoryLandingPage_C
// 0x0168 (0x0548 - 0x03E0)
class UArmoryLandingPage_C : public UFortArmoryScreen
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UGridPanel*                                  ArmoryPageSelectionScreen;                                // 0x03E8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    BackpackInventoryTile;                                    // 0x03F0(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    ConsumablesInventoryTile;                                 // 0x03F8(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    CraftingInventoryTile;                                    // 0x0400(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    DefendersTile;                                            // 0x0408(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    HeroesTile;                                               // 0x0410(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    ResourcesInventoryTile;                                   // 0x0418(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    SurvivorsTile;                                            // 0x0420(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    TileCollectionBook;                                       // 0x0428(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UArmoryLandingPageTile_C*                    TransformInventoryTile;                                   // 0x0430(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class UItemManagementScreen_C*                     ItemManagementScreen;                                     // 0x0438(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FText                                       Tooltip_Header_Schematics;                                // 0x0440(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Description_Schematics;                           // 0x0458(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Header_Transform;                                 // 0x0470(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Description_Transform;                            // 0x0488(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Header_Resources;                                 // 0x04A0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Description_Resources;                            // 0x04B8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Description_Collection;                           // 0x04D0(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FText                                       Tooltip_Header_Collection;                                // 0x04E8(0x0018) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      UnknownData00[0x1];                                       // 0x0500(0x0001) UNKNOWN PROPERTY: EnumProperty ArmoryLandingPage.ArmoryLandingPage_C.CraftingInventoryTileFilter
	unsigned char                                      UnknownData01[0x1];                                       // 0x0501(0x0001) UNKNOWN PROPERTY: EnumProperty ArmoryLandingPage.ArmoryLandingPage_C.ResourceTileFilter
	unsigned char                                      UnknownData02[0x1];                                       // 0x0502(0x0001) UNKNOWN PROPERTY: EnumProperty ArmoryLandingPage.ArmoryLandingPage_C.HeroTileFilter
	unsigned char                                      UnknownData03[0x1];                                       // 0x0503(0x0001) UNKNOWN PROPERTY: EnumProperty ArmoryLandingPage.ArmoryLandingPage_C.DefendersTileFilter
	unsigned char                                      UnknownData04[0x1];                                       // 0x0504(0x0001) UNKNOWN PROPERTY: EnumProperty ArmoryLandingPage.ArmoryLandingPage_C.SurvivorsTileFilter
	struct FGameplayTagContainer                       TransformTag;                                             // 0x0508(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FGameplayTagContainer                       CollectionBookTag;                                        // 0x0528(0x0020) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass ArmoryLandingPage.ArmoryLandingPage_C");
		return ptr;
	}


	void PushCollectionBookScreen();
	void Update_CollectionBook_Tile_Locked_State();
	void Update_Transform_Tile_Locked_State();
	void Update_Survivors_Tile_Bang_State();
	void Update_Defenders_Tile_Bang_State();
	void Update_Hero_Tile_Bang_State();
	void Update_CraftingInventory_Tile_Bang_State();
	void Update_Resource_Tile_Bang_State();
	void Update_Armory_Tile_Bangs();
	void Get_FortPC(class AFortPlayerController** AsFort_Player_Controller);
	void Get_Item_from_Transform_Seen_State(class UFortAccountItem* TransformKey, class UFortAccountItem** OutItem);
	void Update_Transform_Tile_Bang_State();
	class UWidget* Get_ArmoryLandingPageTile_C_1_ToolTipWidget();
	class UWidget* Get_ArmoryLandingPageTile_C_2_ToolTipWidget();
	class UWidget* Get_ArmoryLandingPageTile_C_0_ToolTipWidget();
	class UWidget* Get_TileCollectionBook_ToolTipWidget();
	class UWidget* Get_ResourcesInventoryTile_ToolTipWidget();
	class UWidget* Get_TransformInventoryTile_ToolTipWidget();
	class UWidget* Get_CraftingInventoryTile_ToolTipWidget();
	void OnItemManagementScreenOp();
	void BindNavigationDelegates();
	void PushItemTransformScreen();
	void PushItemManagementScreen();
	void Construct();
	void OnActivated();
	void OnDeactivated();
	void BndEvt__TileCollectionBook_K2Node_ComponentBoundEvent_212_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void OnCollectionBookNav();
	void BndEvt__CraftingInventoryTile_K2Node_ComponentBoundEvent_793_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ArmoryLandingPageTile_C_0_K2Node_ComponentBoundEvent_812_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ArmoryLandingPageTile_C_2_K2Node_ComponentBoundEvent_832_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ArmoryLandingPageTile_C_1_K2Node_ComponentBoundEvent_853_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__TransformInventoryTile_K2Node_ComponentBoundEvent_885_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void BndEvt__ResourcesInventoryTile_K2Node_ComponentBoundEvent_920_CommonButtonClicked__DelegateSignature(class UCommonButton* Button);
	void ExecuteUbergraph_ArmoryLandingPage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
