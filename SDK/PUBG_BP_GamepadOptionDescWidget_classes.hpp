#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadOptionDescWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C
// 0x0008 (0x0408 - 0x0400)
class UBP_GamepadOptionDescWidget_C : public UTslGamepadOptionDescWidget
{
public:
	class UImage*                                      CrosshairImage;                                           // 0x0400(0x0008) (BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, RepSkip, RepNotify, Interp, NonTransactional, EditorOnly, NoDestructor, AutoWeak, ContainsInstancedReference, AssetRegistrySearchable, SimpleDisplay, AdvancedDisplay, Protected, BlueprintCallable, BlueprintAuthorityOnly, TextExportTransient, NonPIEDuplicateTransient, ExposeOnSpawn, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic, NativeAccessSpecifierProtected, NativeAccessSpecifierPrivate)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C");
		return ptr;
	}


	void SetCrosshairPreviewVisibility(bool bVisible);
	void SetCrosshairPreviewColor(const struct FLinearColor& NewParam);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
