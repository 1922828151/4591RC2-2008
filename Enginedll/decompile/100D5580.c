/*
 * func-name: sub_100D5580
 * func-address: 0x100d5580
 * callers: 0x100cdb80, 0x100d5630
 * callees: 0x100d5290
 */

_DWORD *__thiscall sub_100D5580(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, _DWORD *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 20 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 20;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_100D5290((int)this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 20 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
