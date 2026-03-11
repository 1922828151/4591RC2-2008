/*
 * func-name: sub_10009B50
 * func-address: 0x10009b50
 * callers: none
 * callees: none
 */

void __thiscall sub_10009B50(float *this, int a2, double *a3, double *a4, float *a5)
{
  float *v5; // edx
  int v6; // edx
  double v7; // st7
  double v8; // st6
  double v9; // st5
  double v10; // st2
  double v11; // st1
  double v12; // st3
  double v13; // st6
  double v14; // st0
  double v15; // st7
  double v16; // rt2
  double v17; // st6
  double v18; // st7
  float v19; // [esp+4h] [ebp-54h] BYREF
  float v20; // [esp+8h] [ebp-50h]
  float v21; // [esp+Ch] [ebp-4Ch]
  float v22; // [esp+10h] [ebp-48h]
  float v23; // [esp+14h] [ebp-44h]
  float v24; // [esp+18h] [ebp-40h]
  float v25; // [esp+1Ch] [ebp-3Ch]
  float v26; // [esp+20h] [ebp-38h]
  float v27; // [esp+24h] [ebp-34h]
  double v28; // [esp+28h] [ebp-30h]
  double v29; // [esp+30h] [ebp-28h]
  double v30; // [esp+40h] [ebp-18h]
  double v31; // [esp+50h] [ebp-8h]

  v19 = this[10];
  v5 = &v19 + *(_DWORD *)(a2 + 208);
  v20 = this[10];
  v21 = this[10];
  *v5 = this[11] * 0.5 + *v5;
  v22 = *(float *)(a2 + 192);
  v23 = *(float *)(a2 + 192);
  v24 = *(float *)(a2 + 192);
  v6 = *(_DWORD *)a4;
  v25 = v22 + v19;
  v26 = v23 + v20;
  v27 = v24 + v21;
  v7 = *a4 + *a5;
  v8 = a4[1] + a5[1];
  v9 = a4[2] + a5[2];
  *(_DWORD *)a3 = v6;
  v28 = v7;
  *((_DWORD *)a3 + 1) = *((_DWORD *)a4 + 1);
  v10 = v25;
  *((_DWORD *)a3 + 2) = *((_DWORD *)a4 + 2);
  *((_DWORD *)a3 + 3) = *((_DWORD *)a4 + 3);
  *((_DWORD *)a3 + 4) = *((_DWORD *)a4 + 4);
  v28 = v7 - v10;
  v11 = v26;
  *((_DWORD *)a3 + 5) = *((_DWORD *)a4 + 5);
  v29 = v8 - v11;
  v12 = v9 - v27;
  v30 = v7;
  v13 = v8 + v11;
  v14 = v27;
  v15 = v7 + v10;
  v31 = v9 + v27;
  *a3 = *a3 - v10;
  a3[1] = a3[1] - v11;
  a3[2] = a3[2] - v14;
  *((_DWORD *)a3 + 6) = *(_DWORD *)a4;
  *((_DWORD *)a3 + 7) = *((_DWORD *)a4 + 1);
  *((_DWORD *)a3 + 8) = *((_DWORD *)a4 + 2);
  *((_DWORD *)a3 + 9) = *((_DWORD *)a4 + 3);
  *((_DWORD *)a3 + 10) = *((_DWORD *)a4 + 4);
  *((_DWORD *)a3 + 11) = *((_DWORD *)a4 + 5);
  a3[3] = v10 + a3[3];
  a3[4] = v11 + a3[4];
  a3[5] = v14 + a3[5];
  if ( v28 < *a3 )
    *a3 = v28;
  if ( v29 < a3[1] )
    a3[1] = v29;
  if ( v12 < a3[2] )
    a3[2] = v12;
  v16 = v13;
  v17 = v15;
  v18 = v16;
  if ( v17 > a3[3] )
    a3[3] = v17;
  if ( v18 > a3[4] )
    a3[4] = v18;
  if ( v31 > a3[5] )
    a3[5] = v31;
}
