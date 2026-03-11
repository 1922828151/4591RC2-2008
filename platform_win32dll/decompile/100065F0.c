/*
 * func-name: sub_100065F0
 * func-address: 0x100065f0
 * callers: 0x100066b0
 * callees: 0x10003c00
 */

_DWORD *__thiscall sub_100065F0(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // edi
  _DWORD *v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 28 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 28;
  }
  else
  {
    v7 = a3;
    v8 = 0;
  }
  sub_10003C00(this, (int)v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 28 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
