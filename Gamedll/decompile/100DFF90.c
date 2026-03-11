/*
 * func-name: sub_100DFF90
 * func-address: 0x100dff90
 * callers: 0x100197ef
 * callees: none
 */

int __cdecl sub_100DFF90(int a1)
{
  int result; // eax
  int i; // ecx

  result = a1;
  for ( i = *(_DWORD *)(a1 + 8); !*(_BYTE *)(i + 33); i = *(_DWORD *)(i + 8) )
    result = i;
  return result;
}
