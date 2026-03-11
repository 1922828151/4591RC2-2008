/*
 * func-name: sub_1000A9D0
 * func-address: 0x1000a9d0
 * callers: 0x1000a8d0
 * callees: 0x1000d7a0, 0x1000e470, 0x10023306
 */

void __stdcall sub_1000A9D0(int a1)
{
  Outpop::Utility::Ref_Object *v1; // ecx

  *(_DWORD *)a1 = &Outpop::P2P::Simple_Address_Protocol::`vftable';
  *(_DWORD *)(a1 + 8) = &Outpop::P2P::Simple_Address_Protocol::`vftable';
  if ( *(_DWORD *)(a1 + 100) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 100));
  if ( *(_DWORD *)(a1 + 104) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 104));
  if ( *(_DWORD *)(a1 + 108) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 108));
  if ( *(_DWORD *)(a1 + 112) != -1 )
    sub_1000D7A0(*(_DWORD *)(a1 + 112));
  if ( *(_DWORD *)(a1 + 188) )
    operator delete(*(void **)(a1 + 188));
  *(_DWORD *)(a1 + 188) = 0;
  *(_DWORD *)(a1 + 192) = 0;
  *(_DWORD *)(a1 + 196) = 0;
  sub_1000E470(a1 + 172);
  operator delete(*(void **)(a1 + 176));
  *(_DWORD *)(a1 + 176) = 0;
  Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(a1 + 124));
  v1 = *(Outpop::Utility::Ref_Object **)(a1 + 96);
  if ( v1 )
    Outpop::Utility::Ref_Object::release(v1);
  std::string::~string(a1 + 68);
  *(_DWORD *)(a1 + 8) = Outpop::IONetwork::System_Handler::`vftable';
  Outpop::Utility::Timer_Handler::~Timer_Handler((Outpop::Utility::Timer_Handler *)a1);
}
