/*
 * func-name: sub_100137C0
 * func-address: 0x100137c0
 * callers: 0x10012550
 * callees: 0x1000e080, 0x10013f60
 */

int __stdcall sub_100137C0(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_10013F60();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_1000E080((int *)(a1 + 16), (int)v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
