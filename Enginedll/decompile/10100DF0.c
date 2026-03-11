/*
 * func-name: ?ToNxQuat@NxHelper@@SA?AVNxQuat@@ABVNxVec3@@@Z
 * func-address: 0x10100df0
 * callers: none
 * callees: 0x101a2516, 0x101a281a, 0x101a2820
 */

float *__cdecl NxHelper::ToNxQuat(float *a1, float *a2)
{
  float *result; // eax
  float v5; // [esp+8h] [ebp-14h]
  float v6; // [esp+Ch] [ebp-10h]
  double v7; // [esp+10h] [ebp-Ch]
  float v8; // [esp+18h] [ebp-4h]
  float v9; // [esp+20h] [ebp+4h]
  float v10; // [esp+24h] [ebp+8h]
  float v11; // [esp+24h] [ebp+8h]
  float v12; // [esp+24h] [ebp+8h]
  float v13; // [esp+24h] [ebp+8h]
  float v14; // [esp+24h] [ebp+8h]
  float v15; // [esp+24h] [ebp+8h]
  float v16; // [esp+24h] [ebp+8h]
  float v17; // [esp+24h] [ebp+8h]
  float v18; // [esp+24h] [ebp+8h]
  float v19; // [esp+24h] [ebp+8h]

  v5 = *a2;
  *a1 = v5;
  v9 = a2[1];
  a1[1] = v9;
  v6 = a2[2];
  a1[2] = v6;
  v7 = v5 * v5;
  v10 = v6 * v6 + v9 * v9 + v7;
  v11 = sqrt(v10);
  v8 = 1.0 / v11;
  v12 = a2[2] * a2[2] + a2[1] * a2[1] + v7;
  v13 = sqrt(v12);
  v14 = v13 * 0.5;
  v15 = v14 * 0.01745329238474369;
  *(float *)&v7 = cos(v15);
  a1[3] = *(float *)&v7;
  v16 = sin(v15);
  *(float *)&v7 = v16;
  v17 = v5 * v8;
  *a1 = v17 * *(float *)&v7;
  v18 = v9 * v8;
  a1[1] = v18 * *(float *)&v7;
  result = a1;
  v19 = v8 * v6;
  a1[2] = *(float *)&v7 * v19;
  return result;
}
