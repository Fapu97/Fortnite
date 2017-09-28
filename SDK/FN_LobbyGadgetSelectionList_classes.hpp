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

// WidgetBlueprintGeneratedClass LobbyGadgetSelectionList.LobbyGadgetSelectionList_C
// 0x0038 (0x02C8 - 0x0290)
class ULobbyGadgetSelectionList_C : public UFortItemPickerBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0290(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	TArray<class UFortWorldItem*>                      GadgetWorldItems;                                         // 0x0298(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	struct FScriptMulticastDelegate                    OnItemSelected;                                           // 0x02A8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnItemCommitted;                                          // 0x02B8(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass LobbyGadgetSelectionList.LobbyGadgetSelectionList_C");
		return ptr;
	}


	void InitializeEvents();
	void OnSelectionCommitted(class UFortItem* Item);
	void OnSelectionChanged(class UFortItem* Item);
	void Focus();
	void Refresh();
	void Construct();
	void ExecuteUbergraph_LobbyGadgetSelectionList(int EntryPoint);
	void OnItemCommitted__DelegateSignature(class UFortWorldItem* GadgetWorldItem);
	void OnItemSelected__DelegateSignature(class UFortWorldItem* GadgetWorldItem);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
