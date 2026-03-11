/*
 * func-name: sub_1016BF70
 * func-address: 0x1016bf70
 * callers: 0x1016c020
 * callees: 0x1016bc60
 */

_DWORD *__thiscall sub_1016BF70(_DWORD *this, _DWORD *a2, _DWORD *a3, CREControl *a4, _DWORD *a5)
{
  unsigned int v6; // esi
  int v7; // ebx
  int v8; // esi
  unsigned int v9; // ebx
  unsigned int v10; // esi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 52 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)((int)a4 - v6) / 52;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_1016BC60((int)this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 52 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  *a2 = this;
  a2[1] = v10;
  return result;
}
