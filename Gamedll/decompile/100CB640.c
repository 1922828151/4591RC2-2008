/*
 * func-name: ?PostRender@TraceLineSystem@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100cb640
 * callers: 0x1000eb6a
 * callees: 0x100029cd, 0x10002cac, 0x100055f1, 0x10005646, 0x102c9fe0
 */

void __userpurge TraceLineSystem::PostRender(
        TraceLineSystem *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        struct Camera *a4)
{
  int v5; // eax
  unsigned int v6; // edi
  int v7; // ebx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  unsigned int BatchForWriting; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  int v16; // ecx
  int v17; // eax
  unsigned int v18; // ecx
  int v19; // eax
  int v20; // eax
  int v21; // edx
  int v22; // eax
  int v23; // eax
  float *v24; // eax
  double v25; // st7
  double v26; // st7
  int v27; // eax
  float *v28; // eax
  double v29; // st7
  float v30; // edx
  double v31; // st7
  float v32; // eax
  float v33; // ecx
  int v34; // eax
  float v35; // ecx
  float v36; // edx
  int v37; // eax
  int v38; // eax
  double v39; // st7
  int v40; // eax
  int v41; // eax
  int v42; // eax
  int v43; // eax
  int v44; // ebp
  int v45; // eax
  int v46; // ebx
  int v47; // ecx
  int v48; // ecx
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // eax
  int v53; // ebx
  unsigned int v54; // ebp
  int v55; // eax
  int v56; // ecx
  int v57; // edx
  unsigned int v58; // ecx
  int v59; // eax
  unsigned int v60; // ebx
  int v61; // eax
  int v62; // edx
  int v63; // eax
  unsigned int v64; // ecx
  int v65; // eax
  int v66; // eax
  unsigned int v67; // edi
  int v68; // ebx
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // edi
  int v73; // ecx
  int v74; // ecx
  int v75; // ebp
  int v76; // ecx
  int v77; // ebx
  double v78; // st7
  int v79; // ecx
  int v80; // ecx
  int v81; // ecx
  char *v82; // ebx
  int v83; // eax
  int v84; // ebp
  int v85; // ecx
  _DWORD *v86; // eax
  int v87; // eax
  int v88; // eax
  int v89; // edx
  int v90; // ecx
  int v91; // ebp
  _DWORD *v92; // eax
  char *v93; // ecx
  int v94; // eax
  char *v95; // ebx
  int v96; // eax
  int v97; // ebp
  int v98; // ecx
  int v99; // eax
  int v100; // edx
  int v101; // eax
  int v102; // edx
  double v103; // st7
  int v104; // eax
  int v105; // ebp
  int v106; // ecx
  _DWORD *v107; // eax
  char *v108; // ecx
  int v109; // eax
  int v110; // eax
  int v111; // ecx
  int v112; // ecx
  int v113; // ebp
  int v114; // ecx
  int v115; // ebx
  double v116; // st7
  int v117; // ecx
  int v118; // ecx
  int v119; // ecx
  int v120; // ebx
  char *v121; // edi
  int v122; // eax
  int v123; // ebp
  int v124; // ecx
  _DWORD *v125; // eax
  int v126; // eax
  int v127; // eax
  int v128; // edx
  int v129; // ecx
  int v130; // ebp
  _DWORD *v131; // eax
  char *v132; // ecx
  int v133; // eax
  char *v134; // edi
  int v135; // eax
  int v136; // ebp
  int v137; // ecx
  int v138; // eax
  int v139; // edx
  int v140; // eax
  int v141; // edx
  int v142; // eax
  int v143; // ebp
  int v144; // ecx
  _DWORD *v145; // eax
  char *v146; // ecx
  int v147; // eax
  int v148; // eax
  int v149; // [esp-Ch] [ebp-C0h]
  int v150; // [esp-Ch] [ebp-C0h]
  int v151; // [esp-8h] [ebp-BCh]
  int v152; // [esp-8h] [ebp-BCh]
  int v153; // [esp+4h] [ebp-B0h]
  _DWORD *v154; // [esp+4h] [ebp-B0h]
  unsigned int v155; // [esp+4h] [ebp-B0h]
  unsigned int v156; // [esp+4h] [ebp-B0h]
  unsigned int v157; // [esp+8h] [ebp-ACh]
  float v158; // [esp+8h] [ebp-ACh]
  unsigned int v159; // [esp+8h] [ebp-ACh]
  float v160; // [esp+8h] [ebp-ACh]
  float v161; // [esp+Ch] [ebp-A8h]
  float v162; // [esp+Ch] [ebp-A8h]
  float v163; // [esp+Ch] [ebp-A8h]
  float v164; // [esp+Ch] [ebp-A8h]
  float v165; // [esp+Ch] [ebp-A8h]
  unsigned int v166; // [esp+10h] [ebp-A4h]
  int v167; // [esp+14h] [ebp-A0h]
  int v168; // [esp+18h] [ebp-9Ch]
  int v169; // [esp+1Ch] [ebp-98h]
  unsigned int v170; // [esp+20h] [ebp-94h]
  int v171; // [esp+24h] [ebp-90h]
  int v172; // [esp+24h] [ebp-90h]
  unsigned int v173; // [esp+2Ch] [ebp-88h]
  float v174; // [esp+30h] [ebp-84h]
  char *v175; // [esp+34h] [ebp-80h]
  unsigned int v176; // [esp+38h] [ebp-7Ch]
  int v177; // [esp+3Ch] [ebp-78h]
  int v178; // [esp+60h] [ebp-54h]
  float v179; // [esp+64h] [ebp-50h]
  float v180; // [esp+78h] [ebp-3Ch]
  float v181; // [esp+7Ch] [ebp-38h]
  float v182; // [esp+80h] [ebp-34h]
  float v183; // [esp+84h] [ebp-30h]
  float v184; // [esp+88h] [ebp-2Ch]
  float v185; // [esp+8Ch] [ebp-28h]
  float v186; // [esp+90h] [ebp-24h]
  int v187; // [esp+94h] [ebp-20h]
  int v188; // [esp+98h] [ebp-1Ch]
  float v189; // [esp+9Ch] [ebp-18h]
  float v190; // [esp+A0h] [ebp-14h]
  float v191; // [esp+A4h] [ebp-10h]
  float v192; // [esp+A8h] [ebp-Ch]
  float v193; // [esp+ACh] [ebp-8h]
  float v194; // [esp+B0h] [ebp-4h]

  v5 = *((_DWORD *)this + 48);
  if ( v5 )
  {
    v151 = a2;
    v149 = a3;
    v6 = 0;
    if ( v5 > 0 )
    {
      v7 = 0;
      do
      {
        v8 = *((_DWORD *)this + 45);
        if ( !v8 || v6 >= (*((_DWORD *)this + 46) - v8) / 184 )
          _invalid_parameter_noinfo();
        if ( *(float *)(v7 + *((_DWORD *)this + 45) + 64) >= 0.0 )
        {
          v9 = *((_DWORD *)this + 45);
          if ( !v9 || v6 >= (*((_DWORD *)this + 46) - v9) / 184 )
            _invalid_parameter_noinfo();
          sub_10002CAC((int)a4, (int)this);
        }
        ++v6;
        v7 += 184;
      }
      while ( (signed int)v6 < *((_DWORD *)this + 48) );
    }
    if ( *((float *)this + 77) < 1.0 )
      *((float *)this + 77) = 1.0;
    v10 = *((_DWORD *)this + 86);
    if ( v10 )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, v10, *((_DWORD *)this + 52));
      v176 = BatchForWriting;
    }
    else
    {
      if ( !*(_DWORD *)(*((_DWORD *)this + 87) + 152) )
        return;
      BatchForWriting = FXManager::getBatchForWriting(this, *((struct Material **)this + 87));
      v176 = BatchForWriting;
    }
    if ( BatchForWriting != -1 )
    {
      v12 = FXManager::batchedQuads[1];
      if ( !v12 || BatchForWriting >= (FXManager::batchedQuads[2] - v12) / 20 )
        _invalid_parameter_noinfo();
      v175 = (char *)&FXManager::vertexIndicesBatches
           + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 12);
      v13 = FXManager::batchedQuads[1];
      v178 = 20 * BatchForWriting;
      if ( !v13 || BatchForWriting >= (FXManager::batchedQuads[2] - v13) / 20 )
        _invalid_parameter_noinfo();
      v14 = 0;
      v169 = *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 16);
      v173 = 0;
      if ( *((int *)this + 48) > 0 )
      {
        while ( 1 )
        {
          v15 = *((_DWORD *)this + 45);
          if ( !v15 || v14 >= (*((_DWORD *)this + 46) - v15) / 184 )
            _invalid_parameter_noinfo();
          v16 = *((_DWORD *)this + 45);
          v168 = 184 * v14;
          if ( *(float *)(184 * v14 + v16 + 64) > 0.0 )
          {
            if ( !v16 || v14 >= (*((_DWORD *)this + 46) - v16) / 184 )
              _invalid_parameter_noinfo();
            v167 = v168 + *((_DWORD *)this + 45);
            v17 = *((_DWORD *)this + 45);
            if ( !v17 || v14 >= (*((_DWORD *)this + 46) - v17) / 184 )
              _invalid_parameter_noinfo();
            v18 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 56);
            TraceLineSystem::color = v18;
            if ( HIBYTE(v18) )
            {
              if ( *((float *)this + 74) < 1.0 )
                TraceLineSystem::color = (unsigned __int8)v18
                                       | ((BYTE1(v18)
                                         | ((BYTE2(v18)
                                           | ((unsigned int)(__int64)((double)HIBYTE(v18) * *((float *)this + 74)) << 8)) << 8)) << 8);
              v19 = *((_DWORD *)this + 45);
              if ( !v19 || v14 >= (*((_DWORD *)this + 46) - v19) / 184 )
                _invalid_parameter_noinfo();
              v20 = *((_DWORD *)this + 45);
              v21 = *(_DWORD *)(v20 + 184 * v14);
              v22 = v168 + v20;
              TraceLineSystem::loc = v21;
              dword_103B57D4 = *(_DWORD *)(v22 + 4);
              dword_103B57D8 = *(_DWORD *)(v22 + 8);
              v23 = *((_DWORD *)this + 45);
              if ( !v23 || v14 >= (*((_DWORD *)this + 46) - v23) / 184 )
                _invalid_parameter_noinfo();
              v161 = *(float *)(*((_DWORD *)this + 45) + v168 + 68);
              v24 = (float *)FXManager::Instance(v149, v151);
              v25 = v24[9];
              v24 += 9;
              v186 = v25 * v161;
              *(float *)&v187 = v24[1] * v161;
              v26 = v161 * v24[2];
              TraceLineSystem::Right = LODWORD(v186);
              dword_103B57E0 = v187;
              *(float *)&v188 = v26;
              dword_103B57E4 = v188;
              if ( 0.0 == *((float *)this + 68) )
              {
                v27 = *((_DWORD *)this + 45);
                if ( !v27 || v14 >= (*((_DWORD *)this + 46) - v27) / 184 )
                  _invalid_parameter_noinfo();
                v162 = *(float *)(v168 + *((_DWORD *)this + 45) + 68);
                v28 = (float *)FXManager::Instance(v150, v152);
                v29 = v28[12];
                v28 += 12;
                v180 = v29 * v162;
                v30 = v180;
                v181 = v28[1] * v162;
                v31 = v162 * v28[2];
                v32 = v181;
                v182 = v31;
                v33 = v182;
              }
              else
              {
                v34 = FXManager::Instance(v150, v152);
                v35 = *(float *)(v34 + 52);
                v192 = *(float *)(v34 + 48);
                v36 = *(float *)(v34 + 56);
                v37 = *((_DWORD *)this + 45);
                v193 = v35;
                v194 = v36;
                if ( !v37 || v14 >= (*((_DWORD *)this + 46) - v37) / 184 )
                  _invalid_parameter_noinfo();
                v38 = *((_DWORD *)this + 45);
                v39 = *(float *)(v38 + v168 + 76);
                v40 = v38 + v168 + 76;
                v190 = *(float *)(v40 + 4) + v193;
                v191 = *(float *)(v40 + 8) + v194;
                sub_100029CD();
                v41 = *((_DWORD *)this + 45);
                if ( !v41 || v14 >= (*((_DWORD *)this + 46) - v41) / 184 )
                  _invalid_parameter_noinfo();
                v163 = *(float *)(*((_DWORD *)this + 45) + v168 + 68);
                v189 = v39 + v192;
                v183 = v189 * v163;
                v30 = v183;
                v184 = v190 * v163;
                v32 = v184;
                v185 = v163 * v191;
                v33 = v185;
              }
              TraceLineSystem::up = LODWORD(v30);
              dword_103B57EC = LODWORD(v32);
              dword_103B57F0 = LODWORD(v33);
              v42 = *((_DWORD *)this + 45);
              if ( !v42 || v14 >= (*((_DWORD *)this + 46) - v42) / 184 )
                _invalid_parameter_noinfo();
              v43 = *((_DWORD *)this + 45);
              v44 = *(_DWORD *)(v168 + v43 + 120);
              v153 = v44;
              if ( !v43 || v14 >= (*((_DWORD *)this + 46) - v43) / 184 )
                _invalid_parameter_noinfo();
              v45 = *((_DWORD *)this + 45);
              v46 = v168 + v45;
              if ( !v45 || v14 >= (*((_DWORD *)this + 46) - v45) / 184 )
                _invalid_parameter_noinfo();
              v47 = *((_DWORD *)this + 45);
              if ( *(_DWORD *)(v46 + 116) > *(_DWORD *)(v47 + v168 + 120) )
              {
                if ( !v47 || v14 >= (*((_DWORD *)this + 46) - v47) / 184 )
                  _invalid_parameter_noinfo();
                v48 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 104);
                if ( v48 )
                  v49 = (*(_DWORD *)(*((_DWORD *)this + 45) + v168 + 108) - v48) >> 6;
                else
                  v49 = 0;
                v44 += v49;
                v153 = v44;
              }
              v50 = *((_DWORD *)this + 45);
              if ( !v50 || v14 >= (*((_DWORD *)this + 46) - v50) / 184 )
                _invalid_parameter_noinfo();
              v51 = *((_DWORD *)this + 45);
              v164 = (double)(v44 - *(_DWORD *)(v51 + v168 + 116)) / *((float *)this + 77);
              v179 = 1.0 / v164;
              v174 = 0.0;
              if ( !v51 || v14 >= (*((_DWORD *)this + 46) - v51) / 184 )
                _invalid_parameter_noinfo();
              v52 = *((_DWORD *)this + 45);
              v53 = (v44 - *(_DWORD *)(v52 + v168 + 116)) % (int)*((float *)this + 77);
              if ( !v52 || v14 >= (*((_DWORD *)this + 46) - v52) / 184 )
                _invalid_parameter_noinfo();
              v165 = (float)v153;
              v54 = v53 + *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 116);
              v177 = v54;
              if ( v165 - *((float *)this + 77) - 1.0 > (double)(int)v54 )
                break;
            }
          }
