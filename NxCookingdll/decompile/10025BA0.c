/*
 * func-name: sub_10025BA0
 * func-address: 0x10025ba0
 * callers: 0x100291a0
 * callees: none
 */

float *__cdecl sub_10025BA0(float *a1, float *a2, float *a3)
{
  float *result; // eax

  result = a1;
  *a1 = a3[2] * a2[1] - a2[2] * a3[1];
  a1[1] = a2[2] * *a3 - a3[2] * *a2;
  a1[2] = a3[1] * *a2 - *a3 * a2[1];
  return result;
}
