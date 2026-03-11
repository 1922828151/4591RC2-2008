/*
 * func-name: sub_10021280
 * func-address: 0x10021280
 * callers: 0x1001e400
 * callees: 0x1000c970, 0x10014910, 0x1001fca0, 0x1001fda0, 0x1001ff20, 0x10020380, 0x10020e00, 0x100252f0, 0x10025310, 0x10025b00, 0x10034ca4, 0x10034f10, 0x10035700
 */

char __thiscall sub_10021280(_DWORD *this, int *a2)
{
  int v2; // eax
  int v3; // edx
  int v4; // ecx
  signed int v5; // edi
  int v6; // edx
  int (__stdcall ***v7)(size_t, int); // eax
  signed int v8; // ebx
  signed int v9; // esi
  int (__stdcall ***v10)(size_t, int); // eax
  double **v11; // esi
  signed int v12; // edx
  float *v13; // eax
  double *v14; // ecx
  double v15; // st7
  double *v16; // eax
  double v17; // st7
  int v18; // ecx
  double v19; // st6
  double v20; // st5
  double v21; // st4
  double v22; // st3
  double v23; // st2
  double *v24; // edx
  double v25; // st1
  double v26; // st1
  double v27; // st1
  double v28; // rt2
  double v29; // st6
  double v30; // st2
  double v31; // st1
  double v32; // st4
  double v33; // rt2
  double v34; // st1
  double v35; // st4
  double v36; // st1
  signed int v37; // edx
  int v38; // eax
  double v39; // st5
  double *v40; // ecx
  int v41; // eax
  int v42; // eax
  double v43; // st1
  double v44; // st1
  int v45; // eax
  double **v46; // edx
  double *v47; // ecx
  double v48; // st1
  int (__stdcall ***v49)(size_t, int); // eax
  _DWORD *v50; // esi
  int (__stdcall ***v51)(size_t, int); // eax
  int v52; // eax
  _DWORD *v53; // ecx
  int v54; // ebx
  int (__stdcall ***v55)(size_t, int); // eax
  int v56; // ecx
  int v57; // eax
  int (__stdcall ***v58)(size_t, int); // eax
  _DWORD *v59; // esi
  int (__stdcall ***v60)(size_t, int); // eax
  int v61; // eax
  int v62; // ecx
  int (__stdcall ***v63)(size_t, int); // eax
  int (__stdcall ***v64)(size_t, int); // eax
  int v65; // eax
  int *v66; // ecx
  int v67; // eax
  int *v68; // edx
  int v69; // ecx
  double v70; // st7
  int v71; // ecx
  double v72; // st6
  int v73; // edx
  int *v74; // eax
  bool v75; // sf
  int *v76; // ecx
  double *v77; // eax
  double v78; // st5
  int v79; // ecx
  double *v80; // ebx
  int v81; // edi
  int v82; // eax
  int v83; // eax
  int *v84; // ebx
  _DWORD *v85; // edi
  int j; // ecx
  int v87; // eax
  bool v88; // zf
  int v89; // eax
  int v90; // ecx
  int k; // eax
  int n; // eax
  int m; // eax
  _DWORD *v94; // ebx
  _DWORD *v95; // eax
  _DWORD *v96; // eax
  double *v97; // ecx
  double v98; // rt0
  double v99; // rt1
  double v100; // st6
  double v101; // st7
  int v102; // edx
  double *v103; // eax
  double *v104; // esi
  int v105; // edx
  int v106; // edi
  double v107; // st5
  int *v108; // ecx
  double *v109; // edx
  double v110; // st3
  double v111; // st7
  double v112; // st6
  double v113; // st4
  double v114; // st5
  double v115; // st2
  double v116; // st3
  double v117; // st0
  double v118; // st6
  double v119; // st1
  double v120; // st0
  double v121; // st2
  double v122; // st4
  int v123; // edx
  int v124; // eax
  double v125; // st6
  int v126; // eax
  int v127; // ebx
  unsigned int v128; // ebx
  int (__stdcall ***v129)(size_t, int); // eax
  int v130; // ecx
  unsigned int *v131; // eax
  _DWORD *v132; // edx
  int v133; // ecx
  int v134; // eax
  _DWORD *v135; // ecx
  int *v136; // ebx
  int (__stdcall ***v137)(size_t, int); // eax
  int (__stdcall ***v138)(size_t, int); // eax
  int (__stdcall ***v139)(size_t, int); // eax
  int (__stdcall ***v140)(size_t, int); // eax
  int v141; // esi
  int (__stdcall ***v142)(size_t, int); // eax
  _DWORD *v143; // esi
  int (__stdcall ***v144)(size_t, int); // eax
  int (__stdcall ***v145)(size_t, int); // eax
  signed int v146; // ebx
  signed int ii; // esi
  int (__stdcall ***v148)(size_t, int); // eax
  int (__stdcall ***v149)(size_t, int); // eax
  _DWORD *v150; // esi
  int (__stdcall ***v151)(size_t, int); // eax
  int (__stdcall ***v153)(size_t, int); // eax
  int v154; // eax
  unsigned int v155; // edx
  int v156; // eax
  _DWORD *v157; // ecx
  _DWORD *v158; // esi
  int (__stdcall ***v159)(size_t, int); // eax
  int v160; // eax
  _DWORD *v161; // ebx
  void *v162; // esp
  int v163; // edx
  unsigned __int16 v164; // cx
  unsigned __int16 v165; // bx
  unsigned __int16 v166; // dx
  _BYTE *v167; // eax
  void *v169; // esp
  int (__stdcall ***v170)(size_t, int); // eax
  int v171; // eax
  signed int v172; // edx
  int v173; // ebx
  bool v174; // cc
  _DWORD *v175; // ecx
  _DWORD *v176; // eax
  int v177; // edi
  unsigned int v178; // edx
  int v179; // eax
  char v180; // bl
  _BYTE v181[12]; // [esp+0h] [ebp-94h] BYREF
  double v182; // [esp+Ch] [ebp-88h]
  double v183; // [esp+14h] [ebp-80h]
  double v184; // [esp+1Ch] [ebp-78h]
  double v185; // [esp+24h] [ebp-70h] BYREF
  double v186; // [esp+2Ch] [ebp-68h]
  double v187; // [esp+34h] [ebp-60h]
  double v188; // [esp+3Ch] [ebp-58h]
  double v189; // [esp+44h] [ebp-50h]
  double v190; // [esp+4Ch] [ebp-48h]
  double v191; // [esp+54h] [ebp-40h]
  double v192; // [esp+5Ch] [ebp-38h]
  double v193; // [esp+64h] [ebp-30h]
  _BYTE v194[8]; // [esp+6Ch] [ebp-28h] BYREF
  size_t v195; // [esp+74h] [ebp-20h]
  int v196; // [esp+78h] [ebp-1Ch]
  int v197; // [esp+7Ch] [ebp-18h] BYREF
  _DWORD v198[4]; // [esp+80h] [ebp-14h]
  _DWORD *v199; // [esp+90h] [ebp-4h]
  int v200; // [esp+94h] [ebp+0h]
  int v201; // [esp+98h] [ebp+4h]
  signed int v202; // [esp+9Ch] [ebp+8h]
  double v203; // [esp+A0h] [ebp+Ch]
  double v204; // [esp+A8h] [ebp+14h]
  _DWORD *v205; // [esp+B0h] [ebp+1Ch]
  int v206; // [esp+B4h] [ebp+20h]
  int v207; // [esp+B8h] [ebp+24h]
  double v208; // [esp+BCh] [ebp+28h]
  double v209; // [esp+C4h] [ebp+30h]
  _DWORD *v210; // [esp+CCh] [ebp+38h]
  int v211; // [esp+D0h] [ebp+3Ch]
  _DWORD *v212; // [esp+D4h] [ebp+40h]
  double v213; // [esp+D8h] [ebp+44h]
  int *v214; // [esp+E0h] [ebp+4Ch]
  _DWORD *v215; // [esp+E4h] [ebp+50h]
  int i; // [esp+E8h] [ebp+54h]
  _DWORD *v217; // [esp+ECh] [ebp+58h]
  double v218; // [esp+F0h] [ebp+5Ch]
  char v219; // [esp+FBh] [ebp+67h]
  int v220; // [esp+FCh] [ebp+68h]
  size_t Size; // [esp+100h] [ebp+6Ch]

  v2 = *a2;
  v217 = this;
  sub_100252F0(a2[1], v2);
  if ( !(unsigned __int8)sub_10025310(0) )
    goto LABEL_125;
  v3 = *a2;
  v4 = a2[2];
  v5 = v195;
  v199 = (_DWORD *)a2[1];
  v198[3] = v3;
  v6 = a2[3];
  v200 = v4;
  v201 = v6;
  v199 = (_DWORD *)v196;
  Size = v195;
  v212 = 0;
  v7 = sub_10014910();
  v8 = v195 + 4;
  v9 = 0;
  for ( i = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), size_t, int))**v7)(v7, 4 * (v195 + 4), 1); v9 < v8; ++v9 )
  {
    v10 = sub_10014910();
    *(_DWORD *)(i + 4 * v9) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v10)(v10, 24, 1);
  }
  v11 = (double **)i;
  v12 = 0;
  if ( v5 > 0 )
  {
    v13 = (float *)(v199 + 2);
    do
    {
      v14 = v11[v12];
      *v14 = *(v13 - 2);
      ++v12;
      v15 = *(v13 - 1);
      v13 += 3;
      v14[1] = v15;
      v14[2] = *(v13 - 3);
    }
    while ( v12 < v5 );
  }
  v16 = *v11;
  v17 = **v11;
  v18 = 1;
  v213 = v17;
  v19 = v17;
  v20 = v16[1];
  v208 = v20;
  v21 = v20;
  v22 = v16[2];
  v203 = v22;
  v23 = v22;
  if ( v5 > 1 )
  {
    do
    {
      v24 = v11[v18];
      v25 = *v24;
      if ( v25 > v19 )
        v19 = v25;
      if ( v25 < v17 )
        v17 = v25;
      v26 = v24[1];
      if ( v26 > v21 )
        v21 = v26;
      if ( v26 < v20 )
        v20 = v26;
      v27 = v24[2];
      if ( v27 > v23 )
        v23 = v27;
      if ( v27 < v22 )
        v22 = v27;
      ++v18;
    }
    while ( v18 < v5 );
    v203 = v22;
    v208 = v20;
    v213 = v17;
  }
  v28 = v19 - v17;
  v29 = v21 - v20;
  v30 = v23 - v22;
  v31 = v28;
  v32 = v28;
  if ( v28 < v29 )
    v32 = v29;
  v33 = v31;
  v34 = v32;
  v35 = v33;
  if ( v34 < v30 )
    v34 = v30;
  v36 = v34 * 0.00001;
  v37 = 0;
  v38 = 367;
  if ( v5 > 0 )
  {
    v39 = v36;
    do
    {
      v40 = v11[v37];
      v41 = 2147001325 * v38 + 715136305;
      HIDWORD(v218) = (unsigned __int16)v41;
      v42 = 2147001325 * v41 + 715136305;
      v43 = (0.5 - (double)SHIDWORD(v218) * 0.00003051850947599719) * v39 + *v40;
      HIDWORD(v218) = (unsigned __int16)v42;
      v38 = 2147001325 * v42 + 715136305;
      *v40 = v43;
      v44 = (double)SHIDWORD(v218);
      HIDWORD(v218) = (unsigned __int16)v38;
      ++v37;
      v40[1] = (0.5 - v44 * 0.00003051850947599719) * v39 + v40[1];
      v40[2] = (0.5 - (double)SHIDWORD(v218) * 0.00003051850947599719) * v39 + v40[2];
    }
    while ( v37 < v5 );
    v17 = v213;
    v20 = v208;
    v22 = v203;
  }
  v45 = 0;
  v182 = 80.0;
  v46 = &v11[v5];
  v183 = -10.0;
  v184 = -10.0;
  v185 = -10.0;
  v186 = -10.0;
  v187 = 80.0;
  v188 = -10.0;
  v189 = -10.0;
  v190 = -10.0;
  v191 = -10.0;
  v192 = 80.0;
  v193 = -10.0;
  do
  {
    v47 = *v46;
    v48 = *(&v182 + v45++) * v35;
    ++v46;
    *v47 = v48 + v17;
    v47[1] = *(&v185 + v45) * v29 + v20;
    v47[2] = *(&v189 + v45) * v30 + v22;
  }
  while ( v45 < 4 );
  v49 = sub_10014910();
  v50 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v49)(v49, 1804, 1);
  v205 = v50;
  v51 = sub_10014910();
  *v50 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v51)(v51, 5412, 1);
  v52 = 12;
  v53 = v50 + 1;
  do
  {
    *v53 = v52 + *v50;
    v52 += 12;
    ++v53;
  }
  while ( v52 < 5412 );
  v54 = 2 * (3 * v5 + 18);
  v55 = sub_10014910();
  v56 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v55)(v55, 8 * (3 * v5 + 18), 1);
  v57 = 0;
  for ( HIDWORD(v213) = v56; v57 < v54; ++v57 )
    *(_DWORD *)(v56 + 4 * v57) = v57;
  v58 = sub_10014910();
  v59 = (_DWORD *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v58)(v58, 8 * (3 * v5 + 18), 1);
  HIDWORD(v203) = v59;
  v60 = sub_10014910();
  *v59 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v60)(v60, 32 * (3 * v5 + 18), 1);
  v61 = 1;
  if ( v54 > 1 )
  {
    v62 = 16;
    do
    {
      v59[v61++] = v62 + *v59;
      v62 += 16;
    }
    while ( v61 < v54 );
  }
  *(_DWORD *)*v59 = v5;
  *(_DWORD *)(*v59 + 4) = v5 + 1;
  *(_DWORD *)(*v59 + 8) = v5 + 2;
  *(_DWORD *)(*v59 + 12) = v5 + 3;
  v63 = sub_10014910();
  v214 = (int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v63)(v63, 8 * (3 * v5 + 18), 1);
  v64 = sub_10014910();
  v65 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v64)(v64, (3 * v5 + 18) << 6, 1);
  v66 = v214;
  *v214 = v65;
  v67 = 1;
  v68 = v66;
  if ( v54 > 1 )
  {
    v69 = 32;
    do
    {
      v68[v67++] = v69 + *v68;
      v69 += 32;
    }
    while ( v67 < v54 );
    v5 = Size;
  }
  v70 = 0.0;
  *(double *)*v68 = 0.0;
  *(double *)(*v68 + 8) = 0.0;
  *(double *)(*v68 + 16) = 0.0;
  *(double *)(*v68 + 24) = 3.402823466385289e38;
  v71 = 1;
  v211 = 1;
  v207 = 1;
  v202 = 0;
  if ( v5 > 0 )
  {
    v72 = 0.5;
    v210 = (_DWORD *)i;
    do
    {
      v73 = -1;
      v220 = -1;
      v206 = 0;
      HIDWORD(v218) = 0;
      if ( v211 > 0 )
      {
        while ( 2 )
        {
          v74 = (int *)v59[++v73];
          v75 = *v74 < 0;
          v215 = (_DWORD *)v73;
          if ( v75 )
          {
            do
              v76 = (int *)v59[++v73];
            while ( *v76 < 0 );
            v215 = (_DWORD *)v73;
          }
          v77 = (double *)v214[v73];
          v78 = v77[3];
          v79 = 0;
          v80 = v77;
          while ( 1 )
          {
            v78 = v78
                - (*(double *)((char *)v80 + *v210 - (_DWORD)v77) - *v80)
                * (*(double *)((char *)v80 + *v210 - (_DWORD)v77) - *v80);
            if ( v78 < v70 )
              break;
            ++v79;
            ++v80;
            if ( v79 >= 3 )
            {
              v81 = v220;
              --v206;
              v82 = v207 - 1;
              *(_DWORD *)(HIDWORD(v213) + 4 * v82) = v73;
              v207 = v82;
              v83 = 0;
              v84 = &v197;
              HIDWORD(v204) = 0;
              HIDWORD(v208) = &v197;
              HIDWORD(v209) = &v205[v81];
              while ( 1 )
              {
                v85 = v217;
                v198[0] = v83 == 0;
                for ( j = 1; j < 3; ++j )
                {
                  v87 = v84[j] + 1;
                  v88 = v87 == HIDWORD(v204);
                  v198[j] = v87;
                  if ( v88 )
                    v198[j] = v87 + 1;
                }
                v89 = v220;
                if ( v220 > 2 )
                {
                  v90 = 0;
                  while ( 2 )
                  {
                    for ( k = 0; ; ++k )
                    {
                      if ( k >= 3 )
                      {
                        for ( m = 0; m < 12; m += 4 )
                          *(_DWORD *)(m + v205[v90]) = *(_DWORD *)(m + *(_DWORD *)HIDWORD(v209));
                        --v220;
                        HIDWORD(v209) -= 4;
                        goto LABEL_70;
                      }
                      v88 = *(_DWORD *)(v59[v73] + 4 * v198[k]) == *(_DWORD *)(k * 4 + v205[v90]);
                      v73 = (int)v215;
                      if ( !v88 )
                        break;
                    }
                    if ( ++v90 <= v220 )
                      continue;
                    break;
                  }
                  v85 = v217;
                  v89 = v220;
                }
                HIDWORD(v209) += 4;
                v220 = v89 + 1;
                if ( v89 + 1 > 450 )
                  break;
                for ( n = 0; n < 3; ++n )
                  *(_DWORD *)(n * 4 + *(_DWORD *)HIDWORD(v209)) = *(_DWORD *)(v59[v73] + 4 * v198[n]);
LABEL_70:
                v83 = ++HIDWORD(v204);
                if ( SHIDWORD(v204) >= 4 )
                {
                  *(_DWORD *)v59[v73] = -1;
                  goto LABEL_75;
                }
                v84 = (int *)HIDWORD(v208);
              }
              v219 = 0;
              goto LABEL_110;
            }
          }
LABEL_75:
          ++HIDWORD(v218);
          if ( SHIDWORD(v218) < v211 )
            continue;
          break;
        }
        if ( v220 >= 0 )
        {
          v94 = (_DWORD *)(HIDWORD(v213) + 4 * v207);
          v95 = v205;
          v215 = v205;
          ++v220;
          do
          {
            if ( *(_DWORD *)*v95 >= (signed int)Size )
            {
              v96 = (_DWORD *)*v95;
              HIDWORD(v218) = *v210;
              v97 = &v185;
              HIDWORD(v204) = v96;
              HIDWORD(v209) = 3;
              while ( 1 )
              {
                v99 = v72;
                v100 = v70;
                v101 = v99;
                v102 = *(_DWORD *)HIDWORD(v204);
                *v97 = v100;
                v103 = (double *)HIDWORD(v218);
                v104 = v97 - 3;
                v105 = *(_DWORD *)(i + 4 * v102) - HIDWORD(v218);
                v106 = 3;
                do
                {
                  ++v104;
                  v107 = *(double *)((char *)v103 + v105) - *v103;
                  ++v103;
                  --v106;
                  *(v104 - 1) = v107;
                  *v97 = v107 * (*(double *)((char *)v103 + v105 - 8) + *(v103 - 1)) * v101 + *v97;
                }
                while ( v106 );
                HIDWORD(v204) += 4;
                v97 += 4;
                if ( !--HIDWORD(v209) )
                  break;
                v98 = v100;
                v72 = v101;
                v70 = v98;
              }
              v108 = v214;
              v109 = (double *)v214[*v94];
              v110 = v192 * v187 - v191 * v188;
              v209 = v192 * v186 - v190 * v188;
              v218 = v186 * v191 - v190 * v187;
              v204 = v218 * v184 + v110 * v182 - v209 * v183;
              v111 = v189;
              v112 = v192 * v189 - v188 * v193;
              v113 = v184;
              v114 = v191 * v189;
              v208 = v187 * v193;
              v115 = v110;
              v116 = 1.0 / v204;
              *v109 = (v115 * v185 - v112 * v183 + (v114 - v208) * v184) * v116;
              v117 = v112 * v182;
              v118 = v185;
              v119 = v117 - v209 * v185;
              v120 = v193 * v186 - v111 * v190;
              v121 = v113 * v120 + v119;
              v122 = v182;
              v59 = (_DWORD *)HIDWORD(v203);
              *(double *)(v108[*v94] + 8) = v121 * v116;
              *(double *)(v108[*v94] + 16) = v116 * (v118 * v218 + v122 * (v208 - v114) - v120 * v183);
              v70 = 0.0;
              *(double *)(v108[*v94] + 24) = 0.0;
              v123 = 0;
              v124 = 0;
              while ( 1 )
              {
                v125 = *(double *)(v124 + *v210);
                v124 += 8;
                v123 += 4;
                *(double *)(v108[*v94] + 24) = (v125 - *(double *)(v108[*v94] + v124 - 8))
                                             * (v125 - *(double *)(v108[*v94] + v124 - 8))
                                             + *(double *)(v108[*v94] + 24);
                *(_DWORD *)(v123 + v59[*v94] - 4) = *(_DWORD *)(v123 + *v215 - 4);
                if ( v124 >= 24 )
                  break;
                v108 = v214;
              }
              v72 = 0.5;
              *(_DWORD *)(v59[*v94] + 12) = v202;
              ++v207;
              ++v94;
              ++v206;
              v95 = v215;
            }
            ++v95;
            v88 = v220-- == 1;
            v215 = v95;
          }
          while ( !v88 );
        }
      }
      v211 += v206;
      ++v210;
      ++v202;
    }
    while ( v202 < (int)Size );
    v71 = v211;
    v5 = Size;
  }
  *(_DWORD *)(v217[1] + 4) = 0;
  v126 = -1;
  if ( v71 > 0 )
  {
    v127 = v71;
    do
    {
      ++v126;
      for ( ; *(int *)v59[v126] < 0; ++v126 )
        ;
      if ( *(_DWORD *)(v59[v126] + 4) < v5 )
        ++*(_DWORD *)(v217[1] + 4);
      --v127;
    }
    while ( v127 );
  }
  v128 = *(_DWORD *)(v217[1] + 4);
  v129 = sub_10014910();
  v130 = (12 * (unsigned __int64)v128) >> 32 != 0 ? -1 : 12 * v128;
  v131 = (unsigned int *)((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v129)(
                           v129,
                           __CFADD__(v130, 4) ? -1 : v130 + 4,
                           1);
  if ( v131 )
  {
    *v131 = v128;
    v212 = v131 + 1;
  }
  else
  {
    v212 = 0;
  }
  v132 = v217;
  v133 = v211;
  *(_DWORD *)(v217[1] + 4) = 0;
  v134 = -1;
  if ( v133 > 0 )
  {
    HIDWORD(v218) = v133;
    do
    {
      ++v134;
      for ( ; *(int *)v59[v134] < 0; ++v134 )
        ;
      if ( *(_DWORD *)(v59[v134] + 4) < (signed int)Size )
      {
        v135 = &v212[3 * *(_DWORD *)(v132[1] + 4)];
        *v135 = *(_DWORD *)(v59[v134] + 4);
        v135[1] = *(_DWORD *)(v59[v134] + 8);
        v135[2] = *(_DWORD *)(v59[v134] + 12);
        ++*(_DWORD *)(v132[1] + 4);
      }
      --HIDWORD(v218);
    }
    while ( HIDWORD(v218) );
  }
  v219 = 1;
  v85 = v132;
LABEL_110:
  v136 = v214;
  if ( *v214 )
  {
    v137 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v137)[3])(v137, *v136);
    *v136 = 0;
  }
  v138 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int *))(*v138)[3])(v138, v136);
  if ( *v59 )
  {
    v139 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v139)[3])(v139, *v59);
    *v59 = 0;
  }
  v140 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v140)[3])(v140, v59);
  v141 = HIDWORD(v213);
  if ( HIDWORD(v213) )
  {
    v142 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v142)[3])(v142, v141);
  }
  v143 = v205;
  if ( *v205 )
  {
    v144 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v144)[3])(v144, *v143);
    *v143 = 0;
  }
  v145 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v145)[3])(v145, v143);
  v146 = Size + 4;
  for ( ii = 0; ii < v146; ++ii )
  {
    if ( *(_DWORD *)(i + 4 * ii) )
    {
      v148 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD))(*v148)[3])(v148, *(_DWORD *)(i + 4 * ii));
      *(_DWORD *)(i + 4 * ii) = 0;
    }
  }
  v149 = sub_10014910();
  ((void (__thiscall *)(int (__stdcall ***)(size_t, int), int))(*v149)[3])(v149, i);
  if ( !v219 )
  {
    v150 = v212;
    if ( v212 )
    {
      v151 = sub_10014910();
      ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v151)[3])(v151, v150 - 1);
    }
