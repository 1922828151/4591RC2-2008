/*
 * func-name: sub_10008410
 * func-address: 0x10008410
 * callers: 0x10008e70
 * callees: none
 */

int __usercall sub_10008410@<eax>(
        int a1@<eax>,
        _DWORD *a2@<edx>,
        int a3@<ecx>,
        int a4,
        float **a5,
        int *a6,
        _DWORD *a7)
{
  int v10; // esi
  _DWORD *v11; // edx
  int v12; // ecx
  _DWORD *v13; // eax
  unsigned int v14; // esi
  unsigned int v15; // ecx
  unsigned int v16; // ecx
  unsigned int v17; // eax
  int v18; // eax
  _DWORD *v19; // ecx
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  _DWORD *i; // edx
  int v23; // edx
  _DWORD *v24; // edx
  _DWORD *j; // ecx
  _DWORD *v26; // ecx
  int v27; // edx
  int v28; // eax
  int v29; // ebx
  float *v30; // esi
  int v31; // ecx
  int result; // eax
  int v33; // edi
  unsigned int v34; // eax
  unsigned int v35; // ecx
  unsigned int v36; // edx
  int v37; // edi
  unsigned int v38; // ecx
  unsigned int v39; // eax
  int v40; // edi
  int v41; // eax
  float *v42; // esi
  int v43; // ebx
  float *v44; // ecx
  int v45; // eax
  int v46; // edi
  double v47; // st7
  int v48; // edx
  float *v49; // esi
  int v50; // eax
  float *v51; // ecx
  int v52; // ebx
  double v53; // st7
  int v54; // ebx
  int v55; // eax
  char *v56; // ecx
  float *v57; // edx
  int v58; // esi
  double v59; // st7
  int *v60; // edi
  int v61; // ebp
  int v62; // ecx
  int v63; // esi
  int v64; // ebx
  unsigned int v65; // eax
  unsigned int v66; // esi
  unsigned int v67; // edx
  int v68; // ebx
  unsigned int v69; // esi
  unsigned int v70; // eax
  int v71; // ebp
  int v72; // eax
  float *v73; // esi
  int v74; // ebx
  float *v75; // ecx
  int v76; // eax
  int v77; // edi
  double v78; // st7
  int v79; // eax
  float *v80; // esi
  int v81; // ebp
  float *v82; // ecx
  int v83; // eax
  int v84; // edi
  double v85; // st7
  int v86; // edi
  int v87; // eax
  char *v88; // ecx
  float *v89; // edx
  int v90; // esi
  double v91; // st7
  int v92; // edi
  _DWORD *v93; // edi
  int v94; // edx
  float *v95; // eax
  float *v96; // ecx
  _DWORD *v97; // edi
  int v98; // esi
  double v99; // st7
  float *v100; // ecx
  float *v101; // ecx
  double v102; // st0
  int v103; // edx
  int v104; // eax
  char *v105; // ebx
  float *v106; // ecx
  int v107; // eax
  char *v108; // edx
  int v109; // esi
  double v110; // st7
  unsigned int v111; // edx
  unsigned int v112; // eax
  unsigned int v113; // eax
  unsigned int v114; // edx
  int v115; // ebx
  int v116; // eax
  _DWORD *v117; // ecx
  _DWORD *v118; // esi
  _DWORD *v119; // eax
  _DWORD *v120; // edx
  _DWORD *v121; // edx
  int v122; // [esp+44h] [ebp-BCh]
  int v123; // [esp+44h] [ebp-BCh]
  int v124; // [esp+44h] [ebp-BCh]
  int v125; // [esp+44h] [ebp-BCh]
  int v126; // [esp+44h] [ebp-BCh]
  int v127; // [esp+48h] [ebp-B8h]
  int v128; // [esp+4Ch] [ebp-B4h]
  int v129; // [esp+4Ch] [ebp-B4h]
  int v130; // [esp+4Ch] [ebp-B4h]
  int v131; // [esp+4Ch] [ebp-B4h]
  int v132; // [esp+4Ch] [ebp-B4h]
  int v133; // [esp+4Ch] [ebp-B4h]
  int v134; // [esp+50h] [ebp-B0h]
  float *v135; // [esp+50h] [ebp-B0h]
  float *v136; // [esp+50h] [ebp-B0h]
  int v137; // [esp+50h] [ebp-B0h]
  float v138; // [esp+50h] [ebp-B0h]
  int v139; // [esp+54h] [ebp-ACh]
  float *v140; // [esp+54h] [ebp-ACh]
  float *v141; // [esp+54h] [ebp-ACh]
  float v142; // [esp+54h] [ebp-ACh]
  int v143; // [esp+58h] [ebp-A8h]
  float *v144; // [esp+58h] [ebp-A8h]
  float v145; // [esp+5Ch] [ebp-A4h]
  float v146; // [esp+5Ch] [ebp-A4h]
  float v147; // [esp+60h] [ebp-A0h]
  float v148; // [esp+64h] [ebp-9Ch]
  int v149; // [esp+68h] [ebp-98h]
  float v150; // [esp+68h] [ebp-98h]
  float v151; // [esp+6Ch] [ebp-94h]
  int v152; // [esp+6Ch] [ebp-94h]
  float v153; // [esp+70h] [ebp-90h]
  float v154; // [esp+70h] [ebp-90h]
  float v155; // [esp+74h] [ebp-8Ch]
  float v156; // [esp+78h] [ebp-88h]
  int v157; // [esp+7Ch] [ebp-84h]
  float v158; // [esp+80h] [ebp-80h]
  float v159; // [esp+80h] [ebp-80h]
  float v160; // [esp+84h] [ebp-7Ch]
  float v161; // [esp+8Ch] [ebp-74h]
  float v162; // [esp+90h] [ebp-70h]
  float v163; // [esp+94h] [ebp-6Ch]
  float v164; // [esp+98h] [ebp-68h]
  float v165; // [esp+9Ch] [ebp-64h]
  float v166; // [esp+A0h] [ebp-60h] BYREF
  float v167[8]; // [esp+A4h] [ebp-5Ch] BYREF
  float v168; // [esp+C4h] [ebp-3Ch] BYREF
  float v169; // [esp+C8h] [ebp-38h]
  float v170; // [esp+CCh] [ebp-34h]
  float v171; // [esp+D0h] [ebp-30h]
  float v172; // [esp+D4h] [ebp-2Ch]
  float v173; // [esp+D8h] [ebp-28h]
  float v174; // [esp+DCh] [ebp-24h]
  float v175; // [esp+E0h] [ebp-20h]
  float v176; // [esp+E4h] [ebp-1Ch]
  float v177[3]; // [esp+F4h] [ebp-Ch] BYREF

  v10 = (*(int (__thiscall **)(int))(*(_DWORD *)a3 + 164))(a3);
  v127 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 8))(v10, 0, 0);
  v149 = (*(int (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 16))(v10, 0, 0);
  v157 = (*(int (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v10 + 16))(v10, 0, 1);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a4 + 64))(a4, &v168);
  (*(void (__thiscall **)(int, float *))(*(_DWORD *)a4 + 68))(a4, v177);
  v11 = (_DWORD *)*a2;
  v162 = v177[0] - *(double *)a1;
  v12 = (a2[1] - *a2) >> 2;
  v134 = 4 * v12;
  v13 = (_DWORD *)(*a2 + 4 * v12);
  v163 = v177[1] - *(double *)(a1 + 8);
  v164 = v177[2] - *(double *)(a1 + 16);
  if ( *a2 )
    v14 = (a2[2] - (int)v11) >> 2;
  else
    v14 = 0;
  v15 = v12 + 12;
  if ( v14 < v15 )
  {
    v16 = 2 * v15;
    v122 = v13 - v11;
    if ( v11 )
      v17 = (a2[2] - (int)v11) >> 2;
    else
      v17 = 0;
    if ( v17 < v16 )
    {
      v128 = v16;
      v18 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
              dword_1002F7BC,
              4 * v16,
              289);
      v19 = (_DWORD *)a2[1];
      v20 = (_DWORD *)v18;
      v21 = (_DWORD *)*a2;
      for ( i = v20; v21 != v19; ++i )
        *i = *v21++;
      if ( *a2 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a2);
      v23 = (a2[1] - *a2) >> 2;
      a2[2] = &v20[v128];
      a2[1] = &v20[v23];
      *a2 = v20;
    }
    v13 = (_DWORD *)(*a2 + 4 * v122);
  }
  v24 = (_DWORD *)a2[1];
  for ( j = v13; j != v24; ++j )
    j[12] = *j;
  *v13 = 0;
  v13[1] = 0;
  v13[2] = 0;
  v13[3] = 0;
  v13[4] = 0;
  v13[5] = 0;
  v13[6] = 0;
  v13[7] = 0;
  v13[8] = 0;
  v13[9] = 0;
  v13[10] = 0;
  v13[11] = 0;
  a2[1] += 48;
  v26 = (_DWORD *)(v134 + *a2);
  *v26 = 2;
  v26[1] = a4;
  v26[2] = *(_DWORD *)a1;
  v26[3] = *(_DWORD *)(a1 + 4);
  v26[4] = *(_DWORD *)(a1 + 8);
  v26[5] = *(_DWORD *)(a1 + 12);
  v26[6] = *(_DWORD *)(a1 + 16);
  v27 = *(_DWORD *)(a1 + 20);
  v26[8] = v127;
  v26[7] = v27;
  v26[9] = ((char *)a5[1] - (char *)*a5) / 36;
  if ( a6 )
    v28 = (a6[1] - *a6) / 36;
  else
    v28 = 0;
  v26[10] = v28;
  v29 = v127;
  v26[11] = (a7[1] - *a7) >> 2;
  v30 = *a5;
  v31 = ((char *)a5[1] - (char *)*a5) / 36;
  result = 36 * v31;
  v139 = 36 * v31;
  v33 = (int)&(*a5)[9 * v31];
  if ( v127 )
  {
    if ( v30 )
      v34 = ((char *)a5[2] - (char *)v30) / 36;
    else
      v34 = 0;
    v35 = v127 + v31;
    if ( v34 < v35 )
    {
      v36 = (int)((unsigned __int64)(954437177LL * (v33 - (int)v30)) >> 32) >> 3;
      v37 = (v33 - (int)v30) / 36;
      v38 = 2 * v35;
      v123 = v36 + (v36 >> 31);
      if ( v30 )
        v39 = ((char *)a5[2] - (char *)v30) / 36;
      else
        v39 = 0;
      if ( v39 < v38 )
      {
        v40 = 36 * v38;
        v143 = 36 * v38;
        v41 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                dword_1002F7BC,
                36 * v38,
                289);
        v42 = *a5;
        v43 = v41;
        v129 = v41;
        v135 = a5[1];
        if ( *a5 != v135 )
        {
          do
          {
            v44 = v42;
            v45 = v43 + 4;
            v46 = 3;
            do
            {
              v47 = *v44;
              v44 += 3;
              *(float *)(v45 - 4) = v47;
              v45 += 12;
              --v46;
              *(float *)(v45 - 12) = *(float *)((char *)v42 + v45 - v43 - 12);
              *(float *)(v45 - 8) = *(v44 - 1);
            }
            while ( v46 );
            v42 += 9;
            v43 += 36;
          }
          while ( v42 != v135 );
          v40 = v143;
          v43 = v129;
        }
        if ( *a5 )
          (*(void (__thiscall **)(int, float *))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a5);
        v48 = v43 + 36 * (((char *)a5[1] - (char *)*a5) / 36);
        a5[2] = (float *)(v43 + v40);
        v37 = v123;
        *a5 = (float *)v43;
        v29 = v127;
        a5[1] = (float *)v48;
      }
      v33 = (int)&(*a5)[9 * v37];
    }
    v130 = 36 * v29;
    v136 = a5[1];
    v49 = (float *)v33;
    if ( (float *)v33 != v136 )
    {
      v124 = 36 * v29 + v33;
      do
      {
        v50 = v124 + 4;
        v51 = v49;
        v52 = 3;
        do
        {
          v53 = *v51;
          v51 += 3;
          *(float *)(v50 - 4) = v53;
          v50 += 12;
          --v52;
          *(float *)(v50 - 12) = *(float *)((char *)v49 + v50 - v124 - 12);
          *(float *)(v50 - 8) = *(v51 - 1);
        }
        while ( v52 );
        v124 += 36;
        v49 += 9;
      }
      while ( v49 != v136 );
    }
    v54 = v127;
    v55 = v33 + 4;
    v56 = (char *)v167 - v33;
    do
    {
      v57 = &v166;
      v58 = 3;
      do
      {
        v59 = *v57;
        v57 += 3;
        *(float *)(v55 - 4) = v59;
        v55 += 12;
        --v58;
        *(float *)(v55 - 12) = *(float *)&v56[v55 - 16];
        *(float *)(v55 - 8) = *(float *)&v56[v55 - 12];
      }
      while ( v58 );
      --v54;
      v56 -= 36;
    }
    while ( v54 );
    a5[1] = (float *)((char *)a5[1] + v130);
    result = v139;
  }
  v60 = a6;
  v144 = (float *)((char *)*a5 + result);
  v61 = v127;
  if ( a6 )
  {
    v62 = *a6;
    v63 = (a6[1] - *a6) / 36;
    result = 36 * v63;
    v125 = 36 * v63;
    v64 = 36 * v63 + *a6;
    if ( v127 )
    {
      if ( v62 )
        v65 = (a6[2] - v62) / 36;
      else
        v65 = 0;
      v66 = v127 + v63;
      if ( v65 < v66 )
      {
        v67 = (int)((unsigned __int64)(954437177LL * (v64 - v62)) >> 32) >> 3;
        v68 = (v64 - v62) / 36;
        v69 = 2 * v66;
        v131 = v67 + (v67 >> 31);
        if ( v62 )
          v70 = (a6[2] - v62) / 36;
        else
          v70 = 0;
        if ( v70 < v69 )
        {
          v71 = 36 * v69;
          v72 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                  dword_1002F7BC,
                  36 * v69,
                  289);
          v73 = (float *)*a6;
          v137 = v72;
          v74 = v72;
          v140 = (float *)a6[1];
          if ( (float *)*a6 != v140 )
          {
            do
            {
              v75 = v73;
              v76 = v74 + 4;
              v77 = 3;
              do
              {
                v78 = *v75;
                v75 += 3;
                *(float *)(v76 - 4) = v78;
                v76 += 12;
                --v77;
                *(float *)(v76 - 12) = *(float *)((char *)v73 + v76 - v74 - 12);
                *(float *)(v76 - 8) = *(v75 - 1);
              }
              while ( v77 );
              v73 += 9;
              v74 += 36;
            }
            while ( v73 != v140 );
            v60 = a6;
          }
          if ( *v60 )
            (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *v60);
          v68 = v131;
          v79 = (v60[1] - *v60) / 36;
          v60[2] = v137 + v71;
          v61 = v127;
          v60[1] = v137 + 36 * v79;
          *v60 = v137;
        }
        v64 = *v60 + 36 * v68;
      }
      v132 = 36 * v61;
      v141 = (float *)v60[1];
      v80 = (float *)v64;
      if ( (float *)v64 != v141 )
      {
        v81 = v64 + 36 * v61;
        do
        {
          v82 = v80;
          v83 = v81 + 4;
          v84 = 3;
          do
          {
            v85 = *v82;
            v82 += 3;
            *(float *)(v83 - 4) = v85;
            v83 += 12;
            --v84;
            *(float *)(v83 - 12) = *(float *)((char *)v80 + v83 - v81 - 12);
            *(float *)(v83 - 8) = *(v82 - 1);
          }
          while ( v84 );
          v80 += 9;
          v81 += 36;
        }
        while ( v80 != v141 );
      }
      v86 = v127;
      v87 = v64 + 4;
      v88 = (char *)v167 - v64;
      do
      {
        v89 = &v166;
        v90 = 3;
        do
        {
          v91 = *v89;
          v89 += 3;
          *(float *)(v87 - 4) = v91;
          v87 += 12;
          --v90;
          *(float *)(v87 - 12) = *(float *)&v88[v87 - 16];
          *(float *)(v87 - 8) = *(float *)&v88[v87 - 12];
        }
        while ( v90 );
        --v86;
        v88 -= 36;
      }
      while ( v86 );
      a6[1] += v132;
      result = v125;
      v60 = a6;
      v61 = v127;
    }
    v92 = result + *v60;
  }
  else
  {
    v92 = 0;
  }
  v126 = v92;
  if ( v61 )
  {
    v133 = -v92;
    v93 = (_DWORD *)v149;
    do
    {
      v94 = v93[1];
      v95 = v144;
      v144 += 9;
      v96 = (float *)(v157 + 12 * *v93);
      v153 = *v96;
      v97 = v93 + 1;
      v98 = v97[1];
      v155 = v96[1];
      v99 = v96[2];
      v100 = (float *)(v157 + 12 * v94);
      v156 = v99;
      --v127;
      v145 = *v100;
      v93 = v97 + 2;
      v147 = v100[1];
      v148 = v100[2];
      v101 = (float *)(v157 + 12 * v98);
      v158 = *v101;
      v160 = v101[1];
      v150 = v172 * v155 + v171 * v153 + v173 * v156;
      v142 = v174 * v153 + v175 * v155 + v176 * v156;
      v154 = v155 * v169 + v153 * v168 + v170 * v156;
      v138 = v172 * v147 + v171 * v145 + v173 * v148;
      v161 = v175 * v147 + v174 * v145 + v176 * v148;
      v146 = v169 * v147 + v168 * v145 + v170 * v148;
      v102 = v101[2];
      v165 = v173 * v102 + v171 * v158 + v172 * v160;
      v151 = v175 * v160 + v174 * v158 + v176 * v102;
      v159 = v102 * v170 + v168 * v158 + v169 * v160;
      *v95 = v154;
      v95[1] = v150;
      v95[2] = v142;
      v95[3] = v146;
      v95[4] = v138;
      v95[5] = v161;
      v95[6] = v159;
      v95[7] = v165;
      v95[8] = v151;
      *v95 = *v95 + v162;
      v95[1] = v95[1] + v163;
      v95[2] = v95[2] + v164;
      v95[3] = v95[3] + v162;
      v95[4] = v95[4] + v163;
      v95[5] = v95[5] + v164;
      v95[6] = v162 + v95[6];
      v95[7] = v163 + v95[7];
      v95[8] = v164 + v95[8];
      if ( v126 )
      {
        v167[1] = 0.0;
        v167[0] = 0.0;
        v103 = v133;
        v166 = 0.0;
        v104 = v126;
        v167[4] = 0.0;
        v167[3] = 0.0;
        v167[2] = 0.0;
        v126 += 36;
        v167[7] = 0.0;
        v133 -= 36;
        v167[6] = 0.0;
        v105 = (char *)&v167[-1] + v103;
        v167[5] = 0.0;
        v106 = &v166;
        v107 = v104 + 4;
        v108 = (char *)v167 + v103;
        v109 = 3;
        do
        {
          v110 = *v106;
          v106 += 3;
          *(float *)(v107 - 4) = v110;
          v107 += 12;
          --v109;
          *(float *)(v107 - 12) = *(float *)&v105[v107 - 12];
          *(float *)(v107 - 8) = *(float *)&v108[v107 - 12];
        }
        while ( v109 );
      }
      v111 = a7[2];
      v112 = a7[1];
      if ( v111 <= v112 )
      {
        v113 = 2 * ((int)(v112 - *a7) >> 2) + 2;
        v114 = *a7 ? (int)(v111 - *a7) >> 2 : 0;
        if ( v114 < v113 )
        {
          v115 = 4 * v113;
          v152 = 4 * v113;
          v116 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_1002F7BC + 8))(
                   dword_1002F7BC,
                   4 * v113,
                   289);
          v117 = (_DWORD *)a7[1];
          v118 = (_DWORD *)v116;
          v119 = (_DWORD *)*a7;
          v120 = v118;
          if ( (_DWORD *)*a7 != v117 )
          {
            do
              *v120++ = *v119++;
            while ( v119 != v117 );
            v115 = v152;
          }
          if ( *a7 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_1002F7BC + 20))(dword_1002F7BC, *a7);
          v121 = &v118[(a7[1] - *a7) >> 2];
          a7[2] = (char *)v118 + v115;
          a7[1] = v121;
          *a7 = v118;
        }
      }
      result = a7[1];
      *(_DWORD *)result = 7;
      a7[1] += 4;
    }
    while ( v127 );
  }
  return result;
}
