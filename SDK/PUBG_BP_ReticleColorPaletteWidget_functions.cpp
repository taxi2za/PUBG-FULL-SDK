// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_BP_ReticleColorPaletteWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.OnPrepass_1
// ()
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReticleColorPaletteWidget_C::OnPrepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.OnPrepass_1");

	UBP_ReticleColorPaletteWidget_C_OnPrepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.Apply
// ()

void UBP_ReticleColorPaletteWidget_C::Apply()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.Apply");

	UBP_ReticleColorPaletteWidget_C_Apply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.Init
// ()
// Parameters:
// class UQualityComboBox_C**     ReticleComboBox                (Parm, ZeroConstructor, IsPlainOldData)

void UBP_ReticleColorPaletteWidget_C::Init(class UQualityComboBox_C** ReticleComboBox)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.Init");

	UBP_ReticleColorPaletteWidget_C_Init_Params params;
	params.ReticleComboBox = ReticleComboBox;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.SetToDefault
// ()

void UBP_ReticleColorPaletteWidget_C::SetToDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.SetToDefault");

	UBP_ReticleColorPaletteWidget_C_SetToDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.IsChanged
// ()
// Parameters:
// bool                           res                            (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UBP_ReticleColorPaletteWidget_C::IsChanged(bool* res)
{
	static auto fn = UObject::FindObject<UFunction>("Function BP_ReticleColorPaletteWidget.BP_ReticleColorPaletteWidget_C.IsChanged");

	UBP_ReticleColorPaletteWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (res != nullptr)
		*res = params.res;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
