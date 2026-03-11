/*
 * func-name: sub_1029BD10
 * func-address: 0x1029bd10
 * callers: 0x1000a78b
 * callees: 0x100099da
 */

_DWORD *__thiscall sub_1029BD10(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 60 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 60;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_100099DA(v7, a4, 1, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    _invalid_parameter_noinfo();
  v10 = v9 + 60 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
