/*
 * func-name: sub_1006C430
 * func-address: 0x1006c430
 * callers: 0x10058270, 0x1006dd10, 0x1009a150, 0x1016cfe0
 * callees: none
 */

int __cdecl sub_1006C430(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 45); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
