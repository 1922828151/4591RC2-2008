/*
 * func-name: sub_10025F50
 * func-address: 0x10025f50
 * callers: 0x100278e0
 * callees: 0x10025be0
 */

float *__cdecl sub_10025F50(float *a1, float *a2)
{
  double v2; // st7
  double v3; // st5
  double v4; // st4
  double v5; // st2
  double v6; // st6
  double v7; // st0
  double v8; // rt1
  double v9; // st1
  double v10; // st2
  float *v11; // eax
  float v13[3]; // [esp+0h] [ebp-18h] BYREF
  float v14[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = a2[2] * 0.0;
  v3 = a2[1] - v2;
  v13[0] = v3;
  v4 = *a2;
  v13[1] = v2 - v4;
  v5 = *a2 * 0.0;
  v6 = 0.0 * a2[1];
  v13[2] = v5 - v6;
  v7 = v6 - a2[2];
  v14[0] = v7;
  v8 = v5 - v6;
  v9 = v2 - v5;
  v14[1] = v9;
  v10 = v4 - v6;
  v14[2] = v10;
  v11 = v13;
  if ( sqrt(v7 * v7 + v9 * v9 + v10 * v10) >= sqrt(v3 * v3 + (v2 - v4) * (v2 - v4) + v8 * v8) )
    v11 = v14;
  sub_10025BE0(a1, v11);
  return a1;
}
