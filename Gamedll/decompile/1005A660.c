/*
 * func-name: sub_1005A660
 * func-address: 0x1005a660
 * callers: 0x10019ace
 * callees: 0x10003170, 0x1000fcea
 */

_DWORD *__thiscall sub_1005A660(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_10003170(a6, this[2], a4);
    sub_1000FCEA(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
