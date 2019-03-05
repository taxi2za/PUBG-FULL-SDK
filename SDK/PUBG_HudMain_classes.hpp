#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_HudMain_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass HudMain.HudMain_C
// 0x0080 (0x0450 - 0x03D0)
class UHudMain_C : public UHudMainBaseWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x03D0(0x0008) (Transient, DuplicateTransient)
	class UCanvasPanel*                                HideOnObserverSpectating;                                 // 0x03D8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	struct FScriptMulticastDelegate                    ButtonClickedDispatcher;                                  // 0x03E0(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UHitNotifyWidget_C*                          HitNotify;                                                // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FColorBlindColorSet                         ColorBlindColorSet_SpetatingName;                         // 0x03F8(0x0010) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FTimerHandle                                ReplayGetTimeHandler;                                     // 0x0408(0x0008) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                            ObserverSpectatingDownPos;                                // 0x0410(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	struct FWidgetTransform                            ObserverSpectatingUpPos;                                  // 0x042C(0x001C) (Edit, BlueprintVisible, DisableEditOnInstance)
	float                                              LastOptionToggleTime;                                     // 0x0448(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SholderPressedTime;                                       // 0x044C(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass HudMain.HudMain_C");
		return ptr;
	}


	void OnKey_ThrowableItemWheelReleased();
	void OnKey_ThrowableItemWheelPressed();
	void OnKey_HealItemWheelReleased();
	void OnKey_HealItemWheelPressed();
	void MapIconShowNameOnly();
	void MapIconShowIconOnly();
	void MapIconShowBoth();
	void MapIconShow(bool* bShowIcon, bool* bShowName);
	void OnToggleAnticheatCenterBar();
	void OnKey_EmoteWheelReleased();
	void OnKey_EmoteWheelPressed();
	bool OnInit_Delegate(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Replay(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Input(class ATslBaseHUD** TslBaseHUD);
	bool OnInit_Widget(class ATslBaseHUD** TslBaseHUD);
	struct FEventReply OnMouseMove(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent);
	void SetObserverSpectatingUp();
	void SetObserverSpectatingDown();
	void ShouldShowReplayMenu(bool* bShow);
	void BindEventForShowReplayTimeline();
	void ShowReplayTimeLine(bool* bShow);
	void SetHUDForIngameReplayMenu();
	void BindEventForMapClosing();
	void OnKey_ReplayMenuOrEscape();
	void InitForReplay();
	void OnToggleOption();
	void OnMapHide();
	void OnMapShow();
	void OnKey_MapReleased();
	void OnKey_MapPressed();
	void OnShowCarePackageItemList();
	void IsShowMapOrInventory(bool* bIsShow);
	void OnTogglePlayerList();
	void IsCharacterAlive(bool* IsAlive);
	void OnNitifyHit(float DamagePercent, EDamageTypeCategory DamageTypeCategory);
	void OnKey_SystemMenuOrEscape();
	void OnToggleMap();
	void OnPossessPawnChange();
	void Construct();
	void HideMapForReplay();
	void CheckReplayTimer();
	void CreateCheckReplayTimer();
	void ExecuteUbergraph_HudMain(int* EntryPoint);
	void ButtonClickedDispatcher__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif