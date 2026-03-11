/*
 * func-name: sub_10016010
 * func-address: 0x10016010
 * callers: 0x10015d70
 * callees: 0x1000b210, 0x10016640
 */

_DWORD *__stdcall sub_10016010(int a1, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v6; // esi
  int v7; // esi
  _DWORD *result; // eax

  v6 = a3;
  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = *(_DWORD *)(a1 + 8);
    sub_10016640(v7, a4);
    sub_1000B210(*(_DWORD *)(a1 + 8), a4 + 108 * ((v7 - a6) / 108));
    *(_DWORD *)(a1 + 8) = a4 + 108 * ((v7 - a6) / 108);
    v6 = a3;
  }
  result = a2;
  *a2 = v6;
  a2[1] = a4;
  return result;
}
