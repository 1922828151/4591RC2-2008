/*
 * func-name: sub_10025230
 * func-address: 0x10025230
 * callers: 0x10024020, 0x10024df0
 * callees: 0x10025490, 0x1004e870, 0x1004e98e, 0x1004f112
 */

_DWORD *__stdcall sub_10025230(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  _DWORD v5[6]; // [esp+0h] [ebp-2Ch] BYREF
  int v6; // [esp+18h] [ebp-14h]
  _DWORD *v7; // [esp+1Ch] [ebp-10h]
  int v8; // [esp+28h] [ebp-4h]

  v7 = v5;
  v3 = (_DWORD *)operator new(24);
  v5[5] = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  v6 = 1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  v6 = 2;
  LOBYTE(v8) = 1;
  if ( v3 != (_DWORD *)-8 )
    sub_10025490(v3 + 2, a3);
  return v3;
}
