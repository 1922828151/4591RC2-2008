/*
 * func-name: sub_1000B780
 * func-address: 0x1000b780
 * callers: 0x1000bf10
 * callees: 0x10007b30, 0x10008330, 0x10034f10
 */

int __thiscall sub_1000B780(_DWORD *this)
{
  int v2; // ebx
  unsigned int v3; // edi
  char *v4; // ecx
  unsigned int v5; // esi
  int v6; // edx
  unsigned int v7; // eax
  unsigned int v8; // edx
  unsigned int v9; // esi
  unsigned int v10; // eax
  int v11; // esi
  int v12; // eax
  char *v13; // ecx
  int v14; // ebx
  char *v15; // eax
  _DWORD *v16; // edx
  int v17; // eax
  int v18; // esi
  int v19; // ebx
  unsigned int v20; // ecx
  unsigned int v21; // edx
  unsigned int v22; // eax
  unsigned int v23; // ecx
  unsigned int v24; // edx
  int v25; // esi
  unsigned int v26; // ecx
  unsigned int v27; // eax
  int v28; // ebx
  int v29; // eax
  char *v30; // edx
  const void *v31; // esi
  void *v32; // edi
  int v33; // eax
  char *v34; // ebx
  void *v35; // edi
  const void *v36; // esi
  int v37; // eax
  unsigned int v38; // eax
  int v39; // ebx
  int v40; // esi
  int v41; // eax
  int v42; // eax
  int *v43; // ebx
  int v44; // edi
  unsigned int v45; // esi
  unsigned int v46; // eax
  int v47; // edx
  unsigned int v48; // ecx
  int v49; // edx
  int v50; // esi
  int v51; // eax
  int v52; // ecx
  int v53; // edi
  int v54; // ecx
  float *v55; // eax
  float *v56; // edx
  double v57; // st7
  int v58; // edi
  double v59; // st6
  double v60; // st5
  float *v61; // edx
  unsigned int v62; // esi
  double v63; // st4
  double v64; // st3
  double v65; // st2
  float *v66; // ecx
  _DWORD *v67; // edx
  int v68; // ecx
  float *v69; // eax
  int v70; // ecx
  double v71; // st7
  int v72; // ecx
  double v73; // st5
  double v74; // st4
  double v75; // st7
  void *v76; // edi
  bool v77; // cf
  int result; // eax
  int v79; // [esp+24h] [ebp-C0h]
  unsigned int v80; // [esp+24h] [ebp-C0h]
  char *v81; // [esp+24h] [ebp-C0h]
  int v82; // [esp+24h] [ebp-C0h]
  int v83; // [esp+28h] [ebp-BCh]
  int v84; // [esp+28h] [ebp-BCh]
  char *v85; // [esp+28h] [ebp-BCh]
  int v86; // [esp+28h] [ebp-BCh]
  unsigned int v87; // [esp+2Ch] [ebp-B8h]
  int v88; // [esp+2Ch] [ebp-B8h]
  char *v89; // [esp+2Ch] [ebp-B8h]
  unsigned int v90; // [esp+30h] [ebp-B4h]
  char *v91; // [esp+34h] [ebp-B0h] BYREF
  char *v92; // [esp+38h] [ebp-ACh]
  unsigned int v93; // [esp+3Ch] [ebp-A8h]
  int v94; // [esp+48h] [ebp-9Ch]
  unsigned int v95; // [esp+4Ch] [ebp-98h] BYREF
  unsigned int v96; // [esp+50h] [ebp-94h]
  int v97; // [esp+54h] [ebp-90h]
  int v98; // [esp+58h] [ebp-8Ch]
  _DWORD v99[11]; // [esp+5Ch] [ebp-88h] BYREF
  _DWORD v100[23]; // [esp+88h] [ebp-5Ch] BYREF

  v2 = 0;
  v3 = (unsigned int)((this[17] - this[16]) >> 2) >> 2;
  v99[4] = 3;
  v99[8] = 3;
  v99[10] = 3;
  v99[2] = 2;
  v99[6] = 2;
  v99[9] = 2;
  v4 = 0;
  v98 = 0;
  v99[0] = 1;
  v99[1] = 0;
  v99[3] = 0;
  v99[5] = 1;
  v99[7] = 1;
  v90 = v3;
  v91 = 0;
  v92 = 0;
  v93 = 0;
  if ( 6 * v3 )
  {
    v2 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 72 * v3, 289);
    v4 = (char *)(v2 + 12 * ((v92 - v91) / 12));
    v93 = v2 + 72 * v3;
    v92 = v4;
    v91 = (char *)v2;
  }
  v79 = this[16];
  v83 = 0;
  if ( v3 )
  {
    do
    {
      v5 = 0;
      v87 = 0;
      do
      {
        v6 = this[36];
        v7 = *(_DWORD *)(v6 + 4 * *(_DWORD *)(v79 + 4 * v99[2 * v5 - 1]));
        v8 = *(_DWORD *)(v6 + 4 * *(_DWORD *)(v79 + 4 * v99[2 * v5]));
        if ( v7 >= v8 )
        {
          v95 = v8;
          v96 = v7;
        }
        else
        {
          v95 = v7;
          v96 = v8;
        }
        if ( v93 <= (unsigned int)v4 )
        {
          v9 = 2 * ((int)&v4[-v2] / 12) + 2;
          v10 = v2 ? (int)(v93 - v2) / 12 : 0;
          if ( v10 < v9 )
          {
            v11 = 12 * v9;
            v12 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v11, 289);
            v13 = v92;
            v14 = v12;
            v15 = v91;
            v16 = (_DWORD *)v14;
            if ( v91 != v92 )
            {
              do
              {
                *v16 = *(_DWORD *)v15;
                v16[1] = *((_DWORD *)v15 + 1);
                v16[2] = *((_DWORD *)v15 + 2);
                v15 += 12;
                v16 += 3;
              }
              while ( v15 != v13 );
              v13 = v92;
            }
            if ( v91 )
            {
              (*(void (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v91);
              v13 = v92;
            }
            v93 = v14 + v11;
            v4 = (char *)(v14 + 12 * ((v13 - v91) / 12));
            v92 = v4;
            v91 = (char *)v14;
          }
        }
        v3 = v90;
        *(_DWORD *)v4 = v95;
        *((_DWORD *)v92 + 1) = v96;
        v17 = v83;
        *((_DWORD *)v92 + 2) = v83;
        v2 = (int)v91;
        v5 = v87 + 1;
        v4 = v92 + 12;
        v92 += 12;
        v87 = v5;
      }
      while ( v5 < 6 );
      v79 += 16;
      ++v83;
    }
    while ( v17 + 1 < v90 );
  }
  sub_10007B30((int *)&v91, 0, (int)&v4[-v2] / 12 - 1);
  memset(v100, 0, 0x44u);
  v18 = this[47];
  v19 = this[46];
  v20 = (v18 - v19) / 68;
  if ( v3 <= v20 )
  {
    if ( v3 < v20 )
      this[47] = v18 - 68 * ((int)(v18 - (v19 + 68 * v3)) / 68);
  }
  else
  {
    v21 = v3 - v20;
    v80 = v3 - v20;
    v84 = this[47];
    if ( v3 != v20 )
    {
      if ( v19 )
      {
        v22 = (this[48] - v19) / 68;
        v21 = v3 - v20;
      }
      else
      {
        v22 = 0;
      }
      v23 = v21 + v20;
      if ( v22 < v23 )
      {
        v24 = (int)((unsigned __int64)(2021161081LL * (v18 - v19)) >> 32) >> 5;
        v25 = (v18 - v19) / 68;
        v26 = 2 * v23;
        v94 = v24 + (v24 >> 31);
        if ( v19 )
          v27 = (this[48] - v19) / 68;
        else
          v27 = 0;
        if ( v27 < v26 )
        {
          v28 = 68 * v26;
          v29 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  68 * v26,
                  289);
          v30 = (char *)this[46];
          v88 = v29;
          v85 = (char *)this[47];
          if ( v30 != v85 )
          {
            do
            {
              v31 = v30;
              v32 = (void *)v29;
              v30 += 68;
              v29 += 68;
              qmemcpy(v32, v31, 0x44u);
            }
            while ( v30 != v85 );
            v3 = v90;
            v25 = v94;
          }
          if ( this[46] )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[46]);
          this[48] = v28 + v88;
          this[47] = v88 + 68 * ((this[47] - this[46]) / 68);
          this[46] = v88;
        }
        v21 = v80;
        v84 = this[46] + 68 * v25;
        v18 = v84;
      }
      v33 = 68 * v21;
      v94 = v18 + 68 * v21;
      v89 = (char *)this[47];
      v34 = (char *)v18;
      if ( (char *)v18 != v89 )
      {
        v81 = (char *)v94;
        do
        {
          v35 = v81;
          v81 += 68;
          v36 = v34;
          v34 += 68;
          qmemcpy(v35, v36, 0x44u);
        }
        while ( v34 != v89 );
        v3 = v90;
      }
      if ( v21 )
      {
        qmemcpy((void *)v84, v100, 0x44u);
        qmemcpy((void *)(v84 + 68), (const void *)v84, 4 * ((unsigned int)(v33 - 68) >> 2));
        v3 = v90;
      }
      this[47] += v33;
    }
  }
  v37 = this[46];
  if ( v37 == this[47] )
  {
    if ( v37 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[46]);
    this[46] = 0;
    this[47] = 0;
    this[48] = 0;
  }
  v38 = this[47];
  if ( this[48] > v38 )
  {
    v39 = this[46];
    v40 = (int)(v38 - v39) / 68;
    v41 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            v39,
            68 * ((this[47] - v39) / 68));
    this[46] = v41;
    v42 = v41 + 68 * v40;
    this[47] = v42;
    this[48] = v42;
  }
  v43 = (int *)this[16];
  v86 = 0;
  if ( v3 )
  {
    v82 = 0;
    do
    {
      v44 = this[36];
      v45 = 0;
      v97 = v86;
      do
      {
        v46 = *(_DWORD *)(v44 + 4 * v43[v99[2 * v45 - 1]]);
        v47 = v99[2 * v45];
        v48 = *(_DWORD *)(v44 + 4 * v43[v47]);
        if ( v46 >= v48 )
        {
          v95 = *(_DWORD *)(v44 + 4 * v43[v47]);
          v96 = v46;
        }
        else
        {
          v95 = *(_DWORD *)(v44 + 4 * v43[v99[2 * v45 - 1]]);
          v96 = v48;
        }
        v100[v45++ + 17] = sub_10008330((int *)&v91, &v95);
      }
      while ( v45 < 6 );
      v49 = *v43;
      v50 = v43[1];
      v51 = v44;
      v52 = *(_DWORD *)(v44 + 4 * *v43);
      v53 = v43[2];
      v100[0] = v52;
      v100[1] = *(_DWORD *)(v51 + 4 * v50);
      v100[2] = *(_DWORD *)(v51 + 4 * v53);
      v54 = this[41];
      v100[3] = *(_DWORD *)(v51 + 4 * v43[3]);
      v55 = (float *)(v54 + 12 * v49);
      v56 = (float *)(v54 + 12 * v53);
      v57 = *v56 - *v55;
      v58 = this[41];
      v59 = v56[1] - v55[1];
      v60 = v56[2] - v55[2];
      v61 = (float *)(v54 + 12 * v50);
      v62 = 0;
      v63 = *v61 - *v55;
      LOWORD(v100[6]) = 0;
      v64 = v61[1] - v55[1];
      v65 = v61[2] - v55[2];
      v66 = (float *)(v54 + 12 * v43[3]);
      v67 = v99;
      *(float *)&v100[10] = (v63 * v59 - v57 * v64) * (v66[2] - v55[2])
                          + (v64 * v60 - v65 * v59) * (*v66 - *v55)
                          + (v66[1] - v55[1]) * (v65 * v57 - v60 * v63);
      do
      {
        v68 = this[36];
        v69 = (float *)(v58 + 12 * *(_DWORD *)(v68 + 4 * v43[*(v67 - 1)]));
        v58 = this[41];
        v70 = 3 * *(_DWORD *)(v68 + 4 * v43[*v67]);
        v71 = *(float *)(v58 + 4 * v70);
        v72 = v58 + 4 * v70;
        v73 = *(float *)(v72 + 8) - v69[2];
        v74 = *(float *)(v72 + 4) - v69[1];
        v75 = sqrt((v71 - *v69) * (v71 - *v69) + v74 * v74 + v73 * v73);
        if ( !v100[v62 + 17] )
          v75 = -v75;
        *(float *)&v100[v62 + 11] = v75;
        ++v62;
        v67 += 2;
      }
      while ( v62 < 6 );
      v76 = (void *)(v82 + this[46]);
      v82 += 68;
      v43 += 4;
      v77 = v86 + 1 < v90;
      qmemcpy(v76, v100, 0x44u);
      ++v86;
    }
    while ( v77 );
  }
  result = (int)v91;
  if ( v91 )
    return (*(int (__thiscall **)(int, char *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v91);
  return result;
}
