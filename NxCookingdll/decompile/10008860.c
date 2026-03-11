/*
 * func-name: sub_10008860
 * func-address: 0x10008860
 * callers: 0x1000bf10
 * callees: none
 */

char __thiscall sub_10008860(_DWORD *this, _DWORD *a2)
{
  _DWORD *v2; // ebp
  unsigned int v5; // ebx
  unsigned int v6; // eax
  int v7; // ecx
  unsigned int v8; // edi
  unsigned int v9; // eax
  int v10; // edi
  int v11; // eax
  float *v12; // edx
  int v13; // ebx
  float *v14; // eax
  int v15; // ecx
  double v16; // st7
  float *v17; // eax
  float *v18; // edi
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // edx
  int v24; // ebx
  int v25; // eax
  float *v26; // ecx
  float *v27; // edi
  float *v28; // eax
  float *i; // edx
  double v30; // st7
  float *v31; // ecx
  float *v32; // eax
  _DWORD *v33; // edi
  unsigned int v34; // edx
  unsigned int v35; // eax
  int v36; // ecx
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // ebx
  int v40; // eax
  _DWORD *v41; // ecx
  _DWORD *v42; // edi
  _DWORD *v43; // eax
  _DWORD *j; // edx
  _DWORD *v45; // ecx
  _DWORD *v46; // eax
  _DWORD *v47; // ebp
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // edx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  int v53; // ebx
  int v54; // eax
  _DWORD *v55; // ecx
  _DWORD *v56; // edi
  _DWORD *v57; // eax
  _DWORD *v58; // edx
  int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // eax
  int v62; // edx
  unsigned int v63; // eax
  unsigned int v64; // ecx
  int v65; // ebx
  int v66; // eax
  _DWORD *v67; // ecx
  _DWORD *v68; // edi
  _DWORD *v69; // eax
  _DWORD *v70; // edx
  int v71; // ecx
  unsigned int v72; // ecx
  unsigned int v73; // eax
  int v74; // edx
  unsigned int v75; // eax
  unsigned int v76; // ecx
  int v77; // ebx
  int v78; // eax
  _DWORD *v79; // ecx
  _DWORD *v80; // edi
  _DWORD *v81; // eax
  _DWORD *v82; // edx
  _DWORD *v83; // edx
  bool v84; // cf
  unsigned int v85; // edx
  unsigned int v86; // eax
  int v87; // ecx
  unsigned int v88; // eax
  unsigned int v89; // edx
  int v90; // ebx
  int v91; // eax
  _DWORD *v92; // ecx
  _DWORD *v93; // edi
  _DWORD *v94; // eax
  _DWORD *v95; // edx
  int v96; // ecx
  unsigned int v97; // ecx
  unsigned int v98; // eax
  int v99; // edx
  unsigned int v100; // eax
  unsigned int v101; // ecx
  int v102; // ebx
  int v103; // eax
  _DWORD *v104; // ecx
  _DWORD *v105; // edi
  _DWORD *v106; // eax
  _DWORD *v107; // edx
  int v108; // ecx
  unsigned int v109; // ecx
  unsigned int v110; // eax
  int v111; // edx
  unsigned int v112; // eax
  unsigned int v113; // ecx
  int v114; // ebx
  int v115; // eax
  _DWORD *v116; // ecx
  _DWORD *v117; // edi
  _DWORD *v118; // eax
  _DWORD *v119; // edx
  int v120; // ecx
  float *v121; // [esp+48h] [ebp-14h]
  _DWORD *v122; // [esp+48h] [ebp-14h]
  unsigned int v123; // [esp+4Ch] [ebp-10h]
  int v124; // [esp+4Ch] [ebp-10h]
  _DWORD *v125; // [esp+50h] [ebp-Ch]
  int v126; // [esp+50h] [ebp-Ch]
  float *v127; // [esp+54h] [ebp-8h]
  int v128; // [esp+54h] [ebp-8h]
  int v129; // [esp+58h] [ebp-4h]
  int v130; // [esp+58h] [ebp-4h]
  int v131; // [esp+58h] [ebp-4h]

  v2 = a2;
  if ( !a2[1] || !a2[3] )
    return 0;
  this[54] = a2[11];
  v127 = (float *)a2[7];
  v121 = (float *)a2[14];
  v125 = (_DWORD *)a2[15];
  v123 = 0;
  if ( a2[1] )
  {
    do
    {
      v5 = this[3];
      v6 = this[2];
      if ( v5 <= v6 )
      {
        v7 = this[1];
        v8 = 2 * ((int)(v6 - v7) / 12) + 2;
        v9 = v7 ? (int)(v5 - v7) / 12 : 0;
        if ( v9 < v8 )
        {
          v10 = 12 * v8;
          v11 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v10, 289);
          v12 = (float *)this[2];
          v13 = v11;
          v14 = (float *)this[1];
          if ( v14 != v12 )
          {
            v15 = v13 + 8;
            do
            {
              v16 = *v14;
              v14 += 3;
              *(float *)(v15 - 8) = v16;
              v15 += 12;
              *(float *)(v15 - 16) = *(v14 - 2);
              *(float *)(v15 - 12) = *(v14 - 1);
            }
            while ( v14 != v12 );
          }
          if ( this[1] )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[1]);
          this[3] = v13 + v10;
          this[2] = v13 + 12 * ((this[2] - this[1]) / 12);
          this[1] = v13;
        }
      }
      v17 = (float *)this[2];
      v18 = v121;
      *v17 = *v127;
      v17[1] = v127[1];
      v17[2] = v127[2];
      this[2] += 12;
      v127 = (float *)((char *)v127 + v2[2]);
      if ( v121 )
      {
        v19 = this[8];
        v20 = this[7];
        if ( v19 <= v20 )
        {
          v21 = this[6];
          v22 = 2 * ((int)(v20 - v21) >> 2) + 2;
          v23 = v21 ? (int)(v19 - v21) >> 2 : 0;
          if ( v23 < v22 )
          {
            v24 = v22;
            v25 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v22,
                    289);
            v26 = (float *)this[7];
            v27 = (float *)v25;
            v28 = (float *)this[6];
            for ( i = v27; v28 != v26; ++i )
            {
              v30 = *v28++;
              *i = v30;
            }
            if ( this[6] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[6]);
            v31 = &v27[v24];
            v32 = &v27[(this[7] - this[6]) >> 2];
            this[6] = v27;
            v18 = v121;
            this[8] = v31;
            this[7] = v32;
          }
        }
        *(float *)this[7] = *v18;
        this[7] += 4;
        v121 = (float *)((char *)v18 + v2[12]);
      }
      v33 = v125;
      if ( v125 )
      {
        v34 = this[13];
        v35 = this[12];
        if ( v34 <= v35 )
        {
          v36 = this[11];
          v37 = 2 * ((int)(v35 - v36) >> 2) + 2;
          v38 = v36 ? (int)(v34 - v36) >> 2 : 0;
          if ( v38 < v37 )
          {
            v39 = v37;
            v40 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v37,
                    289);
            v41 = (_DWORD *)this[12];
            v42 = (_DWORD *)v40;
            v43 = (_DWORD *)this[11];
            for ( j = v42; v43 != v41; ++j )
              *j = *v43++;
            if ( this[11] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[11]);
            v2 = a2;
            v45 = &v42[v39];
            v46 = &v42[(this[12] - this[11]) >> 2];
            this[11] = v42;
            v33 = v125;
            this[13] = v45;
            this[12] = v46;
          }
        }
        *(_DWORD *)this[12] = *v33;
        this[12] += 4;
        v125 = (_DWORD *)((char *)v33 + v2[13]);
      }
      ++v123;
    }
    while ( v123 < v2[1] );
  }
  v47 = (_DWORD *)a2[8];
  v122 = v47;
  v124 = 0;
  v128 = ((a2[11] & 1) != 0) + 1;
  v126 = 2 - ((a2[11] & 1) != 0);
  if ( (a2[11] & 2) == 0 )
  {
    if ( a2[3] )
    {
      do
      {
        v85 = this[18];
        v86 = this[17];
        if ( v85 <= v86 )
        {
          v87 = this[16];
          v88 = 2 * ((int)(v86 - v87) >> 2) + 2;
          v89 = v87 ? (int)(v85 - v87) >> 2 : 0;
          if ( v89 < v88 )
          {
            v90 = v88;
            v91 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v88,
                    289);
            v92 = (_DWORD *)this[17];
            v93 = (_DWORD *)v91;
            v94 = (_DWORD *)this[16];
            v95 = v93;
            if ( v94 != v92 )
            {
              do
                *v95++ = *v94++;
              while ( v94 != v92 );
              v47 = v122;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v96 = (this[17] - this[16]) >> 2;
            this[18] = &v93[v90];
            this[17] = &v93[v96];
            this[16] = v93;
          }
        }
        *(_DWORD *)this[17] = *v47;
        this[17] += 4;
        v97 = this[18];
        v98 = this[17];
        if ( v97 <= v98 )
        {
          v99 = this[16];
          v100 = 2 * ((int)(v98 - v99) >> 2) + 2;
          v101 = v99 ? (int)(v97 - v99) >> 2 : 0;
          if ( v101 < v100 )
          {
            v102 = v100;
            v103 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     4 * v100,
                     289);
            v104 = (_DWORD *)this[17];
            v105 = (_DWORD *)v103;
            v106 = (_DWORD *)this[16];
            v107 = v105;
            if ( v106 != v104 )
            {
              do
                *v107++ = *v106++;
              while ( v106 != v104 );
              v47 = v122;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v108 = (this[17] - this[16]) >> 2;
            this[18] = &v105[v102];
            this[17] = &v105[v108];
            this[16] = v105;
          }
        }
        *(_DWORD *)this[17] = v47[v128];
        this[17] += 4;
        v109 = this[18];
        v110 = this[17];
        if ( v109 <= v110 )
        {
          v111 = this[16];
          v112 = 2 * ((int)(v110 - v111) >> 2) + 2;
          v113 = v111 ? (int)(v109 - v111) >> 2 : 0;
          if ( v113 < v112 )
          {
            v114 = v112;
            v115 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     4 * v112,
                     289);
            v116 = (_DWORD *)this[17];
            v117 = (_DWORD *)v115;
            v118 = (_DWORD *)this[16];
            v119 = v117;
            if ( v118 != v116 )
            {
              do
                *v119++ = *v118++;
              while ( v118 != v116 );
              v47 = v122;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v120 = (this[17] - this[16]) >> 2;
            this[18] = &v117[v114];
            this[17] = &v117[v120];
            this[16] = v117;
          }
        }
        *(_DWORD *)this[17] = v47[v126];
        this[17] += 4;
        v47 = (_DWORD *)((char *)v47 + a2[4]);
        v84 = (unsigned int)(v124 + 1) < a2[3];
        v122 = v47;
        ++v124;
      }
      while ( v84 );
    }
    return 1;
  }
  if ( !a2[3] )
    return 1;
  do
  {
    v48 = this[18];
    v129 = *(unsigned __int16 *)v47;
    v49 = this[17];
    if ( v48 <= v49 )
    {
      v50 = this[16];
      v51 = 2 * ((int)(v49 - v50) >> 2) + 2;
      v52 = v50 ? (int)(v48 - v50) >> 2 : 0;
      if ( v52 < v51 )
      {
        v53 = v51;
        v54 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                dword_100580A0,
                4 * v51,
                289);
        v55 = (_DWORD *)this[17];
        v56 = (_DWORD *)v54;
        v57 = (_DWORD *)this[16];
        v58 = v56;
        if ( v57 != v55 )
        {
          do
            *v58++ = *v57++;
          while ( v57 != v55 );
          v47 = v122;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v59 = (this[17] - this[16]) >> 2;
        this[18] = &v56[v53];
        this[17] = &v56[v59];
        this[16] = v56;
      }
    }
    *(_DWORD *)this[17] = v129;
    this[17] += 4;
    v60 = this[18];
    v130 = *((unsigned __int16 *)v47 + v128);
    v61 = this[17];
    if ( v60 <= v61 )
    {
      v62 = this[16];
      v63 = 2 * ((int)(v61 - v62) >> 2) + 2;
      v64 = v62 ? (int)(v60 - v62) >> 2 : 0;
      if ( v64 < v63 )
      {
        v65 = v63;
        v66 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                dword_100580A0,
                4 * v63,
                289);
        v67 = (_DWORD *)this[17];
        v68 = (_DWORD *)v66;
        v69 = (_DWORD *)this[16];
        v70 = v68;
        if ( v69 != v67 )
        {
          do
            *v70++ = *v69++;
          while ( v69 != v67 );
          v47 = v122;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v71 = (this[17] - this[16]) >> 2;
        this[18] = &v68[v65];
        this[17] = &v68[v71];
        this[16] = v68;
      }
    }
    *(_DWORD *)this[17] = v130;
    this[17] += 4;
    v72 = this[18];
    v131 = *((unsigned __int16 *)v47 + v126);
    v73 = this[17];
    if ( v72 <= v73 )
    {
      v74 = this[16];
      v75 = 2 * ((int)(v73 - v74) >> 2) + 2;
      v76 = v74 ? (int)(v72 - v74) >> 2 : 0;
      if ( v76 < v75 )
      {
        v77 = v75;
        v78 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                dword_100580A0,
                4 * v75,
                289);
        v79 = (_DWORD *)this[17];
        v80 = (_DWORD *)v78;
        v81 = (_DWORD *)this[16];
        v82 = v80;
        if ( v81 != v79 )
        {
          do
            *v82++ = *v81++;
          while ( v81 != v79 );
          v47 = v122;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v83 = &v80[(this[17] - this[16]) >> 2];
        this[18] = &v80[v77];
        this[17] = v83;
        this[16] = v80;
      }
    }
    *(_DWORD *)this[17] = v131;
    this[17] += 4;
    v47 = (_DWORD *)((char *)v47 + a2[4]);
    v84 = (unsigned int)(v124 + 1) < a2[3];
    v122 = v47;
    ++v124;
  }
  while ( v84 );
  return 1;
}
