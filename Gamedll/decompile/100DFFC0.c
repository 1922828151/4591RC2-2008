/*
 * func-name: sub_100DFFC0
 * func-address: 0x100dffc0
 * callers: 0x1000f55b
 * callees: none
 */

int __cdecl sub_100DFFC0(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 21); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
