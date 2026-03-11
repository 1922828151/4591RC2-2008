/*
 * func-name: sub_1000B210
 * func-address: 0x1000b210
 * callers: 0x10006b20, 0x1000af80
 * callees: 0x10008a40, 0x1000ba30
 */

_DWORD *__stdcall sub_1000B210(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // esi
  LONG v8; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    sub_1000BA30(v7);
    v8 = a4 + 4 * ((v7 - a6) >> 2);
    sub_10008A40(v8, *(int **)(a1 + 8));
    *(_DWORD *)(a1 + 8) = v8;
    v6 = a3;
  }
  result = a2;
  a2[1] = a4;
  *a2 = v6;
  return result;
}
