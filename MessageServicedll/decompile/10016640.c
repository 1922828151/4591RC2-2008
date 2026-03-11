/*
 * func-name: sub_10016640
 * func-address: 0x10016640
 * callers: 0x10016010
 * callees: none
 */

_DWORD *__usercall sub_10016640@<eax>(_DWORD *a1@<eax>, _DWORD *a2, _DWORD *a3)
{
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp
  _DWORD *v5; // esi
  _DWORD *v6; // edi

  v3 = a1;
  v4 = a3;
  if ( a1 != a2 )
  {
    v5 = a3 + 26;
    v6 = a1 + 26;
    do
    {
      *v4 = *v3;
      Outpop::IONetwork::Connector_Config::operator=(v6 - 25);
      *((_BYTE *)v5 - 4) = *((_BYTE *)v6 - 4);
      *v5 = *v6;
      v3 += 27;
      v4 += 27;
      v5 += 27;
      v6 += 27;
    }
    while ( v3 != a2 );
  }
  return v4;
}
