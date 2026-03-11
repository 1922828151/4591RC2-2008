/*
 * func-name: sub_10105AC0
 * func-address: 0x10105ac0
 * callers: 0x10106ce0
 * callees: 0x101a2516, 0x101a295e
 */

int __cdecl sub_10105AC0(int a1, int a2, int a3, int a4, float a5)
{
  double v5; // st7
  int v6; // ebx
  unsigned int v7; // ebp
  int v8; // ecx
  int v9; // esi
  float *v10; // edi
  double v11; // st7
  double v12; // st6
  double v13; // st7
  double v14; // st6
  double v15; // st5
  int v16; // edx
  float *v17; // eax
  unsigned int v18; // ecx
  double v19; // st4
  double v20; // st2
  int v21; // eax
  int v22; // ebx
  double v23; // st6
  double v24; // st7
  double v25; // st6
  double v26; // st5
  float v28; // [esp+0h] [ebp-2Ch]
  float v29; // [esp+4h] [ebp-28h]
  float v30; // [esp+4h] [ebp-28h]
  float v31; // [esp+4h] [ebp-28h]
  float v32; // [esp+4h] [ebp-28h]
  float v33; // [esp+8h] [ebp-24h]
  float v34; // [esp+Ch] [ebp-20h]
  float v35; // [esp+10h] [ebp-1Ch]
  float v36; // [esp+10h] [ebp-1Ch]
  float v37; // [esp+10h] [ebp-1Ch]
  float v38; // [esp+10h] [ebp-1Ch]
  float v39; // [esp+10h] [ebp-1Ch]
  float v40; // [esp+10h] [ebp-1Ch]
  float v41; // [esp+14h] [ebp-18h]
  float v42; // [esp+18h] [ebp-14h]
  int v43; // [esp+30h] [ebp+4h]
  float v44; // [esp+30h] [ebp+4h]
  float v45; // [esp+30h] [ebp+4h]
  int v46; // [esp+34h] [ebp+8h]

  v5 = 1.0;
  v33 = 1.0 / (double)(unsigned int)a1;
  v6 = 0;
  v43 = -2;
  v34 = 1.0 / (double)(unsigned int)a2;
  v28 = 0.0;
  do
  {
    v7 = abs32(v43);
    v8 = -2;
    v9 = a4 + 16 * v6;
    v46 = -2;
    v10 = (float *)(a3 + 8 * v6);
    do
    {
      if ( (int)(v7 + abs32(v8)) <= 2 )
      {
        v29 = (float)v43;
        v11 = v29;
        v41 = v29 * v33;
        *v10 = v41;
        v30 = (float)v46;
        v42 = v30 * v34;
        v12 = v11;
        v13 = v30;
        v10[1] = v42;
        v31 = v12;
        v35 = v13;
        v36 = (v31 * v31 + v35 * v35) * -0.5;
        v37 = exp(v36);
        v32 = v37;
        v38 = sqrt(6.283185482025146);
        ++v6;
        v10 += 2;
        v9 += 16;
        v5 = 1.0;
        v39 = 1.0 / v38;
        v40 = v39 * v32;
        *(float *)(v9 - 16) = v40;
        *(float *)(v9 - 12) = v40;
        *(float *)(v9 - 8) = v40;
        v8 = v46;
        *(float *)(v9 - 4) = v40;
        v28 = *(float *)(v9 - 16) + v28;
      }
      v46 = ++v8;
    }
    while ( v8 <= 2 );
    ++v43;
  }
  while ( v43 <= 2 );
  v14 = a5;
  v15 = v28;
  v16 = 0;
  if ( v6 >= 4 )
  {
    v17 = (float *)(a4 + 24);
    v18 = ((unsigned int)(v6 - 4) >> 2) + 1;
    v16 = 4 * v18;
    v44 = v5 / v15;
    v19 = v44;
    do
    {
      *(v17 - 6) = *(v17 - 6) * v19;
      *(v17 - 5) = *(v17 - 5) * v19;
      *(v17 - 4) = *(v17 - 4) * v19;
      *(v17 - 3) = *(v17 - 3) * v19;
      *(v17 - 6) = *(v17 - 6) * v14;
      *(v17 - 5) = *(v17 - 5) * v14;
      *(v17 - 4) = *(v17 - 4) * v14;
      *(v17 - 3) = *(v17 - 3) * v14;
      *(v17 - 2) = *(v17 - 2) * v19;
      *(v17 - 1) = *(v17 - 1) * v19;
      *v17 = *v17 * v19;
      v17[1] = v17[1] * v19;
      *(v17 - 2) = *(v17 - 2) * v14;
      *(v17 - 1) = *(v17 - 1) * v14;
      *v17 = *v17 * v14;
      v17[1] = v17[1] * v14;
      v17[2] = v17[2] * v19;
      v17[3] = v17[3] * v19;
      v17[4] = v17[4] * v19;
      v17[5] = v17[5] * v19;
      v17[2] = v17[2] * v14;
      v17[3] = v17[3] * v14;
      v17[4] = v17[4] * v14;
      v17[5] = v17[5] * v14;
      v17[6] = v17[6] * v19;
      v17[7] = v17[7] * v19;
      v17[8] = v17[8] * v19;
      v20 = v17[9];
      v17 += 16;
      --v18;
      *(v17 - 7) = v20 * v19;
      *(v17 - 10) = *(v17 - 10) * v14;
      *(v17 - 9) = *(v17 - 9) * v14;
      *(v17 - 8) = *(v17 - 8) * v14;
      *(v17 - 7) = *(v17 - 7) * v14;
    }
    while ( v18 );
  }
  if ( v16 >= v6 )
    return 0;
  v21 = 16 * v16 + a4 + 8;
  v22 = v6 - v16;
  v23 = v5 / v15;
  v24 = a5;
  v45 = v23;
  v25 = v45;
  do
  {
    v26 = *(float *)(v21 - 8);
    v21 += 16;
    --v22;
    *(float *)(v21 - 24) = v26 * v25;
    *(float *)(v21 - 20) = *(float *)(v21 - 20) * v25;
    *(float *)(v21 - 16) = *(float *)(v21 - 16) * v25;
    *(float *)(v21 - 12) = *(float *)(v21 - 12) * v25;
    *(float *)(v21 - 24) = *(float *)(v21 - 24) * v24;
    *(float *)(v21 - 20) = *(float *)(v21 - 20) * v24;
    *(float *)(v21 - 16) = *(float *)(v21 - 16) * v24;
    *(float *)(v21 - 12) = *(float *)(v21 - 12) * v24;
  }
  while ( v22 );
  return 0;
}
