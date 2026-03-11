/*
 * func-name: ?ToNxVec3@NxHelper@@SA?AVNxVec3@@ABVVector@@@Z
 * func-address: 0x10100b70
 * callers: 0x1004ddb0, 0x10140d40, 0x10141230, 0x10141b20, 0x10142040, 0x10142560, 0x10142950, 0x10142c80, 0x10143c20, 0x10144670
 * callees: none
 */

float *__cdecl NxHelper::ToNxVec3(float *a1, float *a2)
{
  float *result; // eax

  result = a1;
  *a1 = *a2;
  a1[1] = a2[1];
  a1[2] = a2[2];
  return result;
}
