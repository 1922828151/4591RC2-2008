/*
 * func-name: sub_100F93E0
 * func-address: 0x100f93e0
 * callers: 0x100f9920
 * callees: none
 */

float *__stdcall sub_100F93E0(float *a1, float *a2, float *a3, float *a4, float *a5)
{
  double v7; // st7
  double v8; // st5
  double v9; // st4
  double v10; // st6
  double v11; // st3
  double v12; // st3
  double v13; // rt2
  float *result; // eax
  double v15; // st3
  double v16; // rt1
  float v17; // [esp+0h] [ebp-28h]
  float v18; // [esp+4h] [ebp-24h]
  float v19; // [esp+8h] [ebp-20h]
  float v20; // [esp+Ch] [ebp-1Ch]
  float v21; // [esp+10h] [ebp-18h]
  float v22; // [esp+14h] [ebp-14h]
  float v23; // [esp+18h] [ebp-10h]
  float v24; // [esp+1Ch] [ebp-Ch]
  float v25; // [esp+1Ch] [ebp-Ch]
  float v26; // [esp+20h] [ebp-8h]
  float v27; // [esp+20h] [ebp-8h]
  float v28; // [esp+24h] [ebp-4h]
  float v29; // [esp+24h] [ebp-4h]
  float v30; // [esp+2Ch] [ebp+4h]
  float v31; // [esp+2Ch] [ebp+4h]
  float v32; // [esp+30h] [ebp+8h]
  float v33; // [esp+30h] [ebp+8h]
  float v34; // [esp+30h] [ebp+8h]
  float v35; // [esp+30h] [ebp+8h]
  float v36; // [esp+30h] [ebp+8h]
  float v37; // [esp+30h] [ebp+8h]
  float v38; // [esp+30h] [ebp+8h]
  float v39; // [esp+34h] [ebp+Ch]
  float v40; // [esp+34h] [ebp+Ch]
  float v41; // [esp+34h] [ebp+Ch]

  v21 = *a2 - *a1;
  v22 = a2[1] - a1[1];
  v23 = a2[2] - a1[2];
  v18 = *a3 - *a1;
  v19 = a3[1] - a1[1];
  v20 = a3[2] - a1[2];
  v30 = a2[6] - a1[6];
  v17 = a2[7] - a1[7];
  v39 = a3[6] - a1[6];
  v32 = a3[7] - a1[7];
  v7 = v32;
  v8 = v30;
  v9 = v39;
  v10 = v17;
  v11 = v32 * v30 - v39 * v17;
  v33 = v11;
  v34 = fabs(v33);
  if ( v34 > 0.00009999999747378752 )
    v12 = 1.0 / v11;
  else
    v12 = 1.0;
  v31 = v12;
  v35 = v21 * v7 - v18 * v10;
  *a4 = v35;
  v40 = v22 * v7 - v19 * v10;
  a4[1] = v40;
  v13 = v40;
  v41 = v7 * v23 - v10 * v20;
  a4[2] = v41;
  v24 = v35 * v31;
  *a4 = v24;
  v26 = v13 * v31;
  a4[1] = v26;
  v28 = v41 * v31;
  a4[2] = v28;
  result = a5;
  v36 = v18 * v8 - v21 * v9;
  v15 = v36;
  *a5 = v36;
  v37 = v19 * v8 - v22 * v9;
  a5[1] = v37;
  v16 = v37;
  v38 = v8 * v20 - v9 * v23;
  a5[2] = v38;
  v25 = v15 * v31;
  v27 = v16 * v31;
  *a5 = v25;
  a5[1] = v27;
  v29 = v38 * v31;
  a5[2] = v29;
  return result;
}
