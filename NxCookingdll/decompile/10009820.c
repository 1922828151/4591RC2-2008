/*
 * func-name: sub_10009820
 * func-address: 0x10009820
 * callers: none
 * callees: 0x10008530, 0x10013070, 0x100130a0, 0x100130e0, 0x100134a0, 0x10034ca4
 */

char __thiscall sub_10009820(int this, int a2)
{
  int v2; // ebx
  char result; // al
  int v5; // eax
  int v6; // eax
  unsigned int v7; // edi
  unsigned int v8; // eax
  int v9; // ecx
  unsigned int v10; // esi
  unsigned int v11; // eax
  int v12; // esi
  int v13; // eax
  float *v14; // edx
  int v15; // edi
  float *v16; // eax
  int v17; // ecx
  double v18; // st7
  int v19; // edx
  float *v20; // eax
  int v21; // eax
  int v22; // eax
  float v23; // eax
  unsigned int v24; // ecx
  unsigned int v25; // eax
  int v26; // edx
  unsigned int v27; // eax
  unsigned int v28; // ecx
  int v29; // edi
  int v30; // eax
  _DWORD *v31; // ecx
  _DWORD *v32; // esi
  _DWORD *v33; // eax
  _DWORD *i; // edx
  int v35; // ecx
  int v36; // eax
  float v37; // eax
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // edx
  unsigned int v41; // eax
  unsigned int v42; // ecx
  int v43; // edi
  int v44; // eax
  _DWORD *v45; // ecx
  _DWORD *v46; // esi
  _DWORD *v47; // eax
  _DWORD *j; // edx
  int v49; // ecx
  int v50; // eax
  int v51; // esi
  int v52; // ebx
  unsigned int v53; // edx
  unsigned int v54; // eax
  int v55; // ecx
  unsigned int v56; // eax
  unsigned int v57; // edx
  int v58; // edi
  int v59; // eax
  float *v60; // ecx
  float *v61; // esi
  float *v62; // eax
  float *k; // edx
  double v64; // st7
  float *v65; // edi
  float *v66; // edx
  int v67; // eax
  float v68; // eax
  unsigned int v69; // ecx
  unsigned int v70; // eax
  int v71; // edx
  unsigned int v72; // eax
  unsigned int v73; // ecx
  int v74; // edi
  int v75; // eax
  _DWORD *v76; // ecx
  _DWORD *v77; // esi
  _DWORD *v78; // eax
  _DWORD *m; // edx
  _DWORD *v80; // edi
  _DWORD *v81; // edx
  int v82; // eax
  float v83; // eax
  unsigned int v84; // ecx
  unsigned int v85; // eax
  int v86; // edx
  unsigned int v87; // eax
  unsigned int v88; // ecx
  int v89; // edi
  int v90; // eax
  _DWORD *v91; // ecx
  _DWORD *v92; // esi
  _DWORD *v93; // eax
  _DWORD *n; // edx
  _DWORD *v95; // edi
  _DWORD *v96; // edx
  int v97; // eax
  float v98; // eax
  unsigned int v99; // ecx
  unsigned int v100; // eax
  int v101; // edx
  unsigned int v102; // eax
  unsigned int v103; // ecx
  int v104; // edi
  int v105; // eax
  _DWORD *v106; // ecx
  _DWORD *v107; // esi
  _DWORD *v108; // eax
  _DWORD *ii; // edx
  _DWORD *v110; // edi
  _DWORD *v111; // edx
  int v112; // esi
  float *v113; // eax
  float *v114; // ebx
  unsigned int v115; // edx
  unsigned int v116; // eax
  int v117; // ecx
  unsigned int v118; // eax
  unsigned int v119; // edx
  int v120; // edi
  int (__thiscall *v121)(int, unsigned int, int); // edx
  int v122; // eax
  _DWORD *v123; // ecx
  _DWORD *v124; // esi
  _DWORD *v125; // eax
  _DWORD *v126; // edx
  _DWORD *v127; // edx
  int v128; // ecx
  int v129; // eax
  int v130; // eax
  unsigned int v131; // ecx
  unsigned int v132; // eax
  int v133; // edx
  unsigned int v134; // eax
  unsigned int v135; // ecx
  int v136; // edi
  int (__thiscall *v137)(int, int, int); // eax
  int v138; // eax
  _DWORD *v139; // ecx
  _DWORD *v140; // esi
  _DWORD *v141; // eax
  _DWORD *v142; // edx
  _DWORD *v143; // edx
  int v144; // eax
  int v145; // ecx
  int v146; // esi
  __int16 v147; // ax
  unsigned int v148; // ecx
  unsigned int v149; // eax
  int v150; // edx
  unsigned int v151; // eax
  unsigned int v152; // ecx
  int v153; // edx
  int v154; // eax
  int v155; // ecx
  char *v156; // edx
  char *v157; // eax
  char *v158; // esi
  char *v159; // edi
  bool v160; // zf
  float v161; // eax
  int v162; // edx
  int v163; // esi
  float *v164; // edi
  float *v165; // edi
  __int16 v166; // ax
  unsigned int v167; // edx
  unsigned int v168; // eax
  int v169; // ecx
  unsigned int v170; // eax
  unsigned int v171; // edx
  int v172; // edx
  int v173; // eax
  float v174; // ecx
  char *v175; // edx
  char *v176; // eax
  char *v177; // esi
  char *v178; // edi
  int v179; // eax
  int v180; // edx
  int v181; // [esp+48h] [ebp-7Ch]
  int v182; // [esp+70h] [ebp-54h] BYREF
  int v183; // [esp+74h] [ebp-50h]
  float v184; // [esp+78h] [ebp-4Ch]
  int v185; // [esp+7Ch] [ebp-48h]
  int v186; // [esp+80h] [ebp-44h]
  int v187; // [esp+84h] [ebp-40h]
  float v188; // [esp+88h] [ebp-3Ch]
  float v189; // [esp+8Ch] [ebp-38h]
  float v190; // [esp+90h] [ebp-34h]
  float v191; // [esp+94h] [ebp-30h]
  float v192; // [esp+98h] [ebp-2Ch]
  char v193[4]; // [esp+9Ch] [ebp-28h] BYREF
  float v194[8]; // [esp+A0h] [ebp-24h] BYREF

  v2 = a2;
  v185 = a2;
  result = sub_100134A0(67, 76, 84, 72, v193, &v182, a2);
  if ( result )
  {
    sub_10008530((_DWORD *)this);
    *(_DWORD *)(this + 212) = sub_100130A0(v182, a2);
    v5 = sub_100130A0(v182, a2);
    v181 = v182;
    *(_DWORD *)(this + 216) = v5;
    *(float *)(this + 220) = sub_100130E0(v181, a2);
    v6 = sub_100130A0(v182, a2);
    if ( v6 )
    {
      v183 = v6;
      do
      {
        v190 = sub_100130E0(v182, a2);
        v191 = sub_100130E0(v182, a2);
        v192 = sub_100130E0(v182, a2);
        v7 = *(_DWORD *)(this + 12);
        v8 = *(_DWORD *)(this + 8);
        if ( v7 <= v8 )
        {
          v9 = *(_DWORD *)(this + 4);
          v10 = 2 * ((int)(v8 - v9) / 12) + 2;
          v11 = v9 ? (int)(v7 - v9) / 12 : 0;
          if ( v11 < v10 )
          {
            v12 = 12 * v10;
            v13 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, v12, 289);
            v14 = *(float **)(this + 8);
            v15 = v13;
            v16 = *(float **)(this + 4);
            if ( v16 != v14 )
            {
              v17 = v15 + 8;
              do
              {
                v18 = *v16;
                v16 += 3;
                *(float *)(v17 - 8) = v18;
                v17 += 12;
                *(float *)(v17 - 16) = *(v16 - 2);
                *(float *)(v17 - 12) = *(v16 - 1);
              }
              while ( v16 != v14 );
            }
            if ( *(_DWORD *)(this + 4) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                *(_DWORD *)(this + 4));
            v19 = v15 + 12 * ((*(_DWORD *)(this + 8) - *(_DWORD *)(this + 4)) / 12);
            *(_DWORD *)(this + 12) = v15 + v12;
            *(_DWORD *)(this + 8) = v19;
            *(_DWORD *)(this + 4) = v15;
          }
        }
        v20 = *(float **)(this + 8);
        *v20 = v190;
        v20[1] = v191;
        v20[2] = v192;
        *(_DWORD *)(this + 8) += 12;
        --v183;
      }
      while ( v183 );
    }
    v21 = *(_DWORD *)(this + 212);
    if ( v21 == 1 )
    {
      v22 = 3 * sub_100130A0(v182, a2);
      if ( v22 )
      {
        v183 = v22;
        do
        {
          v23 = COERCE_FLOAT(sub_100130A0(v182, v2));
          v24 = *(_DWORD *)(this + 72);
          v184 = v23;
          v25 = *(_DWORD *)(this + 68);
          if ( v24 <= v25 )
          {
            v26 = *(_DWORD *)(this + 64);
            v27 = 2 * ((int)(v25 - v26) >> 2) + 2;
            v28 = v26 ? (int)(v24 - v26) >> 2 : 0;
            if ( v28 < v27 )
            {
              v29 = v27;
              v30 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                      dword_100580A0,
                      4 * v27,
                      289);
              v31 = *(_DWORD **)(this + 68);
              v32 = (_DWORD *)v30;
              v33 = *(_DWORD **)(this + 64);
              for ( i = v32; v33 != v31; ++i )
                *i = *v33++;
              if ( *(_DWORD *)(this + 64) )
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                  dword_100580A0,
                  *(_DWORD *)(this + 64));
              v2 = v185;
              v35 = (*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 2;
              *(_DWORD *)(this + 72) = &v32[v29];
              *(_DWORD *)(this + 68) = &v32[v35];
              *(_DWORD *)(this + 64) = v32;
            }
          }
          **(float **)(this + 68) = v184;
          *(_DWORD *)(this + 68) += 4;
          --v183;
        }
        while ( v183 );
      }
    }
    else
    {
      if ( v21 != 2 )
        return 0;
      v36 = 4 * sub_100130A0(v182, a2);
      if ( v36 )
      {
        v183 = v36;
        do
        {
          v37 = COERCE_FLOAT(sub_100130A0(v182, v2));
          v38 = *(_DWORD *)(this + 72);
          v184 = v37;
          v39 = *(_DWORD *)(this + 68);
          if ( v38 <= v39 )
          {
            v40 = *(_DWORD *)(this + 64);
            v41 = 2 * ((int)(v39 - v40) >> 2) + 2;
            v42 = v40 ? (int)(v38 - v40) >> 2 : 0;
            if ( v42 < v41 )
            {
              v43 = v41;
              v44 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                      dword_100580A0,
                      4 * v41,
                      289);
              v45 = *(_DWORD **)(this + 68);
              v46 = (_DWORD *)v44;
              v47 = *(_DWORD **)(this + 64);
              for ( j = v46; v47 != v45; ++j )
                *j = *v47++;
              if ( *(_DWORD *)(this + 64) )
                (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                  dword_100580A0,
                  *(_DWORD *)(this + 64));
              v2 = v185;
              v49 = (*(_DWORD *)(this + 68) - *(_DWORD *)(this + 64)) >> 2;
              *(_DWORD *)(this + 72) = &v46[v43];
              *(_DWORD *)(this + 68) = &v46[v49];
              *(_DWORD *)(this + 64) = v46;
            }
          }
          **(float **)(this + 68) = v184;
          *(_DWORD *)(this + 68) += 4;
          --v183;
        }
        while ( v183 );
      }
    }
    v50 = sub_100130A0(v182, v2);
    v51 = v185;
    if ( v50 )
    {
      v52 = v50;
      do
      {
        v184 = sub_100130E0(v182, v51);
        v53 = *(_DWORD *)(this + 32);
        v54 = *(_DWORD *)(this + 28);
        if ( v53 <= v54 )
        {
          v55 = *(_DWORD *)(this + 24);
          v56 = 2 * ((int)(v54 - v55) >> 2) + 2;
          v57 = v55 ? (int)(v53 - v55) >> 2 : 0;
          if ( v57 < v56 )
          {
            v58 = v56;
            v59 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v56,
                    289);
            v60 = *(float **)(this + 28);
            v61 = (float *)v59;
            v62 = *(float **)(this + 24);
            for ( k = v61; v62 != v60; ++k )
            {
              v64 = *v62++;
              *k = v64;
            }
            if ( *(_DWORD *)(this + 24) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                *(_DWORD *)(this + 24));
            v65 = &v61[v58];
            v66 = &v61[(*(_DWORD *)(this + 28) - *(_DWORD *)(this + 24)) >> 2];
            *(_DWORD *)(this + 24) = v61;
            v51 = v185;
            *(_DWORD *)(this + 32) = v65;
            *(_DWORD *)(this + 28) = v66;
          }
        }
        **(float **)(this + 28) = v184;
        *(_DWORD *)(this + 28) += 4;
        --v52;
      }
      while ( v52 );
    }
    v67 = sub_100130A0(v182, v51);
    if ( v67 )
    {
      v183 = v67;
      do
      {
        v68 = COERCE_FLOAT(sub_100130A0(v182, v51));
        v69 = *(_DWORD *)(this + 52);
        v184 = v68;
        v70 = *(_DWORD *)(this + 48);
        if ( v69 <= v70 )
        {
          v71 = *(_DWORD *)(this + 44);
          v72 = 2 * ((int)(v70 - v71) >> 2) + 2;
          v73 = v71 ? (int)(v69 - v71) >> 2 : 0;
          if ( v73 < v72 )
          {
            v74 = v72;
            v75 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v72,
                    289);
            v76 = *(_DWORD **)(this + 48);
            v77 = (_DWORD *)v75;
            v78 = *(_DWORD **)(this + 44);
            for ( m = v77; v78 != v76; ++m )
              *m = *v78++;
            if ( *(_DWORD *)(this + 44) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                *(_DWORD *)(this + 44));
            v80 = &v77[v74];
            v81 = &v77[(*(_DWORD *)(this + 48) - *(_DWORD *)(this + 44)) >> 2];
            *(_DWORD *)(this + 44) = v77;
            v51 = v185;
            *(_DWORD *)(this + 52) = v80;
            *(_DWORD *)(this + 48) = v81;
          }
        }
        **(float **)(this + 48) = v184;
        *(_DWORD *)(this + 48) += 4;
        --v183;
      }
      while ( v183 );
    }
    v82 = sub_100130A0(v182, v51);
    if ( v82 )
    {
      v183 = v82;
      do
      {
        v83 = COERCE_FLOAT(sub_100130A0(v182, v51));
        v84 = *(_DWORD *)(this + 92);
        v184 = v83;
        v85 = *(_DWORD *)(this + 88);
        if ( v84 <= v85 )
        {
          v86 = *(_DWORD *)(this + 84);
          v87 = 2 * ((int)(v85 - v86) >> 2) + 2;
          v88 = v86 ? (int)(v84 - v86) >> 2 : 0;
          if ( v88 < v87 )
          {
            v89 = v87;
            v90 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v87,
                    289);
            v91 = *(_DWORD **)(this + 88);
            v92 = (_DWORD *)v90;
            v93 = *(_DWORD **)(this + 84);
            for ( n = v92; v93 != v91; ++n )
              *n = *v93++;
            if ( *(_DWORD *)(this + 84) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                *(_DWORD *)(this + 84));
            v95 = &v92[v89];
            v96 = &v92[(*(_DWORD *)(this + 88) - *(_DWORD *)(this + 84)) >> 2];
            *(_DWORD *)(this + 84) = v92;
            v51 = v185;
            *(_DWORD *)(this + 92) = v95;
            *(_DWORD *)(this + 88) = v96;
          }
        }
        **(float **)(this + 88) = v184;
        *(_DWORD *)(this + 88) += 4;
        --v183;
      }
      while ( v183 );
    }
    v97 = sub_100130A0(v182, v51);
    if ( v97 )
    {
      v183 = v97;
      do
      {
        v98 = COERCE_FLOAT(sub_100130A0(v182, v51));
        v99 = *(_DWORD *)(this + 112);
        v184 = v98;
        v100 = *(_DWORD *)(this + 108);
        if ( v99 <= v100 )
        {
          v101 = *(_DWORD *)(this + 104);
          v102 = 2 * ((int)(v100 - v101) >> 2) + 2;
          v103 = v101 ? (int)(v99 - v101) >> 2 : 0;
          if ( v103 < v102 )
          {
            v104 = v102;
            v105 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     4 * v102,
                     289);
            v106 = *(_DWORD **)(this + 108);
            v107 = (_DWORD *)v105;
            v108 = *(_DWORD **)(this + 104);
            for ( ii = v107; v108 != v106; ++ii )
              *ii = *v108++;
            if ( *(_DWORD *)(this + 104) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                *(_DWORD *)(this + 104));
            v110 = &v107[v104];
            v111 = &v107[(*(_DWORD *)(this + 108) - *(_DWORD *)(this + 104)) >> 2];
            *(_DWORD *)(this + 104) = v107;
            v51 = v185;
            *(_DWORD *)(this + 112) = v110;
            *(_DWORD *)(this + 108) = v111;
          }
        }
        **(float **)(this + 108) = v184;
        *(_DWORD *)(this + 108) += 4;
        --v183;
      }
      while ( v183 );
    }
    LODWORD(v189) = sub_100130A0(v182, v51);
    v184 = 0.0;
    if ( LODWORD(v189) )
    {
      do
      {
        v112 = v185;
        v113 = (float *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 44, 292);
        if ( v113 )
        {
          v113[1] = 0.0;
          v113[2] = 0.0;
          v113[3] = 0.0;
          v113[6] = 0.0;
          v113[7] = 0.0;
          v113[8] = 0.0;
          *v113 = 0.0;
          v114 = v113;
        }
        else
        {
          v114 = 0;
        }
        v115 = *(_DWORD *)(this + 132);
        v116 = *(_DWORD *)(this + 128);
        if ( v115 <= v116 )
        {
          v117 = *(_DWORD *)(this + 124);
          v118 = 2 * ((int)(v116 - v117) >> 2) + 2;
          v119 = v117 ? (int)(v115 - v117) >> 2 : 0;
          if ( v119 < v118 )
          {
            v120 = 4 * v118;
            v121 = *(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8);
            v186 = 4 * v118;
            v122 = v121(dword_100580A0, 4 * v118, 289);
            v123 = *(_DWORD **)(this + 128);
            v124 = (_DWORD *)v122;
            v125 = *(_DWORD **)(this + 124);
            v126 = v124;
            if ( v125 != v123 )
            {
              do
                *v126++ = *v125++;
              while ( v125 != v123 );
              v120 = v186;
            }
            if ( *(_DWORD *)(this + 124) )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                *(_DWORD *)(this + 124));
            v127 = &v124[(*(_DWORD *)(this + 128) - *(_DWORD *)(this + 124)) >> 2];
            *(_DWORD *)(this + 132) = (char *)v124 + v120;
            *(_DWORD *)(this + 124) = v124;
            v112 = v185;
            *(_DWORD *)(this + 128) = v127;
          }
        }
        **(_DWORD **)(this + 128) = v114;
        v128 = v182;
        *(_DWORD *)(this + 128) += 4;
        *(_DWORD *)v114 = sub_100130A0(v128, v112);
        v129 = sub_100130A0(v182, v112);
        if ( v129 )
        {
          v183 = v129;
          do
          {
            v130 = sub_100130A0(v182, v112);
            v131 = *((_DWORD *)v114 + 3);
            v187 = v130;
            v132 = *((_DWORD *)v114 + 2);
            if ( v131 <= v132 )
            {
              v133 = *((_DWORD *)v114 + 1);
              v134 = 2 * ((int)(v132 - v133) >> 2) + 2;
              v135 = v133 ? (int)(v131 - v133) >> 2 : 0;
              if ( v135 < v134 )
              {
                v136 = 4 * v134;
                v137 = *(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8);
                v186 = v136;
                v138 = v137(dword_100580A0, v136, 289);
                v139 = (_DWORD *)*((_DWORD *)v114 + 2);
                v140 = (_DWORD *)v138;
                v141 = (_DWORD *)*((_DWORD *)v114 + 1);
                v142 = v140;
                if ( v141 != v139 )
                {
                  do
                    *v142++ = *v141++;
                  while ( v141 != v139 );
                  v136 = v186;
                }
                if ( *((_DWORD *)v114 + 1) )
                  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                    dword_100580A0,
                    *((_DWORD *)v114 + 1));
                v143 = &v140[(*((_DWORD *)v114 + 2) - *((_DWORD *)v114 + 1)) >> 2];
                *((_DWORD *)v114 + 3) = (char *)v140 + v136;
                *((_DWORD *)v114 + 1) = v140;
                v112 = v185;
                *((_DWORD *)v114 + 2) = v143;
              }
            }
            **((_DWORD **)v114 + 2) = v187;
            *((_DWORD *)v114 + 2) += 4;
            --v183;
          }
          while ( v183 );
        }
        v144 = sub_100130A0(v182, v112);
        v145 = *(_DWORD *)(this + 212);
        if ( v145 == 1 )
        {
          if ( v144 )
          {
            v183 = v144;
            do
            {
              v146 = v185;
              LOWORD(v194[0]) = sub_10013070(v182, v185);
              HIWORD(v194[0]) = sub_10013070(v182, v146);
              LOWORD(v194[1]) = sub_10013070(v182, v146);
              HIWORD(v194[1]) = sub_10013070(v182, v146);
              v194[2] = NAN;
              v194[3] = sub_100130E0(v182, v146);
              v194[4] = sub_100130E0(v182, v146);
              v194[5] = sub_100130E0(v182, v146);
              v147 = sub_10013070(v182, v146);
              v148 = *((_DWORD *)v114 + 8);
              LOWORD(v194[7]) = v147;
              v149 = *((_DWORD *)v114 + 7);
              if ( v148 <= v149 )
              {
                v150 = *((_DWORD *)v114 + 6);
                v151 = 2 * ((int)(v149 - v150) >> 5) + 2;
                v152 = v150 ? (int)(v148 - v150) >> 5 : 0;
                if ( v152 < v151 )
                {
                  v153 = *(_DWORD *)dword_100580A0;
                  v186 = 32 * v151;
                  v154 = (*(int (__thiscall **)(int, unsigned int, int))(v153 + 8))(dword_100580A0, 32 * v151, 289);
                  v155 = *((_DWORD *)v114 + 7);
                  LODWORD(v188) = v154;
                  v156 = (char *)v154;
                  v157 = (char *)*((_DWORD *)v114 + 6);
                  v187 = v155;
                  if ( v157 != (char *)v155 )
                  {
                    do
                    {
                      v158 = v157;
                      v159 = v156;
                      v157 += 32;
                      v156 += 32;
                      v160 = v157 == (char *)v187;
                      qmemcpy(v159, v158, 0x20u);
                    }
                    while ( !v160 );
                  }
                  if ( *((_DWORD *)v114 + 6) )
                    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                      dword_100580A0,
                      *((_DWORD *)v114 + 6));
                  v161 = v188;
                  v162 = LODWORD(v188) + 32 * ((*((_DWORD *)v114 + 7) - *((_DWORD *)v114 + 6)) >> 5);
                  *((_DWORD *)v114 + 8) = LODWORD(v188) + v186;
                  *((_DWORD *)v114 + 7) = v162;
                  v114[6] = v161;
                }
              }
              qmemcpy(*((void **)v114 + 7), v194, 0x20u);
              *((_DWORD *)v114 + 7) += 32;
              --v183;
            }
            while ( v183 );
          }
        }
        else
        {
          if ( v145 != 2 )
            return 0;
          if ( v144 )
          {
            v186 = v144;
            do
            {
              v163 = v185;
              v164 = v194;
              v183 = 4;
              do
              {
                *(_WORD *)v164 = sub_10013070(v182, v163);
                v164 = (float *)((char *)v164 + 2);
                --v183;
              }
              while ( v183 );
              v194[2] = sub_100130E0(v182, v163);
              v165 = &v194[3];
              v183 = 6;
              do
              {
                *(_WORD *)v165 = sub_10013070(v182, v163);
                v165 = (float *)((char *)v165 + 2);
                --v183;
              }
              while ( v183 );
              v166 = sub_10013070(v182, v163);
              v167 = *((_DWORD *)v114 + 8);
              LOWORD(v194[7]) = v166;
              v168 = *((_DWORD *)v114 + 7);
              if ( v167 <= v168 )
              {
                v169 = *((_DWORD *)v114 + 6);
                v170 = 2 * ((int)(v168 - v169) >> 5) + 2;
                v171 = v169 ? (int)(v167 - v169) >> 5 : 0;
                if ( v171 < v170 )
                {
                  v172 = *(_DWORD *)dword_100580A0;
                  v187 = 32 * v170;
                  v173 = (*(int (__thiscall **)(int, unsigned int, int))(v172 + 8))(dword_100580A0, 32 * v170, 289);
                  v174 = v114[7];
                  v183 = v173;
                  v175 = (char *)v173;
                  v176 = (char *)*((_DWORD *)v114 + 6);
                  v188 = v174;
                  if ( v176 != (char *)LODWORD(v174) )
                  {
                    do
                    {
                      v177 = v176;
                      v178 = v175;
                      v176 += 32;
                      v175 += 32;
                      v160 = v176 == (char *)LODWORD(v188);
                      qmemcpy(v178, v177, 0x20u);
                    }
                    while ( !v160 );
                  }
                  if ( *((_DWORD *)v114 + 6) )
                    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(
                      dword_100580A0,
                      *((_DWORD *)v114 + 6));
                  v179 = v183;
                  v180 = v183 + 32 * ((*((_DWORD *)v114 + 7) - *((_DWORD *)v114 + 6)) >> 5);
                  *((_DWORD *)v114 + 8) = v183 + v187;
                  *((_DWORD *)v114 + 7) = v180;
                  *((_DWORD *)v114 + 6) = v179;
                }
              }
              qmemcpy(*((void **)v114 + 7), v194, 0x20u);
              *((_DWORD *)v114 + 7) += 32;
              --v186;
            }
            while ( v186 );
          }
        }
        ++LODWORD(v184);
      }
      while ( LODWORD(v184) < LODWORD(v189) );
    }
    return 1;
  }
  return result;
}
