/*
 * func-name: ??1P2PUdpBuilder@IONetwork@Outpop@@UAE@XZ
 * func-address: 0x1004aa10
 * callers: 0x100429d0
 * callees: 0x10004850, 0x10048740, 0x1004e870
 */

void __thiscall Outpop::IONetwork::P2PUdpBuilder::~P2PUdpBuilder(Outpop::IONetwork::P2PUdpBuilder *this)
{
  SOCKET *v2; // edi
  SOCKET *v3; // edi

  *(_DWORD *)this = &Outpop::IONetwork::P2PUdpBuilder::`vftable';
  v2 = (SOCKET *)*((_DWORD *)this + 48);
  if ( v2 )
  {
    if ( *v2 != -1 )
    {
      closesocket(*v2);
      *v2 = -1;
    }
    v3 = (SOCKET *)*((_DWORD *)this + 48);
    if ( v3 )
    {
      if ( *v3 != -1 )
        closesocket(*v3);
      operator delete(v3);
    }
  }
  sub_10048740((_DWORD *)this + 51);
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 168));
  Outpop::Utility::Thread_Mutex::~Thread_Mutex((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 144));
  *((_DWORD *)this + 29) = &Outpop::IONetwork::INET_Addr::`vftable';
  *((_DWORD *)this + 29) = &Outpop::IONetwork::Addr::`vftable';
  Outpop::IONetwork::P2P_Config::~P2P_Config((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 12));
  Outpop::Utility::Timer_Handler::~Timer_Handler(this);
}
