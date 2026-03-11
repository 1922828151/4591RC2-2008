/*
 * func-name: sub_1001ABC0
 * func-address: 0x1001abc0
 * callers: 0x1001d650
 * callees: 0x100149b0, 0x10035300
 */

int __thiscall sub_1001ABC0(int this, float *a2, float *a3, _DWORD *a4)
{
  int v5; // eax
  double v7; // st7
  double v8; // st6
  double v9; // st6
  double v10; // st7
  double v11; // st6
  double v12; // st5
  double v13; // st4
  double v14; // st3
  double v15; // st2
  double v16; // rt0
  double v17; // st6
  double v18; // st5
  float v19; // edx
  int v20; // eax
  int v21; // ebx
  int v22; // ecx
  _DWORD *v23; // eax
  int v24; // edx
  float *v25; // ecx
  float *v26; // edi
  float *v27; // eax
  double v28; // st7
  double v29; // st6
  double v30; // st5
  double v31; // st4
  double v32; // st3
  double v33; // st2
  double v34; // st1
  double v35; // rt2
  double v36; // st1
  double v37; // st2
  double v38; // rtt
  double v39; // st1
  double v40; // st3
  double v41; // st4
  double v42; // st1
  double v43; // st1
  double v44; // st0
  double v45; // st3
  double v46; // rt1
  double v47; // st1
  double v48; // st4
  double v49; // st2
  double v50; // st3
  double v51; // st1
  bool v52; // c0
  bool v53; // c3
  double v54; // st2
  double v55; // st1
  double v56; // st1
  double v57; // st5
  double v58; // rt0
  double v59; // st1
  double v60; // st6
  double v61; // st7
  double v62; // st3
  double v63; // st6
  double v64; // rt2
  double v65; // rt0
  double v66; // st2
  double v67; // st3
  double v68; // st1
  double v69; // st4
  double v70; // st1
  double v71; // st5
  double v72; // rt0
  double v73; // st1
  double v74; // st6
  double v75; // st7
  double v76; // st3
  _DWORD *v77; // edi
  float *v78; // ebp
  float *v79; // edi
  int result; // eax
  _DWORD *v81; // eax
  int v82; // ebx
  int v83; // ecx
  int v84; // edx
  int v85; // edi
  _DWORD *v86; // eax
  int v87; // edx
  float *v88; // ecx
  float *v89; // edi
  float *v90; // eax
  double v91; // st7
  double v92; // st6
  double v93; // st5
  double v94; // st4
  double v95; // st3
  double v96; // st2
  double v97; // st1
  double v98; // st2
  double v99; // st4
  double v100; // rt0
  double v101; // st2
  double v102; // st3
  double v103; // st1
  double v104; // st0
  double v105; // st3
  double v106; // rt1
  double v107; // st1
  double v108; // st4
  double v109; // st2
  double v110; // st3
  double v111; // st1
  double v112; // st0
  bool v113; // c0
  double v114; // st2
  double v115; // st1
  double v116; // st5
  double v117; // rt0
  double v118; // st1
  double v119; // st6
  double v120; // st7
  double v121; // st3
  double v122; // st6
  double v123; // st4
  double v124; // st2
  double v125; // st1
  double v126; // st0
  double v127; // st3
  double v128; // rt0
  double v129; // st1
  double v130; // st4
  double v131; // st1
  double v132; // st3
  double v133; // st1
  double v134; // st5
  double v135; // rtt
  double v136; // st1
  double v137; // st6
  double v138; // rt0
  double v139; // st2
  double v140; // st4
  double v141; // st7
  double v142; // st3
  _DWORD *v143; // edi
  float *v144; // ebp
  float *v145; // edi
  _DWORD *v146; // eax
  double v147; // st5
  double v148; // st6
  double v149; // st7
  double v150; // st7
  long double v151; // st7
  long double v152; // st7
  float v153; // [esp+10h] [ebp-94h]
  float v154; // [esp+10h] [ebp-94h]
  float v155; // [esp+10h] [ebp-94h]
  float v156; // [esp+10h] [ebp-94h]
  float v157; // [esp+10h] [ebp-94h]
  float v158; // [esp+10h] [ebp-94h]
  float v159; // [esp+14h] [ebp-90h]
  float v160; // [esp+14h] [ebp-90h]
  float v161; // [esp+14h] [ebp-90h]
  float v162; // [esp+14h] [ebp-90h]
  float v163; // [esp+14h] [ebp-90h]
  float v164; // [esp+14h] [ebp-90h]
  float v165; // [esp+18h] [ebp-8Ch]
  float v166; // [esp+18h] [ebp-8Ch]
  float v167; // [esp+18h] [ebp-8Ch]
  float v168; // [esp+18h] [ebp-8Ch]
  float v169; // [esp+18h] [ebp-8Ch]
  float v170; // [esp+18h] [ebp-8Ch]
  float v171; // [esp+1Ch] [ebp-88h]
  float v172; // [esp+1Ch] [ebp-88h]
  float v173; // [esp+1Ch] [ebp-88h]
  float v174; // [esp+1Ch] [ebp-88h]
  float v175; // [esp+1Ch] [ebp-88h]
  float v176; // [esp+1Ch] [ebp-88h]
  float v177; // [esp+20h] [ebp-84h]
  float v178; // [esp+20h] [ebp-84h]
  float v179; // [esp+24h] [ebp-80h]
  float v180; // [esp+24h] [ebp-80h]
  float v181; // [esp+30h] [ebp-74h]
  float v182; // [esp+30h] [ebp-74h]
  float v183; // [esp+30h] [ebp-74h]
  float v184; // [esp+30h] [ebp-74h]
  float v185; // [esp+34h] [ebp-70h]
  float v186; // [esp+34h] [ebp-70h]
  float v187; // [esp+38h] [ebp-6Ch]
  float v188[2]; // [esp+40h] [ebp-64h] BYREF
  float v189; // [esp+48h] [ebp-5Ch]
  float v190; // [esp+4Ch] [ebp-58h]
  float v191; // [esp+50h] [ebp-54h]
  float v192; // [esp+54h] [ebp-50h]
  float v193; // [esp+58h] [ebp-4Ch]
  float v194; // [esp+5Ch] [ebp-48h]
  float v195; // [esp+60h] [ebp-44h]
  float v196; // [esp+64h] [ebp-40h]
  float v197; // [esp+68h] [ebp-3Ch]
  float v198; // [esp+74h] [ebp-30h]
  float Src[9]; // [esp+80h] [ebp-24h] BYREF

  v5 = *(_DWORD *)(this + 92);
  *(_DWORD *)(this + 4) &= 0xFFFFFFF3;
  *(_DWORD *)(this + 96) = 0;
  *(_DWORD *)(this + 100) = 0;
  *(_DWORD *)(this + 104) = 0;
  if ( v5 && *(_DWORD *)(v5 + 4) )
    *(_DWORD *)(v5 + 4) = 0;
  if ( a3 )
  {
    Src[0] = *a3;
    Src[1] = a3[1];
    Src[2] = a3[2];
    Src[3] = a3[4];
    Src[4] = a3[5];
    Src[5] = a3[6];
    Src[6] = a3[8];
    Src[7] = a3[9];
    Src[8] = a3[10];
    memcpy_0(v188, Src, 0x24u);
    v153 = v188[1] * a2[4] + v189 * a2[5] + a2[3] * v188[0];
    v159 = v191 * a2[4] + v192 * a2[5] + a2[3] * v190;
    v7 = v194 * a2[4] + v195 * a2[5];
    v8 = a2[3];
    *(float *)(this + 28) = v153;
    v9 = v8 * v193;
    *(float *)(this + 32) = v159;
    v165 = v7 + v9;
    *(float *)(this + 36) = v165;
    v10 = *a3;
    v11 = a3[1];
    v12 = a3[2];
    v13 = -(v10 * a3[12] + v11 * a3[13] + a3[14] * v12);
    v14 = a3[4];
    v15 = a3[5];
    v196 = a3[6];
    v198 = -(a3[5] * a3[13] + a3[4] * a3[12] + a3[6] * a3[14]);
    v189 = a3[8];
    v193 = a3[9];
    v197 = a3[10];
    v154 = v13 + v10 * *a2 + v11 * a2[1] + v12 * a2[2];
    v16 = -(a3[9] * a3[13] + a3[10] * a3[14] + a3[12] * a3[8]);
    v160 = v15 * a2[1] + v14 * *a2 + v196 * a2[2] + v198;
    v17 = v193 * a2[1] + v189 * *a2;
    v18 = v197 * a2[2];
    *(float *)(this + 16) = v154;
    *(float *)(this + 20) = v160;
    v166 = v16 + v17 + v18;
    v19 = v166;
  }
  else
  {
    *(float *)(this + 28) = a2[3];
    *(float *)(this + 32) = a2[4];
    *(float *)(this + 36) = a2[5];
    *(float *)(this + 16) = *a2;
    *(float *)(this + 20) = a2[1];
    v19 = a2[2];
  }
  v20 = *(_DWORD *)(this + 8);
  *(float *)(this + 24) = v19;
  if ( !v20 || (*(_BYTE *)(v20 + 8) & 4) == 0 || (v21 = *(_DWORD *)(this + 4), (v21 & 0x10) != 0) )
  {
    v82 = *(_DWORD *)(this + 4);
    if ( (v82 & 2) == 0 || (v82 & 1) == 0 || !a4 || *a4 == -1 )
      goto LABEL_71;
    v83 = *(_DWORD *)(this + 12);
    v84 = *(_DWORD *)(v83 + 16);
    v85 = *(_DWORD *)(v84 + 12 * *a4 + 4);
    v86 = (_DWORD *)(v84 + 12 * *a4);
    v87 = *(_DWORD *)(v83 + 20);
    v88 = (float *)(v87 + 12 * *v86);
    v89 = (float *)(v87 + 12 * v85);
    v90 = (float *)(v87 + 12 * v86[2]);
    ++*(_DWORD *)(this + 100);
    v91 = *v89 - *v88;
    v92 = v89[1] - v88[1];
    v93 = v89[2] - v88[2];
    v94 = *v90 - *v88;
    v156 = v94;
    v95 = v90[1] - v88[1];
    v162 = v95;
    v96 = v90[2] - v88[2];
    v168 = v96;
    v97 = v96 * *(float *)(this + 32) - v95 * *(float *)(this + 36);
    v186 = v97;
    v98 = v94 * *(float *)(this + 36) - v96 * *(float *)(this + 28);
    v99 = v95 * *(float *)(this + 28) - v94 * *(float *)(this + 32);
    v100 = v98;
    v101 = v99 * v93 + v98 * v92 + v97 * v91;
    v102 = v100;
    v178 = v101;
    if ( *(_BYTE *)(this + 141) )
    {
      if ( v101 < 0.000001 )
        goto LABEL_70;
      v103 = *(float *)(this + 20) - v88[1];
      v104 = *(float *)(this + 24) - v88[2];
      v183 = v104;
      v105 = v102 * v103;
      v106 = v103;
      v107 = v99 * v104;
      v108 = v106;
      v109 = v105 + v107 + v186 * (*(float *)(this + 16) - *v88);
      v110 = *(float *)(this + 16) - *v88;
      v174 = v109;
      *(float *)(this + 84) = v109;
      v111 = -*(float *)(this + 136);
      if ( v111 > v109 )
        goto LABEL_70;
      v112 = v178 + *(float *)(this + 136);
      v113 = v112 < v109;
      v114 = v111;
      if ( v113 )
        goto LABEL_70;
      v115 = v108 * v93 - v183 * v92;
      v116 = v183 * v91 - v93 * v110;
      v117 = v115;
      v118 = v92;
      v119 = v117;
      v120 = v110 * v118 - v91 * v108;
      v121 = *(float *)(this + 36) * v120 + *(float *)(this + 32) * v116 + *(float *)(this + 28) * v117;
      *(float *)(this + 88) = v121;
      if ( v121 < v114 )
        goto LABEL_70;
      v180 = v112;
      if ( v121 + v174 > v180 )
        goto LABEL_70;
      v122 = v120 * v168 + v116 * v162 + v119 * v156;
      *(float *)(this + 80) = v122;
      if ( *(int *)(this + 80) < 0 )
        goto LABEL_70;
      v123 = 1.0 / v178;
      *(float *)(this + 80) = v122 * v123;
      *(float *)(this + 84) = v174 * v123;
      *(float *)(this + 88) = v123 * *(float *)(this + 88);
    }
    else
    {
      if ( v101 > -0.000001 && v101 < 0.000001 )
        goto LABEL_70;
      v175 = 1.0 / v101;
      v124 = *(float *)(this + 16) - *v88;
      v125 = *(float *)(this + 20) - v88[1];
      v126 = *(float *)(this + 24) - v88[2];
      v184 = v126;
      v127 = v102 * v125;
      v128 = v125;
      v129 = v99 * v126;
      v130 = v128;
      v131 = (v127 + v129 + v186 * v124) * v175;
      v132 = v175;
      v176 = v131;
      *(float *)(this + 84) = v131;
      if ( *(_DWORD *)(this + 84) > 0x3F800000u )
        goto LABEL_70;
      v133 = v130 * v93 - v184 * v92;
      v134 = v184 * v91 - v93 * v124;
      v135 = v133;
      v136 = v92;
      v137 = v135;
      v138 = v124 * v136;
      v139 = v130;
      v140 = v132;
      v141 = v138 - v91 * v139;
      v142 = (*(float *)(this + 36) * v141 + *(float *)(this + 32) * v134 + *(float *)(this + 28) * v135) * v132;
      *(float *)(this + 88) = v142;
      if ( (*(_DWORD *)(this + 88) & 0x80000000) != 0 )
        goto LABEL_70;
      if ( v142 + v176 > 1.0 )
        goto LABEL_70;
      *(float *)(this + 80) = v140 * (v141 * v168 + v134 * v162 + v137 * v156);
      if ( (*(_DWORD *)(this + 80) & 0x80000000) != 0 )
        goto LABEL_70;
    }
    if ( *(_DWORD *)(this + 80) < *(_DWORD *)(this + 132) )
    {
      ++*(_DWORD *)(this + 104);
      v143 = *(_DWORD **)(this + 92);
      *(_DWORD *)(this + 4) = v82 | 0xC;
      v144 = (float *)(this + 76);
      *(_DWORD *)(this + 76) = *a4;
      if ( v143 )
      {
        if ( *(_BYTE *)(this + 140) && (v143[1] & 0xFFFFFFFC) != 0 )
        {
          v145 = (float *)v143[2];
          if ( v145 && v145[1] > (double)*(float *)(this + 80) )
          {
            *v145 = *v144;
            v145[1] = *(float *)(this + 80);
            v145[2] = *(float *)(this + 84);
            v145[3] = *(float *)(this + 88);
          }
        }
        else if ( this != -76 )
        {
          if ( (unsigned int)(v143[1] + 4) > *v143 )
            sub_100149B0(v143, 4);
          v146 = (_DWORD *)(v143[2] + 4 * v143[1]);
          *v146 = *(_DWORD *)v144;
          v146[1] = *(_DWORD *)(this + 80);
          v146[2] = *(_DWORD *)(this + 84);
          v146[3] = *(_DWORD *)(this + 88);
          v143[1] += 4;
        }
      }
    }
LABEL_70:
    if ( (*(_BYTE *)(this + 4) & 4) != 0 )
      return 1;
LABEL_71:
    if ( *(_DWORD *)(this + 132) == 2139095039 )
    {
      result = 0;
      *(float *)(this + 40) = fabs(*(float *)(this + 28));
      *(float *)(this + 44) = fabs(*(float *)(this + 32));
      v152 = fabs(*(float *)(this + 36));
    }
    else
    {
      v147 = *(float *)(this + 32) * 0.5;
      v148 = 0.5 * *(float *)(this + 36);
      v149 = *(float *)(this + 132);
      v157 = *(float *)(this + 28) * 0.5 * v149;
      *(float *)(this + 52) = v157;
      v163 = v147 * v149;
      *(float *)(this + 56) = v163;
      v169 = v149 * v148;
      *(float *)(this + 60) = v169;
      v158 = *(float *)(this + 16) + *(float *)(this + 52);
      v164 = *(float *)(this + 20) + *(float *)(this + 56);
      v150 = *(float *)(this + 24) + *(float *)(this + 60);
      *(float *)(this + 64) = v158;
      *(float *)(this + 68) = v164;
      result = 0;
      v170 = v150;
      v151 = *(float *)(this + 52);
      *(float *)(this + 72) = v170;
      *(float *)(this + 40) = fabs(v151);
      *(float *)(this + 44) = fabs(*(float *)(this + 56));
      v152 = fabs(*(float *)(this + 60));
    }
    *(float *)(this + 48) = v152;
    return result;
  }
  v22 = *(_DWORD *)(this + 12);
  v23 = *(_DWORD **)(v22 + 16);
  v24 = *(_DWORD *)(v22 + 20);
  v25 = (float *)(v24 + 12 * *v23);
  v26 = (float *)(v24 + 12 * v23[1]);
  v27 = (float *)(v24 + 12 * v23[2]);
  ++*(_DWORD *)(this + 100);
  v28 = *v26 - *v25;
  v29 = v26[1] - v25[1];
  v30 = v26[2] - v25[2];
  v31 = *v27 - *v25;
  v155 = v31;
  v32 = v27[1] - v25[1];
  v161 = v32;
  v33 = v27[2] - v25[2];
  v167 = v33;
  v34 = v33 * *(float *)(this + 32) - v32 * *(float *)(this + 36);
  v185 = v34;
  v35 = v34;
  v36 = v31 * *(float *)(this + 36) - v33 * *(float *)(this + 28);
  v37 = v35;
  v187 = v36;
  v38 = v36;
  v39 = v32;
  v40 = v38;
  v41 = v39 * *(float *)(this + 28) - v31 * *(float *)(this + 32);
  v42 = v41 * v30 + v38 * v29 + v35 * v28;
  v177 = v42;
  if ( *(_BYTE *)(this + 141) )
  {
    if ( v42 < 0.000001 )
      return 1;
    v43 = *(float *)(this + 20) - v25[1];
    v44 = *(float *)(this + 24) - v25[2];
    v181 = v44;
    v45 = v40 * v43;
    v46 = v43;
    v47 = v41 * v44;
    v48 = v46;
    v49 = v45 + v47 + v185 * (*(float *)(this + 16) - *v25);
    v50 = *(float *)(this + 16) - *v25;
    v179 = v49;
    *(float *)(this + 84) = v49;
    v51 = -*(float *)(this + 136);
    v52 = v51 < v49;
    v53 = v51 == v49;
    v54 = v51;
    if ( v52 || v53 )
    {
      v55 = *(float *)(this + 136) + v177;
      v171 = v55;
      if ( v55 >= v179 )
      {
        v56 = v48 * v30 - v181 * v29;
        v57 = v181 * v28 - v30 * v50;
        v58 = v56;
        v59 = v29;
        v60 = v58;
        v61 = v50 * v59 - v28 * v48;
        v62 = *(float *)(this + 36) * v61 + *(float *)(this + 32) * v57 + *(float *)(this + 28) * v58;
        *(float *)(this + 88) = v62;
        if ( v62 < v54 )
          return 1;
        if ( v62 + v179 > v171 )
          return 1;
        v63 = v61 * v167 + v57 * v161 + v60 * v155;
        *(float *)(this + 80) = v63;
        if ( *(int *)(this + 80) < 0 )
          return 1;
        v64 = 1.0 / v177;
        *(float *)(this + 80) = v63 * v64;
        *(float *)(this + 84) = v179 * v64;
        *(float *)(this + 88) = v64 * *(float *)(this + 88);
        goto LABEL_24;
      }
    }
    return 1;
  }
  if ( v42 > -0.000001 && v42 < 0.000001 )
    return 1;
  v65 = v37;
  v172 = 1.0 / v42;
  v66 = *(float *)(this + 16) - *v25;
  v182 = *(float *)(this + 24) - v25[2];
  v67 = *(float *)(this + 20) - v25[1];
  v68 = (v41 * v182 + v65 * v66 + v67 * v187) * v172;
  v69 = v172;
  v173 = v68;
  *(float *)(this + 84) = v68;
  if ( *(_DWORD *)(this + 84) > 0x3F800000u )
    return 1;
  v70 = v67 * v30 - v182 * v29;
  v71 = v182 * v28 - v30 * v66;
  v72 = v70;
  v73 = v29;
  v74 = v72;
  v75 = v66 * v73 - v28 * v67;
  v76 = (*(float *)(this + 36) * v75 + *(float *)(this + 32) * v71 + *(float *)(this + 28) * v72) * v69;
  *(float *)(this + 88) = v76;
  if ( (*(_DWORD *)(this + 88) & 0x80000000) != 0 )
    return 1;
  if ( v76 + v173 > 1.0 )
    return 1;
  *(float *)(this + 80) = (v74 * v155 + v75 * v167 + v71 * v161) * v69;
  if ( (*(_DWORD *)(this + 80) & 0x80000000) != 0 )
    return 1;
LABEL_24:
  if ( *(_DWORD *)(this + 80) >= *(_DWORD *)(this + 132) )
    return 1;
  v77 = *(_DWORD **)(this + 92);
  ++*(_DWORD *)(this + 104);
  v78 = (float *)(this + 76);
  *(_DWORD *)(this + 4) = v21 | 4;
  *(_DWORD *)(this + 76) = 0;
  if ( !v77 )
    return 1;
  if ( *(_BYTE *)(this + 140) && (v77[1] & 0xFFFFFFFC) != 0 )
  {
    v79 = (float *)v77[2];
    if ( v79 && v79[1] > (double)*(float *)(this + 80) )
    {
      *v79 = *v78;
      v79[1] = *(float *)(this + 80);
      v79[2] = *(float *)(this + 84);
      v79[3] = *(float *)(this + 88);
      return 1;
    }
    return 1;
  }
  if ( this == -76 )
    return 1;
  if ( (unsigned int)(v77[1] + 4) > *v77 )
    sub_100149B0(v77, 4);
  v81 = (_DWORD *)(v77[2] + 4 * v77[1]);
  *v81 = *(_DWORD *)v78;
  v81[1] = *(_DWORD *)(this + 80);
  v81[2] = *(_DWORD *)(this + 84);
  v81[3] = *(_DWORD *)(this + 88);
  v77[1] += 4;
  return 1;
}
