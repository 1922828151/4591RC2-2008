/*
 * func-name: sub_10179050
 * func-address: 0x10179050
 * callers: 0x10033d30, 0x10035de0, 0x1005b6b0, 0x10067d40, 0x1007d280, 0x1008ce00, 0x1008fdf0, 0x100e97f0, 0x101430d0
 * callees: none
 */

float *__thiscall sub_10179050(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a3 = this[4] * a2[1] + *a2 * *this + this[8] * a2[2] + this[12];
  a3[1] = this[1] * *a2 + this[5] * a2[1] + this[9] * a2[2] + this[13];
  a3[2] = this[2] * *a2 + this[6] * a2[1] + this[10] * a2[2] + this[14];
  return result;
}
