/*
 * func-name: sub_1029AE60
 * func-address: 0x1029ae60
 * callers: 0x1000b514
 * callees: 0x100016f4
 */

_DWORD *__thiscall sub_1029AE60(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 7 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    if ( !a3 || (_DWORD *)a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)(a4 - v6) >> 7;
  }
  else
  {
    v7 = 0;
  }
  sub_100016F4(a3, a4, 1, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  v9 = v8 + (v7 << 7);
  if ( v9 > this[2] || v9 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
