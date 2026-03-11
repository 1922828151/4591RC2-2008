/*
 * func-name: sub_1025B0B0
 * func-address: 0x1025b0b0
 * callers: 0x10008a5d
 * callees: 0x10001767, 0x10003dff
 */

_DWORD *__thiscall sub_1025B0B0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10001767(a6, this[2], a4);
    sub_10003DFF(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
