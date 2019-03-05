#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_UdpMessaging_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// Class UdpMessaging.UdpMessagingSettings
// 0x0078 (0x00A8 - 0x0030)
class UUdpMessagingSettings : public UObject
{
public:
	bool                                               EnableTransport;                                          // 0x0030(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData00[0x7];                                       // 0x0031(0x0007) MISSED OFFSET
	class FString                                      UnicastEndpoint;                                          // 0x0038(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      MulticastEndpoint;                                        // 0x0048(0x0010) (Edit, ZeroConstructor, Config)
	unsigned char                                      MulticastTimeToLive;                                      // 0x0058(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0059(0x0007) MISSED OFFSET
	TArray<class FString>                              StaticEndpoints;                                          // 0x0060(0x0010) (Edit, ZeroConstructor, Config)
	bool                                               EnableTunnel;                                             // 0x0070(0x0001) (Edit, ZeroConstructor, Config, IsPlainOldData)
	unsigned char                                      UnknownData02[0x7];                                       // 0x0071(0x0007) MISSED OFFSET
	class FString                                      TunnelUnicastEndpoint;                                    // 0x0078(0x0010) (Edit, ZeroConstructor, Config)
	class FString                                      TunnelMulticastEndpoint;                                  // 0x0088(0x0010) (Edit, ZeroConstructor, Config)
	TArray<class FString>                              RemoteTunnelEndpoints;                                    // 0x0098(0x0010) (Edit, ZeroConstructor, Config)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class UdpMessaging.UdpMessagingSettings");
		return ptr;
	}

};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif