/*
 * func-name: sub_101C3F40
 * func-address: 0x101c3f40
 * callers: 0x10010145
 * callees: 0x10017e4f
 */

_DWORD *__thiscall sub_101C3F40(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
    this[2] = sub_10017E4F(a6, this[2], a4);
  result = a2;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
