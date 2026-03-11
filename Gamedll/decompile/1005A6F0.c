/*
 * func-name: sub_1005A6F0
 * func-address: 0x1005a6f0
 * callers: 0x1001871e
 * callees: 0x100035bc, 0x1000b82a
 */

_DWORD *__thiscall sub_1005A6F0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_100035BC(a6, this[2], a4);
    sub_1000B82A(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
