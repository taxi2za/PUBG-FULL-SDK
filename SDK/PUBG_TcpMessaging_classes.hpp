#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_TcpMessaging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class TcpMessaging.TcpMessagingSettings
// 0x0030 (0x0060 - 0x0030)
class UTcpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class FString                                      ListenEndpoint;                                           // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              ConnectToEndpoints;                                       // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	int                                                ConnectionRetryDelay;                                     // 0x0058(0x0004) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x4];                                       // 0x005C(0x0004) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class TcpMessaging.TcpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
