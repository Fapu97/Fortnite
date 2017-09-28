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

// BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C
// 0x00D5 (0x1095 - 0x0FC0)
class AParent_BuildingPropActor_C : public ABuildingProp
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0FC0(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	unsigned char                                      DebugWind : 1;                                            // 0x0FC8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<class UMaterialInterface*>                  IntenseWindMaterialsForPreview;                           // 0x0FD0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class UMaterialInterface*>                  OriginalMaterials;                                        // 0x0FE0(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	class UStaticMeshComponent*                        Wind_Intensity_Debug_Mesh;                                // 0x0FF0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    Debug_TempMaterial;                                       // 0x0FF8(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Debug_Wind_Intensity;                                     // 0x1000(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              DebugWindYaw;                                             // 0x1004(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FDayPhaseFloats                             Light_Intensity_Over_Time_of_Day_;                        // 0x1008(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	struct FDayPhaseFloats                             Emissive_Intensity_Over_Time_of_Day;                      // 0x1018(0x0010) (CPF_Edit, CPF_BlueprintVisible)
	int                                                CodeControlled_NumberOfMaterials;                         // 0x1028(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<struct FLinearColor>                        CodeControlled_EmissiveColor;                             // 0x1030(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<class ULightComponent*>                     TimeOfDayControlledLightsArray;                           // 0x1040(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	TArray<float>                                      CodeControlled_LightConeOpacity;                          // 0x1050(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	unsigned char                                      Animate_Emissive_and_Lights_Over_Time : 1;                // 0x1060(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Day_Phase_Transition_Length;                              // 0x1064(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      Disable_TOD_Lights_and_Material_Emissive_Values : 1;      // 0x1068(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Disable_Static_Mesh_Shadow_Casting_When_Lights_Are_Active : 1;// 0x1069(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMesh*                                 AlternateShadowStaticMesh;                                // 0x1070(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Use_An_Alternate_Shadow_Mesh_When_The_Light_is_Off_ : 1;  // 0x1078(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	TArray<struct FVector>                             TimeOfDayControlledLightsPositionArray;                   // 0x1080(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              Volumetric_Light_Scattering_Intensity;                    // 0x1090(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Cast_Volumetric_Shadows : 1;                              // 0x1094(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Parent_BuildingPropActor.Parent_BuildingPropActor_C");
		return ptr;
	}


	void Add_to_TOD_Light_Array(class ULightComponent* NewItem);
	void Set__MID_Values_For_Lights();
	void Set_Light_parameters(float Previous_to_Current_Day_Phase_Alpha);
	void UserConstructionScript();
	void OnDayPhaseChanged(TEnumAsByte<EFortDayPhase>* CurrentDayPhase, TEnumAsByte<EFortDayPhase>* PreviousDayPhase, bool* bAtCreation);
	void ReceiveBeginPlay();
	void OnBounceAnimationUpdate(struct FFortBounceData* Data);
	void ExecuteUbergraph_Parent_BuildingPropActor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
