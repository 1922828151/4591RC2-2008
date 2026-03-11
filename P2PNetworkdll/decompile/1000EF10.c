/*
 * func-name: sub_1000EF10
 * func-address: 0x1000ef10
 * callers: 0x100031a0
 * callees: none
 */

int __stdcall sub_1000EF10(int a1)
{
  Outpop::Utility::Task::Task((Outpop::Utility::Task *)a1);
  Outpop::Utility::Ref_Object::Ref_Object((Outpop::Utility::Ref_Object *)(a1 + 76));
  *(_DWORD *)(a1 + 76) = &Outpop::P2P::UPNP_Network::`vftable';
  *(_DWORD *)a1 = &Outpop::P2P::UPNP_Network::`vftable';
  *(_DWORD *)(a1 + 84) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 92) = 0;
  *(_DWORD *)(a1 + 96) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 104));
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 132));
  *(_DWORD *)(a1 + 164) = 0;
  *(_WORD *)(a1 + 160) = 0;
  *(_WORD *)(a1 + 162) = 0;
  *(_DWORD *)(a1 + 168) = 0;
  return a1;
}
