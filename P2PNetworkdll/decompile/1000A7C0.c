/*
 * func-name: sub_1000A7C0
 * func-address: 0x1000a7c0
 * callers: 0x10002d60
 * callees: 0x100076e0
 */

Outpop::Utility::Timer_Handler *__stdcall sub_1000A7C0(Outpop::Utility::Timer_Handler *a1, int a2)
{
  Outpop::Utility::Timer_Handler *v2; // esi

  v2 = a1;
  Outpop::Utility::Timer_Handler::Timer_Handler(a1);
  *(_DWORD *)v2 = &Outpop::P2P::Simple_Address_Protocol::`vftable';
  *((_DWORD *)v2 + 2) = &Outpop::P2P::Simple_Address_Protocol::`vftable';
  *((_DWORD *)v2 + 3) = 0;
  *((_DWORD *)v2 + 4) = 0;
  *((_DWORD *)v2 + 5) = 0;
  *((_DWORD *)v2 + 6) = 0;
  *((_DWORD *)v2 + 7) = 0;
  *((_DWORD *)v2 + 8) = 0;
  *((_DWORD *)v2 + 9) = 0;
  *((_DWORD *)v2 + 10) = 0;
  *((_DWORD *)v2 + 11) = 0;
  *((_DWORD *)v2 + 12) = 0;
  *((_DWORD *)v2 + 13) = 0;
  *((_DWORD *)v2 + 14) = 0;
  *((_DWORD *)v2 + 15) = 0;
  *((_DWORD *)v2 + 16) = 0;
  std::string::string((char *)v2 + 68);
  *((_DWORD *)v2 + 24) = 0;
  Outpop::IONetwork::INET_Addr::INET_Addr((Outpop::Utility::Timer_Handler *)((char *)v2 + 124));
  sub_100076E0((int)v2 + 168, &a1);
  std::string::operator=((char *)v2 + 68, a2);
  *((_DWORD *)v2 + 25) = -1;
  *((_DWORD *)v2 + 26) = -1;
  *((_DWORD *)v2 + 27) = -1;
  *((_DWORD *)v2 + 28) = -1;
  *((_BYTE *)v2 + 116) = 0;
  *((_BYTE *)v2 + 117) = 0;
  *((_BYTE *)v2 + 118) = 0;
  *((_WORD *)v2 + 82) = 0;
  *((_DWORD *)v2 + 40) = 0;
  *((_WORD *)v2 + 79) = 0;
  *((_WORD *)v2 + 78) = 0;
  *((_DWORD *)v2 + 38) = 0;
  return v2;
}
