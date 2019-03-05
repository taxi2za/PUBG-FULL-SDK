// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_MainLobbyHUD_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function MainLobbyHUD.MainLobbyHUD_C.HasChildren
// (Event)
// Parameters:
// bool                           ReturnValue                    (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData)

bool UMainLobbyHUD_C::HasChildren()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.HasChildren");

	UMainLobbyHUD_C_HasChildren_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ToggleSystemMenu
// ()

void UMainLobbyHUD_C::ToggleSystemMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.ToggleSystemMenu");

	UMainLobbyHUD_C_ToggleSystemMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupImpl
// ()
// Parameters:
// class FString*                 PopupId                        (Parm, ZeroConstructor)

void UMainLobbyHUD_C::CloseWebPopupImpl(class FString* PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupImpl");

	UMainLobbyHUD_C_CloseWebPopupImpl_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.HideCurtain
// ()

void UMainLobbyHUD_C::HideCurtain()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.HideCurtain");

	UMainLobbyHUD_C_HideCurtain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowCurtain
// ()

void UMainLobbyHUD_C::ShowCurtain()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.ShowCurtain");

	UMainLobbyHUD_C_ShowCurtain_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_LobbySystemMenu
// ()

void UMainLobbyHUD_C::OnKey_LobbySystemMenu()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnKey_LobbySystemMenu");

	UMainLobbyHUD_C_OnKey_LobbySystemMenu_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKeyDown
// (BlueprintCosmetic, Event)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FKeyEvent               InKeyEvent                     (Parm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UMainLobbyHUD_C::OnKeyDown(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnKeyDown");

	UMainLobbyHUD_C_OnKeyDown_Params params;
	params.MyGeometry = MyGeometry;
	params.InKeyEvent = InKeyEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnPrepass_isShipping
// ()
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::OnPrepass_isShipping(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnPrepass_isShipping");

	UMainLobbyHUD_C_OnPrepass_isShipping_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CleanUpNameTagWidget
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::CleanUpNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.CleanUpNameTagWidget");

	UMainLobbyHUD_C_CleanUpNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.SetupNameTagWidget
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::SetupNameTagWidget(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.SetupNameTagWidget");

	UMainLobbyHUD_C_SetupNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget
// ()
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)
// class UTslLobbyNameTagWidget*  Widget                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::GetNameTagWidget(int* SlotIndex, class UTslLobbyNameTagWidget** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.GetNameTagWidget");

	UMainLobbyHUD_C_GetNameTagWidget_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Widget != nullptr)
		*Widget = params.Widget;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter
// ()
// Parameters:
// int*                           SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::OnDestroyCharacter(int* SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnDestroyCharacter");

	UMainLobbyHUD_C_OnDestroyCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter
// ()
// Parameters:
// int                            SlotIndex                      (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::OnCreateCharacter(int SlotIndex)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnCreateCharacter");

	UMainLobbyHUD_C_OnCreateCharacter_Params params;
	params.SlotIndex = SlotIndex;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID
// ()
// Parameters:
// class FString*                 WebPopupID                     (Parm, ZeroConstructor)

void UMainLobbyHUD_C::CloseWebPopupByID(class FString* WebPopupID)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopupByID");

	UMainLobbyHUD_C_CloseWebPopupByID_Params params;
	params.WebPopupID = WebPopupID;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup
// ()
// Parameters:
// class UWebPopup_C**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::RemoveWebPopup(class UWebPopup_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.RemoveWebPopup");

	UMainLobbyHUD_C_RemoveWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup
// ()
// Parameters:
// class UWebPopup_C**            Widget                         (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::AddWebPopup(class UWebPopup_C** Widget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.AddWebPopup");

	UMainLobbyHUD_C_AddWebPopup_Params params;
	params.Widget = Widget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup
// ()
// Parameters:
// class FString*                 PopupId                        (Parm, ZeroConstructor)
// bool                           Result                         (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::CanShowWebPopup(class FString* PopupId, bool* Result)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.CanShowWebPopup");

	UMainLobbyHUD_C_CanShowWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Result != nullptr)
		*Result = params.Result;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl
