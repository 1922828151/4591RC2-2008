/*
 * func-name: sub_102C1B80
 * func-address: 0x102c1b80
 * callers: 0x100aa600, 0x100b0160, 0x100b0c70
 * callees: none
 */

float *__thiscall sub_102C1B80(float *this, float *a2, float *a3)
{
  float *result; // eax

  result = a2;
  *a3 = this[4] * a2[1] + *a2 * *this + this[8] * a2[2];
  a3[1] = this[1] * *a2 + this[5] * a2[1] + this[9] * a2[2];
  a3[2] = this[2] * *a2 + this[6] * a2[1] + this[10] * a2[2];
  return result;
}
