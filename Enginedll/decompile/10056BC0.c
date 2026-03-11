/*
 * func-name: sub_10056BC0
 * func-address: 0x10056bc0
 * callers: 0x10057fa0
 * callees: none
 */

int __cdecl sub_10056BC0(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 53); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
