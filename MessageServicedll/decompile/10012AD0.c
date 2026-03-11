/*
 * func-name: sub_10012AD0
 * func-address: 0x10012ad0
 * callers: 0x10012390
 * callees: 0x10009c30, 0x100193b0
 */

int __stdcall sub_10012AD0(int a1, _BYTE *a2)
{
  _DWORD v3[5]; // [esp+Ch] [ebp-14h] BYREF

  *(_BYTE *)a1 = *a2;
  *(_DWORD *)(a1 + 8) = sub_10009C30();
  *(_DWORD *)(a1 + 12) = 0;
  v3[4] = 0;
  v3[1] = *(_DWORD *)(a1 + 8);
  v3[0] = a1 + 4;
  sub_100193B0(a1 + 16, v3);
  *(_DWORD *)(a1 + 32) = 1;
  *(_DWORD *)(a1 + 36) = 1;
  return a1;
}
