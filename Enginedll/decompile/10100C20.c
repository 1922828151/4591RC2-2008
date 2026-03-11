/*
 * func-name: ?ToNxMat34@NxHelper@@SA?AVNxMat34@@ABVMatrix@@@Z
 * func-address: 0x10100c20
 * callers: 0x1004df10, 0x1004e070, 0x10140e30, 0x10141cd0, 0x10142040, 0x101438a0
 * callees: none
 */

float *__cdecl NxHelper::ToNxMat34(float *a1, float *a2)
{
  float *result; // eax

  result = a1;
  a1[11] = 0.0;
  a1[10] = 0.0;
  a1[9] = 0.0;
  *a1 = 1.0;
  a1[4] = 1.0;
  a1[8] = 1.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[3] = 0.0;
  a1[5] = 0.0;
  a1[6] = 0.0;
  a1[7] = 0.0;
  *a1 = *a2;
  a1[1] = a2[4];
  a1[2] = a2[8];
  a1[3] = a2[1];
  a1[4] = a2[5];
  a1[5] = a2[9];
  a1[6] = a2[2];
  a1[7] = a2[6];
  a1[8] = a2[10];
  a1[9] = a2[12];
  a1[10] = a2[13];
  a1[11] = a2[14];
  return result;
}
