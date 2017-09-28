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

// WidgetBlueprintGeneratedClass LobbyGadgetSelection.LobbyGadgetSelection_C
// 0x0030 (0x0268 - 0x0238)
class ULobbyGadgetSelection_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class ULobbyGadgetSelectionChoice_C*               Choice;                                                   // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class ULobbyGadgetSelectionDetails_C*              Details;                                                  // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class ULobbyGadgetSelectionList_C*                 List;                                                     // 0x0250(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClosed;                                                 // 0x0258(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyGadgetSelection.LobbyGadgetSelection_C");
		return ptr;
	}


	void Close();
	void RemoveExistingGadgetFromSlot(int SlotIndex, class UFortWorldItem* WorldItem);
	void SelectGadgetForSlot(int InSlotIndex, class UFortWorldItem* InWorldItem);
	void Refresh();
	void OnHomebaseInventoryUpdated();
	void OnLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& PrivateAccountIndo);
	void Initialize();
	void Cancel();
	void RefreshDetails(class UFortWorldItem* GadgetItem);
	void Focus();
	void BndEvt__List_K2Node_ComponentBoundEvent_0_OnItemSelected__DelegateSignature(class UFortWorldItem* GadgetWorldItem);
	void BndEvt__List_K2Node_ComponentBoundEvent_0_OnItemCommitted__DelegateSignature(class UFortWorldItem* GadgetWorldItem);
	void BndEvt__Choice_K2Node_ComponentBoundEvent_2_OnClicked__DelegateSignature();
	void BndEvt__Choice_K2Node_ComponentBoundEvent_12_OnGadgetHovered__DelegateSignature(class UFortWorldItem* GadgetItem);
	void Construct();
	void ExecuteUbergraph_LobbyGadgetSelection(int EntryPoint);
	void OnClosed__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
