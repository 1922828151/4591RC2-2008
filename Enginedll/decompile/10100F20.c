/*
 * func-name: ?ToNxQuat@NxHelper@@SA?AVNxQuat@@ABVVector@@@Z
 * func-address: 0x10100f20
 * callers: none
 * callees: 0x101a2516, 0x101a281a, 0x101a2820
 */

float *__cdecl NxHelper::ToNxQuat(float *a1, float *a2)
{
  float *result; // eax
  float v5; // [esp+8h] [ebp-10h]
  float v6; // [esp+Ch] [ebp-Ch]
  float v7; // [esp+10h] [ebp-8h]
  float v8; // [esp+14h] [ebp-4h]
  float v9; // [esp+1Ch] [ebp+4h]
  float v10; // [esp+1Ch] [ebp+4h]
  float v11; // [esp+20h] [ebp+8h]
  float v12; // [esp+20h] [ebp+8h]
  float v13; // [esp+20h] [ebp+8h]
  float v14; // [esp+20h] [ebp+8h]
  float v15; // [esp+20h] [ebp+8h]
  float v16; // [esp+20h] [ebp+8h]
  float v17; // [esp+20h] [ebp+8h]
  float v18; // [esp+20h] [ebp+8h]
  float v19; // [esp+20h] [ebp+8h]
  float v20; // [esp+20h] [ebp+8h]

  v6 = *a2;
  v7 = a2[1];
  v8 = a2[2];
  *a1 = v6;
  a1[1] = v7;
  a1[2] = v8;
  v11 = v8 * v8 + v7 * v7 + v6 * v6;
  v12 = sqrt(v11);
  v5 = 1.0 / v12;
  v13 = a2[1] * a2[1] + *a2 * *a2 + a2[2] * a2[2];
  v14 = sqrt(v13);
  v15 = v14 * 0.5;
  v16 = v15 * 0.01745329238474369;
  v9 = cos(v16);
  a1[3] = v9;
  v17 = sin(v16);
  v10 = v17;
  v18 = v5 * v6;
  *a1 = v18 * v10;
  v19 = v5 * v7;
  a1[1] = v19 * v10;
  result = a1;
  v20 = v5 * v8;
  a1[2] = v10 * v20;
  return result;
}
