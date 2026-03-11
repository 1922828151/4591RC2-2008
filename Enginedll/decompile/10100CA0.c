/*
 * func-name: ?ToVector@NxHelper@@SA?AVVector@@ABVNxVec3@@@Z
 * func-address: 0x10100ca0
 * callers: 0x1013fac0, 0x101478f0, 0x101482d0, 0x101484b0
 * callees: none
 */

float *__cdecl NxHelper::ToVector(float *a1, float *a2)
{
  float *result; // eax

  result = a1;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  return result;
}
