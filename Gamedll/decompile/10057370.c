/*
 * func-name: sub_10057370
 * func-address: 0x10057370
 * callers: 0x100122ba
 * callees: 0x100067fd, 0x10008f8f
 */

_DWORD *__thiscall sub_10057370(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_100067FD(a6, this[2], a4);
    sub_10008F8F(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
