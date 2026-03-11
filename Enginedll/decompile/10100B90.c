/*
 * func-name: ?ToNxMat33@NxHelper@@SA?AVNxMat33@@ABVMatrix@@@Z
 * func-address: 0x10100b90
 * callers: 0x1004ddb0
 * callees: none
 */

float *__cdecl NxHelper::ToNxMat33(float *a1, float *a2)
{
  float *result; // eax
  float v3; // [esp+0h] [ebp-8h]
  float v4; // [esp+4h] [ebp-4h]
  float v5; // [esp+4h] [ebp-4h]
  float v6; // [esp+4h] [ebp-4h]
  float v7; // [esp+Ch] [ebp+4h]
  float v8; // [esp+Ch] [ebp+4h]

  result = a1;
  v3 = a2[1];
  v4 = a2[2];
  *a1 = *a2;
  a1[3] = v3;
  a1[6] = v4;
  v7 = a2[5];
  v5 = a2[6];
  result[1] = a2[4];
  result[4] = v7;
  result[7] = v5;
  v8 = a2[9];
  v6 = a2[10];
  result[2] = a2[8];
  result[5] = v8;
  result[8] = v6;
  return result;
}
