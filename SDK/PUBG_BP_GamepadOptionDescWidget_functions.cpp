// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_GamepadOptionDescWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C.SetCrosshairPreviewVisibility
// ()
// Parameters:
// bool                           bVisible                       (Parm, ZeroConstructor, IsPlainOldData)

void UBP_GamepadOptionDescWidget_C::SetCrosshairPreviewVisibility(bool bVisible)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C.SetCrosshairPreviewVisibility");

	UBP_GamepadOptionDescWidget_C_SetCrosshairPreviewVisibility_Params params;
	params.bVisible = bVisible;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C.SetCrosshairPreviewColor
// ()
// Parameters:
// struct FLinearColor            NewParam                       (Parm, IsPlainOldData)

void UBP_GamepadOptionDescWidget_C::SetCrosshairPreviewColor(const struct FLinearColor& NewParam)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_GamepadOptionDescWidget.BP_GamepadOptionDescWidget_C.SetCrosshairPreviewColor");

	UBP_GamepadOptionDescWidget_C_SetCrosshairPreviewColor_Params params;
	params.NewParam = NewParam;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
