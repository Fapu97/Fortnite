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

// BlueprintGeneratedClass CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C
// 0x01D0 (0x0720 - 0x0550)
class ACorrectcloudStartBlueprint_C : public AThreatCloud
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0550(0x0008) (CPF_Transient, CPF_DuplicateTransient)
	class UDirectionalLightComponent*                  LightningLightEpicQualityDirectional;                     // 0x0558(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_Cloud_RandomLightning_01;                               // 0x0560(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UPointLightComponent*                        LightningLightEpicQuality;                                // 0x0568(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UParticleSystemComponent*                    P_DistantLightningFlashes_01;                             // 0x0570(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               LightningAreaBox;                                         // 0x0578(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UAudioComponent*                             Storm_Stereo_Sound_Loop;                                  // 0x0580(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UBoxComponent*                               DimensionsBox;                                            // 0x0588(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        CloudMesh_FullRound;                                      // 0x0590(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UStaticMeshComponent*                        TopDarkenMesh;                                            // 0x0598(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class USceneComponent*                             ARoot;                                                    // 0x05A0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Capture_Light_Flash_Epic_Quality_LERP_6D6059B447FE770B77F4DF979D1D4DE0;// 0x05A8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Capture_Light_Flash_Epic_Quality__Direction_6D6059B447FE770B77F4DF979D1D4DE0;// 0x05AC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Capture_Light_Flash_Epic_Quality;                         // 0x05B0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Light_Flash_Epic_Quality_LERP_9FF8273547A2EF14961DA3BCEA19AB5A;// 0x05B8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Light_Flash_Epic_Quality__Direction_9FF8273547A2EF14961DA3BCEA19AB5A;// 0x05BC(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Light_Flash_Epic_Quality;                                 // 0x05C0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_CloudFadeOut_MainBodyFadeOut_847CCAC540144E4601C623A6425B7276;// 0x05C8(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_CloudFadeOut_MaterialFadeValue_847CCAC540144E4601C623A6425B7276;// 0x05CC(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_CloudFadeOut__Direction_847CCAC540144E4601C623A6425B7276;// 0x05D0(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Timeline_CloudFadeOut;                                    // 0x05D8(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_CloudFadeIn_MainBodyFadeIn_1C3F4BAB4469E31A9A21AEB9B9E21FEC;// 0x05E0(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Timeline_CloudFadeIn_MaterialFadeValue_1C3F4BAB4469E31A9A21AEB9B9E21FEC;// 0x05E4(0x0004) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	TEnumAsByte<ETimelineDirection>                    Timeline_CloudFadeIn__Direction_1C3F4BAB4469E31A9A21AEB9B9E21FEC;// 0x05E8(0x0001) (CPF_ZeroConstructor, CPF_IsPlainOldData)
	class UTimelineComponent*                          Timeline_CloudFadeIn;                                     // 0x05F0(0x0008) (CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FVector                                     SpawnPoint;                                               // 0x05F8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsAlive : 1;                                              // 0x0604(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Lightning_starting_point;                                 // 0x0608(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Impact_location;                                          // 0x0614(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      IsActive : 1;                                             // 0x0620(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Activated_Once_already : 1;                               // 0x0621(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Spout_Repeat_Min;                                         // 0x0624(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Spout_Repeat_Max;                                         // 0x0628(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     TraceEndpointOffset;                                      // 0x062C(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	TArray<class UParticleSystemComponent*>            EnvironmentDebrisEmitters;                                // 0x0638(0x0010) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance)
	float                                              DebrisStormVolumeScale;                                   // 0x0648(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Spout_Z_Offset;                                           // 0x064C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      SpawnTraceBool : 1;                                       // 0x0650(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              ActorHeightOffset;                                        // 0x0654(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CloudMesh_MID_01;                                         // 0x0658(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CloudMeshBLK_MID_01;                                      // 0x0660(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CloudMeshDarken_MID_01;                                   // 0x0668(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	class UMaterialInstanceDynamic*                    CloudMeshBottom_MID_01;                                   // 0x0670(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CloudIsFadedIn : 1;                                       // 0x0678(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CloudIsFadedOut : 1;                                      // 0x0679(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Vortex_Repeat_Min;                                        // 0x067C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Vortex_Repeat_Max;                                        // 0x0680(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Random_Flash_Time_Min;                                    // 0x0684(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Random_Flash_Time_Max;                                    // 0x0688(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Previous_Lightning_Light_Intensity;                       // 0x068C(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              New_Lightning_Light_Intensity;                            // 0x0690(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Random_Flash_Timeline_Min;                                // 0x0694(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Random_Flash_Timeline_Max;                                // 0x0698(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      OtherLightningIsPlaying : 1;                              // 0x069C(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      FoundLargeVortex : 1;                                     // 0x069D(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LightningFlickerDuration;                                 // 0x06A0(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LightningFlickerFadeIn;                                   // 0x06A4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              LightningFlickerFadeOut;                                  // 0x06A8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     Lightning_Starting_Point_Offset;                          // 0x06AC(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_IsPlainOldData)
	float                                              LightningRadius;                                          // 0x06B8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              LightningSpawnRateAboutToFire;                            // 0x06BC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      CloudShouldBeVisible : 1;                                 // 0x06C0(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      CloudFadeInBegun : 1;                                     // 0x06C1(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              Fade_In_TL_Duration;                                      // 0x06C4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              Fade_Out_TL_Duration;                                     // 0x06C8(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Destroy_Actor_After_Fade_Out_ : 1;                        // 0x06CC(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Enable_Vortex_ : 1;                                       // 0x06CD(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	unsigned char                                      Enable_Spouts_ : 1;                                       // 0x06CE(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	class AB_CloudVortex_01_CloudBlueprint_C*          SpawnedCloudVortex;                                       // 0x06D0(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnTemplate, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     BigVortexSpawnOffset;                                     // 0x06D8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      EpicLightningUseDirectionalLight : 1;                     // 0x06E4(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FVector                                     RandomLightningFlashLocation;                             // 0x06E8(0x000C) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	float                                              New_Lightning_Light_Intensity__Cinematic_;                // 0x06F4(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	unsigned char                                      UseAutoFadeOut : 1;                                       // 0x06F8(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	float                                              AutoFadeOutDuration;                                      // 0x06FC(0x0004) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_IsPlainOldData)
	struct FTimerHandle                                AutoFadeOutTimer;                                         // 0x0700(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	unsigned char                                      isBigLightning : 1;                                       // 0x0708(0x0001) (CPF_Edit, CPF_BlueprintVisible, CPF_ZeroConstructor, CPF_DisableEditOnInstance, CPF_IsPlainOldData)
	struct FTimerHandle                                EpicLightningSafetyKillHandle;                            // 0x0710(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)
	struct FTimerHandle                                RandomLightningFlashTimer;                                // 0x0718(0x0008) (CPF_Edit, CPF_BlueprintVisible, CPF_DisableEditOnInstance)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass CorrectcloudStartBlueprint.CorrectcloudStartBlueprint_C");
		return ptr;
	}


	void PlayRandomLightingFlashAudio(const struct FVector& Location);
	void RotateDirectionalLightToPlayer(struct FRotator* RotateToPlayer);
	void DestroyParticleSystems();
	void SpawnParticleSystemsActive();
	void Set_Lightning_parameters_on_clouds(const struct FVector& Lightning_starting_point);
	void UserConstructionScript();
	void Timeline_CloudFadeIn__FinishedFunc();
	void Timeline_CloudFadeIn__UpdateFunc();
	void Timeline_CloudFadeOut__FinishedFunc();
	void Timeline_CloudFadeOut__UpdateFunc();
	void Capture_Light_Flash_Epic_Quality__FinishedFunc();
	void Capture_Light_Flash_Epic_Quality__UpdateFunc();
	void Light_Flash_Epic_Quality__FinishedFunc();
	void Light_Flash_Epic_Quality__UpdateFunc();
	void DEBUG_ShowThreatVolume();
	void DebugSpawnLoc();
	void OnBeginDeath();
	void OnCloudStart();
	void OnLightningStrike(struct FVector* StartLocation, struct FVector* EndLocation, class ABuildingRift** Rift, bool* bLightningStruckRift);
	void OnCloudDeactivated();
	void OnCloudActivated();
	void ReceiveDestroyed();
	void CloudFadeIn();
	void CloudFadeOut();
	void OnCloudHiddenChange(bool* bCloudsAreHidden);
	void StopCloudFadeIn();
	void StopCloudFadeOut();
	void Spawn_Particles_Manual();
	void On_Cloud_Start_Manual();
	void AutoFadeOutReached();
	void SpoutSmallRepeat();
	void VortexReturnedToCloudFXPool(class AB_CloudVortex_01_C* Vortex);
	void BigSpoutRepeat();
	void RestartLightningTimer();
	void RandomLightningFlashEvent();
	void BigLightning(const struct FVector& Flash_Location);
	void ManualLightningFlash();
	void EpicLightningSafetyKill();
	void ExecuteUbergraph_CorrectcloudStartBlueprint(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
