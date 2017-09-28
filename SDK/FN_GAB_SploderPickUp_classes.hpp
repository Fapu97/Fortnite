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

// BlueprintGeneratedClass GAB_SploderPickUp.GAB_SploderPickUp_C
// 0x0008 (0x0A48 - 0x0A40)
class UGAB_SploderPickUp_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_SploderPickUp.GAB_SploderPickUp_C");
		return ptr;
	}


	void OnCancelled_6D7FF36B425F86F249431DA4767D2689();
	void OnInterrupted_6D7FF36B425F86F249431DA4767D2689();
	void OnBlendOut_6D7FF36B425F86F249431DA4767D2689();
	void OnCompleted_6D7FF36B425F86F249431DA4767D2689();
	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_SploderPickUp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
