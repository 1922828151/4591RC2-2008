/*
 * func-name: sub_10006360
 * func-address: 0x10006360
 * callers: 0x1000bf10
 * callees: 0x10005850, 0x10005a10, 0x10005d30, 0x10034ca4
 */

int __thiscall sub_10006360(int this)
{
  int v1; // ebx
  unsigned int v2; // esi
  bool v3; // zf
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // edx
  int v8; // eax
  void *v9; // edi
  int v10; // ebp
  _DWORD *i; // eax
  _DWORD *v12; // ebx
  _DWORD *v13; // edx
  _DWORD *v14; // edi
  int v15; // ecx
  unsigned int v16; // eax
  unsigned int v17; // ebx
  int v18; // ebp
  unsigned int v19; // edx
  unsigned int v20; // eax
  int v21; // ebp
  int v22; // eax
  _DWORD *v23; // edi
  _DWORD *v24; // ecx
  _DWORD *v25; // esi
  _DWORD *v26; // eax
  _DWORD *v27; // edx
  int v28; // ecx
  _DWORD *v29; // ecx
  _DWORD *v30; // eax
  int v31; // ebp
  int v32; // eax
  unsigned int v33; // eax
  int v34; // edx
  int v35; // esi
  int v36; // eax
  int v37; // eax
  signed int v38; // ecx
  signed int j; // eax
  _DWORD *v40; // esi
  unsigned int v41; // ecx
  unsigned int v42; // eax
  unsigned int v43; // eax
  unsigned int v44; // ecx
  int v45; // ebp
  int v46; // eax
  _DWORD *v47; // ecx
  _DWORD *v48; // edi
  _DWORD *v49; // eax
  _DWORD *k; // edx
  int v51; // ecx
  _DWORD *v52; // ebx
  int v53; // eax
  int v54; // esi
  char v55; // cl
  int v56; // edi
  int v57; // eax
  int v58; // esi
  int v59; // esi
  int v60; // edx
  int m; // ecx
  int v62; // eax
  _DWORD *v63; // esi
  unsigned int v64; // edx
  unsigned int v65; // eax
  unsigned int v66; // eax
  unsigned int v67; // edx
  int v68; // ebp
  int v69; // eax
  _DWORD *v70; // ecx
  _DWORD *v71; // edi
  _DWORD *v72; // eax
  _DWORD *n; // edx
  _DWORD *v74; // edx
  _DWORD *v75; // eax
  _DWORD *v76; // ecx
  int v77; // edx
  _DWORD *v78; // eax
  int v79; // eax
  __int16 v80; // cx
  double v81; // st7
  int v82; // edi
  float v83; // ebp
  int v84; // ecx
  int v85; // eax
  unsigned int v86; // ecx
  unsigned int v87; // eax
  int v88; // edx
  unsigned int v89; // eax
  unsigned int v90; // ecx
  int v91; // edi
  int v92; // eax
  _DWORD *v93; // ecx
  _DWORD *v94; // esi
  _DWORD *v95; // eax
  _DWORD *v96; // edx
  int v97; // ecx
  int v98; // ecx
  int v99; // eax
  double v100; // st7
  float *v101; // edx
  double v102; // st7
  double v103; // st7
  int v104; // esi
  int v105; // edx
  bool v106; // cc
  int v107; // edi
  unsigned int v108; // ecx
  unsigned int v109; // eax
  int v110; // ebp
  int v111; // esi
  _DWORD *v112; // eax
  int v113; // ecx
  _DWORD *v114; // ecx
  _DWORD *v115; // eax
  int v116; // edx
  int v117; // eax
  _DWORD *v118; // ecx
  unsigned int v119; // ecx
  unsigned int v120; // eax
  int v121; // edx
  unsigned int v122; // eax
  unsigned int v123; // ecx
  int v124; // edx
  int v125; // ebx
  char *v126; // ebp
  char *v127; // eax
  char *v128; // edx
  const void *v129; // esi
  void *v130; // edi
  int v131; // ecx
  int v132; // edx
  _DWORD *v133; // esi
  unsigned int v134; // edx
  unsigned int v135; // eax
  unsigned int v136; // eax
  unsigned int v137; // edx
  int v138; // ebp
  int v139; // eax
  _DWORD *v140; // ecx
  _DWORD *v141; // edi
  _DWORD *v142; // eax
  _DWORD *ii; // edx
  _DWORD *v144; // edx
  _DWORD *v145; // eax
  _DWORD *v146; // ecx
  int v147; // edx
  _DWORD *v148; // eax
  int v149; // ebx
  int v150; // edi
  int v151; // ebp
  _DWORD *v152; // eax
  _DWORD *v153; // esi
  unsigned int v154; // ecx
  unsigned int v155; // eax
  unsigned int v156; // eax
  unsigned int v157; // ecx
  int v158; // ebp
  int v159; // eax
  _DWORD *v160; // ecx
  _DWORD *v161; // edi
  _DWORD *v162; // eax
  _DWORD *v163; // edx
  _DWORD *v164; // ecx
  _DWORD *v165; // eax
  _DWORD *v166; // ecx
  _DWORD *v167; // eax
  int v168; // edx
  _DWORD *v169; // eax
  _DWORD *v170; // esi
  unsigned int v171; // ecx
  unsigned int v172; // eax
  _DWORD *v173; // esi
  unsigned int v174; // eax
  unsigned int v175; // ecx
  int v176; // ebp
  int v177; // eax
  _DWORD *v178; // ecx
  _DWORD *v179; // edi
  _DWORD *v180; // eax
  _DWORD *v181; // edx
  _DWORD *v182; // ecx
  _DWORD *v183; // eax
  int v184; // eax
  signed int v185; // ebp
  int v186; // eax
  _DWORD *v187; // edi
  int *v188; // esi
  _DWORD *v189; // ecx
  unsigned int v190; // eax
  int v191; // ebx
  unsigned int v192; // edx
  unsigned int v193; // eax
  int v194; // edi
  int v195; // eax
  _DWORD *v196; // ecx
  _DWORD *v197; // ebp
  _DWORD *v198; // eax
  _DWORD *v199; // edx
  int v200; // edx
  _DWORD *v201; // ecx
  int v202; // ebp
  _DWORD *v203; // eax
  unsigned int v204; // eax
  int v205; // edi
  int v206; // eax
  int v207; // eax
  signed int jj; // eax
  unsigned int v209; // edx
  unsigned int v210; // eax
  unsigned int v211; // eax
  unsigned int v212; // edx
  int v213; // ebx
  int v214; // eax
  _DWORD *v215; // ecx
  _DWORD *v216; // edi
  _DWORD *v217; // eax
  _DWORD *kk; // edx
  int v219; // edx
  _DWORD *v220; // esi
  unsigned int v221; // edx
  unsigned int v222; // eax
  unsigned int v223; // eax
  unsigned int v224; // edx
  int v225; // ebx
  int v226; // eax
  _DWORD *v227; // ecx
  _DWORD *v228; // edi
  _DWORD *v229; // eax
  _DWORD *mm; // edx
  int v231; // edx
  int v232; // edx
  int result; // eax
  _DWORD *v235; // [esp+80h] [ebp-98h]
  int v236; // [esp+84h] [ebp-94h]
  int v237; // [esp+88h] [ebp-90h]
  int v238; // [esp+8Ch] [ebp-8Ch] BYREF
  int v239; // [esp+90h] [ebp-88h]
  int v240; // [esp+94h] [ebp-84h]
  int v241; // [esp+98h] [ebp-80h] BYREF
  int v242; // [esp+9Ch] [ebp-7Ch]
  int v243; // [esp+A0h] [ebp-78h]
  unsigned int v244; // [esp+A4h] [ebp-74h]
  float v245; // [esp+A8h] [ebp-70h] BYREF
  int v246; // [esp+ACh] [ebp-6Ch]
  float v247; // [esp+B0h] [ebp-68h] BYREF
  float v248; // [esp+B4h] [ebp-64h]
  float v249; // [esp+B8h] [ebp-60h]
  float v250; // [esp+BCh] [ebp-5Ch]
  float v251; // [esp+C0h] [ebp-58h]
  float v252; // [esp+C4h] [ebp-54h]
  _DWORD *v253; // [esp+C8h] [ebp-50h]
  _DWORD *v254; // [esp+CCh] [ebp-4Ch]
  unsigned int v255; // [esp+D0h] [ebp-48h]
  int v256; // [esp+DCh] [ebp-3Ch]
  _DWORD *v257; // [esp+E0h] [ebp-38h]
  float v258[8]; // [esp+F4h] [ebp-24h] BYREF

  v244 = (*(_DWORD *)(*(_DWORD *)(this + 716) + 4) - **(_DWORD **)(this + 716)) / 12;
  v1 = (*(_DWORD *)(*(_DWORD *)(this + 720) + 4) - **(_DWORD **)(this + 720)) / 68;
  v2 = 0;
  v3 = *(_BYTE *)(this + 64) == 0;
  v243 = v1;
  if ( v3 )
  {
    v256 = 960;
  }
  else
  {
    v4 = *(_DWORD *)(this + 60);
    if ( v4 == 1 )
    {
      v256 = 560;
    }
    else
    {
      v3 = v4 == 2;
      v5 = 45;
      if ( !v3 )
        v5 = v246;
      v256 = 16 * (60 - v5);
    }
  }
  v6 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 44, 292);
  if ( v6 )
  {
    v6[1] = 0;
    v6[2] = 0;
    v6[3] = 0;
    v6[6] = 0;
    v6[7] = 0;
    v6[8] = 0;
    *v6 = 0;
    v235 = v6;
  }
  else
  {
    v235 = 0;
  }
  v7 = 0;
  v247 = 3.4028235e38;
  v248 = 3.4028235e38;
  v240 = 0;
  v249 = 3.4028235e38;
  v236 = 0;
  v239 = 0;
  v250 = -3.4028235e38;
  v237 = 0;
  v251 = -3.4028235e38;
  v253 = 0;
  v252 = -3.4028235e38;
  v255 = 0;
  v254 = 0;
  v257 = 0;
  if ( !v1 )
    goto LABEL_21;
  if ( 2 * v1 )
  {
    v8 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 8))(dword_100580A0, 8 * v1, 289);
    v2 = v8 + 8 * v1;
    v7 = (_DWORD *)v8;
    v257 = (_DWORD *)v8;
  }
  v9 = v257;
  v10 = v1;
  for ( i = v257; i != v7; ++i )
    i[v1] = *i;
  v12 = v257;
  if ( v243 )
    memset(v9, 0, 4 * v243);
  v13 = &v7[v10];
  if ( v257 == v13 )
  {
    if ( v257 )
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v257);
LABEL_21:
    v12 = 0;
    goto LABEL_24;
  }
  if ( v2 <= (unsigned int)v13 )
    goto LABEL_25;
  v12 = (_DWORD *)(*(int (__thiscall **)(int, _DWORD *, int))(*(_DWORD *)dword_100580A0 + 16))(
                    dword_100580A0,
                    v257,
                    4 * (v13 - v257));
