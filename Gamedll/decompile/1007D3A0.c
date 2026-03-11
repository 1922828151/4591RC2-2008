/*
 * func-name: sub_1007D3A0
 * func-address: 0x1007d3a0
 * callers: 0x10012279
 * callees: 0x100196dc
 */

_DWORD *__thiscall sub_1007D3A0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_100196DC(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
