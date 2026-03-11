/*
 * func-name: sub_1001A870
 * func-address: 0x1001a870
 * callers: 0x10020500
 * callees: none
 */

int __cdecl sub_1001A870(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 49); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
