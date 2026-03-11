/*
 * func-name: sub_100FBC60
 * func-address: 0x100fbc60
 * callers: 0x100152c1
 * callees: 0x10018fde
 */

_DWORD *__thiscall sub_100FBC60(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 36 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 36;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_10018FDE(v7, a4, 1, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    _invalid_parameter_noinfo();
  v10 = v9 + 36 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
