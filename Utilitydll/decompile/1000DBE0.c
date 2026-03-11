/*
 * func-name: sub_1000DBE0
 * func-address: 0x1000dbe0
 * callers: 0x1000cdb0
 * callees: 0x10007690, 0x1000e080
 */

int __stdcall sub_1000DBE0(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_10007690();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_1000E080(a1 + 16, v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
