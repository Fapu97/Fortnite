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

// BlueprintGeneratedClass Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C
// 0x0008 (0x0030 - 0x0028)
class UGen_Interact_UnregisterFocus_C : public UFortMissionEventParams
{
public:
	class AActor*                                      ActorToUnregister;                                        // 0x0028(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Gen_Interact_UnregisterFocus.Gen_Interact_UnregisterFocus_C");
		return ptr;
	}


	void BreakParams(class AActor** ActorToUnregisterRegister);
	void SetParams(class AActor* ActorToUnregister, class UGen_Interact_UnregisterFocus_C** ThisObject);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
