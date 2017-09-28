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

// WidgetBlueprintGeneratedClass LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C
// 0x0048 (0x0280 - 0x0238)
class ULobbyGadgetSelectionChoice_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0238(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class ULobbyGadgetButton_C*                        ButtonGadget1;                                            // 0x0240(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	class ULobbyGadgetButton_C*                        ButtonGadget2;                                            // 0x0248(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    OnClicked;                                                // 0x0250(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnGadgetHovered;                                          // 0x0260(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	class ULobbyGadgetButton_C*                        HoveredGadgetButton;                                      // 0x0270(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class ULobbyGadgetButton_C*                        SelectedGadgetButton;                                     // 0x0278(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyGadgetSelectionChoice.LobbyGadgetSelectionChoice_C");
		return ptr;
	}


	void AreGadgetsLocked(bool* bAreGadgetsLocked);
	void InitializeContextEvents();
	void OnHomebaseInventoryUpdated();
	void OnLobbyStarted();
	void GetHoveredItem(class UFortWorldItem** GadgetWorldItem);
	void OnLocalAccountInfoChanged(const struct FFortPrivateAccountInfo& PrivateAccountInfo);
	void Initialize();
	void GetSelectedSlotIndex(int* SlotIndex, bool* bSelected);
	void Focus();
	void Refresh();
	void Construct();
	void BndEvt__ButtonGadget11_K2Node_ComponentBoundEvent_249_OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void BndEvt__ButtonGadget11_K2Node_ComponentBoundEvent_258_OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void BndEvt__ButtonGadget22_K2Node_ComponentBoundEvent_265_OnButtonClicked__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void BndEvt__ButtonGadget22_K2Node_ComponentBoundEvent_276_OnButtonHovered__DelegateSignature(class ULobbyGadgetButton_C* GadgetButton);
	void ExecuteUbergraph_LobbyGadgetSelectionChoice(int EntryPoint);
	void OnGadgetHovered__DelegateSignature(class UFortWorldItem* GadgetItem);
	void OnClicked__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
