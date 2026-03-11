/*
 * func-name: ??0P2PUdpBuilder@IONetwork@Outpop@@QAE@ABV012@@Z
 * func-address: 0x10042700
 * callers: none
 * callees: 0x10002e10, 0x100048b0, 0x100486d0
 */

Outpop::IONetwork::P2PUdpBuilder *__thiscall Outpop::IONetwork::P2PUdpBuilder::P2PUdpBuilder(
        Outpop::IONetwork::P2PUdpBuilder *this,
        Outpop::Utility::Ref_Object **a2)
{
  Outpop::Utility::Timer_Handler::Timer_Handler(this, (const struct Outpop::Utility::Timer_Handler *)a2);
  *(_DWORD *)this = &Outpop::IONetwork::P2PUdpBuilder::`vftable';
  *((_DWORD *)this + 2) = a2[2];
  Outpop::IONetwork::P2P_Config::P2P_Config((Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 12), a2 + 3);
  *((_DWORD *)this + 27) = a2[27];
  *((_DWORD *)this + 28) = a2[28];
  Outpop::IONetwork::INET_Addr::INET_Addr(
    (Outpop::IONetwork::P2PUdpBuilder *)((char *)this + 116),
    (const struct Outpop::IONetwork::INET_Addr *)(a2 + 29));
  *((_DWORD *)this + 36) = a2[36];
  *((_DWORD *)this + 37) = a2[37];
  *((_DWORD *)this + 38) = a2[38];
  *((_DWORD *)this + 39) = a2[39];
  *((_DWORD *)this + 40) = a2[40];
  *((_DWORD *)this + 41) = a2[41];
  *((_DWORD *)this + 42) = a2[42];
  *((_DWORD *)this + 43) = a2[43];
  *((_DWORD *)this + 44) = a2[44];
  *((_DWORD *)this + 45) = a2[45];
  *((_DWORD *)this + 46) = a2[46];
  *((_DWORD *)this + 47) = a2[47];
  *((_DWORD *)this + 48) = a2[48];
  *((_DWORD *)this + 49) = a2[49];
  sub_100486D0((char *)this + 204);
  *((_DWORD *)this + 61) = a2[61];
  *((_DWORD *)this + 62) = a2[62];
  return this;
}
