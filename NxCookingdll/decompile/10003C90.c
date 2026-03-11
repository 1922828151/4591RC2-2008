/*
 * func-name: sub_10003C90
 * func-address: 0x10003c90
 * callers: 0x100040f0
 * callees: none
 */

float *__thiscall sub_10003C90(float *this, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7
  double v5; // st6
  double v6; // st5
  double v7; // st4
  double v8; // rt1

  result = this;
  v4 = (*a3 - *a2) * 0.5;
  v5 = (a3[1] - a2[1]) * 0.5;
  v6 = (a3[2] - a2[2]) * 0.5;
  this[3] = sqrt(v6 * v6 + v4 * v4 + v5 * v5) + 0.000099999997;
  v7 = a2[2];
  v8 = v5 + a2[1];
  *this = v4 + *a2;
  this[1] = v8;
  this[2] = v6 + v7;
  return result;
}
