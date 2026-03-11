/*
 * func-name: sub_100CE1D0
 * func-address: 0x100ce1d0
 * callers: 0x1006d220, 0x100cf040, 0x100cf3b0
 * callees: none
 */

int __cdecl sub_100CE1D0(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 21); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
