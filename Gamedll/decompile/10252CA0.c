/*
 * func-name: sub_10252CA0
 * func-address: 0x10252ca0
 * callers: 0x100059fc
 * callees: 0x1000c874, 0x10016c57
 */

_DWORD *__stdcall sub_10252CA0(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  _DWORD *result; // eax

  v4 = sub_1000C874(a3, *(_DWORD *)(a3 + 4), a4);
  sub_10016C57(1);
  *(_DWORD *)(a3 + 4) = v4;
  **(_DWORD **)(v4 + 4) = v4;
  if ( !a2 )
    _invalid_parameter_noinfo();
  v5 = *(_DWORD *)(a3 + 4);
  if ( v5 == *(_DWORD *)(a2 + 4) )
    _invalid_parameter_noinfo();
  result = a1;
  a1[1] = v5;
  *a1 = a2;
  return result;
}
