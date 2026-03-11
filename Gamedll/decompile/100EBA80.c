/*
 * func-name: sub_100EBA80
 * func-address: 0x100eba80
 * callers: 0x1000447b
 * callees: 0x1000da2b, 0x10010b7c
 */

_DWORD *__stdcall sub_100EBA80(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // esi
  int v5; // edi
  _DWORD *result; // eax

  v4 = sub_1000DA2B(a3, *(_DWORD *)(a3 + 4), a4);
  sub_10010B7C(1);
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
