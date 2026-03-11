/*
 * func-name: sub_1003DBA0
 * func-address: 0x1003dba0
 * callers: 0x100248f0, 0x1002ba30, 0x10034dc0, 0x10035540, 0x1003d9a0, 0x10049f60, 0x1004a040, 0x1004db40
 * callees: 0x100252e0, 0x10025330, 0x1002c0c0, 0x1004f112
 */

int __stdcall sub_1003DBA0(int *a1, int a2)
{
  int v2; // eax
  int result; // eax
  _DWORD v4[8]; // [esp+0h] [ebp-20h] BYREF

  v4[4] = v4;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  v2 = sub_100252E0(9u);
  a1[1] = v2;
  a1[2] = v2;
  a1[3] = v2 + 72;
  v4[7] = 0;
  result = sub_10025330(a1[1], 9);
  a1[2] = result;
  return result;
}
