/*
 * func-name: sub_100165B0
 * func-address: 0x100165b0
 * callers: 0x10080c60
 * callees: none
 */

float *__cdecl sub_100165B0(float *a1, float a2, float *a3)
{
  float *result; // eax

  result = a1;
  *a1 = *a3 * a2;
  a1[1] = a3[1] * a2;
  a1[2] = a2 * a3[2];
  return result;
}
