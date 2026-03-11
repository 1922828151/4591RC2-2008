/*
 * func-name: sub_1018AA40
 * func-address: 0x1018aa40
 * callers: 0x100181e2
 * callees: 0x100095b6, 0x1001a898
 */

_DWORD *__thiscall sub_1018AA40(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_1001A898(a6, this[2], a4);
    sub_100095B6(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
