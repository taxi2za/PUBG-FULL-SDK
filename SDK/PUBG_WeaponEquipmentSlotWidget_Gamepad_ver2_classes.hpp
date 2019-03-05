#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_WeaponEquipmentSlotWidget_Gamepad_ver2_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C
// 0x0170 (0x04D8 - 0x0368)
class UWeaponEquipmentSlotWidget_Gamepad_ver2_C : public UInventorySlotBaseWidget_C
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0368(0x0008) (Transient, DuplicateTransient)
	class UHorizontalBox*                              AttachmentSlotHorizontalBox;                              // 0x0370(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UBorder*                                     BackgroundSlot;                                           // 0x0378(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponAttachmentSlotWidget_Gamepad_C*       LowerRail;                                                // 0x0380(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponAttachmentSlotWidget_Gamepad_C*       Magazine;                                                 // 0x0388(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponAttachmentSlotWidget_Gamepad_C*       Muzzle;                                                   // 0x0390(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UCanvasPanel*                                SlotPanel;                                                // 0x0398(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponAttachmentSlotWidget_Gamepad_C*       Stock;                                                    // 0x03A0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponAttachmentSlotWidget_Gamepad_C*       UpperRail;                                                // 0x03A8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UVerticalBox*                                Vertical;                                                 // 0x03B0(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	class UWeaponBodySlotWidget_Gamepad_C*             WeaponBody;                                               // 0x03B8(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)
	int                                                SlotIndex;                                                // 0x03C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData00[0x4];                                       // 0x03C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnReleased;                                               // 0x03C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	float                                              IconSize_1;                                               // 0x03D8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x03DC(0x0004) MISSED OFFSET
	class AItemStudio*                                 WeaponStudio;                                             // 0x03E0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UTextureRenderTarget2D*                      RenderTargetTexture;                                      // 0x03E8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UMaterialInstanceDynamic*                    WeaponCaptureMaterial;                                    // 0x03F0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	struct FScriptMulticastDelegate                    OnDragEnterWeaponSlot;                                    // 0x03F8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnDragLeaveWeaponSlot;                                    // 0x0408(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	class UEquipableItem*                              EquipableItem;                                            // 0x0418(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponItem*                                 WeaponItem;                                               // 0x0420(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UThrowableItem*                              ThrowableItem;                                            // 0x0428(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class ATslWeapon_Gun*                              Weapon_Gun;                                               // 0x0430(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UEquipableItem*                              DragDroppingEquipableItem;                                // 0x0438(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UWeaponItem*                                 DragDroppingWeaponItem;                                   // 0x0440(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	class UAttachableItem*                             DragDroppingAttachableItem;                               // 0x0448(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	TArray<class UWeaponAttachmentSlotWidget_Gamepad_C*> AttachmentSlotList;                                       // 0x0450(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance)
	class AInventory*                                  Inventory;                                                // 0x0460(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, IsPlainOldData)
	class UClass*                                      ItemStudioClass;                                          // 0x0468(0x0008) (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData)
	bool                                               bWantFocus;                                               // 0x0470(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0471(0x0007) MISSED OFFSET
	class UUserWidget*                                 ChildFocusWidget;                                         // 0x0478(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              PressedBTime;                                             // 0x0480(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	bool                                               bPressedB;                                                // 0x0484(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData03[0x3];                                       // 0x0485(0x0003) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttachmentFocused;                                      // 0x0488(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	struct FScriptMulticastDelegate                    OnWeaponEquipmentFocused;                                 // 0x0498(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)
	bool                                               bSubFocus;                                                // 0x04A8(0x0001) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData04[0x7];                                       // 0x04A9(0x0007) MISSED OFFSET
	class UInventoryWidget_Gamepad_C*                  SaveInventory_Gamepad;                                    // 0x04B0(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DetachHoldStart;                                          // 0x04B8(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              DropHoldStart;                                            // 0x04BC(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	float                                              SwapHOldStart;                                            // 0x04C0(0x0004) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)
	unsigned char                                      UnknownData05[0x4];                                       // 0x04C4(0x0004) MISSED OFFSET
	struct FScriptMulticastDelegate                    OnAttachmentChanged;                                      // 0x04C8(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass WeaponEquipmentSlotWidget_Gamepad_ver2.WeaponEquipmentSlotWidget_Gamepad_ver2_C");
		return ptr;
	}


	void GetSlotItem(TScriptInterface<class USlotInterface>* SlotItem);
	void GetSlotContainer(TScriptInterface<class USlotContainerInterface>* SlotContainer);
	void IsBodyFocused(bool* NewParam);
	void IsAttachmentSlotFocused(bool* res);
	void IsWeaponExist(bool* res);
	bool CanHandleInput();
	void ContainFocus(bool* res);
	void SetFocusToAttachment(bool* bFocus, bool* NewParam);
	void SetFocusToBody(bool bFocus, bool* NewParam);
	void GetBackgroundState(float* State);
	void IsSlotSelected_Bp(bool* res);
	void OnSwap();
	void ProcessSwap();
	void OnPressedSwap();
	void ProcessDrop();
	void DropOrUnequipItem(bool* bDrop);
	void OnDeatchOrDropAttachment(bool* bDetach, bool* bAll);
	void ReleasedDropInput();
	void PressedDropInput();
	void ProcessDetach();
	void ReleaseDetachInput();
	void PressedDetachInput();
	void GetInventoryWidgetGamepad(class UInventoryWidget_Gamepad_C** NewParam);
	void On_BackgroundSlot_Prepass_1(class UWidget** BoundWidget);
	void FindLastFocusableWidget(class UUserWidget** Widget);
	void HandleWidgetMoveRight();
	void HandleWidgetMoveLeft();
	class UUserWidget* GetFocusingChildWidget();
	void GetChildRightFocusableWidget(class UUserWidget** RightWidget);
	void GetChildLeftFocusableWidget(class UUserWidget** Left_Widget);
	bool IsFocusable();
	void FindFirstFocusableWidget(class UUserWidget** FocusableWidget);
	bool IsFocus();
	bool SetFocus(bool* NewFocus);
	void GetDragDroppingEquipableItem(class UEquipableItem** EquipableItem);
	void FindEquipableWeaponPosition(struct FEquipPosition* WeaponPosition);
	void UpdateWeaponGunInfo(class UWidget** BoundWidget);
	void GetAmmoName(struct FText* ItemName);
	struct FSlateBrush GetAmmoIcon();
	void GetHandOnUnLoadedAmmoCount(int* Count);
	void GetHandOnLoadedAmmoCount(int* Count);
	void On_AmmoInfoLayer_Prepass_1(class UWidget** BoundWidget);
	void OnUpdateWeapon();
	void On_WeaponCaptureImage_Prepass_1(class UWidget** BoundWidget);
	void GetItem_Bp(class UItem** Item);
	void IsSlotMouseOver_Bp(bool* IsMouseOver);
	void IsSlotSubOn_Bp(bool* SubOn);
	void IsSlotOn_Bp(bool* IsOn);
	void GetWeaponSlotEquipId(EEquipSlotID* EquipSlotID);
	void InitializeWeaponEquipSlot();
	ESlateVisibility GetSlotVisibility();
	struct FText GetWeaponInfoText();
	void Construct();
	void OnUpdateItem(class UItem** Item);
	void SetInventory(class UInventoryWidget_C** InventoryWidget);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void OnAttachmentFocused_Event_1(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void BndEvt__Muzzle_K2Node_ComponentBoundEvent_17_OnAttachmentChanged__DelegateSignature(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void BndEvt__LowerRail_K2Node_ComponentBoundEvent_42_OnAttachmentChanged__DelegateSignature(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void BndEvt__Magazine_K2Node_ComponentBoundEvent_102_OnAttachmentChanged__DelegateSignature(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void BndEvt__UpperRail_K2Node_ComponentBoundEvent_129_OnAttachmentChanged__DelegateSignature(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void BndEvt__Stock_K2Node_ComponentBoundEvent_157_OnAttachmentChanged__DelegateSignature(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void ExecuteUbergraph_WeaponEquipmentSlotWidget_Gamepad_ver2(int* EntryPoint);
	void OnAttachmentChanged__DelegateSignature(EWeaponAttachmentSlotID* AttchmentSlotId, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void OnWeaponEquipmentFocused__DelegateSignature(EEquipSlotID* EquipSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void OnAttachmentFocused__DelegateSignature(EWeaponAttachmentSlotID* AttachmentSlotID, TScriptInterface<class USlotInterface>* SlotInterface, TScriptInterface<class USlotContainerInterface>* SlotContainerInterface);
	void OnDragLeaveWeaponSlot__DelegateSignature(int SlotIndex);
	void OnDragEnterWeaponSlot__DelegateSignature(int SlotIndex);
	void OnReleased__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
