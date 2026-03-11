/*
 * func-name: sub_1002BA30
 * func-address: 0x1002ba30
 * callers: 0x10016bf0, 0x100261f0, 0x10036040, 0x10036650
 * callees: 0x1002bfb0, 0x1003dba0
 */

int __stdcall sub_1002BA30(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+Ch] [ebp-14h] BYREF

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
