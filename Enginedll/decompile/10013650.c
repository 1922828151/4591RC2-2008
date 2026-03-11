/*
 * func-name: sub_10013650
 * func-address: 0x10013650
 * callers: 0x100085f0, 0x10009140, 0x10013c00, 0x1008f6f0
 * callees: 0x10011870, 0x10012960
 */

_DWORD *__thiscall sub_10013650(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10012960(a6, this[2], a4);
    sub_10011870(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
