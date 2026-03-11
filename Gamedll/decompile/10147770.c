/*
 * func-name: sub_10147770
 * func-address: 0x10147770
 * callers: 0x1000461f
 * callees: 0x1000c4cd
 */

_DWORD *__thiscall sub_10147770(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 3 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    if ( !a3 || (_DWORD *)a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)(a4 - v6) >> 3;
  }
  else
  {
    v7 = 0;
  }
  sub_1000C4CD(a3, a4, 1, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  v9 = v8 + 8 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
