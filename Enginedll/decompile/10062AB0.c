/*
 * func-name: sub_10062AB0
 * func-address: 0x10062ab0
 * callers: 0x10062fe0
 * callees: 0x100626d0, 0x100ff700
 */

_DWORD *__thiscall sub_10062AB0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_100626D0(a6, this[2], a4);
    sub_100FF700(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