LABEL_24:
  v257 = v12;
LABEL_25:
  if ( v243 > 0 )
    memset(v12, 0xFFu, 4 * v243);
  v14 = *(_DWORD **)(this + 72);
  v15 = *(_DWORD *)(this + 68);
  v16 = ((int)v14 - v15) >> 2;
  if ( v244 <= v16 )
  {
    if ( v244 < v16 )
      *(_DWORD *)(this + 72) = &v14[-((int)((int)v14 - v15 + -4 * v244) >> 2)];
  }
  else
  {
    v17 = v244 - v16;
    if ( v244 != v16 )
    {
      v18 = this;
      if ( v15 )
        v19 = (*(_DWORD *)(this + 76) - v15) >> 2;
      else
        v19 = 0;
      if ( v19 < v244 )
      {
        v242 = ((int)v14 - v15) >> 2;
        if ( v15 )
          v20 = (*(_DWORD *)(this + 76) - v15) >> 2;
        else
          v20 = 0;
        if ( v20 < 2 * v244 )
        {
          v21 = 2 * v244;
          v22 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                  dword_100580A0,
                  8 * v244,
                  289);
          v23 = (_DWORD *)this;
          v24 = *(_DWORD **)(this + 72);
          v25 = (_DWORD *)v22;
          v26 = *(_DWORD **)(this + 68);
          v27 = v25;
          if ( v26 != v24 )
          {
            do
              *v27++ = *v26++;
            while ( v26 != v24 );
            v23 = (_DWORD *)this;
          }
          if ( v23[17] )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v23[17]);
          v28 = (v23[18] - v23[17]) >> 2;
          v23[19] = &v25[v21];
          v18 = this;
          v23[18] = &v25[v28];
          v23[17] = v25;
        }
        v14 = (_DWORD *)(*(_DWORD *)(v18 + 68) + 4 * v242);
      }
      v29 = *(_DWORD **)(v18 + 72);
      v30 = v14;
      if ( v14 != v29 )
      {
        do
        {
          v30[v17] = *v30;
          ++v30;
        }
        while ( v30 != v29 );
        v18 = this;
      }
      if ( v17 )
        memset(v14, 0, 4 * v17);
      *(_DWORD *)(v18 + 72) += 4 * v17;
    }
  }
  v31 = this;
  v32 = *(_DWORD *)(this + 68);
  if ( v32 == *(_DWORD *)(this + 72) )
  {
    if ( v32 )
      (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *(_DWORD *)(this + 68));
    *(_DWORD *)(this + 68) = 0;
    *(_DWORD *)(this + 72) = 0;
    *(_DWORD *)(this + 76) = 0;
  }
  v33 = *(_DWORD *)(this + 72);
  if ( *(_DWORD *)(this + 76) > v33 )
  {
    v34 = *(_DWORD *)(this + 68);
    v35 = (int)(v33 - v34) >> 2;
    v36 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
            dword_100580A0,
            v34,
            4 * ((*(_DWORD *)(this + 72) - v34) >> 2));
    *(_DWORD *)(this + 68) = v36;
    v37 = v36 + 4 * v35;
    *(_DWORD *)(this + 72) = v37;
    *(_DWORD *)(this + 76) = v37;
  }
  v38 = v244;
  for ( j = 0; j < v38; ++j )
    *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * j) = -1;
  sub_10005D30((int *)this);
  *(_DWORD *)(*(_DWORD *)(this + 728) + 4) = **(_DWORD **)(this + 728);
  v40 = *(_DWORD **)(this + 728);
  v41 = v40[2];
  v42 = v40[1];
  if ( v41 <= v42 )
  {
    v43 = 2 * ((int)(v42 - *v40) >> 2) + 2;
    v44 = *v40 ? (int)(v41 - *v40) >> 2 : 0;
    if ( v44 < v43 )
    {
      v45 = v43;
      v46 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
              dword_100580A0,
              4 * v43,
              289);
      v47 = (_DWORD *)v40[1];
      v48 = (_DWORD *)v46;
      v49 = (_DWORD *)*v40;
      for ( k = v48; v49 != v47; ++k )
        *k = *v49++;
      if ( *v40 )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v40);
      v51 = (v40[1] - *v40) >> 2;
      v40[2] = &v48[v45];
      v31 = this;
      v40[1] = &v48[v51];
      *v40 = v48;
    }
  }
  *(_DWORD *)v40[1] = 0;
  while ( 2 )
  {
    v52 = v235;
    v40[1] += 4;
    while ( 1 )
    {
      v245 = 3.4028235e38;
      v53 = -1;
      v54 = v254 - v253;
      v55 = 0;
      v56 = 0;
      v241 = -1;
      v238 = -1;
      if ( v54 <= 0 )
        goto LABEL_77;
      do
      {
        v57 = v253[v56];
        if ( v257[v57] == -1 )
        {
          sub_10005A10((_DWORD **)v31, v57, v236, (_DWORD *)(v31 + 20 * v240 + 68), &v247, &v238, &v245, &v241);
          v55 = 1;
        }
        ++v56;
      }
      while ( v56 < v54 );
      v53 = v241;
      if ( v241 < 0 )
      {
LABEL_77:
        v58 = 0;
        if ( v243 > 0 )
        {
          do
          {
            if ( v257[v58] == -1 )
            {
              sub_10005A10((_DWORD **)v31, v58, v236, (_DWORD *)(v31 + 20 * v240 + 68), &v247, &v238, &v245, &v241);
              v55 = 1;
            }
            ++v58;
          }
          while ( v58 < v243 );
          v53 = v241;
        }
      }
      if ( !v55 )
      {
        if ( v239 > 0 )
          ++v240;
        goto LABEL_265;
      }
      if ( v53 < 0 )
        break;
      v59 = **(_DWORD **)(v31 + 720) + 68 * v53;
      v60 = 8;
      for ( m = 0; m < 4; ++m )
      {
        v62 = *(_DWORD *)(v59 + 4 * m);
        if ( v62 != -1 && *(_DWORD *)(*(_DWORD *)(v31 + 20 * v240 + 68) + 4 * v62) == -1 )
          v60 += 16;
      }
      if ( v237 + v60 <= v256 || v237 <= 0 )
      {
        v79 = *(_DWORD *)(v31 + 60);
        if ( v79 == 1 )
        {
          v80 = *(_WORD *)(v59 + 24);
          v258[3] = *(float *)(v59 + 28);
          v81 = *(float *)(v59 + 32);
          memset(v258, 255, 12);
          v258[4] = v81;
          v258[5] = *(float *)(v59 + 36);
          LOWORD(v258[7]) = v80;
        }
        else if ( v79 == 2 )
        {
          sub_10005850(v59, (int)v258);
        }
        v82 = this;
        v83 = *(float *)&v59;
        v238 = 0;
        v245 = *(float *)&v59;
        do
        {
          v84 = *(_DWORD *)LODWORD(v83);
          if ( *(_DWORD *)LODWORD(v83) != -1 )
          {
            v85 = *(_DWORD *)(v82 + 20 * v240 + 68);
            if ( *(_DWORD *)(v85 + 4 * v84) == -1 )
            {
              *(_DWORD *)(v85 + 4 * v84) = v236;
              v86 = v52[3];
              v242 = *(_DWORD *)LODWORD(v83);
              v87 = v52[2];
              if ( v86 <= v87 )
              {
                v88 = v52[1];
                v89 = 2 * ((int)(v87 - v88) >> 2) + 2;
                v90 = v88 ? (int)(v86 - v88) >> 2 : 0;
                if ( v90 < v89 )
                {
                  v91 = v89;
                  v92 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                          dword_100580A0,
                          4 * v89,
                          289);
                  v93 = (_DWORD *)v52[2];
                  v94 = (_DWORD *)v92;
                  v95 = (_DWORD *)v52[1];
                  v96 = v94;
                  if ( v95 != v93 )
                  {
                    do
                      *v96++ = *v95++;
                    while ( v95 != v93 );
                    v83 = v245;
                  }
                  if ( v52[1] )
                    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v52[1]);
                  v97 = (v52[2] - v52[1]) >> 2;
                  v52[3] = &v94[v91];
                  v82 = this;
                  v52[2] = &v94[v97];
                  v52[1] = v94;
                }
              }
              *(_DWORD *)v52[2] = v242;
              v52[2] += 4;
              v98 = *(_DWORD *)LODWORD(v83);
              v237 += 16;
              v239 += 16;
              v99 = **(_DWORD **)(v82 + 716);
              v100 = *(float *)(v99 + 12 * v98);
              v101 = (float *)(v99 + 12 * v98);
              if ( v250 >= v100 )
                v100 = v250;
              v250 = v100;
              v102 = v101[1];
              if ( v251 >= v102 )
                v102 = v251;
              v251 = v102;
              v103 = v101[2];
              if ( v252 >= v103 )
                v103 = v252;
              v252 = v103;
              if ( *v101 <= (double)v247 )
                v247 = *v101;
              if ( v101[1] <= (double)v248 )
                v248 = v101[1];
              if ( v101[2] <= (double)v249 )
                v249 = v101[2];
              v104 = *(_DWORD *)(v82 + 40) + 4 * *(_DWORD *)(*(_DWORD *)(v82 + 20) + 4 * v98);
              v105 = 0;
              v106 = *(_DWORD *)(*(_DWORD *)v82 + 4 * v98) <= 0;
              v246 = v104;
              v242 = 0;
              if ( !v106 )
              {
                do
                {
                  if ( v257[*(_DWORD *)(v104 + 4 * v105)] == -1 )
                  {
                    if ( v255 <= (unsigned int)v254 )
                    {
                      v107 = v254 - v253;
                      v108 = 2 * v107 + 2;
                      if ( v253 )
                        v109 = (int)(v255 - (_DWORD)v253) >> 2;
                      else
                        v109 = 0;
                      if ( v109 < v108 )
                      {
                        v110 = 4 * v108;
                        v111 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                                 dword_100580A0,
                                 4 * v108,
                                 289);
                        v112 = v253;
                        if ( v253 != v254 )
                        {
                          v113 = v111 - (_DWORD)v253;
                          do
                          {
                            *(_DWORD *)((char *)v112 + v113) = *v112;
                            ++v112;
                          }
                          while ( v112 != v254 );
                        }
                        if ( v253 )
                          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v253);
                        v105 = v242;
                        v114 = (_DWORD *)(v111 + 4 * v107);
                        v255 = v111 + v110;
                        v83 = v245;
                        v253 = (_DWORD *)v111;
                        v104 = v246;
                        v254 = v114;
                      }
                      v82 = this;
                    }
                    v115 = v254;
                    *v254 = *(_DWORD *)(v104 + 4 * v105);
                    v254 = v115 + 1;
                  }
                  v106 = ++v105 < *(_DWORD *)(*(_DWORD *)v82 + 4 * *(_DWORD *)LODWORD(v83));
                  v242 = v105;
                }
                while ( v106 );
              }
            }
            v116 = v52[2] - v52[1];
            v117 = 0;
            if ( v116 >= 0 && (v116 & 0xFFFFFFFC) != 0 )
            {
              v118 = (_DWORD *)v52[1];
              while ( *v118 != *(_DWORD *)LODWORD(v83) )
              {
                ++v117;
                ++v118;
                if ( v117 >= (v52[2] - v52[1]) >> 2 )
                  goto LABEL_156;
              }
              *((_WORD *)v258 + v238) = v117;
            }
          }
