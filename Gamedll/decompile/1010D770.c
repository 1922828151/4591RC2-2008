/*
 * func-name: sub_1010D770
 * func-address: 0x1010d770
 * callers: 0x10014fb0
 * callees: 0x10003bed, 0x1000d49a
 */

_DWORD *__thiscall sub_1010D770(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax
  int v8; // [esp+0h] [ebp-10h]
  int v9; // [esp+4h] [ebp-Ch]

  sub_1000D49A(a4 + 84, this[2], a4);
  v5 = this[2];
  v6 = v5 - 84;
  do
  {
    sub_10003BED(v8, v9);
    v6 += 84;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 84;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
