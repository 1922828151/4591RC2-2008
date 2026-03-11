/*
 * func-name: sub_1006BCF0
 * func-address: 0x1006bcf0
 * callers: 0x1006e140
 * callees: none
 */

int __cdecl sub_1006BCF0(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 81); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
