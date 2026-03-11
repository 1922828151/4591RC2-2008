/*
 * func-name: sub_10281110
 * func-address: 0x10281110
 * callers: 0x1000d6ca
 * callees: 0x10017ba2
 */

_DWORD *__thiscall sub_10281110(_DWORD *this, _DWORD *a2, _DWORD *a3, void *Source, int a5)
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
      _invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v7 = (int)((int)Source - v6) >> 2;
  }
  else
  {
    v7 = 0;
  }
  sub_10017BA2((int)a3, Source, 1, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    _invalid_parameter_noinfo();
  v9 = v8 + 4 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
