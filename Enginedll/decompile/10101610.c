/*
 * func-name: sub_10101610
 * func-address: 0x10101610
 * callers: 0x101017c0, 0x10101a60
 * callees: none
 */

unsigned int __stdcall sub_10101610(int a1, char a2)
{
  unsigned int i; // edi
  int v3; // ecx
  unsigned int result; // eax

  *(_BYTE *)(a1 + 364) = a2;
  for ( i = 0; ; ++i )
  {
    v3 = *(_DWORD *)(a1 + 388);
    if ( !v3 )
      break;
    result = (*(_DWORD *)(a1 + 392) - v3) >> 2;
    if ( i >= result )
      break;
    result = *(_DWORD *)(a1 + 388);
    *(_BYTE *)(*(_DWORD *)(result + 4 * i) + 364) = a2;
  }
  return result;
}
