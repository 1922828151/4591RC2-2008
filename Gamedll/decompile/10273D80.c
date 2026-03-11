/*
 * func-name: sub_10273D80
 * func-address: 0x10273d80
 * callers: 0x1001a8ed
 * callees: 0x100048d6
 */

_DWORD *__thiscall sub_10273D80(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, void *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 80 )
  {
    if ( v6 > this[2] )
      _invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      _invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 80;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_100048D6(v7, a4, 1, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    _invalid_parameter_noinfo();
  v10 = 80 * v8 + v9;
  if ( v10 > this[2] || v10 < this[1] )
    _invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
