/*
 * func-name: sub_10265880
 * func-address: 0x10265880
 * callers: 0x10019943
 * callees: 0x10013b97
 */

_DWORD *__thiscall sub_10265880(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 44 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 44;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_10013B97(v7, a4, 1, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    _invalid_parameter_noinfo();
  v10 = v9 + 44 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  *a2 = this;
  a2[1] = v10;
  return result;
}
