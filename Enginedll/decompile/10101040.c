/*
 * func-name: ?ToMatrix@NxHelper@@SA?AVMatrix@@ABVNxMat33@@@Z
 * func-address: 0x10101040
 * callers: none
 * callees: 0x101786e0, 0x101a251c
 */

float *__cdecl NxHelper::ToMatrix(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st7
  double v4; // st7
  float v6; // [esp+Ch] [ebp-14h]
  float v7; // [esp+Ch] [ebp-14h]
  float v8; // [esp+18h] [ebp-8h]
  float v9; // [esp+1Ch] [ebp-4h]
  float v10; // [esp+1Ch] [ebp-4h]
  float v11; // [esp+1Ch] [ebp-4h]

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
  v8 = a2[3];
  v2 = a2[6];
  *a1 = *a2;
  v9 = v2;
  a1[1] = v8;
  a1[2] = v9;
  v10 = a2[7];
  v3 = a2[4];
  a1[4] = a2[1];
  v6 = v3;
  a1[5] = v6;
  a1[6] = v10;
  v11 = a2[8];
  v4 = a2[5];
  a1[8] = a2[2];
  v7 = v4;
  a1[9] = v7;
  a1[10] = v11;
  return a1;
}
