/*
 * func-name: sub_10035F10
 * func-address: 0x10035f10
 * callers: 0x1002a530, 0x1002bf80, 0x10039b80
 * callees: 0x1003be30, 0x1004e870, 0x1004e98e, 0x1004f112
 */

_DWORD *__stdcall sub_10035F10(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD v5[5]; // [esp+0h] [ebp-28h] BYREF
  int v6; // [esp+14h] [ebp-14h]
  _DWORD *v7; // [esp+18h] [ebp-10h]
  int v8; // [esp+24h] [ebp-4h]

  v7 = v5;
  v3 = (_DWORD *)operator new(24);
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
    sub_1003BE30(v3 + 2, a3);
  return v3;
}
