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

// BlueprintGeneratedClass GAB_HuskyHuskLand.GAB_HuskyHuskLand_C
// 0x0010 (0x0A50 - 0x0A40)
class UGAB_HuskyHuskLand_C : public UFortGameplayAbility_Land
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FName                                       SectionName;                                              // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskyHuskLand.GAB_HuskyHuskLand_C");
		return ptr;
	}


	void OnCancelled_CEB5DAF34EB9F8605A758D9310C9D99E();
	void OnInterrupted_CEB5DAF34EB9F8605A758D9310C9D99E();
	void OnBlendOut_CEB5DAF34EB9F8605A758D9310C9D99E();
	void OnCompleted_CEB5DAF34EB9F8605A758D9310C9D99E();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskyHuskLand(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
