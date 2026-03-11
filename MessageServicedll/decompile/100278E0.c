/*
 * func-name: sub_100278E0
 * func-address: 0x100278e0
 * callers: 0x1000e240, 0x10010740, 0x100131c0, 0x1001ab90, 0x100250e0, 0x10028de0
 * callees: 0x1000a130, 0x100193b0
 */

int __stdcall sub_100278E0(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_1000A130();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_100193B0((int *)(a1 + 16), (int)v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
