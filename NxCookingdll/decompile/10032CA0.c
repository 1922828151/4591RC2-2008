/*
 * func-name: sub_10032CA0
 * func-address: 0x10032ca0
 * callers: 0x10033480, 0x100337a0, 0x10033d20
 * callees: 0x10032790, 0x10032bf0, 0x100373b6, 0x100374f1, 0x10037554
 */

int __stdcall sub_10032CA0(int a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
  int (__thiscall *v4)(int, unsigned int, int); // eax
  float *v5; // ebp
  float **v6; // ebx
  unsigned int v7; // esi
  int v8; // edx
  float v9; // edi
  float *v10; // eax
  float *v11; // edi
  float *v12; // esi
  unsigned int v13; // edi
  float *v14; // esi
  double v15; // st7
  float *v16; // ebx
  double v17; // st6
  double v18; // st5
  double v19; // st7
  double v20; // st6
  double v21; // st5
  unsigned int v22; // edi
  float *v23; // esi
  double v24; // st7
  int v25; // eax
  float *v26; // ecx
  double v27; // st6
  double v28; // st5
  double v29; // st7
  double v30; // st6
  double v31; // st5
  double v32; // st6
  unsigned int v33; // esi
  float *v34; // edx
  float *v35; // ecx
  int v36; // edi
  double v37; // st5
  double v38; // st5
  double v39; // st5
  double v40; // st5
  float *v41; // edx
  float *v42; // ecx
  double v43; // st5
  bool v44; // cf
  unsigned int v45; // esi
  char *v46; // edi
  int v47; // ecx
  int v49; // [esp+14h] [ebp-D4h]
  int v50; // [esp+18h] [ebp-D0h]
  float **v51; // [esp+1Ch] [ebp-CCh]
  int v52; // [esp+20h] [ebp-C8h]
  int v53; // [esp+24h] [ebp-C4h]
  int v54; // [esp+28h] [ebp-C0h]
  float v55; // [esp+2Ch] [ebp-BCh]
  float *v56; // [esp+30h] [ebp-B8h]
  int v57; // [esp+34h] [ebp-B4h]
  float v58; // [esp+44h] [ebp-A4h]
  float v59; // [esp+48h] [ebp-A0h]
  float v60; // [esp+4Ch] [ebp-9Ch]
  float v61; // [esp+50h] [ebp-98h]
  float v62; // [esp+54h] [ebp-94h]
  float v63; // [esp+58h] [ebp-90h]
  float v64; // [esp+84h] [ebp-64h]
  float v65; // [esp+88h] [ebp-60h]
  float v66; // [esp+8Ch] [ebp-5Ch]
  float v67; // [esp+90h] [ebp-58h]
  float v68; // [esp+94h] [ebp-54h]
  float v69; // [esp+98h] [ebp-50h]
  float v70; // [esp+A8h] [ebp-40h]
  char v71[4]; // [esp+ACh] [ebp-3Ch] BYREF
  _BYTE v72[44]; // [esp+B0h] [ebp-38h] BYREF
  int v73; // [esp+E4h] [ebp-4h]

  v55 = 3.4028235e38;
  v53 = 0xFFFFFFF;
  v52 = -1;
  `eh vector constructor iterator'(
    v71,
    0x10u,
    3,
    (void (__thiscall *)(void *))sub_10032BE0,
    (void (__thiscall *)(void *))sub_10032720);
  v57 = 24 * a2;
  v4 = *(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8);
  v73 = 0;
  v5 = (float *)v4(dword_100580A0, 24 * a2 + 24, 1);
  v56 = v5;
  v6 = (float **)v72;
  v50 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 24 * a2 + 24, 1);
  v49 = 0;
  v51 = (float **)v72;
  do
  {
    sub_10032BF0(v6 - 1, a2, -559039810, COERCE_UNSIGNED_INT(3.4028235e38));
    v7 = 0;
    if ( a2 )
    {
      v8 = v49;
      do
      {
        v9 = *(float *)(a1 + 4 * v7);
        v70 = (*(float *)(LODWORD(v9) + 4 * v8) + *(float *)(LODWORD(v9) + 4 * v8 + 12)) * 0.5;
        if ( !*v6 || v7 >= ((char *)v6[1] - (char *)*v6) >> 3 )
        {
          _invalid_parameter_noinfo();
          v8 = v49;
        }
        v10 = *v6;
        v10[2 * v7] = v9;
        v10[2 * v7++ + 1] = v70;
      }
      while ( v7 < a2 );
    }
    v11 = v6[1];
    if ( *v6 > v11 )
      _invalid_parameter_noinfo();
    v12 = *v6;
    if ( *v6 > v6[1] )
      _invalid_parameter_noinfo();
    if ( v6 == (float **)4 )
      _invalid_parameter_noinfo();
    sub_10032790(v12, v11, ((char *)v11 - (char *)v12) >> 3);
    *v5 = 3.4028235e38;
    v5[1] = 3.4028235e38;
    v5[2] = 3.4028235e38;
    v5[3] = -3.4028235e38;
    v5[4] = -3.4028235e38;
    v5[5] = -3.4028235e38;
    v13 = 1;
    if ( a4 + 1 > 1 )
    {
      v54 = 0;
      v14 = v5 + 4;
      do
      {
        if ( !*v6 || v13 - 1 >= ((char *)v6[1] - (char *)*v6) >> 3 )
          _invalid_parameter_noinfo();
        v15 = v14[1];
        v16 = (float *)LODWORD((*v6)[v54]);
        if ( v16[5] >= v15 )
          v15 = v16[5];
        v17 = *v14;
        if ( v16[4] >= v17 )
          v17 = v16[4];
        v18 = *(v14 - 1);
        if ( v16[3] >= v18 )
          v18 = v16[3];
        v61 = v18;
        v62 = v17;
        v63 = v15;
        v19 = *(v14 - 2);
        if ( v16[2] <= v19 )
          v19 = v16[2];
        v20 = *(v14 - 3);
        if ( v16[1] <= v20 )
          v20 = v16[1];
        v21 = *(v14 - 4);
        if ( *v16 <= v21 )
          v21 = *v16;
        v58 = v21;
        v59 = v20;
        v54 += 2;
        v60 = v19;
        v14[2] = v58;
        v14[3] = v59;
        v14[4] = v60;
        v14[5] = v61;
        v6 = v51;
        v14[6] = v62;
        v14[7] = v63;
        ++v13;
        v14 += 6;
      }
      while ( v13 < a4 + 1 );
      v5 = v56;
    }
    *(float *)(v57 + v50) = 3.4028235e38;
    *(float *)(v57 + v50 + 4) = 3.4028235e38;
    *(float *)(v57 + v50 + 8) = 3.4028235e38;
    *(float *)(v57 + v50 + 12) = -3.4028235e38;
    *(float *)(v57 + v50 + 16) = -3.4028235e38;
    *(float *)(v57 + v50 + 20) = -3.4028235e38;
    v22 = a2 - 1;
    if ( a2 - 1 != a3 - 1 )
    {
      v23 = (float *)(v50 + 24 * v22 + 40);
      do
      {
        if ( !*v6 || v22 >= ((char *)v6[1] - (char *)*v6) >> 3 )
          _invalid_parameter_noinfo();
        v24 = v23[1];
        v25 = (int)&(*v6)[2 * v22];
        v26 = *(float **)v25;
        if ( *(float *)(*(_DWORD *)v25 + 20) >= v24 )
          v24 = *(float *)(*(_DWORD *)v25 + 20);
        v27 = *v23;
        if ( v26[4] >= v27 )
          v27 = v26[4];
        v28 = *(v23 - 1);
        if ( v26[3] >= v28 )
          v28 = v26[3];
        v64 = v28;
        v65 = v27;
        v66 = v24;
        v29 = *(v23 - 2);
        if ( v26[2] <= v29 )
          v29 = v26[2];
        v30 = *(v23 - 3);
        if ( v26[1] <= v30 )
          v30 = v26[1];
        v31 = *(v23 - 4);
        if ( *v26 <= v31 )
          v31 = *v26;
        v67 = v31;
        v68 = v30;
        *(v23 - 10) = v67;
        v69 = v29;
        *(v23 - 9) = v68;
        *(v23 - 8) = v69;
        *(v23 - 7) = v64;
        v6 = v51;
        *(v23 - 6) = v65;
        *(v23 - 5) = v66;
        --v22;
        v23 -= 6;
      }
      while ( v22 != a3 - 1 );
      v5 = v56;
    }
    v32 = v55;
    v33 = a3;
    if ( (int)(a4 - a3 + 1) >= 4 )
    {
      v34 = &v5[6 * a3 + 10];
      v35 = (float *)(24 * a3 + v50 + 32);
      v36 = a3 + 2;
      do
      {
        v37 = (*(v34 - 7) - *(v34 - 10) + 0.1) * (*(v34 - 6) - *(v34 - 9) + 0.1) * (*(v34 - 5) - *(v34 - 8) + 0.1)
            + (*(v35 - 5) - *(v35 - 8) + 0.1) * (*(v35 - 4) - *(v35 - 7) + 0.1) * (*(v35 - 3) - *(v35 - 6) + 0.1);
        if ( v37 < v32 )
        {
          v32 = v37;
          v53 = v49;
          v52 = v33;
        }
        v38 = (v34[1] - *(float *)((char *)v35 + (_DWORD)v5 - v50) + 0.1)
            * (*(v34 - 1) - *(v34 - 4) + 0.1)
            * (*v34 - *(v34 - 3) + 0.1)
            + (v35[1] - *(v35 - 2) + 0.1) * (v35[2] - *(v35 - 1) + 0.1) * (v35[3] - *v35 + 0.1);
        if ( v38 < v32 )
        {
          v32 = v38;
          v53 = v49;
          v52 = v36 - 1;
        }
        v39 = (v34[7] - v34[4] + 0.1) * (v34[6] - v34[3] + 0.1) * (v34[5] - v34[2] + 0.1)
            + (v35[9] - v35[6] + 0.1) * (v35[8] - v35[5] + 0.1) * (v35[7] - v35[4] + 0.1);
        if ( v39 < v32 )
        {
          v32 = v39;
          v53 = v49;
          v52 = v36;
        }
        v40 = (v34[13] - v34[10] + 0.1) * (v34[12] - v34[9] + 0.1) * (v34[11] - v34[8] + 0.1)
            + (v35[15] - v35[12] + 0.1) * (v35[14] - v35[11] + 0.1) * (v35[13] - v35[10] + 0.1);
        if ( v40 < v32 )
        {
          v32 = v40;
          v53 = v49;
          v52 = v36 + 1;
        }
        v33 += 4;
        v34 += 24;
        v35 += 24;
        v36 += 4;
      }
      while ( v33 <= a4 - 3 );
      v55 = v32;
    }
    if ( v33 <= a4 )
    {
      v41 = &v5[6 * v33 + 4];
      v42 = (float *)(v50 + 24 * v33 + 8);
      do
      {
        v43 = (v41[1] - *(float *)((char *)v42 + (_DWORD)v5 - v50) + 0.1)
            * (*(v41 - 1) - *(v41 - 4) + 0.1)
            * (*v41 - *(v41 - 3) + 0.1)
            + (v42[1] - *(v42 - 2) + 0.1) * (v42[2] - *(v42 - 1) + 0.1) * (v42[3] - *v42 + 0.1);
        if ( v43 < v32 )
        {
          v32 = v43;
          v53 = v49;
          v52 = v33;
        }
        ++v33;
        v41 += 6;
        v42 += 6;
      }
      while ( v33 <= a4 );
      v55 = v32;
    }
    v6 += 4;
    v44 = (unsigned int)++v49 < 3;
    v51 = v6;
  }
  while ( v44 );
  v45 = 0;
  if ( a2 )
  {
    v46 = &v71[16 * v53];
    do
    {
      v47 = *((_DWORD *)v46 + 1);
      if ( !v47 || v45 >= (*((_DWORD *)v46 + 2) - v47) >> 3 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(a1 + 4 * v45) = *(_DWORD *)(*((_DWORD *)v46 + 1) + 8 * v45);
      ++v45;
    }
    while ( v45 < a2 );
  }
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v5);
  if ( v50 )
    (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v50);
  v73 = -1;
  `eh vector destructor iterator'(v71, 0x10u, 3, (void (__thiscall *)(void *))sub_10032720);
  return v52;
}
