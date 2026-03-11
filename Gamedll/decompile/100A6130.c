/*
 * func-name: sub_100A6130
 * func-address: 0x100a6130
 * callers: 0x1000613b
 * callees: 0x1000786a, 0x1001666c
 */

_DWORD *__thiscall sub_100A6130(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_1000786A(a6, this[2], a4);
    sub_1001666C(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
