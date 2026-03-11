/*
 * func-name: sub_1016B400
 * func-address: 0x1016b400
 * callers: 0x1016b870
 * callees: 0x1016ad30
 */

_DWORD *__thiscall sub_1016B400(_DWORD *this, _DWORD *a2, _DWORD *a3, _WORD *Source, int a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned int v8; // edi
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 1 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v7 = (int)((int)Source - v6) >> 1;
  }
  else
  {
    v7 = 0;
  }
  sub_1016AD30((int)this, (int)a3, Source, 1u, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    invalid_parameter_noinfo();
  v9 = v8 + 2 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
