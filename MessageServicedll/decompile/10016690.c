/*
 * func-name: sub_10016690
 * func-address: 0x10016690
 * callers: 0x100164d0
 * callees: none
 */

_DWORD *__usercall sub_10016690@<eax>(int a1@<eax>, int a2, _DWORD *a3)
{
  int v3; // ebx
  _DWORD *v4; // ebp
  _DWORD *v5; // edi
  _DWORD *v6; // esi
  int v7; // eax

  v3 = a1;
  v4 = a3;
  if ( a2 != a1 )
  {
    v5 = a3 + 26;
    v6 = (_DWORD *)(a1 + 104);
    do
    {
      v7 = *(_DWORD *)(v3 - 108);
      v6 -= 27;
      v3 -= 108;
      v5 -= 27;
      v4 -= 27;
      *v4 = v7;
      Outpop::IONetwork::Connector_Config::operator=(v6 - 25);
      *((_BYTE *)v5 - 4) = *((_BYTE *)v6 - 4);
      *v5 = *v6;
    }
    while ( v3 != a2 );
  }
  return v4;
}
