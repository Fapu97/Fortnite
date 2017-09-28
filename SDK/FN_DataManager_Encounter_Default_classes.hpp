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

// BlueprintGeneratedClass DataManager_Encounter_Default.DataManager_Encounter_Default_C
// 0x0008 (0x0480 - 0x0478)
class ADataManager_Encounter_Default_C : public AFortAIDirectorDataManager
{
public:
	class USceneComponent*                             DefaultSceneRoot;                                         // 0x0478(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DataManager_Encounter_Default.DataManager_Encounter_Default_C");
		return ptr;
	}


	void UserConstructionScript();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
