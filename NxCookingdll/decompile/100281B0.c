/*
 * func-name: sub_100281B0
 * func-address: 0x100281b0
 * callers: 0x1002a6f0
 * callees: 0x10027c30
 */

int *__cdecl sub_100281B0(float *a1, float *a2)
{
  int *result; // eax
  float *v3; // edx
  double v4; // st7
  float *v5; // esi
  double v6; // st7
  float *v7; // esi
  double v8; // st7
  float *v9; // esi
  double v10; // st7
  float *v11; // esi
  double v12; // st7
  float *v13; // esi
  float *v14; // esi
  double v15; // st7
  float *v16; // esi
  double v17; // st7
  float *v18; // esi
  float *v19; // esi
  float *v20; // esi
  float *v21; // esi
  float *v22; // ecx
  float *v23; // ecx
  float v24; // [esp+14h] [ebp-Ch]
  float v25; // [esp+14h] [ebp-Ch]
  float v26; // [esp+14h] [ebp-Ch]
  float v27; // [esp+14h] [ebp-Ch]
  float v28; // [esp+14h] [ebp-Ch]
  float v29; // [esp+14h] [ebp-Ch]
  float v30; // [esp+14h] [ebp-Ch]
  float v31; // [esp+14h] [ebp-Ch]
  float v32; // [esp+18h] [ebp-8h]
  float v33; // [esp+18h] [ebp-8h]
  float v34; // [esp+18h] [ebp-8h]
  float v35; // [esp+18h] [ebp-8h]
  float v36; // [esp+18h] [ebp-8h]
  float v37; // [esp+18h] [ebp-8h]
  float v38; // [esp+18h] [ebp-8h]
  float v39; // [esp+18h] [ebp-8h]
  float v40; // [esp+1Ch] [ebp-4h]
  float v41; // [esp+1Ch] [ebp-4h]
  float v42; // [esp+1Ch] [ebp-4h]
  float v43; // [esp+1Ch] [ebp-4h]
  float v44; // [esp+1Ch] [ebp-4h]
  float v45; // [esp+1Ch] [ebp-4h]

  result = sub_10027C30();
  v3 = (float *)*result;
  v24 = a1[1];
  v4 = a1[2];
  *v3 = *a1;
  v32 = v4;
  v3[1] = v24;
  v3[2] = v32;
  v5 = (float *)*result;
  v25 = a1[1];
  v6 = a2[2];
  v5[3] = *a1;
  v33 = v6;
  v5[4] = v25;
  v5[5] = v33;
  v7 = (float *)*result;
  v26 = a2[1];
  v8 = a1[2];
  v7[6] = *a1;
  v34 = v8;
  v7[7] = v26;
  v7[8] = v34;
  v9 = (float *)*result;
  v27 = a2[1];
  v10 = a2[2];
  v9[9] = *a1;
  v35 = v10;
  v9[10] = v27;
  v9[11] = v35;
  v11 = (float *)*result;
  v28 = a1[1];
  v12 = a1[2];
  v11[12] = *a2;
  v36 = v12;
  v11 += 12;
  v11[1] = v28;
  v11[2] = v36;
  v29 = a1[1];
  v13 = (float *)*result;
  v37 = a2[2];
  v13[15] = *a2;
  v13[16] = v29;
  v13[17] = v37;
  v14 = (float *)*result;
  v30 = a2[1];
  v15 = a1[2];
  v14[18] = *a2;
  v38 = v15;
  v14[19] = v30;
  v14[20] = v38;
  v16 = (float *)*result;
  v31 = a2[1];
  v17 = a2[2];
  v16[21] = *a2;
  v39 = v17;
  v16[22] = v31;
  v16[23] = v39;
  v40 = *a1;
  v18 = (float *)result[6];
  *v18 = -1.0;
  v18[1] = 0.0;
  v18[2] = 0.0;
  v18[3] = v40;
  v41 = -*a2;
  v19 = (float *)(result[6] + 16);
  *v19 = 1.0;
  v19[1] = 0.0;
  v19[2] = 0.0;
  v19[3] = v41;
  v42 = a1[1];
  v20 = (float *)result[6];
  v20[8] = 0.0;
  v20[9] = -1.0;
  v20[10] = 0.0;
  v20[11] = v42;
  v43 = -a2[1];
  v21 = (float *)result[6];
  v21[12] = 0.0;
  v21[13] = 1.0;
  v21[14] = 0.0;
  v21[15] = v43;
  v22 = (float *)result[6];
  v44 = a1[2];
  v22[16] = 0.0;
  v22[17] = 0.0;
  v22 += 16;
  v22[2] = -1.0;
  v22[3] = v44;
  v45 = -a2[2];
  v23 = (float *)(result[6] + 80);
  *v23 = 0.0;
  v23[1] = 0.0;
  v23[2] = 1.0;
  v23[3] = v45;
  return result;
}
