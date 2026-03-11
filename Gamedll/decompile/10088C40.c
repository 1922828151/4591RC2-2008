/*
 * func-name: sub_10088C40
 * func-address: 0x10088c40
 * callers: 0x1000d85f
 * callees: 0x1001397b
 */

_DWORD *__thiscall sub_10088C40(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_1001397B(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
