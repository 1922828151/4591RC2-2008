/*
 * func-name: sub_1000E5C0
 * func-address: 0x1000e5c0
 * callers: 0x1000dc70
 * callees: 0x1000eba0, 0x10023306, 0x100234ce, 0x10023bc6
 */

_DWORD *__stdcall sub_1000E5C0(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  void *v5[9]; // [esp+0h] [ebp-24h] BYREF

  v5[5] = v5;
  v3 = operator new(0x10u);
  v5[4] = v3;
  v5[8] = 0;
  if ( v3 )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  sub_1000EBA0(v3 + 2, v5[0]);
  return v3;
}
