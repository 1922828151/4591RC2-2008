/*
 * func-name: sub_100FA9E0
 * func-address: 0x100fa9e0
 * callers: 0x100faa40
 * callees: 0x100ed460
 */

_DWORD *__stdcall sub_100FA9E0(unsigned int a1, unsigned int a2, _DWORD *a3)
{
  unsigned int v3; // edi
  _DWORD *v4; // esi
  int v5; // ecx

  v3 = a1;
  if ( a1 < a2 )
    return sub_100ED460(a3, (int *)&a1);
  v4 = a3;
  v5 = a3[1];
  if ( !v5 || a1 >= (a3[2] - v5) >> 2 )
    invalid_parameter_noinfo();
  a1 = *(_DWORD *)(v4[1] + 4 * v3);
  return sub_100ED460(v4, (int *)&a1);
}
