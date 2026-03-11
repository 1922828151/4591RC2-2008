/*
 * func-name: sub_10005B50
 * func-address: 0x10005b50
 * callers: 0x10004830
 * callees: 0x10008890, 0x10008a40
 */

int __usercall sub_10005B50@<eax>(int a1@<esi>)
{
  unsigned int v1; // edi
  unsigned int v2; // ebx
  int result; // eax
  char v4; // [esp+10h] [ebp-4h]

  v1 = *(_DWORD *)(a1 + 8);
  if ( *(_DWORD *)(a1 + 4) > v1 )
    invalid_parameter_noinfo();
  v2 = *(_DWORD *)(a1 + 4);
  if ( v2 > *(_DWORD *)(a1 + 8) )
    invalid_parameter_noinfo();
  v4 = *(_BYTE *)(a1 + 16);
  if ( (int)((v1 - v2) & 0xFFFFFFFC) > 4 )
    sub_10008890(v4);
  result = *(_DWORD *)(a1 + 4);
  if ( result )
  {
    if ( (*(_DWORD *)(a1 + 8) - result) >> 2 )
    {
      result = sub_10008A40(v4);
      *(_DWORD *)(a1 + 8) -= 4;
    }
  }
  return result;
}
