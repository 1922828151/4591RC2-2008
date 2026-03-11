/*
 * func-name: sub_1003E7B0
 * func-address: 0x1003e7b0
 * callers: 0x10141230
 * callees: 0x101a2516
 */

double __thiscall sub_1003E7B0(float *this)
{
  float v2; // [esp+0h] [ebp-4h]

  v2 = this[1] * this[1] + *this * *this + this[2] * this[2];
  return (float)sqrt(v2);
}
