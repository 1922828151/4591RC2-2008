/*
 * func-name: sub_102C0860
 * func-address: 0x102c0860
 * callers: 0x10030540
 * callees: none
 */

float *__thiscall sub_102C0860(float *this, float *a2, float *a3, float a4)
{
  double v4; // st7
  float *result; // eax
  float v6; // [esp+Ch] [ebp+Ch]

  v4 = a4;
  result = a2;
  v6 = 1.0 - a4;
  *a2 = *this * v6 + *a3 * v4;
  a2[1] = this[1] * v6 + a3[1] * v4;
  a2[2] = this[2] * v6 + a3[2] * v4;
  a2[3] = v4 * a3[3] + v6 * this[3];
  return result;
}
