/*
 * func-name: sub_1008FCC0
 * func-address: 0x1008fcc0
 * callers: 0x10080c60, 0x100b2080, 0x100b2510, 0x1012c590, 0x1012cad0, 0x1012de10, 0x1012e2b0, 0x1016db80
 * callees: 0x1004c240, 0x101786e0, 0x1017b990, 0x101a251c
 */

float *__cdecl sub_1008FCC0(float *a1, int *a2)
{
  int v2; // ecx
  int v3; // edx
  int v4; // eax
  float *v5; // eax
  int v6; // eax
  float v7; // ecx
  float v8; // edx
  int v9; // eax
  int v10; // ecx
  int v11; // edx
  int v12; // eax
  float v14; // [esp+Ch] [ebp-30h] BYREF
  float v15; // [esp+10h] [ebp-2Ch]
  float v16; // [esp+14h] [ebp-28h]
  int v17; // [esp+18h] [ebp-24h] BYREF
  int v18; // [esp+1Ch] [ebp-20h]
  int v19; // [esp+20h] [ebp-1Ch]
  int v20; // [esp+24h] [ebp-18h] BYREF
  int v21; // [esp+28h] [ebp-14h]
  int v22; // [esp+2Ch] [ebp-10h]
  float v23; // [esp+30h] [ebp-Ch] BYREF
  float v24; // [esp+34h] [ebp-8h]
  float v25; // [esp+38h] [ebp-4h]

  *a1 = 0.0;
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
  sub_101786E0(1.0);
  a1[15] = 1.0;
  v2 = *a2;
  v3 = a2[1];
  v14 = 0.0;
  v4 = a2[2];
  v15 = 0.0;
  v16 = 0.0;
  v20 = v2;
  v23 = 0.0;
  v25 = 0.0;
  v21 = v3;
  v22 = v4;
  v24 = 1.0;
  sub_1004C240((float *)&v20);
  v17 = v20;
  v18 = v21;
  v19 = v22;
  v5 = (float *)sub_1017B990(&v20, &v17, &v23);
  v14 = *v5;
  v15 = v5[1];
  v16 = v5[2];
  v6 = sub_1017B990(&v20, &v14, &v17);
  v23 = *(float *)v6;
  v7 = v23;
  v24 = *(float *)(v6 + 4);
  v8 = v24;
  v9 = *(_DWORD *)(v6 + 8);
  *a1 = v14;
  a1[1] = v15;
  a1[2] = v16;
  a1[4] = v7;
  v10 = v17;
  a1[5] = v8;
  v11 = v18;
  *((_DWORD *)a1 + 6) = v9;
  v12 = v19;
  *((_DWORD *)a1 + 8) = v10;
  *((_DWORD *)a1 + 9) = v11;
  *((_DWORD *)a1 + 10) = v12;
  return a1;
}
