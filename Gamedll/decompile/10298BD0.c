/*
 * func-name: sub_10298BD0
 * func-address: 0x10298bd0
 * callers: 0x100188b8
 * callees: 0x10002eff, 0x10014bcd
 */

_DWORD *__thiscall sub_10298BD0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_10014BCD(a6, this[2], a4);
    sub_10002EFF(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
