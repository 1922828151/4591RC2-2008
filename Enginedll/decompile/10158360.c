/*
 * func-name: sub_10158360
 * func-address: 0x10158360
 * callers: 0x10158cf0
 * callees: 0x10157d40
 */

_DWORD *__thiscall sub_10158360(_DWORD *this, _DWORD *a2, _DWORD *a3, char *a4, _DWORD *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 12 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)&a4[-v6] / 12;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_10157D40((int)this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 12 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
