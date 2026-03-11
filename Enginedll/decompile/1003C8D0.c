/*
 * func-name: sub_1003C8D0
 * func-address: 0x1003c8d0
 * callers: 0x1003c980, 0x1015c6f0
 * callees: 0x1003c010, 0x1003c060
 */

_DWORD *__thiscall sub_1003C8D0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1003C010(a6, this[2], a4);
    sub_1003C060(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
