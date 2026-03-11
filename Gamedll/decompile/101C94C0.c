/*
 * func-name: sub_101C94C0
 * func-address: 0x101c94c0
 * callers: 0x1000e787
 * callees: 0x1000e476
 */

_DWORD *__thiscall sub_101C94C0(_DWORD *this, _DWORD *a2, int a3, int a4, int a5)
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
  sub_1000E476(a3, a4, 1, a5);
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
