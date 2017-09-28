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

// BlueprintGeneratedClass GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C
// 0x0010 (0x0AA0 - 0x0A90)
class UGAB_SmasherTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A90(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      GE_SmasherMeleeFailure;                                   // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SmasherTurnTransition.GAB_SmasherTurnTransition_C");
		return ptr;
	}


	void OnCancelled_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnInterrupted_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnBlendOut_74AB7DD04E752966F0F2FB849BD5B81D();
	void OnCompleted_74AB7DD04E752966F0F2FB849BD5B81D();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SmasherTurnTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
