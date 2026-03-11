/*
 * func-name: sub_1029A5F0
 * func-address: 0x1029a5f0
 * callers: 0x10009d8b
 * callees: 0x10004840, 0x10015910
 */

_DWORD *__thiscall sub_1029A5F0(int *this, _DWORD *a2, int a3, int a4)
{
  int v5; // edi
  int v6; // esi
  _DWORD *result; // eax
  int v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+4h] [ebp-14h]

  sub_10004840(a4 + 128, this[2], a4);
  v5 = this[2];
  v6 = v5 - 128;
  do
  {
    sub_10015910(v8, v9);
    v6 += 128;
  }
  while ( v6 != v5 );
  result = a2;
  this[2] -= 128;
  a2[1] = a4;
  *a2 = a3;
  return result;
}
