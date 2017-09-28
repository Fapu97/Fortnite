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

// BlueprintGeneratedClass AIDirector_Fortnite.AIDirector_Fortnite_C
// 0x0080 (0x0CC0 - 0x0C40)
class AAIDirector_Fortnite_C : public AFortAIDirector
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0C40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	float                                              PatrolWardBaseBuildingSafeDistance;                       // 0x0C48(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              PatrolWardActiveEncounterSafeDistance;                    // 0x0C4C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	int                                                GuardianHitCount;                                         // 0x0C50(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                GuardiantHitCountToConsiderOutsideMax;                    // 0x0C54(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      GuardianPointInside : 1;                                  // 0x0C58(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FName>                               GuardianIndoorList;                                       // 0x0C60(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               GuardianIndoorListPruned;                                 // 0x0C70(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               GuardianOutdoorList;                                      // 0x0C80(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<struct FName>                               GuardianOutdoorListPruned;                                // 0x0C90(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      GuardianDebug : 1;                                        // 0x0CA0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     GuardianObjectLocation;                                   // 0x0CA4(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FRotator                                    GuardianObjectRotation;                                   // 0x0CB0(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	int                                                GuardianPawnSpawnIndex;                                   // 0x0CBC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AIDirector_Fortnite.AIDirector_Fortnite_C");
		return ptr;
	}


	void UserConstructionScript();
	void OnPeakStarted();
	void OnFadeStarted();
	void OnRestStarted();
	void OnRampStarted();
	void ExecuteUbergraph_AIDirector_Fortnite(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
