/*
 * func-name: sub_100355C0
 * func-address: 0x100355c0
 * callers: 0x10001d02
 * callees: none
 */

double sub_100355C0()
{
  float v1; // [esp+4h] [ebp-Ch]
  float v2; // [esp+4h] [ebp-Ch]
  double v4; // [esp+8h] [ebp-8h]

  v1 = (double)rand() * 0.000030517578125;
  v4 = v1;
  v2 = (double)rand() * 0.000030517578125;
  return (float)(v4 - v2);
}
