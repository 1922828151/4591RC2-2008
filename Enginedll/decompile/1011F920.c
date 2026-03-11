/*
 * func-name: sub_1011F920
 * func-address: 0x1011f920
 * callers: 0x1011f990
 * callees: 0x100119b0, 0x1011f6d0
 */

_DWORD *__thiscall sub_1011F920(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1011F6D0(a6, this[2], a4);
    sub_100119B0(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
