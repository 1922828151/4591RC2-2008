/*
 * func-name: sub_10027320
 * func-address: 0x10027320
 * callers: 0x1002ca50, 0x100e4420, 0x100e5360, 0x100e5d70
 * callees: 0x1001de20, 0x10020a70
 */

_DWORD *__thiscall sub_10027320(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_1001DE20(a6, this[2], a4);
    sub_10020A70(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
