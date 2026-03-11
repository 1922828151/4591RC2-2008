/*
 * func-name: sub_103040A0
 * func-address: 0x103040a0
 * callers: none
 * callees: 0x10009921, 0x102c9f53
 */

int sub_103040A0()
{
  char v1; // [esp+7h] [ebp-Dh] BYREF
  int v2; // [esp+10h] [ebp-4h]

  v2 = 0;
  sub_10009921((int)&v1, (int)&v1);
  dword_103B7894 = 0;
  return atexit(sub_10305FB0);
}
