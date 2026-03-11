/*
 * func-name: sub_100FDF30
 * func-address: 0x100fdf30
 * callers: 0x100fe930
 * callees: none
 */

int __cdecl sub_100FDF30(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 17); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
