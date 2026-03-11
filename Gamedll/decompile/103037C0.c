/*
 * func-name: sub_103037C0
 * func-address: 0x103037c0
 * callers: none
 * callees: 0x10019605, 0x102c9f53
 */

int __fastcall sub_103037C0(int a1)
{
  char v2; // [esp+1h] [ebp-1h] BYREF

  v2 = HIBYTE(a1);
  sub_10019605((int)&v2, (int)&v2);
  return atexit(sub_103058F0);
}