// ()
// Parameters:
// struct FWebPopupParam*         Param                          (Parm)

void UMainLobbyHUD_C::ShowWebPopupImpl(struct FWebPopupParam* Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopupImpl");

	UMainLobbyHUD_C_ShowWebPopupImpl_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.On_SystemMenuButton_Prepass_1
// ()
// Parameters:
// class UWidget**                BoundWidget                    (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::On_SystemMenuButton_Prepass_1(class UWidget** BoundWidget)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.On_SystemMenuButton_Prepass_1");

	UMainLobbyHUD_C_On_SystemMenuButton_Prepass_1_Params params;
	params.BoundWidget = BoundWidget;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnReload
// ()

void UMainLobbyHUD_C::OnReload()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnReload");

	UMainLobbyHUD_C_OnReload_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget
// ()
// Parameters:
// class UCoherentUIGTWidget*     Browser                        (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::GetMainCoherentWidget(class UCoherentUIGTWidget** Browser)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.GetMainCoherentWidget");

	UMainLobbyHUD_C_GetMainCoherentWidget_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (Browser != nullptr)
		*Browser = params.Browser;
}


// Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape
// ()

void UMainLobbyHUD_C::OnKey_SystemMenuOrEscape()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.OnKey_SystemMenuOrEscape");

	UMainLobbyHUD_C_OnKey_SystemMenuOrEscape_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD
// ()

void UMainLobbyHUD_C::InitializeHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.InitializeHUD");

	UMainLobbyHUD_C_InitializeHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature
// ()

void UMainLobbyHUD_C::BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature");

	UMainLobbyHUD_C_BndEvt__Button_Setting_K2Node_ComponentBoundEvent_190_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature
// ()

void UMainLobbyHUD_C::BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature");

	UMainLobbyHUD_C_BndEvt__Button_Reload_K2Node_ComponentBoundEvent_210_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature
// ()

void UMainLobbyHUD_C::BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature");

	UMainLobbyHUD_C_BndEvt__Button_Quit_K2Node_ComponentBoundEvent_229_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup
// (Event)
// Parameters:
// struct FWebPopupParam          Param                          (ConstParm, Parm, OutParm, ReferenceParm)

void UMainLobbyHUD_C::ShowWebPopup(const struct FWebPopupParam& Param)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.ShowWebPopup");

	UMainLobbyHUD_C_ShowWebPopup_Params params;
	params.Param = Param;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.Construct
// (BlueprintCosmetic, Event)

void UMainLobbyHUD_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.Construct");

	UMainLobbyHUD_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.PreloadWebPopup
// (Event)
// Parameters:
// TArray<struct FWebPopupParam>  WebPopupParams                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm)

void UMainLobbyHUD_C::PreloadWebPopup(TArray<struct FWebPopupParam> WebPopupParams)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.PreloadWebPopup");

	UMainLobbyHUD_C_PreloadWebPopup_Params params;
	params.WebPopupParams = WebPopupParams;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature
// ()

void UMainLobbyHUD_C::BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature");

	UMainLobbyHUD_C_BndEvt__Button_0_K2Node_ComponentBoundEvent_35_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature
// ()

void UMainLobbyHUD_C::BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature");

	UMainLobbyHUD_C_BndEvt__Button_NewSystemMenu_K2Node_ComponentBoundEvent_90_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopup
// (Event)
// Parameters:
// class FString                  PopupId                        (Parm, ZeroConstructor)

void UMainLobbyHUD_C::CloseWebPopup(const class FString& PopupId)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.CloseWebPopup");

	UMainLobbyHUD_C_CloseWebPopup_Params params;
	params.PopupId = PopupId;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.InitializeMainUMGHUD
// ()

void UMainLobbyHUD_C::InitializeMainUMGHUD()
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.InitializeMainUMGHUD");

	UMainLobbyHUD_C_InitializeMainUMGHUD_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UMainLobbyHUD_C::ExecuteUbergraph_MainLobbyHUD(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function MainLobbyHUD.MainLobbyHUD_C.ExecuteUbergraph_MainLobbyHUD");

	UMainLobbyHUD_C_ExecuteUbergraph_MainLobbyHUD_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
