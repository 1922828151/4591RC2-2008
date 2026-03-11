/*
 * func-name: sub_1001EFC0
 * func-address: 0x1001efc0
 * callers: 0x1002ecc0
 * callees: 0x1000e540, 0x1000e560, 0x1000ee20, 0x10014910, 0x10014950, 0x10014b50, 0x10015590, 0x10015980, 0x100159a0, 0x10015a80, 0x1001e4f0, 0x1001ebb0, 0x1001ec70, 0x1001eca0, 0x10034f10
 */

char __userpurge sub_1001EFC0@<al>(
        int a1@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        unsigned int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13)
{
  unsigned int v14; // ebx
  int v15; // ebp
  int (__stdcall ***v16)(size_t, int); // eax
  _BYTE *v17; // edi
  int (__stdcall ***v18)(size_t, int); // eax
  int v19; // eax
  _DWORD *v21; // eax
  int v22; // edx
  int v23; // eax
  float v24; // edi
  float v25; // ebp
  float v26; // eax
  int *v27; // ecx
  int v28; // edx
  int v29; // ecx
  int v30; // ebx
  int v31; // edx
  bool v32; // zf
  float *v33; // edi
  float *v34; // ebp
  float *v35; // ebx
  float *v36; // eax
  float v37; // edx
  float *v38; // eax
  float v39; // edx
  float *v40; // eax
  float v41; // ecx
  float v42; // edx
  float v43; // eax
  double v44; // st6
  double v45; // st4
  float v46; // edx
  float v47; // eax
  float v48; // ecx
  double v49; // st7
  float v50; // edx
  double v51; // st5
  float v52; // eax
  double v53; // st3
  float v54; // ecx
  float v55; // edx
  float v56; // eax
  long double v57; // st2
  double v58; // st7
  double v59; // st5
  long double v60; // st6
  long double v61; // st4
  long double v62; // st4
  double v63; // st3
  double v64; // st1
  double v65; // st4
  double v66; // rt1
  double v67; // st1
  double v68; // st0
  double v69; // st2
  double v70; // st4
  double v71; // st3
  long double v72; // st1
  long double v73; // st1
  float *v74; // eax
  float v75; // edx
  float *v76; // eax
  float v77; // edx
  float *v78; // eax
  float v79; // ecx
  float v80; // edx
  float v81; // eax
  double v82; // st6
  double v83; // st4
  float v84; // edx
  float v85; // eax
  float v86; // ecx
  double v87; // st7
  float v88; // edx
  double v89; // st5
  float v90; // eax
  double v91; // st3
  float v92; // ecx
  float v93; // edx
  float v94; // eax
  long double v95; // st2
  double v96; // st7
  double v97; // st5
  long double v98; // st6
  long double v99; // st4
  long double v100; // st4
  double v101; // st3
  double v102; // st1
  double v103; // st4
  double v104; // rt0
  double v105; // st1
  double v106; // st0
  double v107; // st2
  double v108; // st4
  double v109; // st3
  long double v110; // st1
  long double v111; // st1
  _BYTE *v112; // eax
  int (__stdcall ***v113)(size_t, int); // eax
  void *v114; // eax
  int v115; // edx
  int v116; // ebx
  _DWORD *v117; // eax
  unsigned int i; // ecx
  int (__stdcall ***v119)(size_t, int); // eax
  void *v120; // ebp
  int (__stdcall ***v121)(size_t, int); // eax
  unsigned __int8 *v122; // ebx
  int v123; // eax
  unsigned int j; // eax
  int v125; // ecx
  unsigned int k; // eax
  int (__stdcall ***v127)(size_t, int); // eax
  int (__stdcall ***v128)(size_t, int); // eax
  int (__stdcall ***v129)(size_t, int); // eax
  void *v130; // eax
  int v131; // ebp
  int v132; // ecx
  _DWORD *v133; // ebx
  int v134; // edx
  int v135; // ecx
  _DWORD *v136; // eax
  int v137; // ebx
  unsigned int v138; // eax
  int (__stdcall ***v139)(size_t, int); // eax
  int (__stdcall ***v140)(size_t, int); // eax
  int *v141; // ebp
  unsigned int v142; // ebx
  unsigned int v143; // edi
  int v144; // eax
  int v145; // ecx
  _DWORD *v146; // eax
  unsigned int v147; // edx
  __int16 v152; // [esp+3Ah] [ebp-182h]
  int v153; // [esp+3Ch] [ebp-180h]
  _BYTE *v154; // [esp+40h] [ebp-17Ch]
  int v155; // [esp+40h] [ebp-17Ch]
  unsigned int v156; // [esp+44h] [ebp-178h]
  int v157; // [esp+44h] [ebp-178h]
  int v158; // [esp+48h] [ebp-174h]
  int *v159; // [esp+48h] [ebp-174h]
  int v160; // [esp+4Ch] [ebp-170h]
  int v161; // [esp+4Ch] [ebp-170h]
  unsigned int v162; // [esp+50h] [ebp-16Ch]
  int *v163; // [esp+54h] [ebp-168h]
  int v164; // [esp+58h] [ebp-164h]
  _DWORD *v165; // [esp+5Ch] [ebp-160h]
  unsigned int v166; // [esp+60h] [ebp-15Ch] BYREF
  int *v167; // [esp+64h] [ebp-158h]
  int v168; // [esp+68h] [ebp-154h] BYREF
  int v169; // [esp+70h] [ebp-14Ch] BYREF
  int v170; // [esp+74h] [ebp-148h]
  float v171; // [esp+78h] [ebp-144h]
  float v172; // [esp+7Ch] [ebp-140h]
  float v173; // [esp+80h] [ebp-13Ch]
  _BYTE *v174; // [esp+84h] [ebp-138h]
  unsigned int v175[2]; // [esp+88h] [ebp-134h] BYREF
  float v176; // [esp+90h] [ebp-12Ch] BYREF
  float v177; // [esp+94h] [ebp-128h]
  float v178; // [esp+A0h] [ebp-11Ch]
  float v179; // [esp+A4h] [ebp-118h]
  float v180; // [esp+A8h] [ebp-114h]
  float v181; // [esp+ACh] [ebp-110h]
  float v182; // [esp+B0h] [ebp-10Ch]
  float v183; // [esp+B4h] [ebp-108h]
  float v184; // [esp+B8h] [ebp-104h]
  float v185; // [esp+BCh] [ebp-100h]
  float v186; // [esp+C0h] [ebp-FCh]
  float v187; // [esp+C4h] [ebp-F8h]
  float v188; // [esp+C8h] [ebp-F4h]
  float v189; // [esp+CCh] [ebp-F0h]
  float v190; // [esp+D0h] [ebp-ECh]
  float v191; // [esp+D4h] [ebp-E8h]
  float v192; // [esp+D8h] [ebp-E4h]
  float v193; // [esp+DCh] [ebp-E0h]
  float v194; // [esp+E0h] [ebp-DCh]
  float v195; // [esp+E4h] [ebp-D8h]
  float v196; // [esp+E8h] [ebp-D4h]
  float v197; // [esp+ECh] [ebp-D0h]
  float v198; // [esp+F0h] [ebp-CCh]
  float v199; // [esp+F4h] [ebp-C8h]
  float v200; // [esp+F8h] [ebp-C4h]
  float v201; // [esp+FCh] [ebp-C0h]
  float v202; // [esp+100h] [ebp-BCh]
  float v203; // [esp+104h] [ebp-B8h]
  float v204; // [esp+108h] [ebp-B4h]
  float v205; // [esp+10Ch] [ebp-B0h]
  float v206; // [esp+110h] [ebp-ACh]
  float v207; // [esp+114h] [ebp-A8h]
  float v208; // [esp+118h] [ebp-A4h]
  float v209; // [esp+11Ch] [ebp-A0h]
  float v210; // [esp+120h] [ebp-9Ch]
  float v211; // [esp+124h] [ebp-98h]
  float v212; // [esp+128h] [ebp-94h]
  float v213; // [esp+12Ch] [ebp-90h]
  float v214; // [esp+130h] [ebp-8Ch]
  float v215; // [esp+134h] [ebp-88h]
  float v216; // [esp+138h] [ebp-84h]
  float v217; // [esp+13Ch] [ebp-80h]
  float v218; // [esp+140h] [ebp-7Ch]
  float v219; // [esp+144h] [ebp-78h]
  int v220; // [esp+148h] [ebp-74h]
  float v221; // [esp+14Ch] [ebp-70h]
  float v222; // [esp+154h] [ebp-68h] BYREF
  int v223; // [esp+158h] [ebp-64h]
  _DWORD v224[3]; // [esp+15Ch] [ebp-60h] BYREF
  char v225; // [esp+168h] [ebp-54h]
  char v226; // [esp+169h] [ebp-53h]
  int v227; // [esp+16Ch] [ebp-50h]
  float v228; // [esp+170h] [ebp-4Ch]
  float v229; // [esp+17Ch] [ebp-40h]
  float v230; // [esp+188h] [ebp-34h]
  float v231; // [esp+190h] [ebp-2Ch]
  int v232; // [esp+194h] [ebp-28h] BYREF
  unsigned int v233[3]; // [esp+19Ch] [ebp-20h] BYREF
  float v234; // [esp+1A8h] [ebp-14h]
  float v235; // [esp+1B0h] [ebp-Ch]

  v228 = 0.1;
  v224[1] = a7;
  v224[2] = 0;
  v224[0] = a6;
  v225 = 1;
  v226 = 1;
  v227 = a9;
  sub_1000E540(&v166);
  if ( !sub_1000EE20(&v166, a3, (int)v224) )
    goto LABEL_10;
  v14 = v166;
  v156 = v166;
  if ( !v166
    || (v163 = v167) == 0
    || (v15 = v169) == 0
    || (v220 = v170) == 0
    || (v16 = sub_10014910(),
        (v17 = (_BYTE *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v16)(v16, v14, 1)) == 0)
    || (v18 = sub_10014910(),
        (v19 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v18)(v18, v14, 1)) == 0) )
  {
LABEL_10:
    sub_1000E560(&v166);
    return 0;
  }
  v174 = v17;
  v154 = (_BYTE *)v19;
  v165 = (_DWORD *)(v15 + 4);
  do
  {
    --v156;
    v152 = 0;
    if ( *((_WORD *)v165 - 1) != 2 )
    {
      LOBYTE(v152) = 1;
LABEL_45:
      HIBYTE(v152) = 1;
      goto LABEL_46;
    }
    v21 = (_DWORD *)(v220 + 4 * *v165);
    v22 = v21[1];
    v23 = 3 * *v21;
    v24 = *(float *)(a7 + 4 * v23);
    v25 = *(float *)(a7 + 4 * v23 + 4);
    v26 = *(float *)(a7 + 4 * v23 + 8);
    v27 = (int *)(a7 + 12 * v22);
    v158 = *v27;
    v28 = v27[1];
    v29 = v27[2];
    v164 = v28;
    v30 = v163[1];
    v31 = *v163;
    v32 = LODWORD(v24) == *v163;
    v173 = v24;
    v172 = v25;
    v171 = v26;
    if ( v32 && LODWORD(v25) == v30 )
    {
      v153 = LODWORD(v26);
    }
    else if ( LODWORD(v24) == v30 && LODWORD(v25) == v31 )
    {
      v153 = LODWORD(v26);
    }
    else if ( LODWORD(v24) == v31 && LODWORD(v26) == v30 )
    {
      v153 = LODWORD(v25);
    }
    else if ( LODWORD(v24) == v30 && LODWORD(v26) == v31 )
    {
      v153 = LODWORD(v25);
    }
    else if ( LODWORD(v25) == v31 && LODWORD(v26) == v30 )
    {
      v153 = LODWORD(v24);
    }
    else if ( LODWORD(v25) != v30 || (v153 = LODWORD(v24), LODWORD(v26) != v31) )
    {
      v153 = -1;
    }
    v33 = (float *)(a9 + 12 * v29);
    v34 = (float *)(a9 + 12 * v164);
    v35 = (float *)(a9 + 12 * v158);
    sub_10015590((float *)v175, v35, v34, v33);
    if ( *(float *)(a9 + 12 * v153 + 4) * *(float *)&v175[1]
       + *(float *)(a9 + 12 * v153 + 8) * v176
       + *(float *)(a9 + 12 * v153) * *(float *)v175
       + v177 > 0.0 )
    {
      v36 = (float *)(a9 + 12 * LODWORD(v173));
      v202 = *v36;
      v37 = v36[1];
      v204 = v36[2];
      v203 = v37;
      v38 = (float *)(a9 + 12 * LODWORD(v172));
      v205 = *v38;
      v39 = v38[1];
      v207 = v38[2];
      v206 = v39;
      v40 = (float *)(a9 + 12 * LODWORD(v171));
      v41 = *v40;
      v42 = v40[1];
      v43 = v40[2];
      v208 = v41;
      v44 = v202 - v41;
      v209 = v42;
      v210 = v43;
      v45 = v203 - v42;
      v46 = v35[1];
      v47 = v35[2];
      v187 = *v35;
      v48 = *v34;
      v49 = v204 - v210;
      v188 = v46;
      v50 = v34[1];
      v51 = v202 - v205;
      v189 = v47;
      v52 = v34[2];
      v53 = v203 - v206;
      v190 = v48;
      v54 = *v33;
      v191 = v50;
      v55 = v33[1];
      v192 = v52;
      v56 = v33[2];
      v193 = v54;
      v194 = v55;
      v195 = v56;
      v57 = v53 * v49 - (v204 - v207) * v45;
      v58 = (v204 - v207) * v44 - v49 * v51;
      v59 = v51 * v45 - v44 * v53;
      v60 = v57;
      v229 = v59;
      v61 = v60 * v60 + v59 * v59 + v58 * v58;
      if ( 0.0 != v61 )
      {
        v62 = 1.0 / sqrt(v61);
        v60 = v57 * v62;
        v58 = v58 * v62;
        v59 = v59 * v62;
        v229 = v59;
      }
      v63 = v187 - v193;
      v64 = v188 - v194;
      v234 = v64;
      v65 = v189 - v195;
      v199 = v187 - v190;
      v66 = v64;
      v67 = v188 - v191;
      v200 = v67;
      v68 = v189 - v192;
      v201 = v68;
      v69 = v67 * v65 - v66 * v68;
      v70 = v201 * v63 - v65 * v199;
      v71 = v199 * v234 - v63 * v200;
      v72 = v71 * v71 + v70 * v70 + v69 * v69;
      if ( 0.0 != v72 )
      {
        v73 = 1.0 / sqrt(v72);
        v69 = v69 * v73;
        v70 = v70 * v73;
        v71 = v71 * v73;
      }
      v235 = v71 * v58 - v70 * v59;
      if ( fabs(
             atan2(
               sqrt(
                 (v59 * v69 - v71 * v60) * (v59 * v69 - v71 * v60)
               + (v70 * v60 - v58 * v69) * (v70 * v60 - v58 * v69)
               + v235 * v235),
               v60 * v69 + v58 * v70 + v71 * v229)) > 0.0099999998 )
        LOBYTE(v152) = 1;
    }
    v74 = (float *)(a9 + 12 * LODWORD(v173));
    v211 = *v74;
    v75 = v74[1];
    v213 = v74[2];
    v212 = v75;
    v76 = (float *)(a9 + 12 * LODWORD(v172));
    v214 = *v76;
    v77 = v76[1];
    v216 = v76[2];
    v215 = v77;
    v78 = (float *)(a9 + 12 * LODWORD(v171));
    v79 = *v78;
    v80 = v78[1];
    v81 = v78[2];
    v217 = v79;
    v82 = v211 - v79;
    v218 = v80;
    v219 = v81;
    v83 = v212 - v80;
    v84 = v35[1];
    v85 = v35[2];
    v178 = *v35;
    v86 = *v34;
    v87 = v213 - v219;
    v179 = v84;
    v88 = v34[1];
    v89 = v211 - v214;
    v180 = v85;
    v90 = v34[2];
    v91 = v212 - v215;
    v181 = v86;
    v92 = *v33;
    v182 = v88;
    v93 = v33[1];
    v183 = v90;
    v94 = v33[2];
    v184 = v92;
    v185 = v93;
    v186 = v94;
    v95 = v91 * v87 - (v213 - v216) * v83;
    v96 = (v213 - v216) * v82 - v87 * v89;
    v97 = v89 * v83 - v82 * v91;
    v98 = v95;
    v230 = v97;
    v99 = v97 * v97 + v96 * v96 + v98 * v98;
    if ( 0.0 != v99 )
    {
      v100 = 1.0 / sqrt(v99);
      v98 = v95 * v100;
      v96 = v96 * v100;
      v97 = v97 * v100;
      v230 = v97;
    }
    v101 = v178 - v184;
    v102 = v179 - v185;
    v231 = v102;
    v103 = v180 - v186;
    v196 = v178 - v181;
    v104 = v102;
    v105 = v179 - v182;
    v197 = v105;
    v106 = v180 - v183;
    v198 = v106;
    v107 = v105 * v103 - v104 * v106;
    v108 = v198 * v101 - v103 * v196;
    v109 = v196 * v231 - v101 * v197;
    v110 = v109 * v109 + v108 * v108 + v107 * v107;
    if ( 0.0 != v110 )
    {
      v111 = 1.0 / sqrt(v110);
      v107 = v107 * v111;
      v108 = v108 * v111;
      v109 = v109 * v111;
    }
    v221 = v109 * v96 - v108 * v97;
    if ( fabs(
           atan2(
             sqrt(
               (v97 * v107 - v109 * v98) * (v97 * v107 - v109 * v98)
             + (v108 * v98 - v96 * v107) * (v108 * v98 - v96 * v107)
             + v221 * v221),
             v98 * v107 + v96 * v108 + v109 * v230)) > 0.0099999998 )
      goto LABEL_45;
LABEL_46:
    v112 = v174;
    *v174 = v152;
    v174 = v112 + 1;
    *v154++ = HIBYTE(v152);
    v165 += 2;
    v163 += 2;
  }
  while ( v156 );
  v113 = sub_10014910();
  v114 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int, int, int, int, int))**v113)(
                   v113,
                   4 * a6,
                   41,
                   a4,
                   a3,
                   a2,
                   a5);
  *(_DWORD *)(a1 + 48) = v114;
  memset(v114, 255, 4 * a6);
  *(_DWORD *)(a1 + 8) = &v169;
  *(_DWORD *)a1 = a11;
  v115 = *(_DWORD *)(a1 + 48);
  v116 = 0;
  *(_DWORD *)(a1 + 44) = 0;
  *(_DWORD *)(a1 + 4) = a13;
  *(_DWORD *)(a1 + 20) = v165;
  *(_DWORD *)(a1 + 12) = 0;
  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 24) = v115;
  if ( a6 )
  {
    do
    {
      v117 = *(_DWORD **)(a1 + 48);
      for ( i = 0; *v117 != -1; ++i )
        ++v117;
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 44);
      sub_1001EC70((_DWORD *)a1, i, a6);
      v116 += *(_DWORD *)(a1 + 32);
      ++*(_DWORD *)(a1 + 44);
    }
    while ( v116 != a6 );
  }
  v119 = sub_10014910();
  v120 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v119)(
                   v119,
                   4 * *(_DWORD *)(a1 + 44),
                   1);
  memset(v120, 0, 4 * *(_DWORD *)(a1 + 44));
  v121 = sub_10014910();
  v122 = (unsigned __int8 *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v121)(
                              v121,
                              4 * a6,
                              1);
  v162 = 0;
  if ( a6 )
  {
    v123 = 0;
    do
    {
      v160 = *(_BYTE *)((*(_DWORD *)(v123 + LODWORD(v172)) & 0xFFFFFFF) + v166) != 0;
      if ( *(_BYTE *)((*(_DWORD *)(v123 + LODWORD(v172) + 4) & 0xFFFFFFF) + v166) )
        ++v160;
      if ( *(_BYTE *)((*(_DWORD *)(v123 + LODWORD(v172) + 8) & 0xFFFFFFF) + v166) )
        ++v160;
      *(_DWORD *)&v122[4 * v162] = v160;
      v123 += 12;
      ++v162;
    }
    while ( v162 < a6 );
  }
  for ( j = 0; j < a6; ++j )
  {
    v125 = *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4 * j);
    *((_DWORD *)v120 + v125) += *(_DWORD *)&v122[4 * j];
  }
  for ( k = 0; k < a6; ++k )
    *(_DWORD *)&v122[4 * k] = *((_DWORD *)v120 + *(_DWORD *)(*(_DWORD *)(a1 + 48) + 4 * k));
  if ( v120 )
  {
    v127 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), void *))(*v127)[3])(v127, v120);
  }
  sub_10015980(v233);
  sub_10015A80(v233, v122, a6, 1);
  if ( v122 )
  {
    v128 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned __int8 *))(*v128)[3])(v128, v122);
  }
  v129 = sub_10014910();
  v130 = (void *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), unsigned int, int))**v129)(v129, 4 * a6, 42);
  *(_DWORD *)(a1 + 40) = v130;
  memset(v130, 255, 4 * a6);
  v131 = 0;
  *(_DWORD *)(a1 + 36) = 0;
  sub_10014950(&v222);
  sub_10014950(&v176);
  *(_DWORD *)(a1 + 8) = &v168;
  *(_DWORD *)a1 = a9;
  *(_DWORD *)(a1 + 4) = a11;
  *(_DWORD *)(a1 + 20) = v164;
  v132 = *(_DWORD *)(a1 + 40);
  *(_DWORD *)(a1 + 12) = &v222;
  *(_DWORD *)(a1 + 16) = &v176;
  *(_DWORD *)(a1 + 24) = v132;
  if ( a6 )
  {
    v133 = (_DWORD *)(4 * a6 + v158 - 4);
    do
    {
      v134 = *(_DWORD *)(a1 + 40);
      v135 = 0;
      if ( *(_DWORD *)(v134 + 4 * *v133) != -1 )
      {
        v136 = v133;
        do
        {
          v137 = *--v136;
          ++v135;
        }
        while ( *(_DWORD *)(v134 + 4 * v137) != -1 );
        v133 = (_DWORD *)(4 * a6 + v158 - 4);
      }
      if ( v223 )
        v223 = 0;
      if ( v177 != 0.0 )
        v177 = 0.0;
      *(_DWORD *)(a1 + 28) = *(_DWORD *)(a1 + 36);
      v138 = *(_DWORD *)(v158 + 4 * (a6 - v135) - 4);
      if ( v138 < a6 )
      {
        *(_DWORD *)(a1 + 32) = 0;
        dword_1005B1C4 = 0;
        sub_1001EBB0((_DWORD *)a1, v138, -1);
      }
      v131 += *(_DWORD *)(a1 + 32);
      ++*(_DWORD *)(a1 + 36);
    }
    while ( v131 != a6 );
  }
  sub_10014B50(&v176);
  sub_10014B50(&v222);
  sub_100159A0((int)&v232);
  v139 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int *))(*v139)[3])(v139, v163);
  v140 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int *))(*v140)[3])(v140, v163);
  sub_10015980(v175);
  v141 = (int *)sub_10015A80(v175, *(unsigned __int8 **)(a1 + 40), a6, 1)[1];
  v157 = LODWORD(v176);
  v142 = 0;
  v143 = a6 + 1;
  v161 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * *v141);
  v159 = &v141[a6];
  if ( a6 != -1 )
  {
    do
    {
      --v143;
      if ( v141 == v159 )
      {
        v144 = -1;
        v145 = -1;
      }
      else
      {
        v144 = *v141;
        v145 = *(_DWORD *)(*(_DWORD *)(a1 + 40) + 4 * *v141++);
      }
      v155 = v144;
      if ( v145 != v161 )
      {
        v161 = v145;
        sub_1001ECA0((_DWORD *)a1, v142, v157, a7, a9);
        sub_1001E4F0((_DWORD *)a1, v142, v157);
        v144 = v155;
        v142 = 0;
      }
      *(_DWORD *)(v157 + 4 * v142++) = v144;
    }
    while ( v143 );
  }
  sub_100159A0((int)v175);
  if ( a6 )
  {
    *(_DWORD *)(a1 + 44) = 0;
    v146 = *(_DWORD **)(a1 + 48);
    v147 = a6;
    do
    {
      if ( *v146 > *(_DWORD *)(a1 + 44) )
        *(_DWORD *)(a1 + 44) = *v146;
      ++v146;
      --v147;
    }
    while ( v147 );
    ++*(_DWORD *)(a1 + 44);
  }
  sub_1000E560(&v166);
  return 1;
}
