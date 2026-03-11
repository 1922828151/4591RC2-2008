/*
 * func-name: sub_10104F10
 * func-address: 0x10104f10
 * callers: 0x10102e10, 0x101032a0, 0x101050c0
 * callees: 0x101049d0
 */

_DWORD *__thiscall sub_10104F10(_DWORD *this, _DWORD *a2, _DWORD *a3, char *Source, int *a5)
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
      invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v7 = (int)&Source[-v6] >> 2;
  }
  else
  {
    v7 = 0;
  }
  sub_101049D0((int)this, (int)a3, Source, 1u, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    invalid_parameter_noinfo();
  v9 = v8 + 4 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
