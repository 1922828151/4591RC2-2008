/*
 * func-name: sub_10003EA0
 * func-address: 0x10003ea0
 * callers: 0x100040f0
 * callees: none
 */

float *__thiscall sub_10003EA0(float *this, float *a2, float *a3, float *a4, float *a5)
{
  float *result; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st4
  double v11; // st3
  double v12; // st2
  double v13; // st0
  double v14; // st1
  double v15; // rt1
  double v16; // st2
  double v17; // st2
  double v18; // st2
  double v19; // st1
  double v20; // st2
  double v21; // st1
  double v22; // st6
  double v23; // st6
  double v24; // st7
  double v25; // st5
  double v26; // st6
  double v27; // st4
  double v28; // rtt
  float v29; // [esp+0h] [ebp-40h]
  float v30; // [esp+8h] [ebp-38h]
  float v31; // [esp+Ch] [ebp-34h]
  float v32; // [esp+10h] [ebp-30h]
  float v33; // [esp+10h] [ebp-30h]
  float v34; // [esp+14h] [ebp-2Ch]
  float v35; // [esp+14h] [ebp-2Ch]
  float v36; // [esp+1Ch] [ebp-24h]
  float v37; // [esp+1Ch] [ebp-24h]
  float v38; // [esp+1Ch] [ebp-24h]
  float v39; // [esp+1Ch] [ebp-24h]
  float v40; // [esp+20h] [ebp-20h]
  float v41; // [esp+20h] [ebp-20h]
  float v42; // [esp+20h] [ebp-20h]
  float v43; // [esp+24h] [ebp-1Ch]
  float v44; // [esp+24h] [ebp-1Ch]
  float v45; // [esp+24h] [ebp-1Ch]
  float v46; // [esp+24h] [ebp-1Ch]
  float v47; // [esp+28h] [ebp-18h]
  float v48; // [esp+2Ch] [ebp-14h]
  float v49; // [esp+2Ch] [ebp-14h]
  float v50; // [esp+30h] [ebp-10h]
  float v51; // [esp+30h] [ebp-10h]
  float v52; // [esp+34h] [ebp-Ch]
  float v53; // [esp+38h] [ebp-8h]
  float v54; // [esp+3Ch] [ebp-4h]
  float v55; // [esp+44h] [ebp+4h]
  float v56; // [esp+48h] [ebp+8h]
  float v57; // [esp+4Ch] [ebp+Ch]
  float v58; // [esp+50h] [ebp+10h]

  result = this;
  v7 = *a3 - *a2;
  v30 = a3[1] - a2[1];
  v31 = a3[2] - a2[2];
  v8 = *a4 - *a2;
  v32 = v8;
  v9 = a4[1] - a2[1];
  v34 = v9;
  v10 = a4[2] - a2[2];
  v11 = *a5 - *a2;
  v12 = a5[1] - a2[1];
  v13 = a5[2] - a2[2];
  v14 = v9 * v13;
  v58 = v14;
  v29 = v12 * v10;
  v36 = v14 - v12 * v10;
  v40 = v10 * v11 - v13 * v8;
  v15 = v12;
  v43 = v8 * v12 - v34 * v11;
  v16 = v30 * v30 + v31 * v31 + v7 * v7;
  v52 = v36 * v16;
  v53 = v40 * v16;
  v54 = v16 * v43;
  v37 = v31 * v15 - v13 * v30;
  v41 = v13 * v7 - v31 * v11;
  v17 = v30 * v11;
  v57 = v17;
  v44 = v17 - v15 * v7;
  v18 = v10 * v10 + v34 * v34 + v32 * v32;
  v47 = v37 * v18;
  v48 = v41 * v18;
  v50 = v18 * v44;
  v56 = v31 * v34;
  v38 = v10 * v30 - v56;
  v19 = v31 * v32;
  v55 = v19;
  v42 = v19 - v10 * v7;
  v20 = v32 * v30;
  v45 = v34 * v7 - v20;
  v21 = v13 * v13 + v15 * v15 + v11 * v11;
  v33 = v38 * v21;
  v35 = v42 * v21;
  v39 = v33 + v47;
  v46 = v21 * v45 + v50;
  v49 = v35 + v48 + v53;
  v51 = v46 + v54;
  v22 = v10 * v57 + v15 * v55 + v58 * v7 - v11 * v56 - v13 * v20 - v7 * v29;
  v23 = 1.0 / (v22 + v22);
  v24 = (v39 + v52) * v23;
  v25 = v49 * v23;
  v26 = v23 * v51;
  this[3] = sqrt(v26 * v26 + v25 * v25 + v24 * v24) + 0.000099999997;
  v27 = a2[2];
  v28 = v25 + a2[1];
  *this = v24 + *a2;
  this[1] = v28;
  this[2] = v26 + v27;
  return result;
}
