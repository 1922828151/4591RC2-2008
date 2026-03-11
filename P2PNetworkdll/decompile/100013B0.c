/*
 * func-name: sub_100013B0
 * func-address: 0x100013b0
 * callers: 0x10002d60
 * callees: none
 */

int __stdcall sub_100013B0(int a1)
{
  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)a1);
  *(_DWORD *)a1 = &Outpop::P2P::Network_Detector::`vftable';
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 12) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 16));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 44));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 72));
  *(_DWORD *)(a1 + 104) = 0;
  *(_BYTE *)(a1 + 100) = 1;
  *(_BYTE *)(a1 + 108) = 0;
  return a1;
}
