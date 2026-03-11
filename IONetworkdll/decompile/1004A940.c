/*
 * func-name: ??0P2PUdpBuilder@IONetwork@Outpop@@QAE@PAVWIN32_IoCompletionPort@12@@Z
 * func-address: 0x1004a940
 * callers: none
 * callees: 0x10002600, 0x10004780, 0x1004db40
 */

Outpop::IONetwork::P2PUdpBuilder *__thiscall Outpop::IONetwork::P2PUdpBuilder::P2PUdpBuilder(
        Outpop::IONetwork::P2PUdpBuilder *this,
        struct Outpop::IONetwork::WIN32_IoCompletionPort *a2)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(this);
  *(_DWORD *)this = &Outpop::IONetwork::P2PUdpBuilder::`vftable';
  *((_DWORD *)this + 2) = 0;
  Outpop::IONetwork::P2P_Config::P2P_Config((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 12));
  *((_DWORD *)this + 27) = a2;
  *((_DWORD *)this + 28) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 116));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 144));
  Outpop::Utility::Thread_Mutex::Thread_Mutex((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 168));
  *((_DWORD *)this + 48) = 0;
  *((_DWORD *)this + 49) = 0;
  sub_1004DB40((char *)this + 204, &a2);
  return this;
}
