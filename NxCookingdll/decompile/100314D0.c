/*
 * func-name: sub_100314D0
 * func-address: 0x100314d0
 * callers: 0x10033480, 0x100337a0
 * callees: none
 */

float *__cdecl sub_100314D0(float *a1)
{
  float *result; // eax

  result = a1;
  *a1 = 3.4028235e38;
  a1[1] = 3.4028235e38;
  a1[3] = -3.4028235e38;
  a1[2] = 3.4028235e38;
  a1[4] = -3.4028235e38;
  a1[5] = -3.4028235e38;
  return result;
}
