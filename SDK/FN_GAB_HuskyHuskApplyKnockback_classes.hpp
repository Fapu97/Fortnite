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

// BlueprintGeneratedClass GAB_HuskyHuskApplyKnockback.GAB_HuskyHuskApplyKnockback_C
// 0x000F (0x0B28 - 0x0B19)
class UGAB_HuskyHuskApplyKnockback_C : public UGAB_GenericApplyKnockback_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0B20(0x0008) (CPF_Transient, CPF_DuplicateTransient)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_HuskyHuskApplyKnockback.GAB_HuskyHuskApplyKnockback_C");
		return ptr;
	}


	void SetupMontageSectionsAndOrientDirection();
	void ExecuteUbergraph_GAB_HuskyHuskApplyKnockback(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
