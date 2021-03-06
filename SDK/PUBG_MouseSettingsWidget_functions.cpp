// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MouseSettingsWidget_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MouseSettingsWidget.MouseSettingsWidget_C.UpdateScopeSliders
// ()

void UMouseSettingsWidget_C::UpdateScopeSliders()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.UpdateScopeSliders");

	UMouseSettingsWidget_C_UpdateScopeSliders_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.FillSensitivities
// ()
// Parameters:
// TArray<struct FCustomizableMouseSensitiveName> Array                          (Parm, OutParm, ZeroConstructor, ReferenceParm)
// bool*                          Condition                      (Parm, ZeroConstructor, IsPlainOldData)
// class UPanelWidget**           Container                      (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::FillSensitivities(bool* Condition, class UPanelWidget** Container, TArray<struct FCustomizableMouseSensitiveName>* Array)
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.FillSensitivities");

	UMouseSettingsWidget_C_FillSensitivities_Params params;
	params.Condition = Condition;
	params.Container = Container;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Array != nullptr)
		*Array = params.Array;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.IsEnableApply
// (Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingsWidget_C::IsEnableApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.IsEnableApply");

	UMouseSettingsWidget_C_IsEnableApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.initailizeMouseSettingsWidget
// ()
// Parameters:
// bool*                          bIsDefaultSetting              (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::initailizeMouseSettingsWidget(bool* bIsDefaultSetting)
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.initailizeMouseSettingsWidget");

	UMouseSettingsWidget_C_initailizeMouseSettingsWidget_Params params;
	params.bIsDefaultSetting = bIsDefaultSetting;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.IsChanged
// (Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMouseSettingsWidget_C::IsChanged()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.IsChanged");

	UMouseSettingsWidget_C_IsChanged_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnDefault
// (Event)

void UMouseSettingsWidget_C::OnDefault()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.OnDefault");

	UMouseSettingsWidget_C_OnDefault_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnApply
// (Event)

void UMouseSettingsWidget_C::OnApply()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.OnApply");

	UMouseSettingsWidget_C_OnApply_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.Construct
// (BlueprintCosmetic, Event)

void UMouseSettingsWidget_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.Construct");

	UMouseSettingsWidget_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnReset
// (Event)

void UMouseSettingsWidget_C::OnReset()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.OnReset");

	UMouseSettingsWidget_C_OnReset_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.OnPerScopeSensSet
// ()

void UMouseSettingsWidget_C::OnPerScopeSensSet()
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.OnPerScopeSensSet");

	UMouseSettingsWidget_C_OnPerScopeSensSet_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MouseSettingsWidget.MouseSettingsWidget_C.ExecuteUbergraph_MouseSettingsWidget
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMouseSettingsWidget_C::ExecuteUbergraph_MouseSettingsWidget(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MouseSettingsWidget.MouseSettingsWidget_C.ExecuteUbergraph_MouseSettingsWidget");

	UMouseSettingsWidget_C_ExecuteUbergraph_MouseSettingsWidget_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
