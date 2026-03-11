/*
 * func-name: sub_102C2990
 * func-address: 0x102c2990
 * callers: 0x10035730, 0x10036540, 0x10036f50, 0x100378c0, 0x10038260
 * callees: 0x100029cd, 0x102c09f0, 0x102c9dbc, 0x102c9ea2
 */

float *__cdecl sub_102C2990(float *a1, int *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  float *v5; // eax
  float *v6; // eax
  float *v7; // eax
  float v8; // edi
  float v9; // ebx
  int v10; // ebp
  float v11; // ecx
  float v12; // edx
  float v13; // eax
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  float v18; // [esp+0h] [ebp-30h] BYREF
  float v19; // [esp+4h] [ebp-2Ch]
  float v20; // [esp+8h] [ebp-28h]
  float v21; // [esp+Ch] [ebp-24h] BYREF
  float v22; // [esp+10h] [ebp-20h]
  float v23; // [esp+14h] [ebp-1Ch]
  int v24; // [esp+18h] [ebp-18h] BYREF
  int v25; // [esp+1Ch] [ebp-14h]
  int v26; // [esp+20h] [ebp-10h]
  float v27; // [esp+24h] [ebp-Ch] BYREF
  float v28; // [esp+28h] [ebp-8h]
  float v29; // [esp+2Ch] [ebp-4h]
  float v30; // [esp+38h] [ebp+8h]
  float v31; // [esp+38h] [ebp+8h]

  v2 = *a2;
  v18 = 0.0;
  v3 = a2[1];
  v19 = 0.0;
  v4 = a2[2];
  v20 = 0.0;
  v24 = v2;
  v25 = v3;
  v26 = v4;
  sub_100029CD();
  v27 = 0.0;
  v28 = 1.0;
  v21 = 0.0;
  v22 = 1.0;
  v29 = 0.0;
  v23 = 0.0;
  v5 = sub_102C09F0(&v27, &v21, (float *)&v24);
  v18 = *v5;
  v19 = v5[1];
  v20 = v5[2];
  v30 = v19 * v19 + v18 * v18 + v20 * v20;
  v31 = sqrt(v30);
  if ( v31 < 0.1000000014901161 )
  {
    v27 = 0.1;
    v21 = 0.1;
    v28 = 0.89999998;
    v29 = 0.1;
    v22 = 0.89999998;
    v23 = 0.1;
    v6 = sub_102C09F0(&v27, &v21, (float *)&v24);
    v18 = *v6;
    v19 = v6[1];
    v20 = v6[2];
  }
  v7 = sub_102C09F0(&v27, &v18, (float *)&v24);
  v21 = *v7;
  v8 = v21;
  v22 = v7[1];
  v9 = v22;
  v10 = *((_DWORD *)v7 + 2);
  a1[1] = 0.0;
  a1[2] = 0.0;
  a1[4] = 0.0;
  a1[5] = 0.0;
  a1[6] = 0.0;
  a1[8] = 0.0;
  a1[9] = 0.0;
  a1[10] = 0.0;
  a1[12] = 0.0;
  a1[13] = 0.0;
  a1[14] = 0.0;
  memset(a1, 0, 0x40u);
  v11 = v18;
  v12 = v19;
  a1[10] = 1.0;
  v13 = v20;
  a1[5] = 1.0;
  *a1 = 1.0;
  *a1 = v11;
  a1[15] = 1.0;
  v14 = v24;
  a1[1] = v12;
  v15 = v25;
  a1[2] = v13;
  v16 = v26;
  a1[4] = v8;
  *((_DWORD *)a1 + 8) = v14;
  a1[5] = v9;
  *((_DWORD *)a1 + 9) = v15;
  *((_DWORD *)a1 + 10) = v16;
  *((_DWORD *)a1 + 6) = v10;
  return a1;
}
