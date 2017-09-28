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

// BlueprintGeneratedClass GAB_GrantBeehiveGEs.GAB_GrantBeehiveGEs_C
// 0x0010 (0x0A50 - 0x0A40)
class UGAB_GrantBeehiveGEs_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UClass*                                      WearingBeehiveGameplayEffect;                             // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GrantBeehiveGEs.GAB_GrantBeehiveGEs_C");
		return ptr;
	}


	void K2_ActivateAbility();
	void ExecuteUbergraph_GAB_GrantBeehiveGEs(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
