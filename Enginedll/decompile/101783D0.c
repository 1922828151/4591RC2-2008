/*
 * func-name: sub_101783D0
 * func-address: 0x101783d0
 * callers: none
 * callees: none
 */

double __thiscall sub_101783D0(float *this)
{
  double v1; // st7
  double v2; // st7
  float v4; // [esp+0h] [ebp-B8h]
  float v5; // [esp+0h] [ebp-B8h]
  float v6; // [esp+0h] [ebp-B8h]

  v4 = this[10] * this[5] - this[9] * this[6];
  v1 = v4 * *this;
  v5 = this[8] * this[6] - this[10] * this[4];
  v2 = v1 + v5 * this[1];
  v6 = this[9] * this[4] - this[8] * this[5];
  return (float)(v2 + v6 * this[2]);
}
