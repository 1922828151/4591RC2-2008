/*
 * func-name: sub_10115740
 * func-address: 0x10115740
 * callers: 0x10115b50
 * callees: 0x101154d0, 0x10115520
 */

_DWORD *__thiscall sub_10115740(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (int *)sub_101154D0(a6, this[2], a4);
    sub_10115520(v7, (int *)this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
