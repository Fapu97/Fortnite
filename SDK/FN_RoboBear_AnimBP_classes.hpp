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

// AnimBlueprintGeneratedClass RoboBear_AnimBP.RoboBear_AnimBP_C
// 0x0368 (0x0748 - 0x03E0)
class URoboBear_AnimBP_C : public UFortAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03E0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_94A5640D46AA80EE3A525181A40E89FB;      // 0x03E8(0x0048)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_8FC73BE849B7182366D0C69D3B182E6A;// 0x0430(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_46A72CBF4D105A71E6DE649812CC6D5B;// 0x0478(0x00D8)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12;// 0x0550(0x00B0)
	struct FAnimNode_ConvertLocalToComponentSpace      AnimGraphNode_LocalToComponentSpace_9EB9EC34459C844B0FE0BA8E435EFF6F;// 0x0600(0x0048)
	struct FAnimNode_ConvertComponentToLocalSpace      AnimGraphNode_ComponentToLocalSpace_03791F914454ADFD2E1913880C785340;// 0x0648(0x0048)
	struct FAnimNode_ModifyBone                        AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0;// 0x0690(0x00B0)
	float                                              BearYaw;                                                  // 0x0740(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              BearPitch;                                                // 0x0744(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass RoboBear_AnimBP.RoboBear_AnimBP_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_929212094C7DC2D4ED970EAEFEDF8C12();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_RoboBear_AnimBP_AnimGraphNode_ModifyBone_2628A2884DFA7E07F877E392C1D6D0B0();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_RoboBear_AnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
