/*
 * func-name: sub_10008E30
 * func-address: 0x10008e30
 * callers: 0x10006440, 0x10009d70, 0x1000cd90
 * callees: 0x10009ac0, 0x1000eb40, 0x10023306, 0x10023bc6
 */

_DWORD *__stdcall sub_10008E30(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-24h] BYREF
  void *v6; // [esp+10h] [ebp-14h]
  int *v7; // [esp+14h] [ebp-10h]
  int v8; // [esp+20h] [ebp-4h]

  v7 = &v5;
  v3 = (_DWORD *)sub_1000EB40(1);
  v6 = v3;
  v8 = 0;
  if ( v3 )
    *v3 = a1;
  if ( v3 != (_DWORD *)-4 )
    v3[1] = a2;
  LOBYTE(v8) = 1;
  if ( v3 != (_DWORD *)-8 )
    sub_10009AC0(v3 + 2);
  return v3;
}
