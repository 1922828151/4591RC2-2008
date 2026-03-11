/*
 * func-name: sub_1015CE40
 * func-address: 0x1015ce40
 * callers: 0x1015cf00
 * callees: 0x1015cb30
 */

_DWORD *__thiscall sub_1015CE40(_DWORD *this, _DWORD *a2, _DWORD *a3, CREControl *a4, void *a5)
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
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)((int)a4 - v6) / 80;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_1015CB30((int)this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = 80 * v8 + v9;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
