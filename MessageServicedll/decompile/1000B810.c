/*
 * func-name: sub_1000B810
 * func-address: 0x1000b810
 * callers: 0x1000b0f0, 0x1000b480, 0x10012410, 0x10015740, 0x1001c100, 0x1001c6d0, 0x1001ce80, 0x10027260
 * callees: 0x1000bfa0, 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *__stdcall sub_1000B810(int a1, int a2, int a3)
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
    sub_1000BFA0(v3 + 2, a3);
  return v3;
}
