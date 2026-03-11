/*
 * func-name: sub_10127300
 * func-address: 0x10127300
 * callers: 0x10127730
 * callees: 0x10126d70
 */

_DWORD *__thiscall sub_10127300(_DWORD *this, _DWORD *a2, _DWORD *a3, char *a4, char *a5)
{
  unsigned int v6; // ebx
  int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) >> 5 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v7 = (int)&a4[-v6] >> 5;
  }
  else
  {
    v7 = 0;
  }
  sub_10126D70((int)this, (int)a3, a4, 1u, a5);
  v8 = this[1];
  if ( v8 > this[2] )
    invalid_parameter_noinfo();
  v9 = v8 + 32 * v7;
  if ( v9 > this[2] || v9 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v9;
  *a2 = this;
  return result;
}
