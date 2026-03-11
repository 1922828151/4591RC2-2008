/*
 * func-name: sub_10010A30
 * func-address: 0x10010a30
 * callers: 0x100103f0
 * callees: 0x10007fe0, 0x10010510, 0x10010ac0, 0x10019586
 */

int __stdcall sub_10010A30(int *a1, int a2)
{
  int result; // eax
  _DWORD v3[8]; // [esp+0h] [ebp-20h] BYREF

  v3[4] = v3;
  a1[1] = 0;
  a1[2] = 0;
  a1[3] = 0;
  result = sub_10010AC0();
  if ( (_BYTE)result )
  {
    v3[7] = 0;
    result = sub_10007FE0(a1[1], 9);
    a1[2] = result;
  }
  return result;
}
