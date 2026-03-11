/*
 * func-name: sub_10004CF0
 * func-address: 0x10004cf0
 * callers: 0x10005170
 * callees: none
 */

void __thiscall sub_10004CF0(
        _DWORD *this,
        unsigned int a2,
        int a3,
        int a4,
        unsigned int a5,
        int a6,
        int a7,
        double *a8)
{
  double *v9; // ecx
  double *v10; // edx
  int v11; // ecx
  int v12; // edi
  int v13; // edx
  _DWORD *v14; // eax
  unsigned int v15; // esi
  unsigned int v16; // edi
  unsigned int v17; // eax
  int v18; // esi
  int v19; // eax
  _DWORD *v20; // ecx
  _DWORD *v21; // edi
  _DWORD *v22; // eax
  _DWORD *v23; // edx
  _DWORD *v24; // esi
  _DWORD *i; // ecx
  int v26; // eax
  int v27; // edx
  bool v28; // cf
  int v29; // edx
  double v30; // st7
  int v31; // ecx
  int v32; // edi
  int v33; // edx
  _DWORD *v34; // eax
  unsigned int v35; // esi
  unsigned int v36; // edi
  unsigned int v37; // eax
  int v38; // esi
  int v39; // eax
  _DWORD *v40; // ecx
  _DWORD *v41; // edi
  _DWORD *v42; // eax
  _DWORD *v43; // edx
  _DWORD *v44; // esi
  _DWORD *j; // ecx
  int v46; // eax
  int v47; // edx
  int v48; // [esp+18h] [ebp-30h]
  int v49; // [esp+18h] [ebp-30h]
  double *v50; // [esp+1Ch] [ebp-2Ch]
  int v51; // [esp+1Ch] [ebp-2Ch]
  int v52; // [esp+20h] [ebp-28h]
  const void *v53; // [esp+20h] [ebp-28h]
  int v54; // [esp+24h] [ebp-24h]
  int v55; // [esp+24h] [ebp-24h]
  int v56; // [esp+28h] [ebp-20h]
  int v57; // [esp+28h] [ebp-20h]
  double *v58; // [esp+2Ch] [ebp-1Ch]
  int v59; // [esp+2Ch] [ebp-1Ch]
  double v60; // [esp+30h] [ebp-18h]
  double v61; // [esp+38h] [ebp-10h]
  double v62; // [esp+40h] [ebp-8h]

  v9 = a8;
  v48 = 0;
  v60 = (a8[3] + *a8) * 0.5;
  v61 = (a8[4] + a8[1]) * 0.5;
  v62 = (a8[5] + a8[2]) * 0.5;
  if ( a2 )
  {
    v10 = (double *)(a3 + 8);
    v50 = (double *)(a3 + 8);
    do
    {
      v58 = v10 - 1;
      if ( v9[3] >= *(v10 - 1)
        && v10[2] >= *v9
        && v9[4] >= *v10
        && v10[3] >= v9[1]
        && v9[5] >= v10[1]
        && v10[4] >= v9[2] )
      {
        v11 = this[13];
        v12 = (this[14] - v11) >> 2;
        v13 = 4 * v12;
        v54 = 4 * v12;
        v14 = (_DWORD *)(4 * v12 + v11);
        if ( v11 )
          v15 = (this[15] - v11) >> 2;
        else
          v15 = 0;
        v16 = v12 + 20;
        if ( v15 < v16 )
        {
          v56 = ((int)v14 - v11) >> 2;
          if ( v11 )
            v17 = (this[15] - v11) >> 2;
          else
            v17 = 0;
          if ( v17 < 2 * v16 )
          {
            v18 = 8 * v16;
            v52 = 8 * v16;
            v19 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                    dword_1002F7BC,
                    8 * v16,
                    289);
            v20 = (_DWORD *)this[14];
            v21 = (_DWORD *)v19;
            v22 = (_DWORD *)this[13];
            v23 = v21;
            if ( v22 != v20 )
            {
              do
                *v23++ = *v22++;
              while ( v22 != v20 );
              v18 = v52;
            }
            if ( this[13] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, this[13]);
            this[14] = &v21[(this[14] - this[13]) >> 2];
            v13 = v54;
            this[15] = (char *)v21 + v18;
            this[13] = v21;
          }
          v14 = (_DWORD *)(this[13] + 4 * v56);
        }
        v24 = (_DWORD *)this[14];
        for ( i = v14; i != v24; ++i )
          i[20] = *i;
        *v14 = 0;
        v14[1] = 0;
        v14[2] = 0;
        v14[3] = 0;
        v14[4] = 0;
        v14[5] = 0;
        v14[6] = 0;
        v14[7] = 0;
        v14[8] = 0;
        v14[9] = 0;
        v14[10] = 0;
        v14[11] = 0;
        v14[12] = 0;
        v14[13] = 0;
        v14[14] = 0;
        v14[15] = 0;
        v14[16] = 0;
        v14[17] = 0;
        v14[18] = 0;
        v14[19] = 0;
        this[14] += 80;
        v26 = v13 + this[13];
        *(_DWORD *)v26 = 0;
        v27 = *(_DWORD *)(a4 + 4 * v48);
        *(double *)(v26 + 8) = v60;
        *(_DWORD *)(v26 + 4) = v27;
        v10 = v50;
        *(double *)(v26 + 16) = v61;
        *(double *)(v26 + 24) = v62;
        qmemcpy((void *)(v26 + 32), v58, 0x30u);
        v9 = a8;
      }
      v10 += 6;
      v28 = ++v48 < a2;
      v50 = v10;
    }
    while ( v28 );
  }
  v49 = 0;
  if ( a5 )
  {
    v29 = a6 + 24;
    v51 = a6 + 24;
    do
    {
      v53 = (const void *)(v29 - 24);
      v30 = *(float *)(v29 + 24);
      if ( *(double *)(v29 - 24) - v30 <= v9[3]
        && v30 + *(double *)v29 >= *v9
        && *(double *)(v29 - 16) - v30 <= v9[4]
        && *(double *)(v29 + 8) + v30 >= v9[1]
        && *(double *)(v29 - 8) - v30 <= v9[5]
        && v30 + *(double *)(v29 + 16) >= v9[2] )
      {
        v31 = this[13];
        v32 = (this[14] - v31) >> 2;
        v33 = 4 * v32;
        v57 = 4 * v32;
        v34 = (_DWORD *)(4 * v32 + v31);
        if ( v31 )
          v35 = (this[15] - v31) >> 2;
        else
          v35 = 0;
        v36 = v32 + 22;
        if ( v35 < v36 )
        {
          v55 = ((int)v34 - v31) >> 2;
          if ( v31 )
            v37 = (this[15] - v31) >> 2;
          else
            v37 = 0;
          if ( v37 < 2 * v36 )
          {
            v38 = 8 * v36;
            v59 = 8 * v36;
            v39 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                    dword_1002F7BC,
                    8 * v36,
                    289);
            v40 = (_DWORD *)this[14];
            v41 = (_DWORD *)v39;
            v42 = (_DWORD *)this[13];
            v43 = v41;
            if ( v42 != v40 )
            {
              do
                *v43++ = *v42++;
              while ( v42 != v40 );
              v38 = v59;
            }
            if ( this[13] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, this[13]);
            this[14] = &v41[(this[14] - this[13]) >> 2];
            v33 = v57;
            this[15] = (char *)v41 + v38;
            this[13] = v41;
          }
          v34 = (_DWORD *)(this[13] + 4 * v55);
        }
        v44 = (_DWORD *)this[14];
        for ( j = v34; j != v44; ++j )
          j[22] = *j;
        *v34 = 0;
        v34[1] = 0;
        v34[2] = 0;
        v34[3] = 0;
        v34[4] = 0;
        v34[5] = 0;
        v34[6] = 0;
        v34[7] = 0;
        v34[8] = 0;
        v34[9] = 0;
        v34[10] = 0;
        v34[11] = 0;
        v34[12] = 0;
        v34[13] = 0;
        v34[14] = 0;
        v34[15] = 0;
        v34[16] = 0;
        v34[17] = 0;
        v34[18] = 0;
        v34[19] = 0;
        v34[20] = 0;
        v34[21] = 0;
        this[14] += 88;
        v46 = v33 + this[13];
        *(_DWORD *)v46 = 1;
        v47 = *(_DWORD *)(a7 + 4 * v49);
        *(double *)(v46 + 8) = v60;
        *(_DWORD *)(v46 + 4) = v47;
        v29 = v51;
        *(double *)(v46 + 16) = v61;
        *(double *)(v46 + 24) = v62;
        qmemcpy((void *)(v46 + 32), v53, 0x38u);
        v9 = a8;
      }
      v29 += 56;
      v28 = ++v49 < a5;
      v51 = v29;
    }
    while ( v28 );
  }
}
