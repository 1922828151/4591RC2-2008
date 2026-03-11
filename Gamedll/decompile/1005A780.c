/*
 * func-name: sub_1005A780
 * func-address: 0x1005a780
 * callers: 0x10018df9
 * callees: 0x10002572, 0x10011a72
 */

_DWORD *__thiscall sub_1005A780(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10002572(a6, this[2], a4);
    sub_10011A72();
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
