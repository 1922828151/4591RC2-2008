/*
 * func-name: sub_1017B990
 * func-address: 0x1017b990
 * callers: 0x1003d0f0, 0x1004c6f0, 0x10077c20, 0x100792c0, 0x100797d0, 0x1007aa60, 0x1008fcc0, 0x100ddae0, 0x100e97f0, 0x1011b870, 0x1011d270, 0x10135320, 0x10178da0, 0x10178e50, 0x101798b0, 0x10179e00, 0x1017bcb0
 * callees: 0x1004c240
 */

float *__cdecl sub_1017B990(float *a1, float *a2, float *a3)
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
  sub_1004C240(a1);
  return a1;
}
