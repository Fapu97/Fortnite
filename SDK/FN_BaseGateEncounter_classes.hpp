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

// BlueprintGeneratedClass BaseGateEncounter.BaseGateEncounter_C
// 0x0009 (0x0C09 - 0x0C00)
class UBaseGateEncounter_C : public UFortAIEncounterInfo
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C00(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      DebugUtilityStuff : 1;                                    // 0x0C08(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BaseGateEncounter.BaseGateEncounter_C");
		return ptr;
	}


	void OnRampStarted();
	void DataLog();
	void OnPeakStarted();
	void OnFadeStarted();
	void ExecuteUbergraph_BaseGateEncounter(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
