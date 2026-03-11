/*
 * func-name: sub_102C5FE0
 * func-address: 0x102c5fe0
 * callers: 0x102c6280
 * callees: 0x102c5ac0
 */

_DWORD *__thiscall sub_102C5FE0(_DWORD *this, _DWORD *a2, _DWORD *a3, char *Source, double *a5)
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
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)&Source[-v6] >> 3;
  }
  else
  {
    v7 = 0;
  }
  sub_102C5AC0((int)this, (int)a3, Source, 1u, a5);
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
