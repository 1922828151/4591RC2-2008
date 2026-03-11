/*
 * func-name: sub_10025DD0
 * func-address: 0x10025dd0
 * callers: 0x10028490
 * callees: 0x10025c40, 0x10025d40
 */

float *__cdecl sub_10025DD0(float *a1, float *a2, float *a3, float *a4)
{
  float v4; // ecx
  float v5; // edx
  float v6; // eax
  float v7; // ecx
  float v8; // eax
  float v9; // ecx
  float v10; // edx
  float *result; // eax
  double v12; // st7
  double v13; // st5
  double v14; // rt2
  float v15; // [esp+Ch] [ebp-48h] BYREF
  float v16; // [esp+10h] [ebp-44h]
  float v17; // [esp+14h] [ebp-40h]
  float v18; // [esp+18h] [ebp-3Ch]
  float v19; // [esp+1Ch] [ebp-38h]
  float v20; // [esp+20h] [ebp-34h]
  float v21; // [esp+24h] [ebp-30h]
  float v22; // [esp+28h] [ebp-2Ch]
  float v23; // [esp+2Ch] [ebp-28h]
  float v24[9]; // [esp+30h] [ebp-24h] BYREF

  v4 = a2[1];
  v5 = a2[2];
  v15 = *a2;
  v6 = *a3;
  v16 = v4;
  v7 = a3[1];
  v18 = v6;
  v8 = *a4;
  v19 = v7;
  v9 = a4[1];
  v17 = v5;
  v10 = a3[2];
  v21 = v8;
  v22 = v9;
  v20 = v10;
  v23 = a4[2];
  sub_10025D40(v24, &v15);
  sub_10025C40(&v15, v24);
  result = a1;
  v12 = a4[3];
  v13 = -a2[3];
  v14 = -a3[3];
  *a1 = v21 * -v12 + v18 * v14 + v15 * v13;
  a1[1] = v22 * -v12 + v19 * v14 + v16 * v13;
  a1[2] = v14 * v20 + -v12 * v23 + v13 * v17;
  return result;
}
