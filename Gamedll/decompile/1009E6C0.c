/*
 * func-name: sub_1009E6C0
 * func-address: 0x1009e6c0
 * callers: 0x1000240f
 * callees: 0x1000b9a1, 0x10010a1e
 */

_DWORD *__thiscall sub_1009E6C0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1000B9A1(a6, this[2], a4);
    sub_10010A1E(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
