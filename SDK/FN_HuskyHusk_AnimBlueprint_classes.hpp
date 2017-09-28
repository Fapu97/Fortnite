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

// AnimBlueprintGeneratedClass HuskyHusk_AnimBlueprint.HuskyHusk_AnimBlueprint_C
// 0x1CDA (0x212A - 0x0450)
class UHuskyHusk_AnimBlueprint_C : public UFortHuskAnimInstance
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0450(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	struct FAnimNode_Root                              AnimGraphNode_Root_E0738F9C4B961F76418ADBB0BD0BD3E2;      // 0x0458(0x0048)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_85FC94794CDBD7D5EC263B8A1FDB2CF1;      // 0x04A0(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_35600CF0463F32C2D63C2990276C3A13;      // 0x0500(0x0060)
	struct FAnimNode_Slot                              AnimGraphNode_Slot_5C45D822456C4600C448B691A8AC035F;      // 0x0560(0x0060)
	struct FAnimNode_LayeredBoneBlend                  AnimGraphNode_LayeredBoneBlend_E94AF4ED4D3DD700085A118EF3986015;// 0x05C0(0x00B0)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_4CC244374DC69718662F6FAEBC923553;// 0x0670(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_B2C98E0B467A316ECB3C8EA0E6E240AF;// 0x06F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DF703EF640238D419B071DABC42563A5;// 0x0770(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_94788343401C88F30C5D4EB945C0CA4F;// 0x07F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_0BAFB06848AAF153C2F785B7A824B201;// 0x0870(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_DD85389D4F735CFF4DAB0D8B03A80E8D;// 0x08F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_299693DB477CBC05AE4889A83B54D61E;// 0x0970(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_7020CDB54BEC6F11B5019AB2C2B7B010;// 0x09F0(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_1CC31CBF454EC03468D635A6384834F1;// 0x0A70(0x0080)
	struct FAnimNode_TransitionResult                  AnimGraphNode_TransitionResult_E8F8CFEB4FCE62B2CE9F77882B4B8FE8;// 0x0AF0(0x0080)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_40396A314A3562EF5497DB878099A763;// 0x0B70(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_6AE906D64F04C622EE1C0E8790E5820F;// 0x0BE0(0x00D0)
	struct FAnimNode_SequenceEvaluator                 AnimGraphNode_SequenceEvaluator_E817A549485D713F0779A7B095F60EA7;// 0x0CB0(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_235423DC45E2A8F7B1EDD9B58BE7FA8D;// 0x0D20(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_2C876F814B5AC3F79184BDAAD0FE1D2C;// 0x0D68(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B84856674DC3D341B6A967AB48C4F843;// 0x0DD8(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_9A50D1DF4622C691B39A9FAE2A5D49D1;// 0x0EA8(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_729FA74544DA9B73F497B6B7FB8450C6;// 0x0F18(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_28B051824CC8AE9006A87E8C84082F7A;// 0x0F60(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_7EF0DF25466C758F3C8D798206EAA932;// 0x0FD0(0x0048)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_3D7160D64CF82FA62E007C8E287941CB;// 0x1018(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_73EFF77B4FC9B6C1312943A99F2A0A01;// 0x10E8(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_087282D147B52D06B86CF49E6F60BFB4;// 0x1158(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_74A83F1D434CBFACC4B7619944C094B1;// 0x11C8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_4E84997E49CF98928115FEA5CF6294FB;// 0x1210(0x0070)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_67B68D4D435030B98C4848A97B5913D2;// 0x1280(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_A24A52D742E515D37ABCEBBA06AD40BF;// 0x12F0(0x00D0)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_263528634D2860A90F7BF4B36BF1D98F;// 0x13C0(0x0048)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_31DE58E34727B030EC7BF9A722FCC2E0;// 0x1408(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_8F31170749710A529184539B9C872DF7;// 0x1528(0x00D0)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_E97773C946CDB83E511FB296809C2F36;// 0x15F8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_80A784A14F311E231803D5937B2B55CE;// 0x16C8(0x0120)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_141A04A3488B616F9877A99E18DD3B97;// 0x17E8(0x00D0)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_0F839A7846C7117C22E469B09EFE47A5;// 0x18B8(0x0120)
	struct FAnimNode_BlendSpacePlayer                  AnimGraphNode_BlendSpacePlayer_66A15ACC46ED352F9CB282BAD1D550E9;// 0x19D8(0x0120)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_C43803324AA67186A368DC9FB74AF150;// 0x1AF8(0x0048)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_1C1A2DC0486CA114B6F23481D5BA422B;// 0x1B40(0x0070)
	struct FAnimNode_BlendListByBool                   AnimGraphNode_BlendListByBool_B834A4CA4C469983FFD920B381F62542;// 0x1BB0(0x00D0)
	struct FAnimNode_SequencePlayer                    AnimGraphNode_SequencePlayer_352F15074687391989BCD0B657BBE018;// 0x1C80(0x0070)
	struct FAnimNode_Root                              AnimGraphNode_StateResult_5A2265FB4DEF3BBC5AF707AF4785CB27;// 0x1CF0(0x0048)
	struct FAnimNode_StateMachine                      AnimGraphNode_StateMachine_6AA7FBFC4E9EBF9CBF47F4B215B194CC;// 0x1D38(0x00D8)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_540E18B04666F7140B1EF0B186E4CD72;// 0x1E10(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_5316A0A64BDE7943726FF79EA3DACB4D;// 0x1EB8(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_2B98290F46FB2516CFDB46A82DFB4CEA;// 0x1F08(0x0050)
	struct FAnimNode_TwoWayBlend                       AnimGraphNode_TwoWayBlend_0795E79F478CC6C7197FF3824B65AAB6;// 0x1F58(0x0078)
	struct FAnimNode_SaveCachedPose                    AnimGraphNode_SaveCachedPose_32BAE9BD4754F669BA31B2B7E7615D13;// 0x1FD0(0x00A8)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_18743C774F034D25E25FFA8D4B27A93D;// 0x2078(0x0050)
	struct FAnimNode_UseCachedPose                     AnimGraphNode_UseCachedPose_9CE639884F43B9D4922E15A385F45039;// 0x20C8(0x0050)
	unsigned char                                      bIsCarryingTank : 1;                                      // 0x2118(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              AuthoredWalkSpeed;                                        // 0x211C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              WalkPlayRate;                                             // 0x2120(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              JogPlayRate;                                              // 0x2124(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ShouldPlayWalk : 1;                                       // 0x2128(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      ShouldDisableWalks : 1;                                   // 0x2129(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass HuskyHusk_AnimBlueprint.HuskyHusk_AnimBlueprint_C");
		return ptr;
	}


	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_E8F8CFEB4FCE62B2CE9F77882B4B8FE8();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_7020CDB54BEC6F11B5019AB2C2B7B010();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_6AE906D64F04C622EE1C0E8790E5820F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_299693DB477CBC05AE4889A83B54D61E();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_B84856674DC3D341B6A967AB48C4F843();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_DD85389D4F735CFF4DAB0D8B03A80E8D();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_3D7160D64CF82FA62E007C8E287941CB();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_0BAFB06848AAF153C2F785B7A824B201();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_A24A52D742E515D37ABCEBBA06AD40BF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_31DE58E34727B030EC7BF9A722FCC2E0();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_8F31170749710A529184539B9C872DF7();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_E97773C946CDB83E511FB296809C2F36();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_80A784A14F311E231803D5937B2B55CE();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_141A04A3488B616F9877A99E18DD3B97();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_0F839A7846C7117C22E469B09EFE47A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendSpacePlayer_66A15ACC46ED352F9CB282BAD1D550E9();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_94788343401C88F30C5D4EB945C0CA4F();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_DF703EF640238D419B071DABC42563A5();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_B2C98E0B467A316ECB3C8EA0E6E240AF();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_1CC31CBF454EC03468D635A6384834F1();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_BlendListByBool_B834A4CA4C469983FFD920B381F62542();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_TransitionResult_4CC244374DC69718662F6FAEBC923553();
	void EvaluateGraphExposedInputs_ExecuteUbergraph_HuskyHusk_AnimBlueprint_AnimGraphNode_LayeredBoneBlend_E94AF4ED4D3DD700085A118EF3986015();
	void BlueprintUpdateAnimation(float* DeltaTimeX);
	void ExecuteUbergraph_HuskyHusk_AnimBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
