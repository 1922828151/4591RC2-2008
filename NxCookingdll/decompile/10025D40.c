/*
 * func-name: sub_10025D40
 * func-address: 0x10025d40
 * callers: 0x10025dd0
 * callees: none
 */

float *__cdecl sub_10025D40(float *a1, float *a2)
{
  float v2; // edx
  double v3; // st7
  float *result; // eax
  float v5; // [esp+8h] [ebp-1Ch]
  float v6; // [esp+Ch] [ebp-18h]
  float v7; // [esp+10h] [ebp-14h]
  float v8; // [esp+14h] [ebp-10h]
  float v9; // [esp+18h] [ebp-Ch]
  float v10; // [esp+1Ch] [ebp-8h]
  float v11; // [esp+20h] [ebp-4h]

  v9 = a2[2];
  v10 = a2[5];
  v11 = a2[8];
  v6 = a2[1];
  v7 = a2[4];
  v8 = a2[7];
  v2 = a2[3];
  v3 = a2[6];
  result = a1;
  *a1 = *a2;
  v5 = v3;
  a1[1] = v2;
  a1[2] = v5;
  a1[3] = v6;
  a1[4] = v7;
  a1[6] = v9;
  a1[5] = v8;
  a1[7] = v10;
  a1[8] = v11;
  return result;
}
