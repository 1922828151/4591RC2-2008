/*
 * func-name: sub_100A7130
 * func-address: 0x100a7130
 * callers: 0x10003fd0
 * callees: 0x10001b77, 0x10004714
 */

_DWORD *__thiscall sub_100A7130(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10004714(a6, this[2], a4);
    sub_10001B77(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
