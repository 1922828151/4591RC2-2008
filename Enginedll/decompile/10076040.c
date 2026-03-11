/*
 * func-name: sub_10076040
 * func-address: 0x10076040
 * callers: 0x10076190, 0x100cdb10
 * callees: 0x10075ef0, 0x10075f50
 */

_DWORD *__thiscall sub_10076040(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10075EF0(a6, this[2], a4);
    sub_10075F50(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
