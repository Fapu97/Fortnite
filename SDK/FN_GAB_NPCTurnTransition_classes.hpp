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

// BlueprintGeneratedClass GAB_NPCTurnTransition.GAB_NPCTurnTransition_C
// 0x0010 (0x0AA0 - 0x0A90)
class UGAB_NPCTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A90(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      GE_AIBaseMeleeFrustration_Build;                          // 0x0A98(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_NPCTurnTransition.GAB_NPCTurnTransition_C");
		return ptr;
	}


	void OnCancelled_940C59954AFE32346A40E49BFAFD2A0B();
	void OnInterrupted_940C59954AFE32346A40E49BFAFD2A0B();
	void OnBlendOut_940C59954AFE32346A40E49BFAFD2A0B();
	void OnCompleted_940C59954AFE32346A40E49BFAFD2A0B();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_NPCTurnTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