LABEL_125:
    sub_10025B00(v194);
    return 0;
  }
  v153 = sub_10014910();
  *(_DWORD *)(v85[1] + 8) = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, _DWORD))**v153)(
                              v153,
                              12 * *(_DWORD *)(v85[1] + 4),
                              0);
  v154 = v85[1];
  if ( !*(_DWORD *)(v154 + 8) )
    goto LABEL_125;
  v155 = 0;
  if ( *(_DWORD *)(v154 + 4) )
  {
    v156 = 0;
    v157 = v212 + 2;
    do
    {
      *(_DWORD *)(v156 + *(_DWORD *)(v85[1] + 8)) = *(v157 - 2);
      *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v156 + 4) = *(v157 - 1);
      *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v156 + 8) = *v157;
      ++v155;
      v156 += 12;
      v157 += 3;
    }
    while ( v155 < *(_DWORD *)(v85[1] + 4) );
  }
  v158 = v212;
  if ( v212 )
  {
    v159 = sub_10014910();
    ((void (__thiscall *)(int (__stdcall ***)(size_t, int), _DWORD *))(*v159)[3])(v159, v158 - 1);
  }
  v160 = v85[1];
  HIDWORD(v208) = *(_DWORD *)(v160 + 8);
  v161 = (_DWORD *)HIDWORD(v208);
  sub_1001FCA0((unsigned int *)(v160 + 4), (_DWORD *)HIDWORD(v208), 1);
  if ( (_BYTE)v201 )
    sub_1001FDA0(Size, (int)v199, *(_DWORD *)(v85[1] + 4), v161, 1);
  v162 = alloca(Size);
  HIDWORD(v203) = v181;
  memset(v181, 0, Size);
  *(_DWORD *)(v85[1] + 12) = 0;
  v88 = *(_DWORD *)(v85[1] + 4) == 0;
  HIDWORD(v218) = 0;
  if ( !v88 )
  {
    HIDWORD(v213) = 0;
    do
    {
      v163 = *(_DWORD *)(v85[1] + 8);
      v164 = *(_WORD *)(HIDWORD(v213) + v163);
      v165 = *(_WORD *)(HIDWORD(v213) + v163 + 8);
      v166 = *(_WORD *)(v163 + HIDWORD(v213) + 4);
      if ( !v181[v164] )
      {
        v181[v164] = 1;
        ++*(_DWORD *)(v85[1] + 12);
      }
      if ( !v181[v166] )
      {
        v181[v166] = 1;
        ++*(_DWORD *)(v85[1] + 12);
      }
      v167 = &v181[v165];
      if ( !*v167 )
      {
        *v167 = 1;
        ++*(_DWORD *)(v85[1] + 12);
      }
      HIDWORD(v213) += 12;
    }
    while ( (unsigned int)++HIDWORD(v218) < *(_DWORD *)(v85[1] + 4) );
  }
  v169 = alloca(4 * Size);
  v170 = sub_10014910();
  v171 = ((int (__thiscall *)(int (__stdcall ***)(size_t, int), int, int))**v170)(
           v170,
           12 * *(_DWORD *)(v85[1] + 12),
           47);
  v172 = 0;
  v173 = 0;
  v174 = (int)Size <= 0;
  *(_DWORD *)(v85[1] + 16) = v171;
  if ( !v174 )
  {
    v175 = v199;
    HIDWORD(v213) = 0;
    do
    {
      if ( *(_BYTE *)(v172 + HIDWORD(v203)) )
      {
        v176 = (_DWORD *)(HIDWORD(v213) + *(_DWORD *)(v85[1] + 16));
        *v176 = *v175;
        v176[1] = v175[1];
        v177 = v175[2];
        *(_DWORD *)&v181[4 * v172] = v173;
        v176[2] = v177;
        v85 = v217;
        ++v173;
        HIDWORD(v213) += 12;
      }
      ++v172;
      v175 += 3;
    }
    while ( v172 < (int)Size );
  }
  v178 = 0;
  if ( *(_DWORD *)(v85[1] + 4) )
  {
    v179 = 0;
    do
    {
      *(_DWORD *)(v179 + *(_DWORD *)(v85[1] + 8)) = *(_DWORD *)&v181[4 * *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v179)];
      *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v179 + 4) = *(_DWORD *)&v181[4
                                                                       * *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v179 + 4)];
      *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v179 + 8) = *(_DWORD *)&v181[4
                                                                       * *(_DWORD *)(*(_DWORD *)(v85[1] + 8) + v179 + 8)];
      ++v178;
      v179 += 12;
    }
    while ( v178 < *(_DWORD *)(v85[1] + 4) );
  }
  if ( !sub_1001FF20((unsigned int *)(v85[1] + 4), (int *)HIDWORD(v208), *(_DWORD *)(v85[1] + 16), 1)
    || BYTE1(v201) && !sub_10020E00(v85) )
  {
    goto LABEL_125;
  }
  sub_1000C970((_DWORD *)v85[1], (float *)(v85[1] + 24));
  v180 = sub_10020380(v85);
  sub_10025B00(v194);
  return v180;
}
