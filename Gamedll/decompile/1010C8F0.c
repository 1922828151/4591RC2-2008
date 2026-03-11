/*
 * func-name: sub_1010C8F0
 * func-address: 0x1010c8f0
 * callers: 0x10015bb8
 * callees: 0x100069c9, 0x1000a380
 */

_DWORD *__thiscall sub_1010C8F0(int *this, _DWORD *a2, int a3, int a4, int a5, int a6)
{
  void *v7; // edi
  _DWORD *result; // eax

  if ( !a3 || a3 != a5 )
    _invalid_parameter_noinfo();
  if ( a4 != a6 )
  {
    v7 = (void *)sub_1000A380(a6, this[2], a4);
    sub_100069C9(v7, this[2]);
    this[2] = (int)v7;
  }
  result = a2;
  *a2 = a3;
  a2[1] = a4;
  return result;
}
