/*
 * func-name: sub_100A0C20
 * func-address: 0x100a0c20
 * callers: 0x10016a31
 * callees: none
 */

int __cdecl sub_100A0C20(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 45); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
