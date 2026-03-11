/*
 * func-name: sub_10068FD0
 * func-address: 0x10068fd0
 * callers: 0x10016a8b
 * callees: none
 */

int __cdecl sub_10068FD0(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 21); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
