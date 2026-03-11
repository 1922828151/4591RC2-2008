/*
 * func-name: sub_100087A0
 * func-address: 0x100087a0
 * callers: 0x10002630, 0x10002f90, 0x10007ba0, 0x10007c20, 0x10007e60
 * callees: 0x10023306
 */

void __stdcall sub_100087A0(int a1)
{
  _DWORD **v1; // eax
  _DWORD *v2; // esi
  bool v3; // zf
  _DWORD *v4; // edi

  v1 = *(_DWORD ***)(a1 + 4);
  v2 = *v1;
  *v1 = v1;
  *(_DWORD *)(*(_DWORD *)(a1 + 4) + 4) = *(_DWORD *)(a1 + 4);
  v3 = v2 == *(_DWORD **)(a1 + 4);
  *(_DWORD *)(a1 + 8) = 0;
  if ( !v3 )
  {
    do
    {
      v4 = (_DWORD *)*v2;
      Outpop::IONetwork::INET_Addr::~INET_Addr((Outpop::IONetwork::INET_Addr *)(v2 + 9));
      std::string::~string(v2 + 2);
      operator delete(v2);
      v2 = v4;
    }
    while ( v4 != *(_DWORD **)(a1 + 4) );
  }
}
