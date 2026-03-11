/*
 * func-name: sub_10005800
 * func-address: 0x10005800
 * callers: 0x10024030, 0x1002f9d0
 * callees: 0x100054a0
 */

char __cdecl sub_10005800(const void *a1, float a2, int a3)
{
  _BYTE v4[48]; // [esp+0h] [ebp-170h] BYREF
  double v5; // [esp+30h] [ebp-140h]
  double v6; // [esp+38h] [ebp-138h]
  _BYTE v7[28]; // [esp+40h] [ebp-130h] BYREF

  v6 = a2;
  v5 = 0.0;
  qmemcpy(v7, a1, sizeof(v7));
  return sub_100054A0((int)v4, a3);
}
