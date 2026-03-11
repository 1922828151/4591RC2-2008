/*
 * func-name: sub_10021C40
 * func-address: 0x10021c40
 * callers: 0x10021930
 * callees: 0x1001e540, 0x10023360
 */

_DWORD *__stdcall sub_10021C40(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // esi
  int v8; // esi
  _DWORD *result; // eax
  char v10; // [esp+10h] [ebp-4h]

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    LOBYTE(a5) = 0;
    v10 = 0;
    sub_10023360(a6, a1, v10, a5);
    v8 = a4 + 8 * ((v7 - a6) >> 3);
    sub_1001E540(*(_DWORD *)(a1 + 8), v8);
    *(_DWORD *)(a1 + 8) = v8;
    v6 = a3;
  }
  result = a2;
  *a2 = v6;
  a2[1] = a4;
  return result;
}
