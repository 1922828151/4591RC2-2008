/*
 * func-name: sub_102C09F0
 * func-address: 0x102c09f0
 * callers: 0x10030330, 0x1007b900, 0x100a7d90, 0x100a95f0, 0x100addd0, 0x100aec30, 0x100c8060, 0x100ccb70, 0x101293b0, 0x101751c0, 0x1017e700, 0x102c0d10, 0x102c1930, 0x102c19e0, 0x102c2440, 0x102c2990
 * callees: 0x100029cd
 */

float *__cdecl sub_102C09F0(float *a1, float *a2, float *a3)
{
  double v3; // st7
  double v4; // st6
  float v6; // [esp+4h] [ebp-Ch]
  float v7; // [esp+8h] [ebp-8h]
  float v8; // [esp+Ch] [ebp-4h]

  v6 = a2[2] * a3[1] - a2[1] * a3[2];
  v7 = a3[2] * *a2 - *a3 * a2[2];
  v3 = a2[1] * *a3;
  v4 = *a2 * a3[1];
  *a1 = v6;
  a1[1] = v7;
  v8 = v3 - v4;
  a1[2] = v8;
  sub_100029CD();
  return a1;
}
