/*
 * func-name: sub_101768B0
 * func-address: 0x101768b0
 * callers: 0x10176a80
 * callees: 0x10013780, 0x10176690
 */

_DWORD *__thiscall sub_101768B0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10176690(a6, this[2], a4);
    sub_10013780(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