LABEL_230:
          v173 = ++v14;
          if ( (signed int)v14 >= *((_DWORD *)this + 48) )
            goto LABEL_231;
        }
        while ( 1 )
        {
          v55 = *((_DWORD *)this + 45);
          if ( !v55 || v14 >= (*((_DWORD *)this + 46) - v55) / 184 )
            _invalid_parameter_noinfo();
          v56 = *((_DWORD *)this + 45);
          v57 = *(_DWORD *)(v168 + v56 + 104);
          if ( v57 )
            v58 = (*(_DWORD *)(v168 + v56 + 108) - v57) >> 6;
          else
            v58 = 0;
          v59 = *((_DWORD *)this + 45);
          v60 = v54 % v58;
          v170 = v54 % v58;
          if ( !v59 || v14 >= (*((_DWORD *)this + 46) - v59) / 184 )
            _invalid_parameter_noinfo();
          v61 = *((_DWORD *)this + 45);
          v62 = *(_DWORD *)(v61 + v168 + 104);
          v63 = v61 + v168 + 100;
          if ( v62 )
            v64 = (*(_DWORD *)(v63 + 8) - v62) >> 6;
          else
            v64 = 0;
          v166 = (v54 + (unsigned int)(__int64)*((float *)this + 77)) % v64;
          if ( *((_BYTE *)this + 316) )
          {
            if ( v169 + 1 <= 1499 )
              goto LABEL_117;
          }
          else if ( v169 <= 1499 )
          {
            goto LABEL_117;
          }
          v65 = FXManager::batchedQuads[1];
          if ( !v65 || v176 >= (FXManager::batchedQuads[2] - v65) / 20 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(FXManager::batchedQuads[1] + v178 + 16) = v169;
          v66 = *((_DWORD *)this + 86);
          if ( v66 )
            v67 = FXManager::addNewBatch(v66, *((_DWORD *)this + 52));
          else
            v67 = FXManager::addNewBatch(*((struct Material **)this + 87));
          v176 = v67;
          if ( v67 == -1 )
            return;
          v68 = FXManager::batchedQuads[0];
          v69 = FXManager::batchedQuads[1];
          if ( !v69 || v67 >= (FXManager::batchedQuads[2] - v69) / 20 )
          {
            _invalid_parameter_noinfo();
            v68 = FXManager::batchedQuads[0];
          }
          v178 = 20 * v67;
          v175 = (char *)&FXManager::vertexIndicesBatches
               + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v67 + 12);
          v154 = (_DWORD *)(v68 + 4);
          v70 = *(_DWORD *)(v68 + 4);
          if ( !v70 || v67 >= (*(_DWORD *)(v68 + 8) - v70) / 20 )
            _invalid_parameter_noinfo();
          v60 = v170;
          v169 = *(_DWORD *)(*v154 + 20 * v67 + 16);
LABEL_117:
          v71 = *((_DWORD *)this + 52);
          if ( v71 == 9 || v71 == 10 || v71 == 4 || v71 == 2 || v71 == 3 )
          {
            if ( *((float *)this + 64) <= (double)*(float *)(v167 + 64) )
            {
              v79 = *(_DWORD *)(v167 + 104);
              v72 = v167 + 100;
              if ( !v79 || v60 >= (*(_DWORD *)(v167 + 108) - v79) >> 6 )
                _invalid_parameter_noinfo();
              v80 = *(_DWORD *)(v167 + 104);
              v75 = (int)(*(float *)((v170 << 6) + v80 + 60) * (double)*(unsigned __int8 *)(v167 + 62));
              if ( !v80 || v170 >= (*(_DWORD *)(v167 + 108) - v80) >> 6 )
                _invalid_parameter_noinfo();
              v81 = *(_DWORD *)(v167 + 104);
              v171 = (int)(*(float *)((v170 << 6) + v81 + 60) * (double)*(unsigned __int8 *)(v167 + 61));
              if ( !v81 || v170 >= (*(_DWORD *)(v167 + 108) - v81) >> 6 )
                _invalid_parameter_noinfo();
              v77 = *(_DWORD *)(v167 + 60);
              v78 = (double)(unsigned __int8)v77 * *(float *)((v170 << 6) + *(_DWORD *)(v167 + 104) + 60);
            }
            else
            {
              v73 = *(_DWORD *)(v167 + 104);
              v72 = v167 + 100;
              v158 = *(float *)(v167 + 64) / *((float *)this + 64);
              if ( !v73 || v60 >= (*(_DWORD *)(v167 + 108) - v73) >> 6 )
                _invalid_parameter_noinfo();
              v74 = *(_DWORD *)(v167 + 104);
              v75 = (int)(*(float *)((v170 << 6) + v74 + 60) * v158 * (double)*(unsigned __int8 *)(v167 + 62));
              if ( !v74 || v170 >= (*(_DWORD *)(v167 + 108) - v74) >> 6 )
                _invalid_parameter_noinfo();
              v76 = *(_DWORD *)(v167 + 104);
              v171 = (int)(*(float *)((v170 << 6) + v76 + 60) * v158 * (double)*(unsigned __int8 *)(v167 + 61));
              if ( !v76 || v170 >= (*(_DWORD *)(v167 + 108) - v76) >> 6 )
                _invalid_parameter_noinfo();
              v77 = *(_DWORD *)(v167 + 60);
              v78 = *(float *)((v170 << 6) + *(_DWORD *)(v167 + 104) + 60) * v158 * (double)(unsigned __int8)v77;
            }
            v157 = (int)v78 | v77 & 0xFF000000 | ((v171 | (v75 << 8)) << 8);
          }
          else
          {
            v72 = v167 + 100;
            sub_100055F1(v60);
            v157 = sub_10005646();
          }
          v82 = &v175[96 * v169];
          *((_DWORD *)v82 + 3) = v157;
          v83 = *((_DWORD *)this + 45);
          if ( !v83 || v173 >= (*((_DWORD *)this + 46) - v83) / 184 )
            _invalid_parameter_noinfo();
          v84 = *((_DWORD *)this + 45) + v168 + 100;
          v85 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 104);
          if ( !v85 || v170 >= (*(_DWORD *)(*((_DWORD *)this + 45) + v168 + 108) - v85) >> 6 )
            _invalid_parameter_noinfo();
          v86 = (_DWORD *)((v170 << 6) + *(_DWORD *)(v84 + 4));
          v155 = v170 << 6;
          *(_DWORD *)v82 = *v86;
          *((_DWORD *)v82 + 1) = v86[1];
          v87 = v86[2];
          *((float *)v82 + 4) = 0.0;
          *((_DWORD *)v82 + 2) = v87;
          *((float *)v82 + 5) = v174;
          if ( *((_BYTE *)this + 316) )
          {
            *((_DWORD *)v82 + 27) = v157;
            v88 = *((_DWORD *)this + 45);
            if ( !v88 || v173 >= (*((_DWORD *)this + 46) - v88) / 184 )
              _invalid_parameter_noinfo();
            v89 = *((_DWORD *)this + 45);
            v90 = *(_DWORD *)(v89 + v168 + 104);
            v91 = v89 + v168 + 100;
            if ( !v90 || v170 >= (*(_DWORD *)(v89 + v168 + 108) - v90) >> 6 )
              _invalid_parameter_noinfo();
            v92 = (_DWORD *)(v155 + *(_DWORD *)(v91 + 4) + 24);
            v93 = &v175[96 * v169 + 96];
            *(_DWORD *)v93 = *v92;
            *((_DWORD *)v93 + 1) = v92[1];
            v94 = v92[2];
            *((float *)v82 + 28) = 0.0;
            *((_DWORD *)v93 + 2) = v94;
            *((float *)v82 + 29) = v174;
          }
          v95 = &v175[96 * v169 + 24];
          *((_DWORD *)v95 + 3) = v157;
          v96 = *((_DWORD *)this + 45);
          if ( !v96 || v173 >= (*((_DWORD *)this + 46) - v96) / 184 )
            _invalid_parameter_noinfo();
          v97 = *((_DWORD *)this + 45) + v168 + 100;
          v98 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 104);
          if ( !v98 || v170 >= (*(_DWORD *)(*((_DWORD *)this + 45) + v168 + 108) - v98) >> 6 )
            _invalid_parameter_noinfo();
          v99 = *(_DWORD *)(v97 + 4);
          v100 = *(_DWORD *)(v99 + v155 + 12);
          v101 = v99 + v155 + 12;
          *(_DWORD *)v95 = v100;
          *((_DWORD *)v95 + 1) = *(_DWORD *)(v101 + 4);
          v102 = *(_DWORD *)(v101 + 8);
          *((float *)v95 + 4) = 1.0;
          v103 = v174;
          *((_DWORD *)v95 + 2) = v102;
          *((float *)v95 + 5) = v174;
          if ( *((_BYTE *)this + 316) )
          {
            *((_DWORD *)v95 + 27) = v157;
            v104 = *((_DWORD *)this + 45);
            if ( !v104 || v173 >= (*((_DWORD *)this + 46) - v104) / 184 )
              _invalid_parameter_noinfo();
            v105 = v168 + *((_DWORD *)this + 45) + 100;
            v106 = *(_DWORD *)(v168 + *((_DWORD *)this + 45) + 104);
            if ( !v106 || v170 >= (*(_DWORD *)(v168 + *((_DWORD *)this + 45) + 108) - v106) >> 6 )
              _invalid_parameter_noinfo();
            v107 = (_DWORD *)(v155 + *(_DWORD *)(v105 + 4) + 36);
            v108 = &v175[96 * v169 + 120];
            *(_DWORD *)v108 = *v107;
            *((_DWORD *)v108 + 1) = v107[1];
            v109 = v107[2];
            *((float *)v95 + 28) = 1.0;
            v103 = v174;
            *((_DWORD *)v108 + 2) = v109;
            *((float *)v95 + 29) = v174;
          }
          v174 = v103 + v179;
          v110 = *((_DWORD *)this + 52);
          if ( v110 == 9 || v110 == 10 || v110 == 4 || v110 == 2 || v110 == 3 )
          {
            if ( *((float *)this + 64) <= (double)*(float *)(v167 + 64) )
            {
              v117 = *(_DWORD *)(v72 + 4);
              if ( !v117 || v166 >= (*(_DWORD *)(v72 + 8) - v117) >> 6 )
                _invalid_parameter_noinfo();
              v118 = *(_DWORD *)(v72 + 4);
              v113 = (int)(*(float *)((v166 << 6) + v118 + 60) * (double)*(unsigned __int8 *)(v167 + 62));
              if ( !v118 || v166 >= (*(_DWORD *)(v72 + 8) - v118) >> 6 )
                _invalid_parameter_noinfo();
              v119 = *(_DWORD *)(v72 + 4);
              v172 = (int)(*(float *)((v166 << 6) + v119 + 60) * (double)*(unsigned __int8 *)(v167 + 61));
              if ( !v119 || v166 >= (*(_DWORD *)(v72 + 8) - v119) >> 6 )
                _invalid_parameter_noinfo();
              v115 = *(_DWORD *)(v167 + 60);
              v116 = (double)(unsigned __int8)v115 * *(float *)((v166 << 6) + *(_DWORD *)(v72 + 4) + 60);
            }
            else
            {
              v111 = *(_DWORD *)(v72 + 4);
              v160 = *(float *)(v167 + 64) / *((float *)this + 64);
              if ( !v111 || v166 >= (*(_DWORD *)(v72 + 8) - v111) >> 6 )
                _invalid_parameter_noinfo();
              v112 = *(_DWORD *)(v72 + 4);
              v113 = (int)(*(float *)((v166 << 6) + v112 + 60) * v160 * (double)*(unsigned __int8 *)(v167 + 62));
              if ( !v112 || v166 >= (*(_DWORD *)(v72 + 8) - v112) >> 6 )
                _invalid_parameter_noinfo();
              v114 = *(_DWORD *)(v72 + 4);
              v172 = (int)(*(float *)((v166 << 6) + v114 + 60) * v160 * (double)*(unsigned __int8 *)(v167 + 61));
              if ( !v114 || v166 >= (*(_DWORD *)(v72 + 8) - v114) >> 6 )
                _invalid_parameter_noinfo();
              v115 = *(_DWORD *)(v167 + 60);
              v116 = *(float *)((v166 << 6) + *(_DWORD *)(v72 + 4) + 60) * v160 * (double)(unsigned __int8)v115;
            }
            v159 = (int)v116 | v115 & 0xFF000000 | ((v172 | (v113 << 8)) << 8);
          }
          else
          {
            sub_100055F1(v166);
            v159 = sub_10005646();
          }
          v120 = 4 * v169;
          v121 = &v175[96 * v169 + 48];
          *((_DWORD *)v121 + 3) = v159;
          v122 = *((_DWORD *)this + 45);
          if ( !v122 || v173 >= (*((_DWORD *)this + 46) - v122) / 184 )
            _invalid_parameter_noinfo();
          v123 = *((_DWORD *)this + 45) + v168 + 100;
          v124 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 104);
          if ( !v124 || v166 >= (*(_DWORD *)(*((_DWORD *)this + 45) + v168 + 108) - v124) >> 6 )
            _invalid_parameter_noinfo();
          v125 = (_DWORD *)((v166 << 6) + *(_DWORD *)(v123 + 4));
          v156 = v166 << 6;
          *(_DWORD *)v121 = *v125;
          *((_DWORD *)v121 + 1) = v125[1];
          v126 = v125[2];
          *((float *)v121 + 4) = 0.0;
          *((_DWORD *)v121 + 2) = v126;
          *((float *)v121 + 5) = v174;
          if ( *((_BYTE *)this + 316) )
          {
            *((_DWORD *)v121 + 27) = v159;
            v127 = *((_DWORD *)this + 45);
            if ( !v127 || v173 >= (*((_DWORD *)this + 46) - v127) / 184 )
              _invalid_parameter_noinfo();
            v128 = *((_DWORD *)this + 45);
            v129 = *(_DWORD *)(v128 + v168 + 104);
            v130 = v128 + v168 + 100;
            if ( !v129 || v166 >= (*(_DWORD *)(v128 + v168 + 108) - v129) >> 6 )
              _invalid_parameter_noinfo();
            v131 = (_DWORD *)(v156 + *(_DWORD *)(v130 + 4) + 24);
            v132 = &v175[96 * v169 + 144];
            *(_DWORD *)v132 = *v131;
            *((_DWORD *)v132 + 1) = v131[1];
            v133 = v131[2];
            *((float *)v121 + 28) = 0.0;
            *((_DWORD *)v132 + 2) = v133;
            *((float *)v121 + 29) = v174;
          }
          v134 = &v175[96 * v169 + 72];
          *((_DWORD *)v134 + 3) = v159;
          v135 = *((_DWORD *)this + 45);
          if ( !v135 || v173 >= (*((_DWORD *)this + 46) - v135) / 184 )
            _invalid_parameter_noinfo();
          v136 = *((_DWORD *)this + 45) + v168 + 100;
          v137 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 104);
          if ( !v137 || v166 >= (*(_DWORD *)(*((_DWORD *)this + 45) + v168 + 108) - v137) >> 6 )
            _invalid_parameter_noinfo();
          v138 = *(_DWORD *)(v136 + 4);
          v139 = *(_DWORD *)(v156 + v138 + 12);
          v140 = v156 + v138 + 12;
          *(_DWORD *)v134 = v139;
          *((_DWORD *)v134 + 1) = *(_DWORD *)(v140 + 4);
          v141 = *(_DWORD *)(v140 + 8);
          *((float *)v134 + 4) = 1.0;
          *((_DWORD *)v134 + 2) = v141;
          *((float *)v134 + 5) = v174;
          if ( *((_BYTE *)this + 316) )
          {
            *((_DWORD *)v134 + 27) = v159;
            v142 = *((_DWORD *)this + 45);
            if ( !v142 || v173 >= (*((_DWORD *)this + 46) - v142) / 184 )
              _invalid_parameter_noinfo();
            v143 = *((_DWORD *)this + 45) + v168 + 100;
            v144 = *(_DWORD *)(*((_DWORD *)this + 45) + v168 + 104);
            if ( !v144 || v166 >= (*(_DWORD *)(*((_DWORD *)this + 45) + v168 + 108) - v144) >> 6 )
              _invalid_parameter_noinfo();
            ++v169;
            v145 = (_DWORD *)(v156 + *(_DWORD *)(v143 + 4) + 36);
            v146 = &v175[24 * v120 + 168];
            *(_DWORD *)v146 = *v145;
            *((_DWORD *)v146 + 1) = v145[1];
            v147 = v145[2];
            *((float *)v134 + 28) = 1.0;
            *((_DWORD *)v146 + 2) = v147;
            *((float *)v134 + 29) = v174;
          }
          ++v169;
          v177 += (int)*((float *)this + 77);
          v14 = v173;
          if ( v165 - *((float *)this + 77) - 1.0 <= (double)v177 )
            goto LABEL_230;
          v54 = v177;
        }
      }
LABEL_231:
      v148 = FXManager::batchedQuads[1];
      if ( !v148 || v176 >= (FXManager::batchedQuads[2] - v148) / 20 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v176 + 16) = v169;
    }
  }
}
