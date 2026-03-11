/*
 * func-name: sub_100E0E70
 * func-address: 0x100e0e70
 * callers: 0x100e1440
 * callees: none
 */

float *__cdecl sub_100E0E70(float *a1, int a2, int a3)
{
  int v3; // ecx
  float *v4; // eax
  int v5; // edx
  double v6; // st7
  double v7; // st7
  int v8; // eax
  float v9; // ecx
  float *result; // eax
  float v11; // [esp+4h] [ebp-60h]
  float v12; // [esp+8h] [ebp-5Ch]
  float v13; // [esp+Ch] [ebp-58h]
  float v14; // [esp+10h] [ebp-54h]
  float v15; // [esp+14h] [ebp-50h]
  float v16; // [esp+18h] [ebp-4Ch]
  float v17; // [esp+1Ch] [ebp-48h]
  float v18; // [esp+20h] [ebp-44h]
  float v19; // [esp+24h] [ebp-40h]
  float v20; // [esp+28h] [ebp-3Ch]
  float v21; // [esp+2Ch] [ebp-38h]
  float v22; // [esp+30h] [ebp-34h]
  float v23; // [esp+34h] [ebp-30h]
  float v24; // [esp+34h] [ebp-30h]
  float v25; // [esp+34h] [ebp-30h]
  float v26; // [esp+38h] [ebp-2Ch]
  float v27; // [esp+38h] [ebp-2Ch]
  float v28; // [esp+38h] [ebp-2Ch]
  float v29; // [esp+3Ch] [ebp-28h]
  float v30; // [esp+3Ch] [ebp-28h]
  float v31; // [esp+40h] [ebp-24h]
  float v32; // [esp+44h] [ebp-20h]
  float v33; // [esp+48h] [ebp-1Ch]
  float v34; // [esp+4Ch] [ebp-18h]
  float v35; // [esp+50h] [ebp-14h]
  float v36; // [esp+54h] [ebp-10h]
  float v37; // [esp+58h] [ebp-Ch]
  float v38; // [esp+5Ch] [ebp-8h]
  float v39; // [esp+60h] [ebp-4h]

  v11 = 0.0;
  v12 = 0.0;
  v13 = 0.0;
  v14 = 0.0;
  v15 = 0.0;
  v16 = 0.0;
  v3 = a2 + 68;
  v17 = 0.0;
  v4 = (float *)(16 * *(_DWORD *)(a2 + 56) + a3 + 24);
  v18 = 0.0;
  v5 = 6;
  v19 = 0.0;
  v20 = 0.0;
  v21 = 0.0;
  v22 = 0.0;
  do
  {
    v6 = *(v4 - 2);
    v4 += 4;
    v7 = v6 * *(float *)(v3 - 8);
    v3 += 16;
    --v5;
    v23 = v7;
    v26 = *(v4 - 5) * *(float *)(v3 - 20);
    v29 = *(v4 - 4) * *(float *)(v3 - 16);
    v31 = *(v4 - 3) * *(float *)(v3 - 12);
    v11 = v23 + v11;
    v12 = v26 + v12;
    v13 = v29 + v13;
    v14 = v31 + v14;
    v32 = v4[18] * *(float *)(v3 - 24);
    v33 = v4[19] * *(float *)(v3 - 20);
    v34 = v4[20] * *(float *)(v3 - 16);
    v35 = v4[21] * *(float *)(v3 - 12);
    v15 = v32 + v15;
    v16 = v33 + v16;
    v17 = v34 + v17;
    v18 = v35 + v18;
    v36 = v4[42] * *(float *)(v3 - 24);
    v37 = v4[43] * *(float *)(v3 - 20);
    v38 = v4[44] * *(float *)(v3 - 16);
    v39 = v4[45] * *(float *)(v3 - 12);
    v19 = v36 + v19;
    v20 = v37 + v20;
    v21 = v38 + v21;
    v22 = v39 + v22;
  }
  while ( v5 );
  v8 = 16 * *(_DWORD *)(a2 + 56);
  v24 = *(float *)(v8 + a3);
  v9 = *(float *)(a3 + v8 + 8);
  v27 = *(float *)(v8 + a3 + 4);
  result = a1;
  v25 = v12 + v11 + v13 + v14 + v24;
  v28 = v16 + v15 + v17 + v18 + v27;
  v30 = v20 + v19 + v21 + v22 + v9;
  *a1 = v25;
  a1[1] = v28;
  a1[2] = v30;
  return result;
}
