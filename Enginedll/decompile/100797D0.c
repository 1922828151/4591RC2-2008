/*
 * func-name: sub_100797D0
 * func-address: 0x100797d0
 * callers: 0x1004c6f0
 * callees: 0x1004c240, 0x1017b990
 */

int __cdecl sub_100797D0(float *a1, float *a2, float *a3, float *a4, float *a5, float *a6, int a7)
{
  float *v9; // eax
  double v10; // st7
  float v11; // ecx
  float v12; // edx
  int v14; // edx
  double v15; // st7
  double v16; // st7
  BOOL v17; // edx
  int v18; // eax
  int v19; // edx
  bool v20; // zf
  double v21; // st7
  double v22; // st6
  double v23; // [esp+10h] [ebp-30h] BYREF
  float v24; // [esp+18h] [ebp-28h]
  float v25; // [esp+1Ch] [ebp-24h]
  float v26; // [esp+20h] [ebp-20h]
  float v27; // [esp+24h] [ebp-1Ch]
  float v28; // [esp+28h] [ebp-18h] BYREF
  float v29; // [esp+2Ch] [ebp-14h]
  float v30; // [esp+30h] [ebp-10h]
  float v31; // [esp+34h] [ebp-Ch] BYREF
  float v32; // [esp+38h] [ebp-8h]
  float v33; // [esp+3Ch] [ebp-4h]
  float v34; // [esp+44h] [ebp+4h]
  float v35; // [esp+44h] [ebp+4h]
  float v36; // [esp+44h] [ebp+4h]
  float v37; // [esp+44h] [ebp+4h]
  float v38; // [esp+44h] [ebp+4h]
  float v39; // [esp+44h] [ebp+4h]
  float v40; // [esp+44h] [ebp+4h]
  float v41; // [esp+44h] [ebp+4h]
  float v42; // [esp+54h] [ebp+14h]

  v31 = *a2 - *a1;
  v32 = a2[1] - a1[1];
  v33 = a2[2] - a1[2];
  v28 = *a5 - *a4;
  v29 = a5[1] - a4[1];
  v30 = a5[2] - a4[2];
  v9 = (float *)sub_1017B990(&v23, &v31, a3);
  v10 = *a1;
  v11 = v9[1];
  v25 = *v9;
  v12 = v9[2];
  v26 = v11;
  v27 = v12;
  v42 = a1[2] * v12 + v10 * v25 + v11 * a1[1];
  v23 = *a4 * v25;
  v34 = (v12 * a4[2] + v23 + v11 * a4[1] - v42) * (v25 * *a5 + v11 * a5[1] + a5[2] * v12 - v42);
  if ( v34 >= 0.0 )
    return 0;
  sub_1004C240(&v28);
  v35 = v30 * v27 + v29 * v26 + v28 * v25;
  if ( v35 == 0.0 )
    return 0;
  v36 = (v42 - (v27 * a4[2] + v26 * a4[1] + v23)) / v35;
  v28 = v28 * v36;
  v29 = v29 * v36;
  v30 = v30 * v36;
  *(float *)&v23 = *a4 + v28;
  *((float *)&v23 + 1) = v29 + a4[1];
  v14 = HIDWORD(v23);
  v15 = a4[2];
  *(_DWORD *)a7 = LODWORD(v23);
  v16 = v15 + v30;
  *(_DWORD *)(a7 + 4) = v14;
  v24 = v16;
  *(float *)(a7 + 8) = v24;
  LODWORD(v25) &= ~0x80000000;
  LODWORD(v26) &= ~0x80000000;
  LODWORD(v27) &= ~0x80000000;
  v17 = v26 >= (double)v25;
  if ( v27 > (double)*(&v25 + v17) )
    goto LABEL_8;
  if ( v26 < (double)v25 )
  {
    v18 = 1;
    v19 = 2;
    goto LABEL_10;
  }
  v20 = v17;
  v19 = 2;
  if ( !v20 )
LABEL_8:
    v19 = 1;
  v18 = 0;
LABEL_10:
  v37 = ((*(float *)(a7 + 4 * v19) - a1[v19]) * *(&v31 + v18) - (*(float *)(a7 + 4 * v18) - a1[v18]) * *(&v31 + v19))
      / (a3[v19] * *(&v31 + v18) - a3[v18] * *(&v31 + v19));
  *a6 = v37;
  if ( *(int *)a6 < 0 )
    return 0;
  v31 = *a3 * v37;
  v32 = a3[1] * v37;
  v33 = v37 * a3[2];
  v38 = *(float *)a7 - v31;
  v21 = v38;
  *(float *)a7 = v38;
  v39 = *(float *)(a7 + 4) - v32;
  v22 = v39;
  *(float *)(a7 + 4) = v39;
  v40 = *(float *)(a7 + 8) - v33;
  *(float *)(a7 + 8) = v40;
  v41 = (*a2 - v21) * (*a1 - v21) + (a2[1] - v22) * (a1[1] - v22) + (a2[2] - v40) * (a1[2] - v40);
  return LODWORD(v41) >> 31;
}
