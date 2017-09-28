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

// WidgetBlueprintGeneratedClass DefenderSquadsLandingPage.DefenderSquadsLandingPage_C
// 0x0020 (0x0460 - 0x0440)
class UDefenderSquadsLandingPage_C : public UFortSquadTypeLandingPageBase
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0440(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UScrollBox*                                  SquadTileHorizontalScrollBox;                             // 0x0448(0x0008) (CPF_BlueprintVisible, CPF_ExportObject, CPF_ZeroConstructor, CPF_InstancedReference, CPF_IsPlainOldData, CPF_RepSkip, CPF_RepNotify, CPF_Interp, CPF_NonTransactional, CPF_EditorOnly, CPF_NoDestructor, CPF_AutoWeak, CPF_ContainsInstancedReference, CPF_AssetRegistrySearchable, CPF_SimpleDisplay, CPF_AdvancedDisplay, CPF_Protected, CPF_BlueprintCallable, CPF_BlueprintAuthorityOnly, CPF_TextExportTransient, CPF_NonPIEDuplicateTransient, CPF_ExposeOnSpawn, CPF_PersistentInstance, CPF_UObjectWrapper, CPF_HasGetValueTypeHash, CPF_NativeAccessSpecifierPublic, CPF_NativeAccessSpecifierProtected, CPF_NativeAccessSpecifierPrivate)
	struct FMargin                                     TilePadding;                                              // 0x0450(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass DefenderSquadsLandingPage.DefenderSquadsLandingPage_C");
		return ptr;
	}


	void Refresh_Defender_Buttons_Bang_State();
	class UFortSquadSelectorButton* CreateAndAddSquadButton(struct FName* SquadId);
	void Construct();
	void OnActivated();
	void ExecuteUbergraph_DefenderSquadsLandingPage(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
