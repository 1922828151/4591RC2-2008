/*
 * func-name: sub_10069630
 * func-address: 0x10069630
 * callers: 0x10008b84
 * callees: none
 */

int __cdecl sub_10069630(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 17); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
