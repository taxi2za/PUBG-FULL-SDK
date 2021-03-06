// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TimelineHighlight_parameters.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Functions
//---------------------------------------------------------------------------

// Function TimelineHighlight.TimelineHighlight_C.IsPlayingHighlight
// ()
// Parameters:
// bool                           IsPlaying                      (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::IsPlayingHighlight(bool* IsPlaying)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.IsPlayingHighlight");

	UTimelineHighlight_C_IsPlayingHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (IsPlaying != nullptr)
		*IsPlaying = params.IsPlaying;
}


// Function TimelineHighlight.TimelineHighlight_C.EventMarkerAllColapse
// ()

void UTimelineHighlight_C::EventMarkerAllColapse()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.EventMarkerAllColapse");

	UTimelineHighlight_C_EventMarkerAllColapse_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.EventMarkerSettingByIndex
// ()
// Parameters:
// int*                           Idx                            (Parm, ZeroConstructor, IsPlainOldData)
// class UTimelineHighlightEventMarker_C* EventMarker                    (Parm, OutParm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::EventMarkerSettingByIndex(int* Idx, class UTimelineHighlightEventMarker_C** EventMarker)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.EventMarkerSettingByIndex");

	UTimelineHighlight_C_EventMarkerSettingByIndex_Params params;
	params.Idx = Idx;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	if (EventMarker != nullptr)
		*EventMarker = params.EventMarker;
}


// Function TimelineHighlight.TimelineHighlight_C.EndHighlightByOneEvent
// ()

void UTimelineHighlight_C::EndHighlightByOneEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.EndHighlightByOneEvent");

	UTimelineHighlight_C_EndHighlightByOneEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.BeginHighlightByOneEvent
// ()

void UTimelineHighlight_C::BeginHighlightByOneEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.BeginHighlightByOneEvent");

	UTimelineHighlight_C_BeginHighlightByOneEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.ReadyHighlightByOneEvent
// ()

void UTimelineHighlight_C::ReadyHighlightByOneEvent()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.ReadyHighlightByOneEvent");

	UTimelineHighlight_C_ReadyHighlightByOneEvent_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.HighlightExit
// ()

void UTimelineHighlight_C::HighlightExit()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.HighlightExit");

	UTimelineHighlight_C_HighlightExit_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.MouseButtonDown_HighlightExit
// ()
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// struct FPointerEvent           MouseEvent                     (ConstParm, Parm, OutParm, ReferenceParm)
// struct FEventReply             ReturnValue                    (Parm, OutParm, ReturnParm)

struct FEventReply UTimelineHighlight_C::MouseButtonDown_HighlightExit(const struct FGeometry& MyGeometry, const struct FPointerEvent& MouseEvent)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.MouseButtonDown_HighlightExit");

	UTimelineHighlight_C_MouseButtonDown_HighlightExit_Params params;
	params.MyGeometry = MyGeometry;
	params.MouseEvent = MouseEvent;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;

	return params.ReturnValue;
}


// Function TimelineHighlight.TimelineHighlight_C.UpdateHighlightPlayingMode
// ()

void UTimelineHighlight_C::UpdateHighlightPlayingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.UpdateHighlightPlayingMode");

	UTimelineHighlight_C_UpdateHighlightPlayingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.UpdateTimeInfo
// ()

void UTimelineHighlight_C::UpdateTimeInfo()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.UpdateTimeInfo");

	UTimelineHighlight_C_UpdateTimeInfo_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.SetDisableMode
// ()

void UTimelineHighlight_C::SetDisableMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.SetDisableMode");

	UTimelineHighlight_C_SetDisableMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.UpdateNoticeBorder
// ()

void UTimelineHighlight_C::UpdateNoticeBorder()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.UpdateNoticeBorder");

	UTimelineHighlight_C_UpdateNoticeBorder_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.SetHighlightPlayingMode
// ()

void UTimelineHighlight_C::SetHighlightPlayingMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.SetHighlightPlayingMode");

	UTimelineHighlight_C_SetHighlightPlayingMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.SetReplayPlayMode
// ()

