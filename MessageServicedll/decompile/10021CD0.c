/*
 * func-name: sub_10021CD0
 * func-address: 0x10021cd0
 * callers: 0x10020d10
 * callees: 0x1000a0a0, 0x100193b0
 */

int __stdcall sub_10021CD0(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+10h] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_1000A0A0();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_100193B0((int *)(a1 + 16), (int)v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
