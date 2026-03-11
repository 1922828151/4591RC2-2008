/*
 * func-name: sub_100143B0
 * func-address: 0x100143b0
 * callers: 0x10013100, 0x10014090
 * callees: 0x100146d0, 0x10018cf2, 0x10018e10, 0x10019586
 */

_DWORD *__stdcall sub_100143B0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-28h] BYREF
  void *v6; // [esp+10h] [ebp-18h]
  int v7; // [esp+14h] [ebp-14h]
  int *v8; // [esp+18h] [ebp-10h]
  int v9; // [esp+24h] [ebp-4h]

  v8 = &v5;
  v3 = operator new(0x40u);
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
    sub_100146D0(v3 + 2);
  return v3;
}