void UTimelineHighlight_C::SetReplayPlayMode()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.SetReplayPlayMode");

	UTimelineHighlight_C_SetReplayPlayMode_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.BndEvt__EditableText_After_K2Node_ComponentBoundEvent_107_OnEditableTextCommittedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::BndEvt__EditableText_After_K2Node_ComponentBoundEvent_107_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.BndEvt__EditableText_After_K2Node_ComponentBoundEvent_107_OnEditableTextCommittedEvent__DelegateSignature");

	UTimelineHighlight_C_BndEvt__EditableText_After_K2Node_ComponentBoundEvent_107_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.BndEvt__EditableText_Before_K2Node_ComponentBoundEvent_102_OnEditableTextCommittedEvent__DelegateSignature
// ()
// Parameters:
// struct FText                   Text                           (ConstParm, Parm, OutParm, ReferenceParm)
// TEnumAsByte<ETextCommit>       CommitMethod                   (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::BndEvt__EditableText_Before_K2Node_ComponentBoundEvent_102_OnEditableTextCommittedEvent__DelegateSignature(const struct FText& Text, TEnumAsByte<ETextCommit> CommitMethod)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.BndEvt__EditableText_Before_K2Node_ComponentBoundEvent_102_OnEditableTextCommittedEvent__DelegateSignature");

	UTimelineHighlight_C_BndEvt__EditableText_Before_K2Node_ComponentBoundEvent_102_OnEditableTextCommittedEvent__DelegateSignature_Params params;
	params.Text = Text;
	params.CommitMethod = CommitMethod;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature
// ()

void UTimelineHighlight_C::BndEvt__Button_5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.BndEvt__Button_5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature");

	UTimelineHighlight_C_BndEvt__Button_5_K2Node_ComponentBoundEvent_6_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature
// ()

void UTimelineHighlight_C::BndEvt__Button_Next_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.BndEvt__Button_Next_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature");

	UTimelineHighlight_C_BndEvt__Button_Next_K2Node_ComponentBoundEvent_68_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.ReadyHighlight
// ()

void UTimelineHighlight_C::ReadyHighlight()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.ReadyHighlight");

	UTimelineHighlight_C_ReadyHighlight_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.BndEvt__Button_HighlightExit_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature
// ()

void UTimelineHighlight_C::BndEvt__Button_HighlightExit_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.BndEvt__Button_HighlightExit_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature");

	UTimelineHighlight_C_BndEvt__Button_HighlightExit_K2Node_ComponentBoundEvent_50_OnButtonClickedEvent__DelegateSignature_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.Tick
// (BlueprintCosmetic, Event)
// Parameters:
// struct FGeometry               MyGeometry                     (Parm, IsPlainOldData)
// float                          InDeltaTime                    (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::Tick(const struct FGeometry& MyGeometry, float InDeltaTime)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.Tick");

	UTimelineHighlight_C_Tick_Params params;
	params.MyGeometry = MyGeometry;
	params.InDeltaTime = InDeltaTime;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.Construct
// (BlueprintCosmetic, Event)

void UTimelineHighlight_C::Construct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.Construct");

	UTimelineHighlight_C_Construct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.Destruct
// (BlueprintCosmetic, Event)

void UTimelineHighlight_C::Destruct()
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.Destruct");

	UTimelineHighlight_C_Destruct_Params params;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.SetFadeInTimer
// ()
// Parameters:
// float                          TimeSec                        (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::SetFadeInTimer(float TimeSec)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.SetFadeInTimer");

	UTimelineHighlight_C_SetFadeInTimer_Params params;
	params.TimeSec = TimeSec;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


// Function TimelineHighlight.TimelineHighlight_C.ExecuteUbergraph_TimelineHighlight
// ()
// Parameters:
// int*                           EntryPoint                     (Parm, ZeroConstructor, IsPlainOldData)

void UTimelineHighlight_C::ExecuteUbergraph_TimelineHighlight(int* EntryPoint)
{
	static auto fn = UObject::FindObject<UFunction>("Function TimelineHighlight.TimelineHighlight_C.ExecuteUbergraph_TimelineHighlight");

	UTimelineHighlight_C_ExecuteUbergraph_TimelineHighlight_Params params;
	params.EntryPoint = EntryPoint;

	auto flags = fn->FunctionFlags;

	UObject::ProcessEvent(fn, &params);

	fn->FunctionFlags = flags;
}


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
