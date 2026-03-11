/*
 * func-name: sub_1000E080
 * func-address: 0x1000e080
 * callers: 0x10006b60, 0x1000dbe0, 0x100137c0, 0x10013be0
 * callees: 0x10007fe0, 0x10010510, 0x10014460, 0x10019586
 */

int __stdcall sub_1000E080(int *a1, int a2)
{
  int v2; // eax
  int result; // eax
  _DWORD v4[8]; // [esp+0h] [ebp-20h] BYREF

  v4[4] = v4;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v2 = sub_10014460(9);
  a1[1] = v2;
  a1[2] = v2;
  a1[3] = v2 + 72;
  v4[7] = 0;
  result = sub_10007FE0(a1[1], 9);
  a1[2] = result;
  return result;
}
