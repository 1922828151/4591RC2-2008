/*
 * func-name: sub_10003CF0
 * func-address: 0x10003cf0
 * callers: 0x100040f0
 * callees: none
 */

float *__thiscall sub_10003CF0(float *this, float *a2, float *a3, float *a4)
{
  float *result; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st1
  double v13; // st1
  double v14; // st0
  double v15; // st7
  double v16; // st6
  double v17; // rt0
  double v18; // st5
  double v19; // st4
  double v20; // st4
  double v21; // st7
  double v22; // st6
  double v23; // st5
  double v24; // st4
  double v25; // rt0
  float v26; // [esp+0h] [ebp-30h]
  float v27; // [esp+4h] [ebp-2Ch]
  float v28; // [esp+8h] [ebp-28h]
  float v29; // [esp+8h] [ebp-28h]
  float v30; // [esp+Ch] [ebp-24h]
  float v31; // [esp+10h] [ebp-20h]
  float v32; // [esp+14h] [ebp-1Ch]
  float v33; // [esp+20h] [ebp-10h]
  float v34; // [esp+24h] [ebp-Ch]
  float v35; // [esp+34h] [ebp+4h]
  float v36; // [esp+38h] [ebp+8h]
  float v37; // [esp+3Ch] [ebp+Ch]

  result = this;
  v6 = *a3 - *a2;
  v7 = a3[1] - a2[1];
  v8 = a3[2] - a2[2];
  v9 = *a4 - *a2;
  v10 = a4[1] - a2[1];
  v11 = a4[2] - a2[2];
  v36 = v11 * v7 - v8 * v10;
  v35 = v8 * v9 - v11 * v6;
  v12 = v6 * v10 - v7 * v9;
  v37 = v12;
  v33 = v12;
  v28 = v12;
  v30 = v12 * v10 - v35 * v11;
  v31 = v36 * v11 - v28 * v9;
  v32 = v35 * v9 - v36 * v10;
  v13 = v7 * v7 + v8 * v8 + v6 * v6;
  v26 = v30 * v13;
  v27 = v31 * v13;
  v29 = v13 * v32;
  v34 = v35 * v8 - v37 * v7;
  v14 = v37 * v6;
  v15 = v7 * v36 - v6 * v35;
  v16 = v10 * v10 + v9 * v9 + v11 * v11;
  v17 = (v14 - v8 * v36) * v16;
  v18 = v16 * v15;
  v19 = v33 * v33 + v35 * v35 + v36 * v36;
  v20 = 1.0 / (v19 + v19);
  v21 = (v34 * v16 + v26) * v20;
  v22 = (v17 + v27) * v20;
  v23 = (v18 + v29) * v20;
  this[3] = sqrt(v23 * v23 + v22 * v22 + v21 * v21) + 0.000099999997;
  v24 = a2[2];
  v25 = v22 + a2[1];
  *this = v21 + *a2;
  this[1] = v25;
  this[2] = v23 + v24;
  return result;
}
