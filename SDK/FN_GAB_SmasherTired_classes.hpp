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

// BlueprintGeneratedClass GAB_SmasherTired.GAB_SmasherTired_C
// 0x0010 (0x0A58 - 0x0A48)
class UGAB_SmasherTired_C : public UGAB_AIBaseSimpleMontage_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A48(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      GE_SmasherClearChargeEffects;                             // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherTired.GAB_SmasherTired_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void K2_OnEndAbility();
	void ExecuteUbergraph_GAB_SmasherTired(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
