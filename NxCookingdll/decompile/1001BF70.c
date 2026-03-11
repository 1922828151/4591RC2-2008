/*
 * func-name: sub_1001BF70
 * func-address: 0x1001bf70
 * callers: 0x1001c870, 0x1001cb40, 0x1001cf60, 0x1001d230
 * callees: 0x100149b0
 */

int *__thiscall sub_1001BF70(int this, int a2)
{
  int v3; // ecx
  int *result; // eax
  int v5; // ebp
  int v6; // ebx
  int v7; // ebx
  int v8; // ecx
  int v9; // edx
  int v10; // edi
  _DWORD *v11; // eax
  int v12; // edx
  float *v13; // ecx
  float *v14; // edi
  float *v15; // eax
  double v16; // st7
  double v17; // st6
  double v18; // st5
  double v19; // st4
  double v20; // st3
  double v21; // st2
  double v22; // st1
  double v23; // st2
  double v24; // st4
  double v25; // rt0
  double v26; // st2
  double v27; // st3
  double v28; // st0
  double v29; // st1
  double v30; // st4
  double v31; // st2
  double v32; // st3
  double v33; // st1
  double v34; // st1
  double v35; // st1
  double v36; // st5
  double v37; // rt0
  double v38; // st1
  double v39; // st6
  double v40; // rt1
  double v41; // st2
  double v42; // st4
  double v43; // st7
  double v44; // st3
  double v45; // rt2
  double v46; // st4
  double v47; // st7
  double v48; // st6
  double v49; // rt1
  double v50; // st2
  double v51; // st1
  double v52; // st0
  double v53; // st3
  double v54; // rtt
  double v55; // st1
  double v56; // st4
  double v57; // st1
  double v58; // st3
  double v59; // st1
  double v60; // st5
  double v61; // rt2
  double v62; // st1
  double v63; // st6
  double v64; // rtt
  double v65; // st2
  double v66; // st4
  double v67; // st7
  double v68; // st3
  _DWORD *v69; // edi
  float *v70; // edi
  _DWORD *v71; // eax
  double v72; // st7
  double v73; // st5
  double v74; // st6
  double v75; // st7
  long double v76; // st7
  int i; // eax
  int v78; // ecx
  int v79; // edx
  int v80; // eax
  int v81; // edi
  _DWORD *v82; // eax
  int v83; // edx
  float *v84; // ecx
  float *v85; // edi
  float *v86; // eax
  double v87; // st7
  double v88; // st6
  double v89; // st5
  double v90; // st4
  double v91; // st3
  double v92; // st2
  double v93; // rt2
  double v94; // st2
  double v95; // st4
  double v96; // st3
  double v97; // st2
  double v98; // st0
  double v99; // st1
  double v100; // st3
  double v101; // st2
  double v102; // st4
  double v103; // st1
  double v104; // st1
  double v105; // st1
  double v106; // st5
  double v107; // rt2
  double v108; // st1
  double v109; // st6
  double v110; // rtt
  double v111; // st2
  double v112; // st3
  double v113; // st4
  double v114; // st7
  double v115; // st3
  double v116; // rt1
  double v117; // st4
  double v118; // st7
  double v119; // st6
  double v120; // rt0
  double v121; // st2
  double v122; // st1
  double v123; // st0
  double v124; // st4
  double v125; // rt2
  double v126; // st1
  double v127; // st3
  double v128; // st1
  double v129; // st4
  double v130; // st1
  double v131; // st5
  double v132; // rt1
  double v133; // st1
  double v134; // st6
  double v135; // st7
  double v136; // st3
  _DWORD *v137; // edi
  float *v138; // edi
  _DWORD *v139; // eax
  double v140; // st7
  double v141; // st5
  double v142; // st6
  double v143; // st7
  long double v144; // st7
  float v145; // [esp+Ch] [ebp-5Ch]
  float v146; // [esp+Ch] [ebp-5Ch]
  int *v147; // [esp+10h] [ebp-58h]
  int v148; // [esp+10h] [ebp-58h]
  float v149; // [esp+14h] [ebp-54h]
  float v150; // [esp+14h] [ebp-54h]
  int v151; // [esp+18h] [ebp-50h]
  float v152; // [esp+20h] [ebp-48h]
  float v153; // [esp+20h] [ebp-48h]
  float v154; // [esp+24h] [ebp-44h]
  float v155; // [esp+24h] [ebp-44h]
  float v156; // [esp+28h] [ebp-40h]
  float v157; // [esp+28h] [ebp-40h]
  float v158; // [esp+2Ch] [ebp-3Ch]
  float v159; // [esp+2Ch] [ebp-3Ch]
  float v160; // [esp+30h] [ebp-38h]
  float v161; // [esp+30h] [ebp-38h]
  float v162; // [esp+34h] [ebp-34h]
  float v163; // [esp+34h] [ebp-34h]
  float v164; // [esp+38h] [ebp-30h]
  float v165; // [esp+38h] [ebp-30h]
  float v166; // [esp+3Ch] [ebp-2Ch]
  float v167; // [esp+3Ch] [ebp-2Ch]
  float v168; // [esp+40h] [ebp-28h]
  float v169; // [esp+40h] [ebp-28h]
  float v170; // [esp+44h] [ebp-24h]
  float v171; // [esp+4Ch] [ebp-1Ch]
  float v172; // [esp+50h] [ebp-18h]
  float v173; // [esp+58h] [ebp-10h]
  float v174; // [esp+64h] [ebp-4h]
  float v175; // [esp+64h] [ebp-4h]
  float v176; // [esp+6Ch] [ebp+4h]
  float v177; // [esp+6Ch] [ebp+4h]
  float v178; // [esp+6Ch] [ebp+4h]
  float v179; // [esp+6Ch] [ebp+4h]
  float v180; // [esp+6Ch] [ebp+4h]
  float v181; // [esp+6Ch] [ebp+4h]

  v3 = *(_DWORD *)(this + 8);
  result = *(int **)(v3 + 32);
  v5 = (*(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * a2) & 0xF) + 1;
  v6 = *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * a2) >> 4;
  if ( !result )
  {
    if ( (*(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * a2) & 0xF) == 0xFFFFFFFF )
      return result;
    for ( i = 12 * v6; ; i = v151 )
    {
      v78 = *(_DWORD *)(this + 12);
      v79 = i;
      v151 = i + 12;
      v80 = *(_DWORD *)(v78 + 16);
      v81 = *(_DWORD *)(v80 + v79 + 4);
      v82 = (_DWORD *)(v79 + v80);
      v83 = *(_DWORD *)(v78 + 20);
      v84 = (float *)(v83 + 12 * *v82);
      v85 = (float *)(v83 + 12 * v81);
      v86 = (float *)(v83 + 12 * v82[2]);
      ++*(_DWORD *)(this + 100);
      v87 = *v85 - *v84;
      v148 = v6++;
      v88 = v85[1] - v84[1];
      --v5;
      v89 = v85[2] - v84[2];
      v90 = *v86 - *v84;
      v153 = v90;
      v91 = v86[1] - v84[1];
      v155 = v91;
      v92 = v86[2] - v84[2];
      v157 = v92;
      v170 = v92 * *(float *)(this + 32) - v91 * *(float *)(this + 36);
      v93 = v90 * *(float *)(this + 36) - v92 * *(float *)(this + 28);
      v94 = v90;
      v95 = v93;
      v96 = v91 * *(float *)(this + 28) - v94 * *(float *)(this + 32);
      v97 = v96 * v89 + v93 * v88 + v170 * v87;
      v146 = v97;
      if ( *(_BYTE *)(this + 141) )
      {
        if ( v97 < 0.000001 )
          goto LABEL_63;
        v98 = *(float *)(this + 24) - v84[2];
        v175 = v98;
        v99 = v96 * v98;
        v100 = *(float *)(this + 20) - v84[1];
        v101 = v95 * v100 + v99 + v170 * (*(float *)(this + 16) - *v84);
        v102 = *(float *)(this + 16) - *v84;
        *(float *)(this + 84) = v101;
        v103 = -*(float *)(this + 136);
        v179 = v103;
        if ( v103 > v101 )
          goto LABEL_63;
        v104 = *(float *)(this + 136) + v146;
        v150 = v104;
        if ( v104 < v101 )
          goto LABEL_63;
        v105 = v100 * v89 - v175 * v88;
        v106 = v175 * v87 - v89 * v102;
        v107 = v105;
        v108 = v88;
        v109 = v107;
        v110 = v101;
        v111 = v100;
        v112 = v102 * v108;
        v113 = v110;
        v114 = v112 - v87 * v111;
        v115 = *(float *)(this + 36) * v114 + *(float *)(this + 32) * v106 + *(float *)(this + 28) * v107;
        *(float *)(this + 88) = v115;
        if ( v179 > v115 )
          goto LABEL_63;
        if ( v115 + v113 > v150 )
          goto LABEL_63;
        v116 = v113;
        v117 = v114;
        v118 = v116;
        v119 = v117 * v157 + v106 * v155 + v109 * v153;
        *(float *)(this + 80) = v119;
        if ( *(int *)(this + 80) < 0 )
          goto LABEL_63;
        v120 = 1.0 / v146;
        *(float *)(this + 80) = v119 * v120;
        *(float *)(this + 84) = v118 * v120;
        *(float *)(this + 88) = v120 * *(float *)(this + 88);
      }
      else
      {
        if ( v97 > -0.000001 && v97 < 0.000001 )
          goto LABEL_63;
        v180 = 1.0 / v97;
        v121 = *(float *)(this + 16) - *v84;
        v122 = *(float *)(this + 20) - v84[1];
        v123 = *(float *)(this + 24) - v84[2];
        v173 = v123;
        v124 = v95 * v122;
        v125 = v122;
        v126 = v96 * v123;
        v127 = v125;
        v128 = (v124 + v126 + v170 * v121) * v180;
        v129 = v180;
        v181 = v128;
        *(float *)(this + 84) = v128;
        if ( *(_DWORD *)(this + 84) > 0x3F800000u )
          goto LABEL_63;
        v130 = v127 * v89 - v173 * v88;
        v131 = v173 * v87 - v89 * v121;
        v132 = v130;
        v133 = v88;
        v134 = v132;
        v135 = v121 * v133 - v87 * v127;
        v136 = (*(float *)(this + 36) * v135 + *(float *)(this + 32) * v131 + v132 * *(float *)(this + 28)) * v129;
        *(float *)(this + 88) = v136;
        if ( (*(_DWORD *)(this + 88) & 0x80000000) != 0 )
          goto LABEL_63;
        if ( v136 + v181 > 1.0 )
          goto LABEL_63;
        *(float *)(this + 80) = v129 * (v135 * v157 + v131 * v155 + v134 * v153);
        if ( (*(_DWORD *)(this + 80) & 0x80000000) != 0 )
          goto LABEL_63;
      }
      if ( *(_DWORD *)(this + 80) < *(_DWORD *)(this + 132) )
      {
        ++*(_DWORD *)(this + 104);
        v137 = *(_DWORD **)(this + 92);
        *(_DWORD *)(this + 4) |= 4u;
        *(_DWORD *)(this + 76) = v148;
        if ( v137 )
        {
          if ( *(_BYTE *)(this + 140) && (v137[1] & 0xFFFFFFFC) != 0 )
          {
            v138 = (float *)v137[2];
            if ( v138 && v138[1] > (double)*(float *)(this + 80) )
            {
              *(_DWORD *)v138 = v148;
              v138[1] = *(float *)(this + 80);
              v138[2] = *(float *)(this + 84);
              v138[3] = *(float *)(this + 88);
            }
          }
          else if ( this != -76 )
          {
            if ( (unsigned int)(v137[1] + 4) > *v137 )
              sub_100149B0(v137, 4);
            v139 = (_DWORD *)(v137[2] + 4 * v137[1]);
            *v139 = *(_DWORD *)(this + 76);
            v139[1] = *(_DWORD *)(this + 80);
            v139[2] = *(_DWORD *)(this + 84);
            v139[3] = *(_DWORD *)(this + 88);
            v137[1] += 4;
          }
        }
        v140 = *(float *)(this + 80);
        *(float *)(this + 132) = *(float *)(this + 80);
        v165 = *(float *)(this + 28) * 0.5 * v140;
        v141 = *(float *)(this + 32) * 0.5;
        v142 = 0.5 * *(float *)(this + 36);
        *(float *)(this + 52) = v165;
        v167 = v141 * v140;
        *(float *)(this + 56) = v167;
        v169 = v140 * v142;
        *(float *)(this + 60) = v169;
        v159 = *(float *)(this + 52) + *(float *)(this + 16);
        v161 = *(float *)(this + 20) + *(float *)(this + 56);
        v143 = *(float *)(this + 24) + *(float *)(this + 60);
        *(float *)(this + 64) = v159;
        *(float *)(this + 68) = v161;
        v163 = v143;
        v144 = *(float *)(this + 52);
        *(float *)(this + 72) = v163;
        *(float *)(this + 40) = fabs(v144);
        *(float *)(this + 44) = fabs(*(float *)(this + 56));
        *(float *)(this + 48) = fabs(*(float *)(this + 60));
      }
LABEL_63:
      result = (int *)(*(_DWORD *)(this + 4) & 5);
      if ( (_BYTE)result == 5 || !v5 )
        return result;
    }
  }
  result += v6;
  if ( (*(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * a2) & 0xF) != 0xFFFFFFFF )
  {
    while ( 1 )
    {
      v7 = *result;
      v8 = *(_DWORD *)(this + 12);
      v9 = *(_DWORD *)(v8 + 16);
      v147 = result + 1;
      v10 = *(_DWORD *)(v9 + 12 * *result + 4);
      v11 = (_DWORD *)(v9 + 12 * *result);
      v12 = *(_DWORD *)(v8 + 20);
      v13 = (float *)(v12 + 12 * *v11);
      v14 = (float *)(v12 + 12 * v10);
      v15 = (float *)(v12 + 12 * v11[2]);
      ++*(_DWORD *)(this + 100);
      v16 = *v14 - *v13;
      --v5;
      v17 = v14[1] - v13[1];
      v18 = v14[2] - v13[2];
      v19 = *v15 - *v13;
      v152 = v19;
      v20 = v15[1] - v13[1];
      v154 = v20;
      v21 = v15[2] - v13[2];
      v156 = v21;
      v22 = v21 * *(float *)(this + 32) - v20 * *(float *)(this + 36);
      v172 = v22;
      v23 = v19 * *(float *)(this + 36) - v21 * *(float *)(this + 28);
      v24 = v20 * *(float *)(this + 28) - v19 * *(float *)(this + 32);
      v25 = v23;
      v26 = v24 * v18 + v23 * v17 + v22 * v16;
      v27 = v25;
      v145 = v26;
      if ( *(_BYTE *)(this + 141) )
      {
        if ( v26 < 0.000001 )
          goto LABEL_31;
        v28 = *(float *)(this + 24) - v13[2];
        v171 = v28;
        v29 = v24 * v28;
        v30 = *(float *)(this + 20) - v13[1];
        v31 = v27 * v30 + v29 + v172 * (*(float *)(this + 16) - *v13);
        v32 = *(float *)(this + 16) - *v13;
        *(float *)(this + 84) = v31;
        v33 = -*(float *)(this + 136);
        v176 = v33;
        if ( v33 > v31 )
          goto LABEL_31;
        v34 = *(float *)(this + 136) + v145;
        v149 = v34;
        if ( v34 < v31 )
          goto LABEL_31;
        v35 = v30 * v18 - v171 * v17;
        v36 = v171 * v16 - v18 * v32;
        v37 = v35;
        v38 = v17;
        v39 = v37;
        v40 = v31;
        v41 = v30;
        v42 = v40;
        v43 = v32 * v38 - v16 * v41;
        v44 = *(float *)(this + 36) * v43 + *(float *)(this + 32) * v36 + *(float *)(this + 28) * v37;
        *(float *)(this + 88) = v44;
        if ( v176 > v44 )
          goto LABEL_31;
        if ( v44 + v42 > v149 )
          goto LABEL_31;
        v45 = v42;
        v46 = v43;
        v47 = v45;
        v48 = v46 * v156 + v36 * v154 + v39 * v152;
        *(float *)(this + 80) = v48;
        if ( *(int *)(this + 80) < 0 )
          goto LABEL_31;
        v49 = 1.0 / v145;
        *(float *)(this + 80) = v48 * v49;
        *(float *)(this + 84) = v47 * v49;
        *(float *)(this + 88) = v49 * *(float *)(this + 88);
      }
      else
      {
        if ( v26 > -0.000001 && v26 < 0.000001 )
          goto LABEL_31;
        v177 = 1.0 / v26;
        v50 = *(float *)(this + 16) - *v13;
        v51 = *(float *)(this + 20) - v13[1];
        v52 = *(float *)(this + 24) - v13[2];
        v174 = v52;
        v53 = v27 * v51;
        v54 = v51;
        v55 = v24 * v52;
        v56 = v54;
        v57 = (v53 + v55 + v172 * v50) * v177;
        v58 = v177;
        v178 = v57;
        *(float *)(this + 84) = v57;
        if ( *(_DWORD *)(this + 84) > 0x3F800000u )
          goto LABEL_31;
        v59 = v56 * v18 - v174 * v17;
        v60 = v174 * v16 - v18 * v50;
        v61 = v59;
        v62 = v17;
        v63 = v61;
        v64 = v50 * v62;
        v65 = v56;
        v66 = v58;
        v67 = v64 - v16 * v65;
        v68 = (*(float *)(this + 36) * v67 + *(float *)(this + 32) * v60 + *(float *)(this + 28) * v61) * v58;
        *(float *)(this + 88) = v68;
        if ( (*(_DWORD *)(this + 88) & 0x80000000) != 0 )
          goto LABEL_31;
        if ( v68 + v178 > 1.0 )
          goto LABEL_31;
        *(float *)(this + 80) = v66 * (v67 * v156 + v60 * v154 + v63 * v152);
        if ( (*(_DWORD *)(this + 80) & 0x80000000) != 0 )
          goto LABEL_31;
      }
      if ( *(_DWORD *)(this + 80) < *(_DWORD *)(this + 132) )
      {
        v69 = *(_DWORD **)(this + 92);
        ++*(_DWORD *)(this + 104);
        *(_DWORD *)(this + 4) |= 4u;
        *(_DWORD *)(this + 76) = v7;
        if ( v69 )
        {
          if ( *(_BYTE *)(this + 140) && (v69[1] & 0xFFFFFFFC) != 0 )
          {
            v70 = (float *)v69[2];
            if ( v70 && v70[1] > (double)*(float *)(this + 80) )
            {
              *(_DWORD *)v70 = v7;
              v70[1] = *(float *)(this + 80);
              v70[2] = *(float *)(this + 84);
              v70[3] = *(float *)(this + 88);
            }
          }
          else if ( this != -76 )
          {
            if ( (unsigned int)(v69[1] + 4) > *v69 )
              sub_100149B0(v69, 4);
            v71 = (_DWORD *)(v69[2] + 4 * v69[1]);
            *v71 = *(_DWORD *)(this + 76);
            v71[1] = *(_DWORD *)(this + 80);
            v71[2] = *(_DWORD *)(this + 84);
            v71[3] = *(_DWORD *)(this + 88);
            v69[1] += 4;
          }
        }
        v72 = *(float *)(this + 80);
        *(float *)(this + 132) = *(float *)(this + 80);
        v158 = *(float *)(this + 28) * 0.5 * v72;
        v73 = *(float *)(this + 32) * 0.5;
        v74 = 0.5 * *(float *)(this + 36);
        *(float *)(this + 52) = v158;
        v160 = v73 * v72;
        *(float *)(this + 56) = v160;
        v162 = v72 * v74;
        *(float *)(this + 60) = v162;
        v164 = *(float *)(this + 16) + *(float *)(this + 52);
        v166 = *(float *)(this + 20) + *(float *)(this + 56);
        v75 = *(float *)(this + 24) + *(float *)(this + 60);
        *(float *)(this + 64) = v164;
        *(float *)(this + 68) = v166;
        v168 = v75;
        v76 = *(float *)(this + 52);
        *(float *)(this + 72) = v168;
        *(float *)(this + 40) = fabs(v76);
        *(float *)(this + 44) = fabs(*(float *)(this + 56));
        *(float *)(this + 48) = fabs(*(float *)(this + 60));
      }
LABEL_31:
      result = (int *)(*(_DWORD *)(this + 4) & 5);
      if ( (_BYTE)result == 5 || !v5 )
        return result;
      result = v147;
    }
  }
  return result;
}
