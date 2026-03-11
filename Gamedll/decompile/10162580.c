/*
 * func-name: sub_10162580
 * func-address: 0x10162580
 * callers: 0x10001514
 * callees: 0x10004016
 */

int __stdcall sub_10162580(int a1)
{
  _DWORD v2[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v3[12]; // [esp+Ch] [ebp-Ch] BYREF

  v2[0] = *(_DWORD *)(a1 + 12);
  v2[1] = a1;
  sub_10004016((int)v3, (int)v2);
  return a1;
}
