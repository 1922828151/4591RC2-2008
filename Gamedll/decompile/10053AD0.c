/*
 * func-name: sub_10053AD0
 * func-address: 0x10053ad0
 * callers: 0x10007509
 * callees: 0x100034f4
 */

_DWORD *__thiscall sub_10053AD0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_100034F4(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