LABEL_156:
          LODWORD(v83) += 4;
          v106 = ++v238 < 4;
          v245 = v83;
        }
        while ( v106 );
        v257[v241] = v236;
        v119 = v52[8];
        v120 = v52[7];
        if ( v119 <= v120 )
        {
          v121 = v52[6];
          v122 = 2 * ((int)(v120 - v121) >> 5) + 2;
          v123 = v121 ? (int)(v119 - v121) >> 5 : 0;
          if ( v123 < v122 )
          {
            v124 = *(_DWORD *)dword_100580A0;
            v246 = 32 * v122;
            v125 = (*(int (__thiscall **)(int, unsigned int, int))(v124 + 8))(dword_100580A0, 32 * v122, 289);
            v126 = (char *)v235[7];
            v127 = (char *)v235[6];
            v128 = (char *)v125;
            while ( v127 != v126 )
            {
              v129 = v127;
              v130 = v128;
              v127 += 32;
              v128 += 32;
              qmemcpy(v130, v129, 0x20u);
            }
            if ( v235[6] )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v235[6]);
            v131 = v125 + v246;
            v132 = v125 + 32 * ((v235[7] - v235[6]) >> 5);
            v235[6] = v125;
            v52 = v235;
            v235[8] = v131;
            v235[7] = v132;
          }
        }
        v31 = this;
        v237 += 8;
        qmemcpy((void *)v52[7], v258, 0x20u);
        v52[7] += 32;
        v239 += 8;
      }
      else
      {
        v63 = *(_DWORD **)(v31 + 732);
        v64 = v63[2];
        v65 = v63[1];
        if ( v64 <= v65 )
        {
          v66 = 2 * ((int)(v65 - *v63) >> 2) + 2;
          v67 = *v63 ? (int)(v64 - *v63) >> 2 : 0;
          if ( v67 < v66 )
          {
            v68 = v66;
            v69 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                    dword_100580A0,
                    4 * v66,
                    289);
            v70 = (_DWORD *)v63[1];
            v71 = (_DWORD *)v69;
            v72 = (_DWORD *)*v63;
            for ( n = v71; v72 != v70; ++n )
              *n = *v72++;
            if ( *v63 )
              (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v63);
            v52 = v235;
            v74 = &v71[(v63[1] - *v63) >> 2];
            v63[2] = &v71[v68];
            v31 = this;
            *v63 = v71;
            v63[1] = v74;
          }
        }
        v75 = (_DWORD *)v63[1];
        v76 = v253;
        v247 = 3.4028235e38;
        ++v236;
        v248 = 3.4028235e38;
        *v75 = v52;
        v249 = 3.4028235e38;
        v63[1] += 4;
        v254 = v76;
        v250 = -3.4028235e38;
        v251 = -3.4028235e38;
        v77 = *(_DWORD *)dword_100580A0;
        v252 = -3.4028235e38;
        v237 = 0;
        v78 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(v77 + 8))(dword_100580A0, 44, 292);
        if ( v78 )
        {
          v78[1] = 0;
          v78[2] = 0;
          v78[3] = 0;
          v52 = v78;
          v78[6] = 0;
          v78[7] = 0;
          v78[8] = 0;
          *v78 = 0;
          v235 = v78;
        }
        else
        {
          v52 = 0;
          v235 = 0;
        }
      }
    }
    if ( v237 > 0 )
    {
      v133 = *(_DWORD **)(v31 + 732);
      v134 = v133[2];
      v135 = v133[1];
      if ( v134 <= v135 )
      {
        v136 = 2 * ((int)(v135 - *v133) >> 2) + 2;
        v137 = *v133 ? (int)(v134 - *v133) >> 2 : 0;
        if ( v137 < v136 )
        {
          v138 = v136;
          v139 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                   dword_100580A0,
                   4 * v136,
                   289);
          v140 = (_DWORD *)v133[1];
          v141 = (_DWORD *)v139;
          v142 = (_DWORD *)*v133;
          for ( ii = v141; v142 != v140; ++ii )
            *ii = *v142++;
          if ( *v133 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v133);
          v52 = v235;
          v144 = &v141[(v133[1] - *v133) >> 2];
          *v133 = v141;
          v133[2] = &v141[v138];
          v133[1] = v144;
        }
      }
      v145 = (_DWORD *)v133[1];
      v146 = v253;
      v247 = 3.4028235e38;
      ++v236;
      v248 = 3.4028235e38;
      *v145 = v52;
      v249 = 3.4028235e38;
      v133[1] += 4;
      v254 = v146;
      v250 = -3.4028235e38;
      v251 = -3.4028235e38;
      v147 = *(_DWORD *)dword_100580A0;
      v252 = -3.4028235e38;
      v237 = 0;
      v148 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(v147 + 8))(dword_100580A0, 44, 292);
      if ( v148 )
      {
        v148[1] = 0;
        v148[2] = 0;
        v148[3] = 0;
        v148[6] = 0;
        v148[7] = 0;
        v148[8] = 0;
        *v148 = 0;
        v235 = v148;
      }
      else
      {
        v235 = 0;
      }
    }
    if ( !v240 )
    {
      v149 = v256;
      v150 = -1;
      v239 = -1;
      v241 = v256;
      v238 = 0;
      if ( (int)v244 > 0 )
      {
        v151 = v236;
        do
        {
          if ( *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * v238) == -1 )
          {
            if ( v149 + 16 > v256 )
            {
              while ( ++v150 < v151 )
              {
                v152 = *(_DWORD **)(**(_DWORD **)(this + 732) + 4 * v150);
                v149 = 8 * (((v152[7] - v152[6]) >> 5) + 2 * ((v152[2] - v152[1]) >> 2));
                v241 = v149;
                if ( v149 + 16 <= v256 )
                {
                  v239 = v150;
                  goto LABEL_204;
                }
              }
              v153 = *(_DWORD **)(this + 732);
              v154 = v153[2];
              v155 = v153[1];
              v149 = 0;
              v150 = v151;
              v239 = v151;
              v241 = 0;
              if ( v154 <= v155 )
              {
                v156 = 2 * ((int)(v155 - *v153) >> 2) + 2;
                v157 = *v153 ? (int)(v154 - *v153) >> 2 : 0;
                if ( v157 < v156 )
                {
                  v158 = v156;
                  v159 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                           dword_100580A0,
                           4 * v156,
                           289);
                  v160 = (_DWORD *)v153[1];
                  v161 = (_DWORD *)v159;
                  v162 = (_DWORD *)*v153;
                  v163 = v161;
                  if ( (_DWORD *)*v153 != v160 )
                  {
                    do
                      *v163++ = *v162++;
                    while ( v162 != v160 );
                    v149 = v241;
                  }
                  if ( *v153 )
                    (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v153);
                  v164 = &v161[v158];
                  v151 = v236;
                  v165 = &v161[(v153[1] - *v153) >> 2];
                  *v153 = v161;
                  v150 = v239;
                  v153[2] = v164;
                  v153[1] = v165;
                }
              }
              v166 = (_DWORD *)v153[1];
              v247 = 3.4028235e38;
              v167 = v253;
              v248 = 3.4028235e38;
              *v166 = v235;
              v249 = 3.4028235e38;
              v153[1] += 4;
              v250 = -3.4028235e38;
              v168 = *(_DWORD *)dword_100580A0;
              v251 = -3.4028235e38;
              v252 = -3.4028235e38;
              v254 = v167;
              v236 = ++v151;
              v237 = 0;
              v169 = (_DWORD *)(*(int (__thiscall **)(int, int, int))(v168 + 8))(dword_100580A0, 44, 292);
              if ( v169 )
              {
                v169[1] = 0;
                v169[2] = 0;
                v169[3] = 0;
                v169[6] = 0;
                v169[7] = 0;
                v169[8] = 0;
                *v169 = 0;
                v235 = v169;
              }
              else
              {
                v235 = 0;
              }
            }
LABEL_204:
            *(_DWORD *)(*(_DWORD *)(this + 68) + 4 * v238) = v150;
            v170 = *(_DWORD **)(**(_DWORD **)(this + 732) + 4 * v150);
            v171 = v170[3];
            v172 = v170[2];
            v173 = v170 + 1;
            if ( v171 <= v172 )
            {
              v174 = 2 * ((int)(v172 - *v173) >> 2) + 2;
              v175 = *v173 ? (int)(v171 - *v173) >> 2 : 0;
              if ( v175 < v174 )
              {
                v176 = v174;
                v177 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                         dword_100580A0,
                         4 * v174,
                         289);
                v178 = (_DWORD *)v173[1];
                v179 = (_DWORD *)v177;
                v180 = (_DWORD *)*v173;
                v181 = v179;
                if ( (_DWORD *)*v173 != v178 )
                {
                  do
                    *v181++ = *v180++;
                  while ( v180 != v178 );
                  v149 = v241;
                }
                if ( *v173 )
                  (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v173);
                v182 = &v179[v176];
                v151 = v236;
                v183 = &v179[(v173[1] - *v173) >> 2];
                *v173 = v179;
                v150 = v239;
                v173[2] = v182;
                v173[1] = v183;
              }
            }
            *(_DWORD *)v173[1] = v238;
            v173[1] += 4;
            v149 += 16;
            v241 = v149;
            if ( v150 == v151 )
              v237 += 16;
          }
          ++v238;
        }
        while ( v238 < (int)v244 );
      }
    }
    v184 = v240 + 1;
    v3 = v240++ == 31;
    v239 = 0;
    if ( !v3 )
    {
      v185 = v244;
      v186 = 5 * v184;
      v187 = *(_DWORD **)(this + 4 * v186 + 72);
      v188 = (int *)(this + 4 * v186 + 68);
      v189 = (_DWORD *)*v188;
      v190 = ((int)v187 - *v188) >> 2;
      if ( v244 <= v190 )
      {
        if ( v244 < v190 )
          v188[1] = (int)&v187[-(v187 - &v189[v244])];
      }
      else
      {
        v191 = v244 - v190;
        v242 = v244 - v190;
        if ( v244 != v190 )
        {
          if ( v189 )
            v192 = (v188[2] - (int)v189) >> 2;
          else
            v192 = 0;
          if ( v192 < v244 )
          {
            v246 = v187 - v189;
            if ( v189 )
              v193 = (v188[2] - (int)v189) >> 2;
            else
              v193 = 0;
            if ( v193 < 2 * v244 )
            {
              v194 = 2 * v244;
              v195 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                       dword_100580A0,
                       8 * v244,
                       289);
              v196 = (_DWORD *)v188[1];
              v197 = (_DWORD *)v195;
              v198 = (_DWORD *)*v188;
              v199 = v197;
              if ( (_DWORD *)*v188 != v196 )
              {
                do
                  *v199++ = *v198++;
                while ( v198 != v196 );
                v191 = v242;
              }
              if ( *v188 )
                (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v188);
              v200 = (v188[1] - *v188) >> 2;
              v188[2] = (int)&v197[v194];
              v188[1] = (int)&v197[v200];
              *v188 = (int)v197;
            }
            v187 = (_DWORD *)(*v188 + 4 * v246);
          }
          v201 = (_DWORD *)v188[1];
          v202 = 4 * v191;
          v203 = v187;
          if ( v187 != v201 )
          {
            do
            {
              v203[v191] = *v203;
              ++v203;
            }
            while ( v203 != v201 );
            v191 = v242;
          }
          if ( v191 )
            memset(v187, 0, 4 * v191);
          v188[1] += v202;
          v185 = v244;
        }
      }
      if ( *v188 == v188[1] )
      {
        if ( *v188 )
          (*(void (__thiscall **)(int, int))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v188);
        *v188 = 0;
        v188[1] = 0;
        v188[2] = 0;
      }
      v204 = v188[1];
      if ( v188[2] > v204 )
      {
        v205 = (int)(v204 - *v188) >> 2;
        v206 = (*(int (__thiscall **)(int, int, int))(*(_DWORD *)dword_100580A0 + 16))(
                 dword_100580A0,
                 *v188,
                 4 * ((v188[1] - *v188) >> 2));
        *v188 = v206;
        v207 = v206 + 4 * v205;
        v188[1] = v207;
        v188[2] = v207;
      }
      for ( jj = 0; jj < v185; ++jj )
        *(_DWORD *)(*v188 + 4 * jj) = -1;
      v40 = *(_DWORD **)(this + 728);
      v209 = v40[2];
      v210 = v40[1];
      if ( v209 <= v210 )
      {
        v211 = 2 * ((int)(v210 - *v40) >> 2) + 2;
        v212 = *v40 ? (int)(v209 - *v40) >> 2 : 0;
        if ( v212 < v211 )
        {
          v213 = v211;
          v214 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                   dword_100580A0,
                   4 * v211,
                   289);
          v215 = (_DWORD *)v40[1];
          v216 = (_DWORD *)v214;
          v217 = (_DWORD *)*v40;
          for ( kk = v216; v217 != v215; ++kk )
            *kk = *v217++;
          if ( *v40 )
            (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v40);
          v219 = (v40[1] - *v40) >> 2;
          v40[2] = &v216[v213];
          v40[1] = &v216[v219];
          *v40 = v216;
        }
      }
      v31 = this;
      *(_DWORD *)v40[1] = v236;
      continue;
    }
    break;
  }
