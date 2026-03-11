/*
 * func-name: sub_100D31D0
 * func-address: 0x100d31d0
 * callers: 0x100c8fd0
 * callees: 0x100d2720
 */

_DWORD *__thiscall sub_100D31D0(_DWORD *this, _DWORD *a2, _DWORD *a3, _WORD *Source, unsigned __int16 *a5)
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
  sub_100D2720(this, (int)a3, Source, 1u, a5);
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
