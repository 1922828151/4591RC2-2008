/*
 * func-name: sub_100165F0
 * func-address: 0x100165f0
 * callers: 0x10016160
 * callees: none
 */

int __usercall sub_100165F0@<eax>(int result@<eax>, _DWORD *a2, int a3)
{
  _DWORD *v3; // edi
  _DWORD *v4; // esi

  v3 = (_DWORD *)result;
  if ( (_DWORD *)result != a2 )
  {
    v4 = (_DWORD *)(result + 104);
    do
    {
      *v3 = *(_DWORD *)a3;
      result = Outpop::IONetwork::Connector_Config::operator=(a3 + 4);
      *((_BYTE *)v4 - 4) = *(_BYTE *)(a3 + 100);
      *v4 = *(_DWORD *)(a3 + 104);
      v3 += 27;
      v4 += 27;
    }
    while ( v3 != a2 );
  }
  return result;
}
