/*
 * func-name: ?ToVector@NxHelper@@SA?AVVector@@ABVNxQuat@@@Z
 * func-address: 0x10100dc0
 * callers: none
 * callees: 0x10100cc0
 */

float *__cdecl NxHelper::ToVector(float *a1, float *a2)
{
  float *v2; // eax
  double v3; // st7
  float *result; // eax
  float v5[3]; // [esp+0h] [ebp-Ch] BYREF

  v2 = NxHelper::ToNxVec3(v5, a2);
  *a1 = *v2;
  a1[1] = v2[1];
  v3 = v2[2];
  result = a1;
  a1[2] = v3;
  return result;
}
