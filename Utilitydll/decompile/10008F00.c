/*
 * func-name: sub_10008F00
 * func-address: 0x10008f00
 * callers: 0x10008d30, 0x1000a930
 * callees: 0x100092e0, 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *__stdcall sub_10008F00(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  void *v5[5]; // [esp+0h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-14h]
  void **v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = v5;
  v3 = operator new(0xCu);
  v5[4] = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  v6 = 1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  v6 = 2;
  sub_100092E0(a3, v5[0]);
  return v3;
}
