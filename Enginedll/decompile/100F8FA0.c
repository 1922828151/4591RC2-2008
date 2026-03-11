/*
 * func-name: sub_100F8FA0
 * func-address: 0x100f8fa0
 * callers: 0x100f9920
 * callees: 0x101a2516
 */

float *__usercall sub_100F8FA0@<eax>(float *a1@<eax>, float *a2@<esi>)
{
  float *result; // eax
  float v3; // [esp+0h] [ebp-4h]
  float v4; // [esp+0h] [ebp-4h]
  float v5; // [esp+0h] [ebp-4h]

  v3 = a1[1] * a1[1] + *a1 * *a1 + a1[2] * a1[2];
  v4 = sqrt(v3);
  result = a2;
  v5 = 1.0 / v4;
  *a2 = *a2 * v5;
  a2[1] = a2[1] * v5;
  a2[2] = v5 * a2[2];
  return result;
}
