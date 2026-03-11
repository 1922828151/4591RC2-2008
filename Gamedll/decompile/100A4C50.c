/*
 * func-name: sub_100A4C50
 * func-address: 0x100a4c50
 * callers: 0x10010dd9
 * callees: 0x10001d3e
 */

_DWORD *__thiscall sub_100A4C50(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_10001D3E(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
