/*
 * func-name: sub_10025CD0
 * func-address: 0x10025cd0
 * callers: 0x10025540
 * callees: 0x10025e30, 0x1004e870, 0x1004e98e, 0x1004f112
 */

_DWORD *__stdcall sub_10025CD0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD v5[5]; // [esp+0h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-14h]
  _DWORD *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = v5;
  v3 = (_DWORD *)operator new(28);
  v5[4] = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  v6 = 1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  v6 = 2;
  LOBYTE(v8) = 1;
  if ( v3 != (_DWORD *)-8 )
    sub_10025E30(v3 + 2);
  return v3;
}
