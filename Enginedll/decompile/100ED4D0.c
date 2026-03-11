/*
 * func-name: sub_100ED4D0
 * func-address: 0x100ed4d0
 * callers: 0x100ed6f0
 * callees: 0x100ecf30
 */

_DWORD *__thiscall sub_100ED4D0(_DWORD *this, _DWORD *a2, _DWORD *a3, int a4, void *a5)
{
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // edi
  unsigned int v9; // ebx
  unsigned int v10; // edi
  _DWORD *result; // eax

  v6 = this[1];
  if ( v6 && (int)(this[2] - v6) / 56 )
  {
    if ( v6 > this[2] )
      invalid_parameter_noinfo();
    v7 = (int)a3;
    if ( !a3 || a3 != this )
      invalid_parameter_noinfo();
    v8 = (int)(a4 - v6) / 56;
  }
  else
  {
    v7 = (int)a3;
    v8 = 0;
  }
  sub_100ECF30(this, v7, a4, 1u, a5);
  v9 = this[1];
  if ( v9 > this[2] )
    invalid_parameter_noinfo();
  v10 = v9 + 56 * v8;
  if ( v10 > this[2] || v10 < this[1] )
    invalid_parameter_noinfo();
  result = a2;
  a2[1] = v10;
  *a2 = this;
  return result;
}
