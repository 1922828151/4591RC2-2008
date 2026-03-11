/*
 * func-name: sub_1001D930
 * func-address: 0x1001d930
 * callers: 0x100196a0
 * callees: 0x1000a130, 0x100193b0
 */

int __stdcall sub_1001D930(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+10h] [ebp-14h] BYREF

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
