/*
 * func-name: sub_1000A460
 * func-address: 0x1000a460
 * callers: 0x1000bf10
 * callees: 0x10008240
 */

unsigned int __thiscall sub_1000A460(_DWORD *this, char a2, float a3)
{
  int v4; // kr00_4
  _DWORD *v5; // edi
  int v6; // eax
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // ecx
  unsigned int v13; // eax
  int v14; // edi
  int v15; // eax
  _DWORD *v16; // ecx
  _DWORD *v17; // ebp
  _DWORD *v18; // eax
  _DWORD *v19; // edx
  int v20; // ecx
  _DWORD *v21; // ecx
  int v22; // ebp
  _DWORD *v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  int v26; // edx
  int v27; // edi
  int v28; // eax
  int v29; // eax
  int v30; // ebp
  int v31; // ebx
  unsigned int v32; // ecx
  unsigned int v33; // edi
  unsigned int v34; // eax
  int v35; // edx
  int v36; // ebp
  unsigned int v37; // eax
  int v38; // edi
  int v39; // eax
  float *v40; // edx
  int v41; // ebx
  float *v42; // eax
  int v43; // ecx
  double v44; // st7
  int v45; // eax
  float *v46; // edi
  int v47; // ebx
  float *v48; // eax
  int v49; // ecx
  double v50; // st7
  int v51; // ecx
  double v52; // st7
  int v53; // eax
  double v54; // st6
  double v55; // st5
  double v56; // rt0
  double v57; // st5
  double v58; // rt1
  double v59; // rt2
  double v60; // st5
  double v61; // st6
  double v62; // rtt
  double v63; // st5
  double v64; // st7
  int v65; // eax
  unsigned int v66; // eax
  int v67; // ebx
  int v68; // edi
  int v69; // eax
  int v70; // eax
  unsigned int v71; // edi
  unsigned int result; // eax
  int v73; // ebx
  int v74; // eax
  double v75; // st7
  int v76; // ecx
  int v77; // eax
  int v78; // ecx
  float v79; // edi
  float v80; // ecx
  float v81; // ebx
  unsigned int v82; // ebp
  bool v83; // zf
  unsigned int v84; // eax
  unsigned int v85; // ebx
  int v86; // ebx
  int v87; // eax
  float v88; // ecx
  float v89; // edi
  float v90; // eax
  float v91; // edx
  unsigned int v92; // eax
  unsigned int i; // edi
  unsigned int v94; // ebp
  int v95; // ebx
  int v96; // eax
  int v97; // ecx
  unsigned int *v98; // ecx
  int v99; // edx
  int v100; // eax
  double v101; // st6
  int v102; // eax
  double v103; // st5
  unsigned int v104; // edi
  double j; // st4
  int v106; // ecx
  int v107; // edx
  float *v108; // eax
  double v109; // st0
  int v110; // edx
  unsigned int *v111; // ecx
  int v112; // ecx
  int v113; // edi
  unsigned int v114; // ebx
  int v115; // ebp
  unsigned int v116; // eax
  unsigned int v117; // ebx
  int v118; // ebp
  unsigned int v119; // ebx
  unsigned int v120; // eax
  int v121; // edi
  int v122; // eax
  float *v123; // edx
  int v124; // ebx
  float *v125; // eax
  int v126; // ecx
  double v127; // st7
  int v128; // eax
  int v129; // eax
  float *v130; // edi
  int v131; // ebx
  float *v132; // eax
  int v133; // edx
  double v134; // st7
  int v135; // edx
  double v136; // st7
  int v137; // eax
  double v138; // st6
  double v139; // st5
  double v140; // rt0
  double v141; // st5
  double v142; // rt1
  double v143; // rt2
  double v144; // st5
  double v145; // st6
  double v146; // rtt
  double v147; // st5
  double v148; // st7
  int v149; // eax
  unsigned int v150; // eax
  int v151; // ebx
  int v152; // edi
  int v153; // eax
  int v154; // eax
  unsigned int v155; // edi
  int v156; // ebp
  _DWORD *v157; // ebx
  float *v158; // ecx
  int v159; // edx
  int v160; // eax
  unsigned int v161; // [esp+18h] [ebp-20h]
  int v162; // [esp+1Ch] [ebp-1Ch]
  float v163; // [esp+20h] [ebp-18h]
  float v164; // [esp+24h] [ebp-14h] BYREF
  float v165; // [esp+28h] [ebp-10h]
  float v166; // [esp+2Ch] [ebp-Ch]
  int v167; // [esp+3Ch] [ebp+4h]
  int v168; // [esp+3Ch] [ebp+4h]
  int v169; // [esp+3Ch] [ebp+4h]
  int v170; // [esp+3Ch] [ebp+4h]

  v4 = this[2] - this[1];
  v5 = (_DWORD *)this[37];
  v6 = v4 / 12;
  v7 = this[36];
  v8 = ((int)v5 - v7) >> 2;
  if ( v4 / 12 <= v8 )
  {
    if ( v4 / 12 < v8 )
      this[37] = &v5[-(((int)v5 - v7 + -4 * v6) >> 2)];
  }
  else
  {
    v9 = v6 - v8;
    v161 = v6 - v8;
    if ( v6 != v8 )
    {
      if ( v7 )
        v10 = (this[38] - v7) >> 2;
      else
        v10 = 0;
      v11 = v9 + v8;
      if ( v10 < v11 )
      {
        v12 = 2 * v11;
        v162 = ((int)v5 - v7) >> 2;
        if ( v7 )
          v13 = (this[38] - v7) >> 2;
        else
          v13 = 0;
        if ( v13 < v12 )
        {
          v14 = v12;
          v15 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  4 * v12,
                  289);
          v16 = (_DWORD *)this[37];
          v17 = (_DWORD *)v15;
          v18 = (_DWORD *)this[36];
          v19 = v17;
          if ( v18 != v16 )
          {
            do
              *v19++ = *v18++;
            while ( v18 != v16 );
            v9 = v161;
          }
          if ( this[36] )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[36]);
          v20 = (this[37] - this[36]) >> 2;
          this[38] = &v17[v14];
          this[37] = &v17[v20];
          this[36] = v17;
        }
        v5 = (_DWORD *)(this[36] + 4 * v162);
      }
      v21 = (_DWORD *)this[37];
      v22 = 4 * v9;
      v23 = v5;
      if ( v5 != v21 )
      {
        do
        {
          v23[v9] = *v23;
          ++v23;
        }
        while ( v23 != v21 );
        v9 = v161;
      }
      if ( v9 )
        memset(v5, 0, 4 * v9);
      this[37] += v22;
    }
  }
  v24 = this[36];
  if ( v24 == this[37] )
  {
    if ( v24 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[36]);
    this[36] = 0;
    this[37] = 0;
    this[38] = 0;
  }
  v25 = this[37];
  if ( this[38] > v25 )
  {
    v26 = this[36];
    v27 = (int)(v25 - v26) >> 2;
    v28 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            v26,
            4 * ((this[37] - v26) >> 2));
    this[36] = v28;
    v29 = v28 + 4 * v27;
    this[37] = v29;
    this[38] = v29;
  }
  if ( a2 )
  {
    v79 = 0.0;
    v80 = 0.0;
    v81 = 0.0;
    v82 = 0;
    v83 = (this[2] - this[1]) / 12 == 0;
    v164 = 0.0;
    v165 = 0.0;
    v166 = 0.0;
    v168 = 0;
    if ( !v83 )
    {
      while ( 1 )
      {
        if ( LODWORD(v81) <= LODWORD(v80) )
        {
          v84 = 2 * ((LODWORD(v80) - LODWORD(v79)) >> 2) + 2;
          v85 = v79 == 0.0 ? 0 : (LODWORD(v81) - LODWORD(v79)) >> 2;
          if ( v85 < v84 )
          {
            v86 = 4 * v84;
            *(float *)&v87 = COERCE_FLOAT(
                               (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                                 dword_100580A0,
                                 4 * v84,
                                 289));
            v88 = v164;
            v89 = *(float *)&v87;
            v90 = v165;
            v91 = v89;
            if ( LODWORD(v164) != LODWORD(v165) )
            {
              do
              {
                *(_DWORD *)LODWORD(v91) = *(_DWORD *)LODWORD(v88);
                LODWORD(v88) += 4;
                LODWORD(v91) += 4;
              }
              while ( LODWORD(v88) != LODWORD(v90) );
              v90 = v165;
              v88 = v164;
              v82 = v168;
            }
            if ( v88 != 0.0 )
            {
              (*(void (__thiscall **)(int, float))(*(_DWORD *)dword_100580A0 + 20))(
                dword_100580A0,
                COERCE_FLOAT(LODWORD(v88)));
              v90 = v165;
              v88 = v164;
            }
            LODWORD(v80) = LODWORD(v89) + 4 * ((LODWORD(v90) - LODWORD(v88)) >> 2);
            LODWORD(v166) = LODWORD(v89) + v86;
            v165 = v80;
            v164 = v89;
          }
        }
        *(_DWORD *)LODWORD(v80) = v82;
        v79 = v164;
        ++v82;
        LODWORD(v80) = LODWORD(v165) + 4;
        v92 = (this[2] - this[1]) / 12;
        LODWORD(v165) += 4;
        v168 = v82;
        if ( v82 >= v92 )
          break;
        v81 = v166;
      }
    }
    sub_10008240(this, (int *)&v164, 0, ((LODWORD(v80) - LODWORD(v79)) >> 2) - 1);
    for ( i = 0; i < (this[2] - this[1]) / 12; ++i )
      *(_DWORD *)(this[36] + 4 * i) = -1;
    v94 = 0;
    if ( (this[2] - this[1]) / 12 )
    {
      v95 = 1;
      v169 = 0;
      do
      {
        v96 = *(_DWORD *)(v169 + LODWORD(v164));
        v97 = this[36];
        v83 = *(_DWORD *)(v97 + 4 * v96) == -1;
        v98 = (unsigned int *)(v97 + 4 * v96);
        if ( v83 )
        {
          *v98 = v94;
          v99 = 3 * v96;
          v100 = this[1];
          v101 = *(float *)(v100 + 4 * v99);
          v102 = v100 + 4 * v99;
          v103 = *(float *)(v102 + 4);
          v104 = v95;
          for ( j = *(float *)(v102 + 8); v104 < (this[2] - this[1]) / 12; ++v104 )
          {
            v106 = *(_DWORD *)(LODWORD(v164) + 4 * v104);
            v107 = this[1];
            if ( fabs(v101 - *(float *)(v107 + 12 * v106)) > a3 )
              break;
            v108 = (float *)(v107 + 12 * v106);
            v109 = v103 - v108[1];
            v163 = a3 * a3;
            if ( (v101 - *v108) * (v101 - *v108) + v109 * v109 + (j - v108[2]) * (j - v108[2]) <= v163 )
            {
              v110 = this[36];
              v83 = *(_DWORD *)(v110 + 4 * v106) == -1;
              v111 = (unsigned int *)(v110 + 4 * v106);
              if ( v83 )
                *v111 = v94;
            }
          }
          ++v94;
        }
        v169 += 4;
        ++v95;
      }
      while ( v95 - 1 < (unsigned int)((this[2] - this[1]) / 12) );
    }
    v112 = this[42];
    v113 = this[41];
    v114 = (v112 - v113) / 12;
    if ( v94 <= v114 )
    {
      if ( v94 < v114 )
        this[42] = v112 - 12 * ((int)(v112 - (v113 + 12 * v94)) / 12);
    }
    else
    {
      v115 = v94 - v114;
      v170 = v115;
      if ( v115 )
      {
        if ( v113 )
          v116 = (this[43] - v113) / 12;
        else
          v116 = 0;
        v117 = v115 + v114;
        if ( v116 < v117 )
        {
          v118 = (v112 - v113) / 12;
          v119 = 2 * v117;
          if ( v113 )
            v120 = (this[43] - v113) / 12;
          else
            v120 = 0;
          if ( v120 < v119 )
          {
            v121 = 12 * v119;
            v122 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                     dword_100580A0,
                     12 * v119,
                     289);
            v123 = (float *)this[42];
            v124 = v122;
            v125 = (float *)this[41];
            if ( v125 != v123 )
            {
              v126 = v124 + 8;
              do
              {
                v127 = *v125;
                v125 += 3;
                *(float *)(v126 - 8) = v127;
                v126 += 12;
                *(float *)(v126 - 16) = *(v125 - 2);
                *(float *)(v126 - 12) = *(v125 - 1);
              }
              while ( v125 != v123 );
            }
            if ( this[41] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[41]);
            v128 = (this[42] - this[41]) / 12;
            this[43] = v124 + v121;
            this[42] = v124 + 12 * v128;
            this[41] = v124;
          }
          v129 = 3 * v118;
          v115 = v170;
          v112 = this[41] + 4 * v129;
        }
        v130 = (float *)this[42];
        v131 = 12 * v115;
        v132 = (float *)v112;
        if ( (float *)v112 != v130 )
        {
          v133 = v131 + v112 + 8;
          do
          {
            v134 = *v132;
            v132 += 3;
            *(float *)(v133 - 8) = v134;
            v133 += 12;
            *(float *)(v133 - 16) = *(v132 - 2);
            *(float *)(v133 - 12) = *(v132 - 1);
          }
          while ( v132 != v130 );
        }
        v135 = v170;
        if ( v170 )
        {
          v136 = v166;
          v137 = v112 + 8;
          v138 = v165;
          v139 = v164;
          while ( 1 )
          {
            *(float *)(v137 - 8) = v139;
            --v135;
            v143 = v139;
            v144 = v138;
            v145 = v143;
            v137 += 12;
            *(float *)(v137 - 16) = v144;
            v146 = v144;
            v147 = v136;
            v148 = v146;
            *(float *)(v137 - 12) = v147;
            if ( !v135 )
              break;
            v140 = v147;
            v141 = v148;
            v136 = v140;
            v142 = v141;
            v139 = v145;
            v138 = v142;
          }
        }
        this[42] += v131;
      }
    }
    v149 = this[41];
    if ( v149 == this[42] )
    {
      if ( v149 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[41]);
      this[41] = 0;
      this[42] = 0;
      this[43] = 0;
    }
    v150 = this[42];
    if ( this[43] > v150 )
    {
      v151 = this[41];
      v152 = (int)(v150 - v151) / 12;
      v153 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
               dword_100580A0,
               v151,
               12 * ((this[42] - v151) / 12));
      this[41] = v153;
      v154 = v153 + 12 * v152;
      this[42] = v154;
      this[43] = v154;
    }
    v155 = 0;
    if ( (this[2] - this[1]) / 12 )
    {
      v156 = this[41];
      v157 = (_DWORD *)this[36];
      v158 = (float *)this[1];
      do
      {
        v159 = 3 * *v157;
        *(float *)(v156 + 4 * v159) = *v158;
        v160 = v156 + 4 * v159;
        ++v155;
        *(float *)(v160 + 4) = v158[1];
        v158 += 3;
        ++v157;
        *(float *)(v160 + 8) = *(v158 - 1);
      }
      while ( v155 < (this[2] - this[1]) / 12 );
    }
    result = LODWORD(v164);
    if ( v164 != 0.0 )
      return (*(int (__thiscall **)(int, float))(*(_DWORD *)dword_100580A0 + 20))(
               dword_100580A0,
               COERCE_FLOAT(LODWORD(v164)));
  }
  else
  {
    v30 = this[42];
    v31 = this[41];
    v32 = (this[2] - this[1]) / 12;
    v33 = (v30 - v31) / 12;
    if ( v32 <= v33 )
    {
      if ( v32 < v33 )
        this[42] = v30 - 12 * ((int)(v30 - (v31 + 12 * v32)) / 12);
    }
    else
    {
      v167 = v32 - v33;
      if ( v32 != v33 )
      {
        if ( v31 )
          v34 = (this[43] - v31) / 12;
        else
          v34 = 0;
        v35 = v32 - v33;
        if ( v34 < v32 )
        {
          v36 = (v30 - v31) / 12;
          if ( v31 )
            v37 = (this[43] - v31) / 12;
          else
            v37 = 0;
          if ( v37 < 2 * v32 )
          {
            v38 = 24 * v32;
            v39 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    24 * v32,
                    289);
            v40 = (float *)this[42];
            v41 = v39;
            v42 = (float *)this[41];
            if ( v42 != v40 )
            {
              v43 = v41 + 8;
              do
              {
                v44 = *v42;
                v42 += 3;
                *(float *)(v43 - 8) = v44;
                v43 += 12;
                *(float *)(v43 - 16) = *(v42 - 2);
                *(float *)(v43 - 12) = *(v42 - 1);
              }
              while ( v42 != v40 );
            }
            if ( this[41] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[41]);
            v45 = (this[42] - this[41]) / 12;
            this[43] = v41 + v38;
            this[42] = v41 + 12 * v45;
            this[41] = v41;
          }
          v35 = v167;
          v30 = this[41] + 12 * v36;
        }
        v46 = (float *)this[42];
        v47 = 12 * v35;
        v48 = (float *)v30;
        if ( (float *)v30 != v46 )
        {
          v49 = v47 + v30 + 8;
          do
          {
            v50 = *v48;
            v48 += 3;
            *(float *)(v49 - 8) = v50;
            v49 += 12;
            *(float *)(v49 - 16) = *(v48 - 2);
            *(float *)(v49 - 12) = *(v48 - 1);
          }
          while ( v48 != v46 );
        }
        v51 = v35;
        if ( v35 )
        {
          v52 = v166;
          v53 = v30 + 8;
          v54 = v165;
          v55 = v164;
          while ( 1 )
          {
            *(float *)(v53 - 8) = v55;
            --v51;
            v59 = v55;
            v60 = v54;
            v61 = v59;
            v53 += 12;
            *(float *)(v53 - 16) = v60;
            v62 = v60;
            v63 = v52;
            v64 = v62;
            *(float *)(v53 - 12) = v63;
            if ( !v51 )
              break;
            v56 = v63;
            v57 = v64;
            v52 = v56;
            v58 = v57;
            v55 = v61;
            v54 = v58;
          }
        }
        this[42] += v47;
      }
    }
    v65 = this[41];
    if ( v65 == this[42] )
    {
      if ( v65 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, this[41]);
      this[41] = 0;
      this[42] = 0;
      this[43] = 0;
    }
    v66 = this[42];
    if ( this[43] > v66 )
    {
      v67 = this[41];
      v68 = (int)(v66 - v67) / 12;
      v69 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
              dword_100580A0,
              v67,
              12 * ((this[42] - v67) / 12));
      this[41] = v69;
      v70 = v69 + 12 * v68;
      this[42] = v70;
      this[43] = v70;
    }
    v71 = 0;
    result = (this[2] - this[1]) / 12;
    if ( result )
    {
      v73 = 0;
      do
      {
        *(_DWORD *)(this[36] + 4 * v71) = v71;
        v74 = this[1];
        v75 = *(float *)(v74 + v73);
        v76 = this[41];
        v77 = v73 + v74;
        *(float *)(v76 + v73) = v75;
        v78 = v73 + v76;
        *(float *)(v78 + 4) = *(float *)(v77 + 4);
        ++v71;
        *(float *)(v78 + 8) = *(float *)(v77 + 8);
        v73 += 12;
        result = (this[2] - this[1]) / 12;
      }
      while ( v71 < result );
    }
  }
  return result;
}
