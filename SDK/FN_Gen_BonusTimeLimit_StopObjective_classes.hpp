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

// BlueprintGeneratedClass Gen_BonusTimeLimit_StopObjective.Gen_BonusTimeLimit_StopObjective_C
// 0x0001 (0x0029 - 0x0028)
class UGen_BonusTimeLimit_StopObjective_C : public UFortMissionEventParams
{
public:
	unsigned char                                      UnknownData00[0x1];                                       // 0x0028(0x0001) UNKNOWN PROPERTY: EnumProperty Gen_BonusTimeLimit_StopObjective.Gen_BonusTimeLimit_StopObjective_C.ObjectiveStatus

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_BonusTimeLimit_StopObjective.Gen_BonusTimeLimit_StopObjective_C");
		return ptr;
	}


	void BreakParams();
	void SetParams(class UGen_BonusTimeLimit_StopObjective_C** ThisObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
