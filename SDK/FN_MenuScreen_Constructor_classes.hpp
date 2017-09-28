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

// AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C
// 0x0610 (0x09E0 - 0x03D0)
class UMenuScreen_Constructor_C : public UFrontendAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_F64C467C442A6D34A1666EA1BF342A2B;      // 0x03D8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_1DC6661B438E1971D6F101968B74F342; // 0x0420(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_C826C91C469ADA2A350AE1AF28AAC72D; // 0x04E0(0x00C0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_72E3A5084877E826D78190958B50B30E;// 0x05A0(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_51136A9E446592F9DA802D8316553F4A;// 0x05E8(0x0048)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_B4769B7F4CE874824DC4E48864618B87; // 0x0630(0x00C0)
	struct FAnimNode_TwoBoneIK                         AnimGraphNode_TwoBoneIK_36FDD95640262E84587573A260925C6D; // 0x06F0(0x00C0)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_D9B684254003641AE72DD489B091046B;      // 0x07B0(0x0060)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_07E146734FAAC10EDA1AA99B23C1DCC3;// 0x0810(0x0070)
	struct FAnimNode_BlendListByEnum                   AnimGraphNode_BlendListByEnum_39B34F994D4009B88DDC4CBFB15815AD;// 0x0880(0x00E0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_FE38F79D451A9AF748C98B81F3662628;// 0x0960(0x0070)
	struct FScriptMulticastDelegate                    MenuScreenDispatcher;                                     // 0x09D0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass MenuScreen_Constructor.MenuScreen_Constructor_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_MenuScreen_Constructor_AnimGraphNode_BlendListByEnum_39B34F994D4009B88DDC4CBFB15815AD();
	void AnimNotify_playFacialAnim();
	void ExecuteUbergraph_MenuScreen_Constructor(int EntryPoint);
	void MenuScreenDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
