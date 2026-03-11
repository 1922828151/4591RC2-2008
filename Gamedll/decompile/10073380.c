/*
 * func-name: sub_10073380
 * func-address: 0x10073380
 * callers: 0x1000d7e7
 * callees: 0x10002469, 0x102c9d50, 0x102c9d86, 0x102c9d98
 */

_DWORD *__stdcall sub_10073380(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-24h] BYREF
  void *v6; // [esp+10h] [ebp-14h]
  int *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v7 = &v5;
  v3 = operator new(0x28u);
  v6 = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  sub_10002469((int)(v3 + 2), a3);
  return v3;
}
