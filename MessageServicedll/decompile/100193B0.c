/*
 * func-name: sub_100193B0
 * func-address: 0x100193b0
 * callers: 0x10007da0, 0x10012ad0, 0x10018320, 0x100185e0, 0x1001d930, 0x10020310, 0x10021cd0, 0x100278e0, 0x10029080
 * callees: 0x10007250, 0x1000a460, 0x1000a4b0, 0x10029d92
 */

int __stdcall sub_100193B0(int *a1, int a2)
{
  void *v2; // eax
  int result; // eax
  _DWORD v4[8]; // [esp+0h] [ebp-20h] BYREF

  v4[4] = v4;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v2 = sub_1000A460(9u);
  a1[1] = (int)v2;
  a1[2] = (int)v2;
  a1[3] = (int)v2 + 72;
  v4[7] = 0;
  result = sub_1000A4B0(a1[1], 9);
  a1[2] = result;
  return result;
}
