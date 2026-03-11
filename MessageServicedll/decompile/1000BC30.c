/*
 * func-name: sub_1000BC30
 * func-address: 0x1000bc30
 * callers: 0x1000aff0
 * callees: 0x1000bf40, 0x100294f2, 0x100295c0, 0x10029d92
 */

_DWORD *__stdcall sub_1000BC30(int a1, int a2, int a3)
{
  _DWORD *v3; // esi
  int v5; // [esp+0h] [ebp-2Ch] BYREF
  void *v6; // [esp+14h] [ebp-18h]
  int v7; // [esp+18h] [ebp-14h]
  int *v8; // [esp+1Ch] [ebp-10h]
  int v9; // [esp+28h] [ebp-4h]

  v8 = &v5;
  v3 = operator new(0x1Cu);
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
    sub_1000BF40(v3 + 2, a3);
  return v3;
}
