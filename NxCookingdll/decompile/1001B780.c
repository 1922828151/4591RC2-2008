/*
 * func-name: sub_1001B780
 * func-address: 0x1001b780
 * callers: 0x1001c9c0, 0x1001cd20, 0x1001d0b0, 0x1001d400
 * callees: 0x100149b0
 */

unsigned int __thiscall sub_1001B780(int this, int a2)
{
  int v3; // eax
  int v4; // ecx
  unsigned int v5; // eax
  int v6; // ebp
  unsigned int result; // eax
  int v8; // ebx
  int v9; // ecx
  int v10; // edx
  int v11; // edi
  _DWORD *v12; // eax
  int v13; // edx
  float *v14; // ecx
  float *v15; // edi
  float *v16; // eax
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // rt1
  double v24; // st1
  double v25; // st4
  double v26; // st2
  double v27; // st3
  double v28; // st2
  double v29; // st1
  double v30; // st3
  double v31; // rtt
  double v32; // st2
  double v33; // st4
  double v34; // st1
  double v35; // st1
  double v36; // st1
  double v37; // st5
  double v38; // rt1
  double v39; // st1
  double v40; // st6
  double v41; // rt2
  double v42; // st2
  double v43; // st3
  double v44; // st4
  double v45; // st7
  double v46; // st3
  double v47; // st6
  double v48; // rtt
  double v49; // st2
  double v50; // st1
  double v51; // st3
  double v52; // st1
  double v53; // st4
  double v54; // st1
  double v55; // st5
  double v56; // rt0
  double v57; // st1
  double v58; // st6
  double v59; // st7
  double v60; // st3
  _DWORD *v61; // edi
  float *v62; // edi
  _DWORD *v63; // eax
  int i; // ecx
  int v65; // edx
  int v66; // ecx
  int v67; // eax
  int v68; // edi
  int *v69; // eax
  int v70; // edx
  int v71; // ecx
  int v72; // eax
  double v73; // st7
  int v74; // edi
  double v75; // st7
  float *v76; // ecx
  double v77; // st6
  float *v78; // eax
  double v79; // st5
  double v80; // st4
  double v81; // st3
  double v82; // st2
  double v83; // st1
  double v84; // st2
  double v85; // st4
  double v86; // st3
  double v87; // st2
  double v88; // st0
  double v89; // st1
  double v90; // st4
  double v91; // st2
  double v92; // st3
  double v93; // st1
  double v94; // st1
  double v95; // st1
  double v96; // st5
  double v97; // rt2
  double v98; // st1
  double v99; // st6
  double v100; // rtt
  double v101; // st2
  double v102; // st4
  double v103; // st7
  double v104; // st3
  double v105; // rt0
  double v106; // st4
  double v107; // st7
  double v108; // st6
  double v109; // rtt
  double v110; // st2
  double v111; // st1
  double v112; // st0
  double v113; // st3
  double v114; // rt1
  double v115; // st1
  double v116; // st4
  double v117; // st1
  double v118; // st3
  double v119; // st1
  double v120; // st5
  double v121; // rt0
  double v122; // st1
  double v123; // st6
  double v124; // rt1
  double v125; // st2
  double v126; // st4
  double v127; // st7
  double v128; // st3
  _DWORD *v129; // edi
  float *v130; // edi
  _DWORD *v131; // eax
  float v132; // [esp+10h] [ebp-44h]
  float v133; // [esp+10h] [ebp-44h]
  float v134; // [esp+14h] [ebp-40h]
  float v135; // [esp+14h] [ebp-40h]
  _DWORD *v136; // [esp+18h] [ebp-3Ch]
  int v137; // [esp+18h] [ebp-3Ch]
  float v138; // [esp+1Ch] [ebp-38h]
  float v139; // [esp+1Ch] [ebp-38h]
  float v140; // [esp+1Ch] [ebp-38h]
  _DWORD *v141; // [esp+1Ch] [ebp-38h]
  _DWORD *v142; // [esp+20h] [ebp-34h]
  float v143; // [esp+24h] [ebp-30h]
  float v144; // [esp+24h] [ebp-30h]
  float v145; // [esp+28h] [ebp-2Ch]
  float v146; // [esp+28h] [ebp-2Ch]
  float v147; // [esp+2Ch] [ebp-28h]
  float v148; // [esp+2Ch] [ebp-28h]
  float v149; // [esp+38h] [ebp-1Ch]
  float v150; // [esp+38h] [ebp-1Ch]
  float v151; // [esp+3Ch] [ebp-18h]
  float v152; // [esp+44h] [ebp-10h]
  float v153; // [esp+4Ch] [ebp-8h]
  float v154; // [esp+50h] [ebp-4h]
  float v155; // [esp+58h] [ebp+4h]
  float v156; // [esp+58h] [ebp+4h]
  float v157; // [esp+58h] [ebp+4h]

  v3 = *(_DWORD *)(this + 8);
  v4 = *(_DWORD *)(v3 + 32);
  v5 = *(_DWORD *)(*(_DWORD *)(v3 + 24) + 4 * a2);
  v6 = (v5 & 0xF) + 1;
  result = v5 >> 4;
  if ( !v4 )
  {
    if ( !v6 )
      return result;
    for ( i = 12 * result; ; i = v137 )
    {
      v65 = i;
      v142 = (_DWORD *)result;
      v137 = i + 12;
      v66 = *(_DWORD *)(this + 12);
      v141 = (_DWORD *)(result + 1);
      v67 = *(_DWORD *)(v66 + 16);
      v68 = *(_DWORD *)(v67 + v65 + 4);
      v69 = (int *)(v65 + v67);
      v70 = *(_DWORD *)(v66 + 20);
      v71 = *v69;
      v72 = v69[2];
      ++*(_DWORD *)(this + 100);
      v68 *= 3;
      v73 = *(float *)(v70 + 4 * v68);
      v74 = v70 + 4 * v68;
      v71 *= 3;
      v75 = v73 - *(float *)(v70 + 4 * v71);
      v76 = (float *)(v70 + 4 * v71);
      v77 = *(float *)(v74 + 4) - v76[1];
      v78 = (float *)(v70 + 12 * v72);
      --v6;
      v79 = *(float *)(v74 + 8) - v76[2];
      v80 = *v78 - *v76;
      v144 = v80;
      v81 = v78[1] - v76[1];
      v146 = v81;
      v82 = v78[2] - v76[2];
      v148 = v82;
      v83 = *(float *)(this + 32) * v82 - *(float *)(this + 36) * v81;
      v151 = v83;
      v84 = *(float *)(this + 36) * v80 - v82 * *(float *)(this + 28);
      v85 = v81 * *(float *)(this + 28) - v80 * *(float *)(this + 32);
      v86 = v84;
      v87 = v83 * v75 + v85 * v79 + v84 * v77;
      v155 = v87;
      if ( *(_BYTE *)(this + 141) )
      {
        if ( v87 < 0.000001 )
          goto LABEL_62;
        v88 = *(float *)(this + 24) - v76[2];
        v154 = v88;
        v89 = v85 * v88;
        v90 = *(float *)(this + 20) - v76[1];
        v91 = v86 * v90 + v89 + v151 * (*(float *)(this + 16) - *v76);
        v92 = *(float *)(this + 16) - *v76;
        *(float *)(this + 84) = v91;
        v93 = -*(float *)(this + 136);
        v133 = v93;
        if ( v93 > v91 )
          goto LABEL_62;
        v94 = *(float *)(this + 136) + v155;
        v135 = v94;
        if ( v94 < v91 )
          goto LABEL_62;
        v95 = v90 * v79 - v154 * v77;
        v96 = v154 * v75 - v79 * v92;
        v97 = v95;
        v98 = v77;
        v99 = v97;
        v100 = v91;
        v101 = v90;
        v102 = v100;
        v103 = v92 * v98 - v75 * v101;
        v104 = *(float *)(this + 36) * v103 + *(float *)(this + 32) * v96 + *(float *)(this + 28) * v97;
        *(float *)(this + 88) = v104;
        if ( v133 > v104 )
          goto LABEL_62;
        if ( v104 + v102 > v135 )
          goto LABEL_62;
        v105 = v102;
        v106 = v103;
        v107 = v105;
        v108 = v106 * v148 + v96 * v146 + v99 * v144;
        *(float *)(this + 80) = v108;
        if ( *(int *)(this + 80) < 0 )
          goto LABEL_62;
        v109 = 1.0 / v155;
        *(float *)(this + 80) = v108 * v109;
        *(float *)(this + 84) = v107 * v109;
        *(float *)(this + 88) = v109 * *(float *)(this + 88);
      }
      else
      {
        if ( v87 > -0.000001 && v87 < 0.000001 )
          goto LABEL_62;
        v156 = 1.0 / v87;
        v110 = *(float *)(this + 16) - *v76;
        v111 = *(float *)(this + 20) - v76[1];
        v112 = *(float *)(this + 24) - v76[2];
        v150 = v112;
        v113 = v86 * v111;
        v114 = v111;
        v115 = v85 * v112;
        v116 = v114;
        v117 = (v113 + v115 + v151 * v110) * v156;
        v118 = v156;
        v157 = v117;
        *(float *)(this + 84) = v117;
        if ( *(_DWORD *)(this + 84) > 0x3F800000u )
          goto LABEL_62;
        v119 = v116 * v79 - v150 * v77;
        v120 = v150 * v75 - v79 * v110;
        v121 = v119;
        v122 = v77;
        v123 = v121;
        v124 = v110 * v122;
        v125 = v116;
        v126 = v118;
        v127 = v124 - v75 * v125;
        v128 = (*(float *)(this + 36) * v127 + *(float *)(this + 32) * v120 + *(float *)(this + 28) * v121) * v118;
        *(float *)(this + 88) = v128;
        if ( (*(_DWORD *)(this + 88) & 0x80000000) != 0 )
          goto LABEL_62;
        if ( v128 + v157 > 1.0 )
          goto LABEL_62;
        *(float *)(this + 80) = v126 * (v127 * v148 + v120 * v146 + v123 * v144);
        if ( (*(_DWORD *)(this + 80) & 0x80000000) != 0 )
          goto LABEL_62;
      }
      if ( *(_DWORD *)(this + 80) < *(_DWORD *)(this + 132) )
      {
        ++*(_DWORD *)(this + 104);
        v129 = *(_DWORD **)(this + 92);
        *(_DWORD *)(this + 4) |= 4u;
        *(_DWORD *)(this + 76) = v142;
        if ( v129 )
        {
          if ( *(_BYTE *)(this + 140) && (v129[1] & 0xFFFFFFFC) != 0 )
          {
            v130 = (float *)v129[2];
            if ( v130 && v130[1] > (double)*(float *)(this + 80) )
            {
              *(_DWORD *)v130 = v142;
              v130[1] = *(float *)(this + 80);
              v130[2] = *(float *)(this + 84);
              v130[3] = *(float *)(this + 88);
            }
          }
          else if ( this != -76 )
          {
            if ( (unsigned int)(v129[1] + 4) > *v129 )
              sub_100149B0(v129, 4);
            v131 = (_DWORD *)(v129[2] + 4 * v129[1]);
            *v131 = *(_DWORD *)(this + 76);
            v131[1] = *(_DWORD *)(this + 80);
            v131[2] = *(_DWORD *)(this + 84);
            v131[3] = *(_DWORD *)(this + 88);
            v129[1] += 4;
          }
        }
      }
LABEL_62:
      result = *(_DWORD *)(this + 4) & 5;
      if ( (_BYTE)result == 5 || !v6 )
        return result;
      result = (unsigned int)v141;
    }
  }
  result = v4 + 4 * result;
  if ( v6 )
  {
    while ( 1 )
    {
      v8 = *(_DWORD *)result;
      v9 = *(_DWORD *)(this + 12);
      v10 = *(_DWORD *)(v9 + 16);
      v136 = (_DWORD *)(result + 4);
      v11 = *(_DWORD *)(v10 + 12 * *(_DWORD *)result + 4);
      v12 = (_DWORD *)(v10 + 12 * *(_DWORD *)result);
      v13 = *(_DWORD *)(v9 + 20);
      v14 = (float *)(v13 + 12 * *v12);
      v15 = (float *)(v13 + 12 * v11);
      v16 = (float *)(v13 + 12 * v12[2]);
      ++*(_DWORD *)(this + 100);
      v17 = *v15 - *v14;
      --v6;
      v18 = v15[1] - v14[1];
      v19 = v15[2] - v14[2];
      v20 = *v16 - *v14;
      v143 = v20;
      v21 = v16[1] - v14[1];
      v145 = v21;
      v22 = v16[2] - v14[2];
      v147 = v22;
      v23 = v22 * *(float *)(this + 32) - v21 * *(float *)(this + 36);
      v24 = v20 * *(float *)(this + 36) - v22 * *(float *)(this + 28);
      v153 = v24;
      v25 = v21 * *(float *)(this + 28) - v20 * *(float *)(this + 32);
      v26 = v23 * v17 + v24 * v18 + v25 * v19;
      v27 = v23;
      v134 = v26;
      if ( *(_BYTE *)(this + 141) )
      {
        if ( v26 < 0.000001 )
          goto LABEL_31;
        v28 = *(float *)(this + 16) - *v14;
        v149 = *(float *)(this + 24) - v14[2];
        v29 = v27 * v28;
        v30 = *(float *)(this + 20) - v14[1];
        v31 = v28;
        v32 = v25 * v149 + v29 + v30 * v153;
        v33 = v31;
        *(float *)(this + 84) = v32;
        v34 = -*(float *)(this + 136);
        v132 = v34;
        if ( v34 > v32 )
          goto LABEL_31;
        v35 = *(float *)(this + 136) + v134;
        v138 = v35;
        if ( v35 < v32 )
          goto LABEL_31;
        v36 = v30 * v19 - v149 * v18;
        v37 = v149 * v17 - v19 * v33;
        v38 = v36;
        v39 = v18;
        v40 = v38;
        v41 = v32;
        v42 = v30;
        v43 = v33 * v39;
        v44 = v41;
        v45 = v43 - v17 * v42;
        v46 = *(float *)(this + 36) * v45 + *(float *)(this + 32) * v37 + *(float *)(this + 28) * v38;
        *(float *)(this + 88) = v46;
        if ( v132 > v46 )
          goto LABEL_31;
        if ( v46 + v44 > v138 )
          goto LABEL_31;
        v47 = v40 * v143 + v45 * v147 + v37 * v145;
        *(float *)(this + 80) = v47;
        if ( *(int *)(this + 80) < 0 )
          goto LABEL_31;
        v48 = 1.0 / v134;
        *(float *)(this + 80) = v47 * v48;
        *(float *)(this + 84) = v44 * v48;
        *(float *)(this + 88) = v48 * *(float *)(this + 88);
      }
      else
      {
        if ( v26 > -0.000001 && v26 < 0.000001 )
          goto LABEL_31;
        v139 = 1.0 / v26;
        v49 = *(float *)(this + 16) - *v14;
        v152 = *(float *)(this + 24) - v14[2];
        v50 = v27 * v49;
        v51 = *(float *)(this + 20) - v14[1];
        v52 = (v25 * v152 + v50 + v51 * v153) * v139;
        v53 = v139;
        v140 = v52;
        *(float *)(this + 84) = v52;
        if ( *(_DWORD *)(this + 84) > 0x3F800000u )
          goto LABEL_31;
        v54 = v51 * v19 - v152 * v18;
        v55 = v152 * v17 - v19 * v49;
        v56 = v54;
        v57 = v18;
        v58 = v56;
        v59 = v49 * v57 - v17 * v51;
        v60 = (*(float *)(this + 36) * v59 + *(float *)(this + 32) * v55 + *(float *)(this + 28) * v56) * v53;
        *(float *)(this + 88) = v60;
        if ( (*(_DWORD *)(this + 88) & 0x80000000) != 0 )
          goto LABEL_31;
        if ( v60 + v140 > 1.0 )
          goto LABEL_31;
        *(float *)(this + 80) = (v58 * v143 + v59 * v147 + v55 * v145) * v53;
        if ( (*(_DWORD *)(this + 80) & 0x80000000) != 0 )
          goto LABEL_31;
      }
      if ( *(_DWORD *)(this + 80) < *(_DWORD *)(this + 132) )
      {
        v61 = *(_DWORD **)(this + 92);
        ++*(_DWORD *)(this + 104);
        *(_DWORD *)(this + 4) |= 4u;
        *(_DWORD *)(this + 76) = v8;
        if ( v61 )
        {
          if ( *(_BYTE *)(this + 140) && (v61[1] & 0xFFFFFFFC) != 0 )
          {
            v62 = (float *)v61[2];
            if ( v62 && v62[1] > (double)*(float *)(this + 80) )
            {
              *(_DWORD *)v62 = v8;
              v62[1] = *(float *)(this + 80);
              v62[2] = *(float *)(this + 84);
              v62[3] = *(float *)(this + 88);
            }
          }
          else if ( this != -76 )
          {
            if ( (unsigned int)(v61[1] + 4) > *v61 )
              sub_100149B0(v61, 4);
            v63 = (_DWORD *)(v61[2] + 4 * v61[1]);
            *v63 = *(_DWORD *)(this + 76);
            v63[1] = *(_DWORD *)(this + 80);
            v63[2] = *(_DWORD *)(this + 84);
            v63[3] = *(_DWORD *)(this + 88);
            v61[1] += 4;
          }
        }
      }
LABEL_31:
      result = *(_DWORD *)(this + 4) & 5;
      if ( (_BYTE)result == 5 || !v6 )
        return result;
      result = (unsigned int)v136;
    }
  }
  return result;
}
