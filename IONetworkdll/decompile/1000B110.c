/*
 * func-name: sub_1000B110
 * func-address: 0x1000b110
 * callers: 0x1000a280
 * callees: 0x1000b3b0
 */

int __stdcall sub_1000B110(int a1, int a2, int a3, int a4, int a5)
{
  unsigned int v5; // eax
  unsigned int v6; // ebx

  if ( !a4 )
    invalid_parameter_noinfo();
  v5 = *(_DWORD *)(a4 + 12);
  v6 = a5 + 1;
  if ( a5 + 1 > v5 + *(_DWORD *)(a4 + 16) || v6 < v5 )
    invalid_parameter_noinfo();
  sub_1000B3B0(a2, 0, a4, a5, 0, a4, v6);
  return a2;
}
