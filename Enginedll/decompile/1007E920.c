/*
 * func-name: sub_1007E920
 * func-address: 0x1007e920
 * callers: 0x1008c3e0, 0x10094d10
 * callees: 0x101a2516
 */

double __thiscall sub_1007E920(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this;
  return (float)sqrt(v2);
}
