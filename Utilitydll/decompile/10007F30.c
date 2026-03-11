/*
 * func-name: sub_10007F30
 * func-address: 0x10007f30
 * callers: 0x10005e10, 0x10007740
 * callees: 0x10008120, 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *__stdcall sub_10007F30(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-28h] BYREF
  void *v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int *v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+24h] [ebp-4h]

  v8 = &v5;
  v3 = operator new(0x10u);
  v6 = v3;
  v9 = 0;
  if ( v3 )
    *v3 = a1;
  v7 = 1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  v7 = 2;
  LOBYTE(v9) = 1;
  if ( v3 != (_DWORD *)-8 )
    sub_10008120(v3 + 2, a3);
  return v3;
}
