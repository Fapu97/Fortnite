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

// BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C
// 0x0028 (0x0A68 - 0x0A40)
class UGAB_GenericApplyPush_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0A40(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UAnimMontage*                                PushedMontage;                                            // 0x0A48(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FGameplayTag                                PushAsideTag;                                             // 0x0A50(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	float                                              Time;                                                     // 0x0A58(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UGA_Constructor_BullRush_C*                  GA_BullRush;                                              // 0x0A60(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass GAB_GenericApplyPush.GAB_GenericApplyPush_C");
		return ptr;
	}


	void OnCancelled_569FFD0446FBE214B15C2B8019481F5F();
	void OnInterrupted_569FFD0446FBE214B15C2B8019481F5F();
	void OnBlendOut_569FFD0446FBE214B15C2B8019481F5F();
	void OnCompleted_569FFD0446FBE214B15C2B8019481F5F();
	void EventReceived_7764EAC14FD514E952F78BA2A0CF9ABE(const struct FGameplayEventData& Payload);
	void OnCancelled_8D429E634F6B70CB0A894484CBF629F1();
	void OnInterrupted_8D429E634F6B70CB0A894484CBF629F1();
	void OnBlendOut_8D429E634F6B70CB0A894484CBF629F1();
	void OnCompleted_8D429E634F6B70CB0A894484CBF629F1();
	void K2_ActivateAbilityFromEvent(struct FGameplayEventData* EventData);
	void ExecuteUbergraph_GAB_GenericApplyPush(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
