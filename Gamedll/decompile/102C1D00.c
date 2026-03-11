/*
 * func-name: sub_102C1D00
 * func-address: 0x102c1d00
 * callers: none
 * callees: none
 */

int __cdecl sub_102C1D00(float *a1, float *a2, float *a3)
{
  int result; // eax

  *a3 = a1[1] * a2[4] + *a1 * *a2 + a1[2] * a2[8];
  a3[1] = a1[1] * a2[5] + a2[1] * *a1 + a1[2] * a2[9];
  a3[2] = a1[1] * a2[6] + a2[2] * *a1 + a1[2] * a2[10];
  a3[4] = a1[5] * a2[4] + a1[4] * *a2 + a1[6] * a2[8];
  a3[5] = a1[5] * a2[5] + a2[1] * a1[4] + a1[6] * a2[9];
  a3[6] = a1[5] * a2[6] + a2[2] * a1[4] + a1[6] * a2[10];
  a3[8] = a1[9] * a2[4] + a1[8] * *a2 + a1[10] * a2[8];
  a3[9] = a1[9] * a2[5] + a2[1] * a1[8] + a1[10] * a2[9];
  result = *((int *)a1 + 9);
  a3[10] = *(float *)&result * a2[6] + a2[2] * a1[8] + a1[10] * a2[10];
  return result;
}
