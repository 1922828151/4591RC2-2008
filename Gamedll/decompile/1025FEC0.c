/*
 * func-name: sub_1025FEC0
 * func-address: 0x1025fec0
 * callers: 0x100158c0
 * callees: 0x10016bc1
 */

_DWORD *__thiscall sub_1025FEC0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 2 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    if ( !a3 || (_DWORD *)a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)(a4 - v6) >> 2;
  }
  else
  {
    v7 = 0;
  }
  sub_10016BC1(a3, a4, 1, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  v9 = v8 + 4 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
