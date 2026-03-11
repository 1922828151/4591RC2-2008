/*
 * func-name: sub_1017BCB0
 * func-address: 0x1017bcb0
 * callers: none
 * callees: 0x1017b990
 */

float *__cdecl sub_1017BCB0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st7
  double v6; // st7
  float v8; // [esp+4h] [ebp-24h]
  float v9; // [esp+4h] [ebp-24h]
  float v10; // [esp+8h] [ebp-20h]
  float v11; // [esp+8h] [ebp-20h]
  float v12; // [esp+Ch] [ebp-1Ch]
  float v13; // [esp+Ch] [ebp-1Ch]
  float v14[3]; // [esp+10h] [ebp-18h] BYREF
  float v15[3]; // [esp+1Ch] [ebp-Ch] BYREF

  v8 = *a3 - *a2;
  v10 = a3[1] - a2[1];
  v4 = a3[2] - a2[2];
  v15[0] = v8;
  v15[1] = v10;
  v12 = v4;
  v15[2] = v12;
  v9 = *a4 - *a2;
  v5 = a4[1];
  v14[0] = v9;
  v11 = v5 - a2[1];
  v6 = a4[2] - a2[2];
  v14[1] = v11;
  v13 = v6;
  v14[2] = v13;
  sub_1017B990(a1, v15, v14);
  return a1;
}
