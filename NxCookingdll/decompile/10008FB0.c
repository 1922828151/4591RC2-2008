/*
 * func-name: sub_10008FB0
 * func-address: 0x10008fb0
 * callers: 0x1000bf10
 * callees: none
 */

char __thiscall sub_10008FB0(_DWORD *this, _DWORD *a2)
{
  float *v4; // ebp
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
  int v17; // edx
  float *v18; // eax
  _DWORD *v19; // ebx
  float *v20; // edi
  unsigned int v21; // edx
  unsigned int v22; // eax
  int v23; // ecx
  unsigned int v24; // eax
  unsigned int v25; // edx
  int v26; // ebx
  int v27; // eax
  float *v28; // ecx
  float *v29; // edi
  float *v30; // eax
  float *i; // edx
  double v32; // st7
  float *v33; // edx
  _DWORD *v34; // edi
  unsigned int v35; // edx
  unsigned int v36; // eax
  int v37; // ecx
  unsigned int v38; // eax
  unsigned int v39; // edx
  int v40; // ebx
  int v41; // eax
  _DWORD *v42; // ecx
  _DWORD *v43; // edi
  _DWORD *v44; // eax
  _DWORD *j; // edx
  _DWORD *v46; // edx
  unsigned __int16 *v47; // ebp
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
  int v83; // ecx
  unsigned int v84; // ecx
  unsigned int v85; // eax
  int v86; // edx
  unsigned int v87; // eax
  unsigned int v88; // ecx
  int v89; // ebx
  int v90; // eax
  _DWORD *v91; // ecx
  _DWORD *v92; // edi
  _DWORD *v93; // eax
  _DWORD *v94; // edx
  _DWORD *v95; // edx
  bool v96; // cf
  unsigned int v97; // edx
  unsigned int v98; // eax
  int v99; // ecx
  unsigned int v100; // eax
  unsigned int v101; // edx
  int v102; // ebx
  int v103; // eax
  _DWORD *v104; // ecx
  _DWORD *v105; // edi
  _DWORD *v106; // eax
  _DWORD *v107; // edx
  _DWORD *v108; // edx
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
  _DWORD *v120; // edx
  unsigned int v121; // ecx
  unsigned int v122; // eax
  int v123; // edx
  unsigned int v124; // eax
  unsigned int v125; // ecx
  int v126; // ebx
  int v127; // eax
  _DWORD *v128; // ecx
  _DWORD *v129; // edi
  _DWORD *v130; // eax
  _DWORD *v131; // edx
  _DWORD *v132; // edx
  unsigned int v133; // ecx
  unsigned int v134; // eax
  int v135; // edx
  unsigned int v136; // eax
  unsigned int v137; // ecx
  int v138; // ebx
  int v139; // eax
  _DWORD *v140; // ecx
  _DWORD *v141; // edi
  _DWORD *v142; // eax
  _DWORD *v143; // edx
  _DWORD *v144; // edx
  float *v145; // [esp+54h] [ebp-10h]
  unsigned __int16 *v146; // [esp+54h] [ebp-10h]
  unsigned int v147; // [esp+58h] [ebp-Ch]
  int v148; // [esp+58h] [ebp-Ch]
  _DWORD *v149; // [esp+5Ch] [ebp-8h]
  int v150; // [esp+60h] [ebp-4h]
  int v151; // [esp+60h] [ebp-4h]
  int v152; // [esp+60h] [ebp-4h]
  int v153; // [esp+60h] [ebp-4h]

  if ( !a2[1] || !a2[5] )
    return 0;
  this[54] = a2[11];
  v4 = (float *)a2[7];
  v145 = (float *)a2[14];
  v149 = (_DWORD *)a2[15];
  v147 = 0;
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
          v17 = v13 + 12 * ((this[2] - this[1]) / 12);
          this[3] = v13 + v10;
          this[2] = v17;
          this[1] = v13;
        }
      }
      v18 = (float *)this[2];
      v19 = a2;
      *v18 = *v4;
      v20 = v145;
      v18[1] = v4[1];
      v18[2] = v4[2];
      this[2] += 12;
      v4 = (float *)((char *)v4 + a2[2]);
      if ( v145 )
      {
        v21 = this[8];
        v22 = this[7];
        if ( v21 <= v22 )
        {
          v23 = this[6];
          v24 = 2 * ((int)(v22 - v23) >> 2) + 2;
          v25 = v23 ? (int)(v21 - v23) >> 2 : 0;
          if ( v25 < v24 )
          {
            v26 = v24;
            v27 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v24,
                    289);
            v28 = (float *)this[7];
            v29 = (float *)v27;
            v30 = (float *)this[6];
            for ( i = v29; v30 != v28; ++i )
            {
              v32 = *v30++;
              *i = v32;
            }
            if ( this[6] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[6]);
            v33 = &v29[(this[7] - this[6]) >> 2];
            this[8] = &v29[v26];
            v19 = a2;
            this[6] = v29;
            v20 = v145;
            this[7] = v33;
          }
        }
        *(float *)this[7] = *v20;
        this[7] += 4;
        v145 = (float *)((char *)v20 + v19[12]);
      }
      v34 = v149;
      if ( v149 )
      {
        v35 = this[13];
        v36 = this[12];
        if ( v35 <= v36 )
        {
          v37 = this[11];
          v38 = 2 * ((int)(v36 - v37) >> 2) + 2;
          v39 = v37 ? (int)(v35 - v37) >> 2 : 0;
          if ( v39 < v38 )
          {
            v40 = v38;
            v41 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v38,
                    289);
            v42 = (_DWORD *)this[12];
            v43 = (_DWORD *)v41;
            v44 = (_DWORD *)this[11];
            for ( j = v43; v44 != v42; ++j )
              *j = *v44++;
            if ( this[11] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[11]);
            v46 = &v43[(this[12] - this[11]) >> 2];
            this[13] = &v43[v40];
            v19 = a2;
            this[11] = v43;
            v34 = v149;
            this[12] = v46;
          }
        }
        *(_DWORD *)this[12] = *v34;
        this[12] += 4;
        v149 = (_DWORD *)((char *)v34 + v19[13]);
      }
      ++v147;
    }
    while ( v147 < v19[1] );
  }
  v47 = (unsigned __int16 *)a2[9];
  v146 = v47;
  v148 = 0;
  if ( (a2[11] & 2) == 0 )
  {
    if ( a2[5] )
    {
      do
      {
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
              v47 = v146;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v108 = &v105[(this[17] - this[16]) >> 2];
            this[18] = &v105[v102];
            this[17] = v108;
            this[16] = v105;
          }
        }
        *(_DWORD *)this[17] = *(_DWORD *)v47;
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
              v47 = v146;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v120 = &v117[(this[17] - this[16]) >> 2];
            this[18] = &v117[v114];
            this[17] = v120;
            this[16] = v117;
          }
        }
        *(_DWORD *)this[17] = *((_DWORD *)v47 + 1);
        this[17] += 4;
        v121 = this[18];
        v122 = this[17];
        if ( v121 <= v122 )
        {
          v123 = this[16];
          v124 = 2 * ((int)(v122 - v123) >> 2) + 2;
          v125 = v123 ? (int)(v121 - v123) >> 2 : 0;
          if ( v125 < v124 )
          {
            v126 = v124;
            v127 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     4 * v124,
                     289);
            v128 = (_DWORD *)this[17];
            v129 = (_DWORD *)v127;
            v130 = (_DWORD *)this[16];
            v131 = v129;
            if ( v130 != v128 )
            {
              do
                *v131++ = *v130++;
              while ( v130 != v128 );
              v47 = v146;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v132 = &v129[(this[17] - this[16]) >> 2];
            this[18] = &v129[v126];
            this[17] = v132;
            this[16] = v129;
          }
        }
        *(_DWORD *)this[17] = *((_DWORD *)v47 + 2);
        this[17] += 4;
        v133 = this[18];
        v134 = this[17];
        if ( v133 <= v134 )
        {
          v135 = this[16];
          v136 = 2 * ((int)(v134 - v135) >> 2) + 2;
          v137 = v135 ? (int)(v133 - v135) >> 2 : 0;
          if ( v137 < v136 )
          {
            v138 = v136;
            v139 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     4 * v136,
                     289);
            v140 = (_DWORD *)this[17];
            v141 = (_DWORD *)v139;
            v142 = (_DWORD *)this[16];
            v143 = v141;
            if ( v142 != v140 )
            {
              do
                *v143++ = *v142++;
              while ( v142 != v140 );
              v47 = v146;
            }
            if ( this[16] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
            v144 = &v141[(this[17] - this[16]) >> 2];
            this[18] = &v141[v138];
            this[17] = v144;
            this[16] = v141;
          }
        }
        *(_DWORD *)this[17] = *((_DWORD *)v47 + 3);
        this[17] += 4;
        v47 = (unsigned __int16 *)((char *)v47 + a2[6]);
        v96 = (unsigned int)(v148 + 1) < a2[5];
        v146 = v47;
        ++v148;
      }
      while ( v96 );
    }
    return 1;
  }
  if ( !a2[5] )
    return 1;
  do
  {
    v48 = this[18];
    v49 = this[17];
    v150 = *v47;
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
          v47 = v146;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v59 = (this[17] - this[16]) >> 2;
        this[18] = &v56[v53];
        this[17] = &v56[v59];
        this[16] = v56;
      }
    }
    *(_DWORD *)this[17] = v150;
    this[17] += 4;
    v60 = this[18];
    v61 = this[17];
    v151 = v47[1];
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
          v47 = v146;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v71 = (this[17] - this[16]) >> 2;
        this[18] = &v68[v65];
        this[17] = &v68[v71];
        this[16] = v68;
      }
    }
    *(_DWORD *)this[17] = v151;
    this[17] += 4;
    v72 = this[18];
    v73 = this[17];
    v152 = v47[2];
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
          v47 = v146;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v83 = (this[17] - this[16]) >> 2;
        this[18] = &v80[v77];
        this[17] = &v80[v83];
        this[16] = v80;
      }
    }
    *(_DWORD *)this[17] = v152;
    this[17] += 4;
    v84 = this[18];
    v85 = this[17];
    v153 = v47[3];
    if ( v84 <= v85 )
    {
      v86 = this[16];
      v87 = 2 * ((int)(v85 - v86) >> 2) + 2;
      v88 = v86 ? (int)(v84 - v86) >> 2 : 0;
      if ( v88 < v87 )
      {
        v89 = v87;
        v90 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                dword_100580A0,
                4 * v87,
                289);
        v91 = (_DWORD *)this[17];
        v92 = (_DWORD *)v90;
        v93 = (_DWORD *)this[16];
        v94 = v92;
        if ( v93 != v91 )
        {
          do
            *v94++ = *v93++;
          while ( v93 != v91 );
          v47 = v146;
        }
        if ( this[16] )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[16]);
        v95 = &v92[(this[17] - this[16]) >> 2];
        this[18] = &v92[v89];
        this[17] = v95;
        this[16] = v92;
      }
    }
    *(_DWORD *)this[17] = v153;
    this[17] += 4;
    v47 = (unsigned __int16 *)((char *)v47 + a2[6]);
    v96 = (unsigned int)(v148 + 1) < a2[5];
    v146 = v47;
    ++v148;
  }
  while ( v96 );
  return 1;
}
