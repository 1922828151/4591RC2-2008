/*
 * func-name: sub_101F1B70
 * func-address: 0x101f1b70
 * callers: 0x10019209
 * callees: 0x100016a4, 0x10008f67
 */

_DWORD *__thiscall sub_101F1B70(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  int v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = sub_10008F67(a6, this[2], a4);
    sub_100016A4(v7, this[2]);
    this[2] = v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
