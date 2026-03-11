/*
 * func-name: sub_10178FF0
 * func-address: 0x10178ff0
 * callers: 0x100946e0
 * callees: none
 */

float *__thiscall sub_10178FF0(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a3 = this[4] * a2[1] + *a2 * *this + this[8] * a2[2];
  a3[1] = this[1] * *a2 + this[5] * a2[1] + this[9] * a2[2];
  a3[2] = this[2] * *a2 + this[6] * a2[1] + this[10] * a2[2];
  return result;
}
