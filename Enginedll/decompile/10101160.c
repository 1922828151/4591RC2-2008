/*
 * func-name: ?ToMatrix@NxHelper@@SA?AVMatrix@@ABVNxMat34@@@Z
 * func-address: 0x10101160
 * callers: none
 * callees: 0x101786e0, 0x101a251c
 */

float *__cdecl NxHelper::ToMatrix(float *a1, float *a2)
{
  float *result; // eax

  *a1 = 0.0;
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[4] = 0.0;
  a1[5] = 0.0;
  a1[6] = 0.0;
  a1[8] = 0.0;
  a1[9] = 0.0;
  a1[10] = 0.0;
  a1[12] = 0.0;
  a1[13] = 0.0;
  a1[14] = 0.0;
  memset(a1, 0, 0x40u);
  sub_101786E0(1.0);
  a1[15] = 1.0;
  *a1 = *a2;
  a1[4] = a2[1];
  a1[8] = a2[2];
  a1[1] = a2[3];
  a1[5] = a2[4];
  a1[9] = a2[5];
  a1[2] = a2[6];
  a1[6] = a2[7];
  a1[10] = a2[8];
  a1[12] = a2[9];
  a1[13] = a2[10];
  a1[14] = a2[11];
  result = a1;
  a1[11] = 0.0;
  a1[7] = 0.0;
  a1[3] = 0.0;
  a1[15] = 1.0;
  return result;
}