LABEL_265:
  if ( v237 <= 0 )
  {
    if ( v235 )
    {
      if ( v235[6] )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v235[6]);
      v235[6] = 0;
      v235[7] = 0;
      v235[8] = 0;
      if ( v235[1] )
        (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v235[1]);
      v235[1] = 0;
      v235[2] = 0;
      v235[3] = 0;
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v235);
    }
  }
  else
  {
    v220 = *(_DWORD **)(this + 732);
    v221 = v220[2];
    v222 = v220[1];
    if ( v221 <= v222 )
    {
      v223 = 2 * ((int)(v222 - *v220) >> 2) + 2;
      v224 = *v220 ? (int)(v221 - *v220) >> 2 : 0;
      if ( v224 < v223 )
      {
        v225 = v223;
        v226 = (*(int (__thiscall **)(int, unsigned int, int))(*(_DWORD *)dword_100580A0 + 8))(
                 dword_100580A0,
                 4 * v223,
                 289);
        v227 = (_DWORD *)v220[1];
        v228 = (_DWORD *)v226;
        v229 = (_DWORD *)*v220;
        for ( mm = v228; v229 != v227; ++mm )
          *mm = *v229++;
        if ( *v220 )
          (*(void (__thiscall **)(int, _DWORD))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, *v220);
        v231 = (v220[1] - *v220) >> 2;
        v220[2] = &v228[v225];
        v220[1] = &v228[v231];
        *v220 = v228;
      }
    }
    *(_DWORD *)v220[1] = v235;
    v220[1] += 4;
    ++v236;
  }
  v232 = v240;
  *(_DWORD *)(this + 708) = v236;
  *(_DWORD *)(this + 712) = v232;
  if ( v257 )
    (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v257);
  result = (int)v253;
  if ( v253 )
    return (*(int (__thiscall **)(int, _DWORD *))(*(_DWORD *)dword_100580A0 + 20))(dword_100580A0, v253);
  return result;
}
