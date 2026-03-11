/*
 * func-name: sub_101E2E20
 * func-address: 0x101e2e20
 * callers: 0x10008206
 * callees: 0x1000d558
 */

int __stdcall sub_101E2E20(int a1, int a2)
{
  _DWORD v3[2]; // [esp+0h] [ebp-14h] BYREF
  _BYTE v4[12]; // [esp+8h] [ebp-Ch] BYREF

  v3[0] = a1;
  v3[1] = a2;
  return sub_1000D558((int)v4, (int)v3);
}
