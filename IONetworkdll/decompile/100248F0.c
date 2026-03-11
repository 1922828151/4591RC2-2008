/*
 * func-name: sub_100248F0
 * func-address: 0x100248f0
 * callers: 0x100231a0
 * callees: 0x1002bfb0, 0x1003dba0
 */

int __stdcall sub_100248F0(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_1002BFB0();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_1003DBA0(a1 + 16, v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
