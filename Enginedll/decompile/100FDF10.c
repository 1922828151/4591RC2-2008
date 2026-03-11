/*
 * func-name: sub_100FDF10
 * func-address: 0x100fdf10
 * callers: 0x100ff960
 * callees: none
 */

int __cdecl sub_100FDF10(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 41); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
