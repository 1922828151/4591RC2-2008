/*
 * func-name: sub_1029B740
 * func-address: 0x1029b740
 * callers: 0x1001402e
 * callees: 0x1000916a, 0x100174b3
 */

_DWORD *__thiscall sub_1029B740(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1000916A(a6, this[2], a4);
    sub_100174B3();
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
