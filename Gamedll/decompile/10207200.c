/*
 * func-name: sub_10207200
 * func-address: 0x10207200
 * callers: 0x10010faf
 * callees: 0x1000329c
 */

_DWORD *__thiscall sub_10207200(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, void *a5)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 4 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)(a4 - v6) >> 4;
  }
  else
  {
    v7 = 0;
  }
  sub_1000329C((int)a3, a4, 1, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  v9 = v8 + 16 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
