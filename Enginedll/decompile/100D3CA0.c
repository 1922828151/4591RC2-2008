/*
 * func-name: sub_100D3CA0
 * func-address: 0x100d3ca0
 * callers: 0x100c9af0, 0x100d4770
 * callees: 0x100d3260
 */

_DWORD *__thiscall sub_100D3CA0(_DWORD *this, _DWORD *a2, _DWORD *a3, char *a4, _DWORD *a5)
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
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)&a4[-v6] / 44;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_100D3260(this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 44 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  *a2 = this;
  a2[1] = v10;
  return result;
}
