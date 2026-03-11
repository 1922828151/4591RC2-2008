/*
 * func-name: sub_10018320
 * func-address: 0x10018320
 * callers: 0x10009990, 0x100174e0
 * callees: 0x10002960, 0x100193b0
 */

int __stdcall sub_10018320(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_10002960();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_100193B0(a1 + 16, v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
