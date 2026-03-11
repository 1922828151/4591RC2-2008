/*
 * func-name: sub_1016B0D0
 * func-address: 0x1016b0d0
 * callers: 0x10168a40, 0x1016b720
 * callees: 0x1016a7f0
 */

_DWORD *__thiscall sub_1016B0D0(_DWORD *this, _DWORD *a2, _DWORD *a3, _DWORD *Source, int *a5)
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
    v7 = (int)((int)Source - v6) >> 2;
  }
  else
  {
    v7 = 0;
  }
  sub_1016A7F0((int)this, (int)a3, Source, 1u, a5);
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
