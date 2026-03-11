/*
 * func-name: sub_10134A40
 * func-address: 0x10134a40
 * callers: 0x10134090
 * callees: none
 */

float *__thiscall sub_10134A40(float *this, float *a2, float *a3)
{
  float *result; // eax
  double v4; // st7

  result = this;
  this[8] = 0.0;
  this[9] = 0.0;
  this[10] = 0.0;
  this[11] = 0.0;
  this[12] = 0.0;
  this[13] = 0.0;
  this[8] = *a2;
  this[9] = a2[1];
  this[10] = a2[2];
  this[11] = *a3;
  this[12] = a3[1];
  this[13] = a3[2];
  *(double *)this = *a2;
  *((double *)this + 1) = a2[1];
  v4 = a2[2];
  *((double *)this + 2) = v4;
  *((double *)this + 3) = -(v4 * a3[2] + a3[1] * *((double *)this + 1) + *a3 * *(double *)this);
  return result;
}
