/*
 * func-name: sub_100204A0
 * func-address: 0x100204a0
 * callers: 0x10023a40, 0x1003e700, 0x100608d0, 0x100f29d0, 0x100f7610
 * callees: 0x10061300
 */

_DWORD *__thiscall sub_100204A0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_10061300(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
