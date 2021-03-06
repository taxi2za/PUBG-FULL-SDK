#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_InventoryBaseWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C
// 0x0018 (0x0318 - 0x0300)
class UInventoryBaseWidget_C : public UTslUserWidget
{
public:
	struct FPointerToUberGraphFrame                    UberGraphFrame;                                           // 0x0300(0x0008) (Transient, DuplicateTransient)
	struct FScriptMulticastDelegate                    RefreshFocus;                                             // 0x0308(0x0010) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass InventoryBaseWidget.InventoryBaseWidget_C");
		return ptr;
	}


	void UpdateDragDragDroppingItem(class UItem** DroppingItem);
	void SetInventoryWidget(class UInventoryWidget_C** Inventory);
	void ExecuteUbergraph_InventoryBaseWidget(int* EntryPoint);
	void RefreshFocus__DelegateSignature();
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
