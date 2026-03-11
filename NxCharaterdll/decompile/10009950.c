/*
 * func-name: sub_10009950
 * func-address: 0x10009950
 * callers: none
 * callees: none
 */

void __thiscall sub_10009950(float *this, int a2, double *a3, int a4, float *a5)
{
  double v5; // st6
  double v6; // st5
  double v7; // st7
  double v8; // st3
  double v9; // st6
  double v10; // st1
  double v11; // rt2
  double v12; // st6
  double v13; // st7
  float v14; // [esp+Ch] [ebp-3Ch]
  float v15; // [esp+10h] [ebp-38h]
  float v16; // [esp+14h] [ebp-34h]
  double v17; // [esp+18h] [ebp-30h]
  double v18; // [esp+20h] [ebp-28h]

  v14 = this[10] + *(float *)(a2 + 192);
  v15 = this[11] + *(float *)(a2 + 192);
  v16 = this[12] + *(float *)(a2 + 192);
  v5 = *(double *)(a4 + 8) + a5[1];
  v6 = *(double *)a4 + *a5;
  v7 = *(double *)(a4 + 16) + a5[2];
  *(_DWORD *)a3 = *(_DWORD *)a4;
  *((_DWORD *)a3 + 1) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)a3 + 2) = *(_DWORD *)(a4 + 8);
  *((_DWORD *)a3 + 3) = *(_DWORD *)(a4 + 12);
  *((_DWORD *)a3 + 4) = *(_DWORD *)(a4 + 16);
  v17 = v6 - v14;
  *((_DWORD *)a3 + 5) = *(_DWORD *)(a4 + 20);
  v18 = v5 - v15;
  v8 = v7 - v16;
  v9 = v5 + v15;
  v10 = v7 + v16;
  *a3 = *a3 - v14;
  a3[1] = a3[1] - v15;
  a3[2] = a3[2] - v16;
  *((_DWORD *)a3 + 6) = *(_DWORD *)a4;
  *((_DWORD *)a3 + 7) = *(_DWORD *)(a4 + 4);
  *((_DWORD *)a3 + 8) = *(_DWORD *)(a4 + 8);
  *((_DWORD *)a3 + 9) = *(_DWORD *)(a4 + 12);
  *((_DWORD *)a3 + 10) = *(_DWORD *)(a4 + 16);
  *((_DWORD *)a3 + 11) = *(_DWORD *)(a4 + 20);
  a3[3] = v14 + a3[3];
  a3[4] = v15 + a3[4];
  a3[5] = v16 + a3[5];
  if ( v17 < *a3 )
    *a3 = v17;
  if ( v18 < a3[1] )
    a3[1] = v18;
  if ( v8 < a3[2] )
    a3[2] = v8;
  v11 = v9;
  v12 = v6 + v14;
  v13 = v11;
  if ( v12 > a3[3] )
    a3[3] = v12;
  if ( v13 > a3[4] )
    a3[4] = v13;
  if ( v10 > a3[5] )
    a3[5] = v10;
}
