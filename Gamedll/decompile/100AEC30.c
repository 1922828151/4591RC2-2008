/*
 * func-name: ?PostRender@RandomTextureParticles@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100aec30
 * callers: 0x10002e50
 * callees: 0x100029cd, 0x10003cba, 0x10015ac3, 0x102c09f0
 */

void __userpurge RandomTextureParticles::PostRender(
        RandomTextureParticles *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        struct Camera *a4)
{
  unsigned int i; // edi
  int v6; // ecx
  _DWORD *v7; // ebp
  struct Material **v8; // eax
  unsigned int v9; // ebp
  int v10; // ebx
  int v11; // eax
  int v12; // edx
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  int v18; // ecx
  unsigned int v19; // ebx
  int v20; // eax
  int v21; // eax
  char *v22; // ebx
  unsigned int v23; // edx
  int v24; // ecx
  int v25; // eax
  int v26; // eax
  unsigned int v27; // ebx
  int v28; // ecx
  _DWORD *v29; // ebx
  struct Material **v30; // eax
  int v31; // eax
  unsigned int v32; // ebx
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  unsigned int v36; // ebx
  int v37; // eax
  float *v38; // eax
  double v39; // st7
  int v40; // eax
  _DWORD *v41; // eax
  float *v42; // eax
  double v43; // st7
  float *v44; // eax
  double v45; // st7
  double v46; // st7
  float *v47; // eax
  double v48; // st7
  double v49; // st7
  float *v50; // eax
  double v51; // st7
  unsigned int v52; // edx
  float *v53; // ecx
  double v54; // st6
  int v55; // ecx
  float *v56; // ecx
  double v57; // st5
  int v58; // ecx
  float *v59; // ecx
  char *v60; // eax
  double v61; // st5
  double v62; // st5
  int v63; // eax
  unsigned int v64; // ebx
  int v65; // ecx
  unsigned int v66; // ebx
  int v67; // eax
  unsigned int j; // ebp
  int v69; // ecx
  int v70; // ecx
  _DWORD *v71; // ebx
  _DWORD *v72; // edi
  unsigned int v73; // ebp
  int v74; // eax
  int v75; // edx
  int v76; // eax
  unsigned int v77; // ebx
  int v78; // ecx
  int v79; // eax
  unsigned int v80; // ebx
  int v81; // ecx
  unsigned int v82; // ebx
  int v83; // eax
  int v84; // eax
  char *v85; // ebx
  unsigned int v86; // ebp
  int v87; // ecx
  unsigned int v88; // ebp
  int v89; // eax
  int v90; // eax
  int v91; // ecx
  unsigned int v92; // ebx
  int v93; // eax
  unsigned int v94; // ebx
  int v95; // ecx
  _DWORD *v96; // ebx
  int v97; // eax
  unsigned int v98; // ebx
  int v99; // ecx
  int v100; // eax
  int v101; // ecx
  unsigned int v102; // ebx
  unsigned int v103; // ebp
  int v104; // eax
  float *v105; // eax
  double v106; // st7
  int v107; // eax
  _DWORD *v108; // eax
  int v109; // eax
  float *v110; // eax
  double v111; // st7
  double v112; // st7
  int v113; // eax
  float *v114; // eax
  double v115; // st7
  double v116; // st7
  unsigned int v117; // edx
  float *v118; // ecx
  double v119; // st6
  int v120; // ecx
  float *v121; // ecx
  double v122; // st5
  int v123; // ecx
  float *v124; // ecx
  char *v125; // eax
  double v126; // st5
  double v127; // st5
  int v128; // eax
  unsigned int v129; // ebx
  int v130; // ecx
  int v131; // eax
  unsigned int v132; // ebx
  int v133; // [esp-8h] [ebp-F8h]
  int v134; // [esp-8h] [ebp-F8h]
  int v135; // [esp-8h] [ebp-F8h]
  int v136; // [esp-4h] [ebp-F4h]
  int v137; // [esp-4h] [ebp-F4h]
  int v138; // [esp-4h] [ebp-F4h]
  int v139; // [esp+8h] [ebp-E8h]
  int v140; // [esp+8h] [ebp-E8h]
  unsigned int v141; // [esp+Ch] [ebp-E4h]
  int v142; // [esp+Ch] [ebp-E4h]
  unsigned int v143; // [esp+Ch] [ebp-E4h]
  unsigned int k; // [esp+Ch] [ebp-E4h]
  unsigned int v145; // [esp+14h] [ebp-DCh]
  float v146; // [esp+14h] [ebp-DCh]
  float v147; // [esp+14h] [ebp-DCh]
  float v148; // [esp+14h] [ebp-DCh]
  float v149; // [esp+14h] [ebp-DCh]
  int v150; // [esp+14h] [ebp-DCh]
  signed int v151; // [esp+18h] [ebp-D8h]
  _DWORD *v152; // [esp+18h] [ebp-D8h]
  float v153; // [esp+18h] [ebp-D8h]
  float v154; // [esp+18h] [ebp-D8h]
  float v155; // [esp+1Ch] [ebp-D4h]
  float v156; // [esp+20h] [ebp-D0h]
  float v157; // [esp+24h] [ebp-CCh]
  float v158; // [esp+34h] [ebp-BCh]
  float v159; // [esp+34h] [ebp-BCh]
  int v160; // [esp+38h] [ebp-B8h]
  float v161; // [esp+38h] [ebp-B8h]
  int v162; // [esp+3Ch] [ebp-B4h]
  float v163; // [esp+3Ch] [ebp-B4h]
  float v164; // [esp+40h] [ebp-B0h]
  float v165; // [esp+40h] [ebp-B0h]
  float v166; // [esp+44h] [ebp-ACh]
  float v167; // [esp+44h] [ebp-ACh]
  float v168; // [esp+48h] [ebp-A8h]
  float v169; // [esp+48h] [ebp-A8h]
  float v170; // [esp+4Ch] [ebp-A4h]
  float v171; // [esp+4Ch] [ebp-A4h]
  float v172; // [esp+50h] [ebp-A0h]
  float v173; // [esp+50h] [ebp-A0h]
  float v174; // [esp+54h] [ebp-9Ch]
  float v175; // [esp+54h] [ebp-9Ch]
  float v176; // [esp+58h] [ebp-98h]
  float v177; // [esp+58h] [ebp-98h]
  float v178; // [esp+5Ch] [ebp-94h]
  float v179; // [esp+5Ch] [ebp-94h]
  float v180; // [esp+60h] [ebp-90h]
  float v181; // [esp+60h] [ebp-90h]
  signed int v182; // [esp+64h] [ebp-8Ch]
  float v183; // [esp+6Ch] [ebp-84h]
  float v184; // [esp+6Ch] [ebp-84h]
  float v185; // [esp+70h] [ebp-80h]
  float v186; // [esp+70h] [ebp-80h]
  float v187; // [esp+74h] [ebp-7Ch]
  float v188; // [esp+74h] [ebp-7Ch]
  float v189; // [esp+78h] [ebp-78h]
  float v190; // [esp+78h] [ebp-78h]
  int v191; // [esp+7Ch] [ebp-74h]
  float v192; // [esp+7Ch] [ebp-74h]
  int v193; // [esp+80h] [ebp-70h]
  float v194; // [esp+80h] [ebp-70h]
  float v195; // [esp+84h] [ebp-6Ch]
  float v196; // [esp+84h] [ebp-6Ch]
  float v197; // [esp+88h] [ebp-68h]
  float v198; // [esp+88h] [ebp-68h]
  float v199; // [esp+8Ch] [ebp-64h]
  float v200; // [esp+8Ch] [ebp-64h]
  float v201; // [esp+90h] [ebp-60h]
  float v202; // [esp+90h] [ebp-60h]
  int v203; // [esp+94h] [ebp-5Ch]
  float v204; // [esp+94h] [ebp-5Ch]
  int v205; // [esp+98h] [ebp-58h]
  float v206; // [esp+98h] [ebp-58h]
  float v207; // [esp+9Ch] [ebp-54h]
  float v208; // [esp+9Ch] [ebp-54h]
  float v209; // [esp+A0h] [ebp-50h]
  int v210; // [esp+A0h] [ebp-50h]
  float v211; // [esp+A4h] [ebp-4Ch]
  int v212; // [esp+A4h] [ebp-4Ch]
  float v213; // [esp+A8h] [ebp-48h]
  float v214; // [esp+A8h] [ebp-48h]
  float v215; // [esp+ACh] [ebp-44h]
  float v216; // [esp+ACh] [ebp-44h]
  float v217; // [esp+B0h] [ebp-40h]
  float v218; // [esp+B0h] [ebp-40h]
  float v219; // [esp+B4h] [ebp-3Ch]
  float v220; // [esp+B4h] [ebp-3Ch]
  float v221; // [esp+B8h] [ebp-38h]
  int v222; // [esp+B8h] [ebp-38h]
  float v223; // [esp+BCh] [ebp-34h]
  int v224; // [esp+BCh] [ebp-34h]
  float v225; // [esp+C0h] [ebp-30h]
  float v226; // [esp+C4h] [ebp-2Ch]
  float v227; // [esp+C8h] [ebp-28h]
  float v228; // [esp+CCh] [ebp-24h]
  float v229; // [esp+D0h] [ebp-20h]
  float v230; // [esp+D4h] [ebp-1Ch]
  float v231; // [esp+D8h] [ebp-18h]
  int v232; // [esp+DCh] [ebp-14h]
  int v233; // [esp+E0h] [ebp-10h]
  _BYTE v234[12]; // [esp+E4h] [ebp-Ch] BYREF

  if ( *((_DWORD *)this + 51) )
  {
    v155 = *((float *)a4 + 56);
    v136 = a2;
    v133 = a3;
    v156 = *((float *)a4 + 60);
    v157 = *((float *)a4 + 64);
    if ( *((_BYTE *)this + 404) )
    {
      for ( i = 0; i < std::vector<Material *>::size((char *)this + 372); ++i )
      {
        v6 = *((_DWORD *)this + 98);
        if ( !v6 || i >= (*((_DWORD *)this + 99) - v6) >> 2 )
          _invalid_parameter_noinfo();
        v7 = (_DWORD *)(*((_DWORD *)this + 98) + 4 * i);
        v8 = (struct Material **)std::vector<Material *>::operator[]((char *)this + 372, i);
        *v7 = FXManager::getBatchForWriting(this, *v8);
      }
      v9 = 0;
      if ( *((int *)this + 51) > 0 )
      {
        v10 = 0;
        v139 = 0;
        do
        {
          v11 = *((_DWORD *)this + 48);
          if ( !v11 || v9 >= (*((_DWORD *)this + 49) - v11) / 96 )
            _invalid_parameter_noinfo();
          v12 = *((_DWORD *)this + 48);
          if ( *(float *)(v12 + v10 + 52) > 0.0 )
          {
            if ( !v12 || v9 >= (*((_DWORD *)this + 49) - v12) / 96 )
              _invalid_parameter_noinfo();
            ParticleSystem::color = *(_DWORD *)(*((_DWORD *)this + 48) + v10 + 44);
            v151 = HIBYTE(ParticleSystem::color);
            if ( HIBYTE(ParticleSystem::color) )
            {
              v13 = *((_DWORD *)this + 48);
              if ( !v13 || v9 >= (*((_DWORD *)this + 49) - v13) / 96 )
                _invalid_parameter_noinfo();
              v14 = *(_DWORD *)(*((_DWORD *)this + 48) + v139 + 88);
              v15 = *((_DWORD *)this + 98);
              if ( !v15 || v14 >= (*((_DWORD *)this + 99) - v15) >> 2 )
                _invalid_parameter_noinfo();
              if ( *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v14) == -1 )
                return;
              v16 = *((_DWORD *)this + 48);
              if ( !v16 || v9 >= (*((_DWORD *)this + 49) - v16) / 96 )
                _invalid_parameter_noinfo();
              v17 = *(_DWORD *)(v139 + *((_DWORD *)this + 48) + 88);
              v18 = *((_DWORD *)this + 98);
              if ( !v18 || v17 >= (*((_DWORD *)this + 99) - v18) >> 2 )
                _invalid_parameter_noinfo();
              v19 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v17);
              v20 = FXManager::batchedQuads[1];
              if ( !v20 || v19 >= (FXManager::batchedQuads[2] - v20) / 20 )
                _invalid_parameter_noinfo();
              v21 = *((_DWORD *)this + 48);
              v22 = (char *)&FXManager::vertexIndicesBatches
                  + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v19 + 12);
              if ( !v21 || v9 >= (*((_DWORD *)this + 49) - v21) / 96 )
                _invalid_parameter_noinfo();
              v23 = *(_DWORD *)(*((_DWORD *)this + 48) + v139 + 88);
              v24 = *((_DWORD *)this + 98);
              v145 = v23;
              if ( !v24 || v23 >= (*((_DWORD *)this + 99) - v24) >> 2 )
              {
                _invalid_parameter_noinfo();
                v23 = v145;
              }
              v25 = FXManager::batchedQuads[1];
              v141 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v23);
              if ( !v25 || v141 >= (FXManager::batchedQuads[2] - v25) / 20 )
                _invalid_parameter_noinfo();
              v142 = *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v141 + 16);
              if ( v142 > 1499 )
              {
                v26 = *((_DWORD *)this + 48);
                if ( !v26 || v9 >= (*((_DWORD *)this + 49) - v26) / 96 )
                  _invalid_parameter_noinfo();
                v27 = *(_DWORD *)(*((_DWORD *)this + 48) + v139 + 88);
                v28 = *((_DWORD *)this + 98);
                if ( !v28 || v27 >= (*((_DWORD *)this + 99) - v28) >> 2 )
                  _invalid_parameter_noinfo();
                v29 = (_DWORD *)(*((_DWORD *)this + 98) + 4 * v27);
                v30 = (struct Material **)std::vector<Material *>::operator[]((char *)this + 372, v9);
                *v29 = FXManager::addNewBatch(*v30);
                v31 = *((_DWORD *)this + 48);
                if ( !v31 || v9 >= (*((_DWORD *)this + 49) - v31) / 96 )
                  _invalid_parameter_noinfo();
                v32 = *(_DWORD *)(*((_DWORD *)this + 48) + v139 + 88);
                v33 = *((_DWORD *)this + 98);
                if ( !v33 || v32 >= (*((_DWORD *)this + 99) - v33) >> 2 )
                  _invalid_parameter_noinfo();
                if ( *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v32) == -1 )
                  return;
                v34 = sub_10015AC3(v9);
                v35 = *((_DWORD *)this + 98);
                v36 = *(_DWORD *)(v34 + 88);
                if ( !v35 || v36 >= (*((_DWORD *)this + 99) - v35) >> 2 )
                  _invalid_parameter_noinfo();
                v22 = (char *)&FXManager::vertexIndicesBatches
                    + 162110 * *(_DWORD *)(sub_10003CBA(*(_DWORD *)(*((_DWORD *)this + 98) + 4 * v36)) + 12);
                v143 = *(_DWORD *)(sub_10015AC3(v9) + 88);
                v37 = *((_DWORD *)this + 98);
                if ( !v37 || v143 >= (*((_DWORD *)this + 99) - v37) >> 2 )
                  _invalid_parameter_noinfo();
                v142 = *(_DWORD *)(sub_10003CBA(*(_DWORD *)(*((_DWORD *)this + 98) + 4 * v143)) + 16);
              }
              if ( *((float *)this + 75) > 0.0 )
              {
                v38 = (float *)sub_10015AC3(v9);
                v39 = v38[18] + v155;
                v38 += 18;
                v225 = v39;
                v226 = v38[1] + v156;
                v227 = v38[2] + v157;
                sub_100029CD();
                v155 = v225;
                v156 = v226;
                v157 = v227;
              }
              v40 = *((_DWORD *)this + 48);
              if ( !v40 || v9 >= (*((_DWORD *)this + 49) - v40) / 96 )
                _invalid_parameter_noinfo();
              v41 = (_DWORD *)(v139 + *((_DWORD *)this + 48));
              ParticleSystem::loc = *v41;
              dword_103B55F8 = v41[1];
              dword_103B55FC = v41[2];
              if ( *((_BYTE *)this + 332) )
              {
                v42 = (float *)sub_10015AC3(v9);
                v43 = *((float *)this + 5) - v42[3];
                v42 += 3;
                v228 = v43;
                v229 = *((float *)this + 6) - v42[1];
                v230 = *((float *)this + 7) - v42[2];
                ParticleSystem::loc = v228 + ParticleSystem::loc;
                *(float *)&dword_103B55F8 = v229 + *(float *)&dword_103B55F8;
                *(float *)&dword_103B55FC = v230 + *(float *)&dword_103B55FC;
              }
              if ( *((_BYTE *)this + 340) )
              {
                v146 = *(float *)(sub_10015AC3(v9) + 60);
                v44 = (float *)FXManager::Instance(v133, v136);
                v45 = v44[9];
                v44 += 9;
                v231 = v45 * v146;
                *(float *)&v232 = v44[1] * v146;
                v46 = v146 * v44[2];
                dword_103B5604 = v232;
                *(float *)&v233 = v46;
                ParticleSystem::Right = LODWORD(v231);
                dword_103B5608 = v233;
                v147 = *(float *)(sub_10015AC3(v9) + 64);
                v47 = (float *)(FXManager::Instance(v134, v137) + 48);
                v158 = v147 * *v47;
                *(float *)&v160 = v47[1] * v147;
                v48 = v147 * v47[2];
                ParticleSystem::up = LODWORD(v158);
                dword_103B5610 = v160;
                *(float *)&v162 = v48;
                dword_103B5614 = v162;
              }
              else
              {
                v148 = *(float *)(sub_10015AC3(v9) + 64);
                v201 = v148 * *((float *)this + 86);
                *(float *)&v203 = *((float *)this + 87) * v148;
                v49 = v148 * *((float *)this + 88);
                dword_103B5610 = v203;
                ParticleSystem::up = LODWORD(v201);
                *(float *)&v205 = v49;
                dword_103B5614 = v205;
                v149 = *(float *)(sub_10015AC3(v9) + 60);
                v50 = (float *)sub_102C09F0(v234, (char *)this + 344, (char *)this + 232);
                v189 = v149 * *v50;
                *(float *)&v191 = v50[1] * v149;
                v51 = v149 * v50[2];
                ParticleSystem::Right = LODWORD(v189);
                dword_103B5604 = v191;
                *(float *)&v193 = v51;
                dword_103B5608 = v193;
              }
              if ( *((float *)this + 81) >= 1.0 )
              {
                v52 = ParticleSystem::color;
              }
              else
              {
                v52 = (unsigned __int8)ParticleSystem::color
                    | ((BYTE1(ParticleSystem::color)
                      | ((BYTE2(ParticleSystem::color)
                        | ((unsigned int)(__int64)((double)v151 * *((float *)this + 81)) << 8)) << 8)) << 8);
                ParticleSystem::color = v52;
              }
              *(_DWORD *)&v22[96 * v142 + 12] = v52;
              v53 = (float *)&v22[96 * v142];
              v170 = ParticleSystem::loc - ParticleSystem::Right;
              v172 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
              v174 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
              v164 = v170 - ParticleSystem::up;
              v166 = v172 - *(float *)&dword_103B5610;
              v54 = v174 - *(float *)&dword_103B5614;
              *v53 = v164;
              v53[1] = v166;
              v168 = v54;
              v53[2] = v168;
              v53[4] = 0.0;
              v53[5] = 1.0;
              v55 = 12 * v142 + 3;
              *(_DWORD *)&v22[8 * v55 + 12] = ParticleSystem::color;
              v56 = (float *)&v22[8 * v55];
              v176 = ParticleSystem::Right + ParticleSystem::loc;
              v178 = *(float *)&dword_103B5604 + *(float *)&dword_103B55F8;
              v180 = *(float *)&dword_103B5608 + *(float *)&dword_103B55FC;
              v183 = v176 - ParticleSystem::up;
              v185 = v178 - *(float *)&dword_103B5610;
              v57 = v180 - *(float *)&dword_103B5614;
              *v56 = v183;
              v56[1] = v185;
              v187 = v57;
              v56[2] = v187;
              v56[4] = 1.0;
              v56[5] = 1.0;
              v58 = 12 * v142 + 6;
              *(_DWORD *)&v22[8 * v58 + 12] = ParticleSystem::color;
              v59 = (float *)&v22[8 * v58];
              v195 = ParticleSystem::loc - ParticleSystem::Right;
              v197 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
              v199 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
              v207 = v195 + ParticleSystem::up;
              v60 = &v22[96 * v142 + 72];
              v209 = v197 + *(float *)&dword_103B5610;
              v61 = v199 + *(float *)&dword_103B5614;
              *v59 = v207;
              v59[1] = v209;
              v211 = v61;
              v59[2] = v211;
              v59[4] = 0.0;
              v59[5] = 0.0;
              *((_DWORD *)v60 + 3) = ParticleSystem::color;
              v219 = ParticleSystem::Right + ParticleSystem::loc;
              v221 = *(float *)&dword_103B5604 + *(float *)&dword_103B55F8;
              v223 = *(float *)&dword_103B5608 + *(float *)&dword_103B55FC;
              v213 = v219 + ParticleSystem::up;
              v215 = v221 + *(float *)&dword_103B5610;
              v62 = v223 + *(float *)&dword_103B5614;
              *(float *)v60 = v213;
              *((float *)v60 + 1) = v215;
              v217 = v62;
              *((float *)v60 + 2) = v217;
              *((float *)v60 + 4) = 1.0;
              *((float *)v60 + 5) = 0.0;
              v63 = *((_DWORD *)this + 48);
              if ( !v63 || v9 >= (*((_DWORD *)this + 49) - v63) / 96 )
                _invalid_parameter_noinfo();
              v64 = *(_DWORD *)(v139 + *((_DWORD *)this + 48) + 88);
              v65 = *((_DWORD *)this + 98);
              if ( !v65 || v64 >= (*((_DWORD *)this + 99) - v65) >> 2 )
                _invalid_parameter_noinfo();
              v66 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v64);
              v67 = FXManager::batchedQuads[1];
              if ( !v67 || v66 >= (FXManager::batchedQuads[2] - v67) / 20 )
                _invalid_parameter_noinfo();
              ++*(_DWORD *)(FXManager::batchedQuads[1] + 20 * v66 + 16);
              v10 = v139;
            }
          }
          ++v9;
          v10 += 96;
          v139 = v10;
        }
        while ( (signed int)v9 < *((_DWORD *)this + 51) );
      }
    }
    else
    {
      for ( j = 0; ; ++j )
      {
        v69 = *((_DWORD *)this + 90);
        if ( !v69 || j >= (*((_DWORD *)this + 91) - v69) >> 2 )
          break;
        v70 = *((_DWORD *)this + 98);
        v71 = (_DWORD *)(4 * j + *((_DWORD *)this + 90));
        if ( !v70 || j >= (*((_DWORD *)this + 99) - v70) >> 2 )
          _invalid_parameter_noinfo();
        v72 = (_DWORD *)(4 * j + *((_DWORD *)this + 98));
        *v72 = FXManager::getBatchForWriting(this, *v71, *((_DWORD *)this + 56));
      }
      v73 = 0;
      for ( k = 0; (signed int)v73 < *((_DWORD *)this + 51); k = ++v73 )
      {
        v74 = *((_DWORD *)this + 48);
        if ( !v74 || v73 >= (*((_DWORD *)this + 49) - v74) / 96 )
          _invalid_parameter_noinfo();
        v75 = *((_DWORD *)this + 48);
        v140 = 96 * v73;
        if ( *(float *)(96 * v73 + v75 + 52) > 0.0 )
        {
          if ( !v75 || v73 >= (*((_DWORD *)this + 49) - v75) / 96 )
            _invalid_parameter_noinfo();
          ParticleSystem::color = *(_DWORD *)(96 * v73 + *((_DWORD *)this + 48) + 44);
          v182 = HIBYTE(ParticleSystem::color);
          if ( HIBYTE(ParticleSystem::color) )
          {
            v76 = *((_DWORD *)this + 48);
            if ( !v76 || v73 >= (*((_DWORD *)this + 49) - v76) / 96 )
              _invalid_parameter_noinfo();
            v77 = *(_DWORD *)(*((_DWORD *)this + 48) + v140 + 88);
            v78 = *((_DWORD *)this + 98);
            if ( !v78 || v77 >= (*((_DWORD *)this + 99) - v78) >> 2 )
              _invalid_parameter_noinfo();
            if ( *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v77) == -1 )
              return;
            v79 = *((_DWORD *)this + 48);
            if ( !v79 || v73 >= (*((_DWORD *)this + 49) - v79) / 96 )
              _invalid_parameter_noinfo();
            v80 = *(_DWORD *)(v140 + *((_DWORD *)this + 48) + 88);
            v81 = *((_DWORD *)this + 98);
            if ( !v81 || v80 >= (*((_DWORD *)this + 99) - v81) >> 2 )
              _invalid_parameter_noinfo();
            v82 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v80);
            v83 = FXManager::batchedQuads[1];
            if ( !v83 || v82 >= (FXManager::batchedQuads[2] - v83) / 20 )
              _invalid_parameter_noinfo();
            v84 = *((_DWORD *)this + 48);
            v85 = (char *)&FXManager::vertexIndicesBatches
                + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v82 + 12);
            if ( !v84 || v73 >= (*((_DWORD *)this + 49) - v84) / 96 )
              _invalid_parameter_noinfo();
            v86 = *(_DWORD *)(*((_DWORD *)this + 48) + v140 + 88);
            v87 = *((_DWORD *)this + 98);
            if ( !v87 || v86 >= (*((_DWORD *)this + 99) - v87) >> 2 )
              _invalid_parameter_noinfo();
            v88 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v86);
            v89 = FXManager::batchedQuads[1];
            if ( !v89 || v88 >= (FXManager::batchedQuads[2] - v89) / 20 )
              _invalid_parameter_noinfo();
            v150 = *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v88 + 16);
            if ( v150 > 1499 )
            {
              v90 = *((_DWORD *)this + 48);
              if ( !v90 || k >= (*((_DWORD *)this + 49) - v90) / 96 )
                _invalid_parameter_noinfo();
              v91 = *((_DWORD *)this + 90);
              v92 = *(_DWORD *)(*((_DWORD *)this + 48) + v140 + 88);
              if ( !v91 || v92 >= (*((_DWORD *)this + 91) - v91) >> 2 )
                _invalid_parameter_noinfo();
              v93 = *((_DWORD *)this + 48);
              v152 = (_DWORD *)(*((_DWORD *)this + 90) + 4 * v92);
              if ( !v93 || k >= (*((_DWORD *)this + 49) - v93) / 96 )
                _invalid_parameter_noinfo();
              v94 = *(_DWORD *)(*((_DWORD *)this + 48) + v140 + 88);
              v95 = *((_DWORD *)this + 98);
              if ( !v95 || v94 >= (*((_DWORD *)this + 99) - v95) >> 2 )
                _invalid_parameter_noinfo();
              v96 = (_DWORD *)(*((_DWORD *)this + 98) + 4 * v94);
              *v96 = FXManager::addNewBatch(*v152, *((_DWORD *)this + 56));
              v97 = *((_DWORD *)this + 48);
              if ( !v97 || k >= (*((_DWORD *)this + 49) - v97) / 96 )
                _invalid_parameter_noinfo();
              v98 = *(_DWORD *)(v140 + *((_DWORD *)this + 48) + 88);
              v99 = *((_DWORD *)this + 98);
              if ( !v99 || v98 >= (*((_DWORD *)this + 99) - v99) >> 2 )
                _invalid_parameter_noinfo();
              if ( *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v98) == -1 )
                return;
              v100 = sub_10015AC3(k);
              v101 = *((_DWORD *)this + 98);
              v102 = *(_DWORD *)(v100 + 88);
              if ( !v101 || v102 >= (*((_DWORD *)this + 99) - v101) >> 2 )
                _invalid_parameter_noinfo();
              v85 = (char *)&FXManager::vertexIndicesBatches
                  + 162110 * *(_DWORD *)(sub_10003CBA(*(_DWORD *)(*((_DWORD *)this + 98) + 4 * v102)) + 12);
              v103 = *(_DWORD *)(sub_10015AC3(k) + 88);
              v104 = *((_DWORD *)this + 98);
              if ( !v104 || v103 >= (*((_DWORD *)this + 99) - v104) >> 2 )
                _invalid_parameter_noinfo();
              v150 = *(_DWORD *)(sub_10003CBA(*(_DWORD *)(*((_DWORD *)this + 98) + 4 * v103)) + 16);
            }
            if ( *((float *)this + 75) > 0.0 )
            {
              v105 = (float *)sub_10015AC3(k);
              v106 = v105[18] + v155;
              v105 += 18;
              v214 = v106;
              v216 = v105[1] + v156;
              v218 = v105[2] + v157;
              sub_100029CD();
              v155 = v214;
              v156 = v216;
              v157 = v218;
            }
            v107 = *((_DWORD *)this + 48);
            if ( !v107 || k >= (*((_DWORD *)this + 49) - v107) / 96 )
              _invalid_parameter_noinfo();
            v108 = (_DWORD *)(v140 + *((_DWORD *)this + 48));
            ParticleSystem::loc = *v108;
            dword_103B55F8 = v108[1];
            dword_103B55FC = v108[2];
            v109 = *((_DWORD *)this + 48);
            if ( !v109 || k >= (*((_DWORD *)this + 49) - v109) / 96 )
              _invalid_parameter_noinfo();
            v153 = *(float *)(*((_DWORD *)this + 48) + v140 + 60);
            v110 = (float *)FXManager::Instance(v133, v136);
            v111 = v110[9];
            v110 += 9;
            v220 = v111 * v153;
            *(float *)&v222 = v110[1] * v153;
            v112 = v153 * v110[2];
            ParticleSystem::Right = LODWORD(v220);
            dword_103B5604 = v222;
            *(float *)&v224 = v112;
            dword_103B5608 = v224;
            v113 = *((_DWORD *)this + 48);
            if ( !v113 || k >= (*((_DWORD *)this + 49) - v113) / 96 )
              _invalid_parameter_noinfo();
            v154 = *(float *)(*((_DWORD *)this + 48) + v140 + 64);
            v114 = (float *)FXManager::Instance(v135, v138);
            v115 = v114[12];
            v114 += 12;
            v208 = v115 * v154;
            *(float *)&v210 = v114[1] * v154;
            v116 = v154 * v114[2];
            dword_103B5610 = v210;
            ParticleSystem::up = LODWORD(v208);
            *(float *)&v212 = v116;
            dword_103B5614 = v212;
            if ( *((float *)this + 81) >= 1.0 )
            {
              v117 = ParticleSystem::color;
            }
            else
            {
              v117 = (unsigned __int8)ParticleSystem::color
                   | ((BYTE1(ParticleSystem::color)
                     | ((BYTE2(ParticleSystem::color)
                       | ((unsigned int)(__int64)((double)v182 * *((float *)this + 81)) << 8)) << 8)) << 8);
              ParticleSystem::color = v117;
            }
            *(_DWORD *)&v85[96 * v150 + 12] = v117;
            v118 = (float *)&v85[96 * v150];
            v196 = ParticleSystem::loc - ParticleSystem::Right;
            v198 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
            v200 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
            v184 = v196 - ParticleSystem::up;
            v186 = v198 - *(float *)&dword_103B5610;
            v119 = v200 - *(float *)&dword_103B5614;
            *v118 = v184;
            v118[1] = v186;
            v188 = v119;
            v118[2] = v188;
            v118[4] = 0.0;
            v118[5] = 1.0;
            v120 = 12 * v150 + 3;
            *(_DWORD *)&v85[8 * v120 + 12] = ParticleSystem::color;
            v121 = (float *)&v85[8 * v120];
            v177 = ParticleSystem::Right + ParticleSystem::loc;
            v179 = *(float *)&dword_103B5604 + *(float *)&dword_103B55F8;
            v181 = *(float *)&dword_103B5608 + *(float *)&dword_103B55FC;
            v165 = v177 - ParticleSystem::up;
            v167 = v179 - *(float *)&dword_103B5610;
            v122 = v181 - *(float *)&dword_103B5614;
            *v121 = v165;
            v121[1] = v167;
            v169 = v122;
            v121[2] = v169;
            v121[4] = 1.0;
            v121[5] = 1.0;
            v123 = 12 * v150 + 6;
            *(_DWORD *)&v85[8 * v123 + 12] = ParticleSystem::color;
            v124 = (float *)&v85[8 * v123];
            v171 = ParticleSystem::loc - ParticleSystem::Right;
            v173 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
            v175 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
            v190 = v171 + ParticleSystem::up;
            v125 = &v85[96 * v150 + 72];
            v192 = v173 + *(float *)&dword_103B5610;
            v126 = v175 + *(float *)&dword_103B5614;
            *v124 = v190;
            v124[1] = v192;
            v194 = v126;
            v124[2] = v194;
            v124[4] = 0.0;
            v124[5] = 0.0;
            *((_DWORD *)v125 + 3) = ParticleSystem::color;
            v202 = ParticleSystem::Right + ParticleSystem::loc;
            v204 = *(float *)&dword_103B5604 + *(float *)&dword_103B55F8;
            v206 = *(float *)&dword_103B5608 + *(float *)&dword_103B55FC;
            v159 = v202 + ParticleSystem::up;
            v161 = v204 + *(float *)&dword_103B5610;
            v127 = v206 + *(float *)&dword_103B5614;
            *(float *)v125 = v159;
            *((float *)v125 + 1) = v161;
            v163 = v127;
            *((float *)v125 + 2) = v163;
            *((float *)v125 + 4) = 1.0;
            *((float *)v125 + 5) = 0.0;
            v128 = *((_DWORD *)this + 48);
            if ( !v128 || k >= (*((_DWORD *)this + 49) - v128) / 96 )
              _invalid_parameter_noinfo();
            v129 = *(_DWORD *)(*((_DWORD *)this + 48) + v140 + 88);
            v130 = *((_DWORD *)this + 98);
            if ( !v130 || v129 >= (*((_DWORD *)this + 99) - v130) >> 2 )
              _invalid_parameter_noinfo();
            v131 = FXManager::batchedQuads[1];
            v132 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v129);
            if ( !v131 || v132 >= (FXManager::batchedQuads[2] - v131) / 20 )
              _invalid_parameter_noinfo();
            v73 = k;
            ++*(_DWORD *)(FXManager::batchedQuads[1] + 20 * v132 + 16);
          }
        }
      }
    }
  }
}
