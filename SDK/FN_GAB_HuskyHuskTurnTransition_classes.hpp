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

// BlueprintGeneratedClass GAB_HuskyHuskTurnTransition.GAB_HuskyHuskTurnTransition_C
// 0x0020 (0x0AB0 - 0x0A90)
class UGAB_HuskyHuskTurnTransition_C : public UFortGameplayAbility_AITurnTransition
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A90(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FRotator                                    PriorPawnRotationRate;                                    // 0x0A98(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UClass*                                      GE_AIBaseMeleeFrustration_Build;                          // 0x0AA8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskyHuskTurnTransition.GAB_HuskyHuskTurnTransition_C");
		return ptr;
	}


	void OnCancelled_F3C2499241A16C98ACA1BCBBCA948040();
	void OnInterrupted_F3C2499241A16C98ACA1BCBBCA948040();
	void OnBlendOut_F3C2499241A16C98ACA1BCBBCA948040();
	void OnCompleted_F3C2499241A16C98ACA1BCBBCA948040();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_HuskyHuskTurnTransition(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
