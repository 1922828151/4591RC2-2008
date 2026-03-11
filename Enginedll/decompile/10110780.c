/*
 * func-name: sub_10110780
 * func-address: 0x10110780
 * callers: 0x101118f0
 * callees: 0x1010f9f0, 0x1010fce0
 */

_DWORD *__thiscall sub_10110780(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1010F9F0(a6, this[2], a4);
    sub_1010FCE0(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
