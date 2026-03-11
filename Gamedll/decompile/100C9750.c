/*
 * func-name: sub_100C9750
 * func-address: 0x100c9750
 * callers: 0x1000875b
 * callees: 0x1000177b
 */

_DWORD *__thiscall sub_100C9750(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_1000177B(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
