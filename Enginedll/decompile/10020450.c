/*
 * func-name: sub_10020450
 * func-address: 0x10020450
 * callers: 0x10078c70, 0x100f19e0
 * callees: 0x10078560
 */

_DWORD *__thiscall sub_10020450(_DWORD *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_10078560(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
