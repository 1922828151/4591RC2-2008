/*
 * func-name: sub_1009BB80
 * func-address: 0x1009bb80
 * callers: 0x10097910, 0x1009bc30
 * callees: 0x1009b880
 */

_DWORD *__thiscall sub_1009BB80(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, int a5)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 104 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 104;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_1009B880(this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 104 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  *a2 = this;
  a2[1] = v10;
  return result;
}
