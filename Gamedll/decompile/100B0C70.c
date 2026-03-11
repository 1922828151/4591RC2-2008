/*
 * func-name: ?PostRender@RandomTextureParticlesEx@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100b0c70
 * callers: 0x10014eb1
 * callees: 0x100029cd, 0x10002e50, 0x10003cba, 0x10015ac3, 0x102c1b80, 0x102c9fe0, 0x102ca08c, 0x102ca092
 */

void __userpurge RandomTextureParticlesEx::PostRender(
        RandomTextureParticlesEx *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        struct Camera *a5)
{
  unsigned int v6; // ebx
  int v7; // ecx
  int v8; // ecx
  _DWORD *v9; // edi
  _DWORD *v10; // esi
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // ecx
  unsigned int v17; // edi
  int v18; // eax
  int v19; // ecx
  unsigned int v20; // edi
  unsigned int v21; // edi
  int v22; // eax
  int v23; // eax
  unsigned int v24; // edi
  int v25; // ecx
  unsigned int v26; // edi
  int v27; // eax
  int v28; // eax
  unsigned int v29; // edi
  int v30; // ecx
  int v31; // eax
  unsigned int v32; // edi
  int v33; // ecx
  _DWORD *v34; // edi
  int v35; // eax
  unsigned int v36; // edi
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  unsigned int v40; // edi
  unsigned int v41; // edi
  int v42; // eax
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // eax
  int v48; // ecx
  int v49; // eax
  float *v50; // eax
  double v51; // st7
  double v52; // st7
  int v53; // eax
  float *v54; // eax
  double v55; // st7
  int v56; // edi
  float v57; // ecx
  double v58; // st7
  float v59; // eax
  float v60; // edx
  int v61; // eax
  float v62; // ecx
  float v63; // edx
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // eax
  int v68; // eax
  double v69; // st7
  int v70; // edi
  double v71; // st5
  double v72; // st3
  double v73; // st1
  double v74; // st4
  double v75; // st6
  char *v76; // ebx
  double v77; // st7
  char *v78; // ebx
  double v79; // st7
  char *v80; // ebx
  char *v81; // edi
  double v82; // st7
  int v83; // eax
  unsigned int v84; // edi
  int v85; // ecx
  int v86; // eax
  unsigned int v87; // edi
  int v88; // [esp-Ch] [ebp-10Ch]
  int v89; // [esp-Ch] [ebp-10Ch]
  int v90; // [esp-8h] [ebp-108h]
  int v91; // [esp-8h] [ebp-108h]
  int v92; // [esp-8h] [ebp-108h]
  int v93; // [esp-8h] [ebp-108h]
  int v94; // [esp-4h] [ebp-104h]
  int v95; // [esp-4h] [ebp-104h]
  int v96; // [esp+4h] [ebp-FCh]
  float v97; // [esp+8h] [ebp-F8h]
  float v98; // [esp+8h] [ebp-F8h]
  _DWORD *v99; // [esp+Ch] [ebp-F4h]
  float v100; // [esp+Ch] [ebp-F4h]
  float v101; // [esp+Ch] [ebp-F4h]
  float v102; // [esp+Ch] [ebp-F4h]
  float v103; // [esp+Ch] [ebp-F4h]
  float v104; // [esp+Ch] [ebp-F4h]
  double v105; // [esp+Ch] [ebp-F4h]
  char *v106; // [esp+14h] [ebp-ECh]
  int v107; // [esp+18h] [ebp-E8h]
  float v108; // [esp+18h] [ebp-E8h]
  unsigned int i; // [esp+1Ch] [ebp-E4h]
  float v110; // [esp+20h] [ebp-E0h]
  float v111; // [esp+20h] [ebp-E0h]
  double v112; // [esp+20h] [ebp-E0h]
  float v113; // [esp+34h] [ebp-CCh]
  float v114; // [esp+38h] [ebp-C8h]
  float v115; // [esp+3Ch] [ebp-C4h]
  int v116; // [esp+4Ch] [ebp-B4h]
  int v117; // [esp+50h] [ebp-B0h]
  int v118; // [esp+54h] [ebp-ACh]
  float v119; // [esp+58h] [ebp-A8h]
  int v120; // [esp+5Ch] [ebp-A4h]
  int v121; // [esp+60h] [ebp-A0h]
  int v122; // [esp+64h] [ebp-9Ch]
  float v123; // [esp+68h] [ebp-98h]
  int v124; // [esp+6Ch] [ebp-94h]
  int v125; // [esp+70h] [ebp-90h]
  float v126; // [esp+80h] [ebp-80h]
  float v127; // [esp+84h] [ebp-7Ch]
  float v128; // [esp+88h] [ebp-78h]
  int v129; // [esp+8Ch] [ebp-74h]
  int v130; // [esp+90h] [ebp-70h]
  int v131; // [esp+94h] [ebp-6Ch]
  float v132; // [esp+98h] [ebp-68h]
  float v133; // [esp+9Ch] [ebp-64h]
  float v134; // [esp+A0h] [ebp-60h]
  int v135; // [esp+A4h] [ebp-5Ch]
  int v136; // [esp+A8h] [ebp-58h]
  int v137; // [esp+ACh] [ebp-54h]
  float v138; // [esp+B0h] [ebp-50h]
  float v139; // [esp+B4h] [ebp-4Ch]
  float v140; // [esp+B8h] [ebp-48h]
  float v141; // [esp+BCh] [ebp-44h]
  float v142; // [esp+C0h] [ebp-40h]
  float v143; // [esp+C4h] [ebp-3Ch]
  float v144; // [esp+C8h] [ebp-38h]
  float v145; // [esp+CCh] [ebp-34h]
  float v146; // [esp+D0h] [ebp-30h]
  float v147; // [esp+D4h] [ebp-2Ch]
  float v148; // [esp+D8h] [ebp-28h]
  float v149; // [esp+DCh] [ebp-24h]
  float v150; // [esp+E0h] [ebp-20h]
  float v151; // [esp+E4h] [ebp-1Ch]
  float v152; // [esp+E8h] [ebp-18h]
  float v153; // [esp+ECh] [ebp-14h]
  float v154; // [esp+F0h] [ebp-10h]
  float v155; // [esp+F4h] [ebp-Ch]
  float v156; // [esp+F8h] [ebp-8h]
  float v157; // [esp+FCh] [ebp-4h]

  if ( 0.0 == *((float *)this + 103) && 0.0 == *((float *)this + 105) )
  {
    RandomTextureParticles::PostRender(this, a5);
  }
  else if ( *((_DWORD *)this + 51) )
  {
    v119 = *(float *)(FXManager::Instance(a4, a2) + 60);
    v150 = *(float *)(FXManager::Instance(v90, v94) + 64);
    v6 = 0;
    v154 = *(float *)(FXManager::Instance(v91, v95) + 68);
    v88 = a3;
    while ( 1 )
    {
      v7 = *((_DWORD *)this + 90);
      if ( !v7 || v6 >= (*((_DWORD *)this + 91) - v7) >> 2 )
        break;
      v8 = *((_DWORD *)this + 98);
      v9 = (_DWORD *)(4 * v6 + *((_DWORD *)this + 90));
      if ( !v8 || v6 >= (*((_DWORD *)this + 99) - v8) >> 2 )
        _invalid_parameter_noinfo();
      v10 = (_DWORD *)(4 * v6 + *((_DWORD *)this + 98));
      *v10 = FXManager::getBatchForWriting(this, *v9, *((_DWORD *)this + 56));
      ++v6;
    }
    v11 = 0;
    for ( i = 0; (signed int)v11 < *((_DWORD *)this + 51); i = ++v11 )
    {
      v12 = *((_DWORD *)this + 48);
      if ( !v12 || v11 >= (*((_DWORD *)this + 49) - v12) / 96 )
        _invalid_parameter_noinfo();
      v96 = 96 * v11;
      if ( *(float *)(96 * v11 + *((_DWORD *)this + 48) + 52) > 0.0 )
      {
        v13 = *((_DWORD *)this + 48);
        if ( !v13 || v11 >= (*((_DWORD *)this + 49) - v13) / 96 )
          _invalid_parameter_noinfo();
        ParticleSystem::color = *(_DWORD *)(96 * v11 + *((_DWORD *)this + 48) + 44);
        if ( HIBYTE(ParticleSystem::color) )
        {
          if ( *((float *)this + 81) < 1.0 )
          {
            v14 = (int)((double)HIBYTE(ParticleSystem::color) * *((float *)this + 81));
            if ( v14 > 255 )
              v14 = 255;
            ParticleSystem::color = (unsigned __int8)ParticleSystem::color
                                  | ((BYTE1(ParticleSystem::color) | (((v14 << 8) | BYTE2(ParticleSystem::color)) << 8)) << 8);
          }
          v15 = *((_DWORD *)this + 48);
          if ( !v15 || v11 >= (*((_DWORD *)this + 49) - v15) / 96 )
            _invalid_parameter_noinfo();
          v16 = *((_DWORD *)this + 98);
          v17 = *(_DWORD *)(v96 + *((_DWORD *)this + 48) + 88);
          if ( !v16 || v17 >= (*((_DWORD *)this + 99) - v16) >> 2 )
            _invalid_parameter_noinfo();
          if ( *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v17) == -1 )
            return;
          v18 = *((_DWORD *)this + 48);
          if ( !v18 || v11 >= (*((_DWORD *)this + 49) - v18) / 96 )
            _invalid_parameter_noinfo();
          v19 = *((_DWORD *)this + 98);
          v20 = *(_DWORD *)(*((_DWORD *)this + 48) + v96 + 88);
          if ( !v19 || v20 >= (*((_DWORD *)this + 99) - v19) >> 2 )
            _invalid_parameter_noinfo();
          v21 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v20);
          v22 = FXManager::batchedQuads[1];
          if ( !v22 || v21 >= (FXManager::batchedQuads[2] - v22) / 20 )
            _invalid_parameter_noinfo();
          v106 = (char *)&FXManager::vertexIndicesBatches
               + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v21 + 12);
          v23 = *((_DWORD *)this + 48);
          if ( !v23 || v11 >= (*((_DWORD *)this + 49) - v23) / 96 )
            _invalid_parameter_noinfo();
          v24 = *(_DWORD *)(v96 + *((_DWORD *)this + 48) + 88);
          v25 = *((_DWORD *)this + 98);
          if ( !v25 || v24 >= (*((_DWORD *)this + 99) - v25) >> 2 )
            _invalid_parameter_noinfo();
          v26 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v24);
          v27 = FXManager::batchedQuads[1];
          if ( !v27 || v26 >= (FXManager::batchedQuads[2] - v27) / 20 )
            _invalid_parameter_noinfo();
          v107 = *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v26 + 16);
          if ( v107 > 1499 )
          {
            v28 = *((_DWORD *)this + 48);
            if ( !v28 || v11 >= (*((_DWORD *)this + 49) - v28) / 96 )
              _invalid_parameter_noinfo();
            v29 = *(_DWORD *)(v96 + *((_DWORD *)this + 48) + 88);
            v30 = *((_DWORD *)this + 90);
            if ( !v30 || v29 >= (*((_DWORD *)this + 91) - v30) >> 2 )
              _invalid_parameter_noinfo();
            v99 = (_DWORD *)(*((_DWORD *)this + 90) + 4 * v29);
            v31 = *((_DWORD *)this + 48);
            if ( !v31 || v11 >= (*((_DWORD *)this + 49) - v31) / 96 )
              _invalid_parameter_noinfo();
            v32 = *(_DWORD *)(v96 + *((_DWORD *)this + 48) + 88);
            v33 = *((_DWORD *)this + 98);
            if ( !v33 || v32 >= (*((_DWORD *)this + 99) - v33) >> 2 )
              _invalid_parameter_noinfo();
            v34 = (_DWORD *)(*((_DWORD *)this + 98) + 4 * v32);
            *v34 = FXManager::addNewBatch(*v99, *((_DWORD *)this + 56));
            v35 = *((_DWORD *)this + 48);
            if ( !v35 || v11 >= (*((_DWORD *)this + 49) - v35) / 96 )
              _invalid_parameter_noinfo();
            v36 = *(_DWORD *)(*((_DWORD *)this + 48) + v96 + 88);
            v37 = *((_DWORD *)this + 98);
            if ( !v37 || v36 >= (*((_DWORD *)this + 99) - v37) >> 2 )
              _invalid_parameter_noinfo();
            if ( *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v36) == -1 )
              return;
            v38 = sub_10015AC3(v11);
            v39 = *((_DWORD *)this + 98);
            v40 = *(_DWORD *)(v38 + 88);
            if ( !v39 || v40 >= (*((_DWORD *)this + 99) - v39) >> 2 )
              _invalid_parameter_noinfo();
            v106 = (char *)&FXManager::vertexIndicesBatches
                 + 162110 * *(_DWORD *)(sub_10003CBA(*(_DWORD *)(*((_DWORD *)this + 98) + 4 * v40)) + 12);
            v41 = *(_DWORD *)(sub_10015AC3(v11) + 88);
            v42 = *((_DWORD *)this + 98);
            if ( !v42 || v41 >= (*((_DWORD *)this + 99) - v42) >> 2 )
              _invalid_parameter_noinfo();
            v107 = *(_DWORD *)(sub_10003CBA(*(_DWORD *)(*((_DWORD *)this + 98) + 4 * v41)) + 16);
          }
          v43 = *((_DWORD *)this + 48);
          if ( !v43 || v11 >= (*((_DWORD *)this + 49) - v43) / 96 )
            _invalid_parameter_noinfo();
          v44 = *((_DWORD *)this + 48);
          v45 = *(_DWORD *)(v44 + 96 * v11);
          v46 = v96 + v44;
          ParticleSystem::loc = v45;
          dword_103B55F8 = *(_DWORD *)(v46 + 4);
          dword_103B55FC = *(_DWORD *)(v46 + 8);
          if ( *((_BYTE *)this + 332) )
          {
            v47 = *((_DWORD *)this + 48);
            if ( !v47 || v11 >= (*((_DWORD *)this + 49) - v47) / 96 )
              _invalid_parameter_noinfo();
            v48 = *((_DWORD *)this + 48);
            v138 = *((float *)this + 5) - *(float *)(v96 + v48 + 12);
            v139 = *((float *)this + 6) - *(float *)(v96 + v48 + 16);
            v140 = *((float *)this + 7) - *(float *)(v96 + v48 + 20);
            ParticleSystem::loc = v138 + ParticleSystem::loc;
            *(float *)&dword_103B55F8 = v139 + *(float *)&dword_103B55F8;
            *(float *)&dword_103B55FC = v140 + *(float *)&dword_103B55FC;
          }
          v49 = *((_DWORD *)this + 48);
          if ( !v49 || v11 >= (*((_DWORD *)this + 49) - v49) / 96 )
            _invalid_parameter_noinfo();
          v100 = *(float *)(*((_DWORD *)this + 48) + v96 + 60);
          v50 = (float *)FXManager::Instance(v88, v92);
          v51 = v50[9];
          v50 += 9;
          v123 = v51 * v100;
          *(float *)&v124 = v50[1] * v100;
          v52 = v100 * v50[2];
          ParticleSystem::Right = LODWORD(v123);
          dword_103B5604 = v124;
          *(float *)&v125 = v52;
          dword_103B5608 = v125;
          if ( 0.0 == *((float *)this + 75) )
          {
            v53 = *((_DWORD *)this + 48);
            if ( !v53 || v11 >= (*((_DWORD *)this + 49) - v53) / 96 )
              _invalid_parameter_noinfo();
            v101 = *(float *)(v96 + *((_DWORD *)this + 48) + 64);
            v54 = (float *)FXManager::Instance(v89, v93);
            v55 = v54[12];
            v56 = 96 * v11;
            v54 += 12;
            v113 = v55 * v101;
            v114 = v54[1] * v101;
            v57 = v114;
            v58 = v101 * v54[2];
            v59 = v113;
            v115 = v58;
            v60 = v115;
          }
          else
          {
            v61 = FXManager::Instance(v89, v93);
            v62 = *(float *)(v61 + 48);
            v63 = *(float *)(v61 + 52);
            v128 = *(float *)(v61 + 56);
            v64 = *((_DWORD *)this + 48);
            v126 = v62;
            v127 = v63;
            if ( !v64 || v11 >= (*((_DWORD *)this + 49) - v64) / 96 )
              _invalid_parameter_noinfo();
            v65 = *((_DWORD *)this + 48);
            v56 = 96 * v11;
            v144 = *(float *)(v65 + v96 + 72) + v126;
            v145 = *(float *)(v65 + v96 + 76) + v127;
            v146 = *(float *)(v65 + v96 + 80) + v128;
            sub_100029CD();
            v66 = *((_DWORD *)this + 48);
            if ( !v66 || v11 >= (*((_DWORD *)this + 49) - v66) / 96 )
              _invalid_parameter_noinfo();
            v102 = *(float *)(*((_DWORD *)this + 48) + v96 + 64);
            v132 = v144 * v102;
            v59 = v132;
            v133 = v145 * v102;
            v57 = v133;
            v134 = v102 * v146;
            v60 = v134;
          }
          dword_103B5614 = LODWORD(v60);
          dword_103B5610 = LODWORD(v57);
          ParticleSystem::up = LODWORD(v59);
          v67 = *((_DWORD *)this + 48);
          if ( !v67 || v11 >= (*((_DWORD *)this + 49) - v67) / 96 )
            _invalid_parameter_noinfo();
          v103 = cos(*(float *)(v56 + *((_DWORD *)this + 48) + 36));
          v68 = *((_DWORD *)this + 48);
          v110 = v103;
          if ( !v68 || v11 >= (*((_DWORD *)this + 49) - v68) / 96 )
            _invalid_parameter_noinfo();
          v104 = sin(*(float *)(*((_DWORD *)this + 48) + v96 + 36));
          v97 = v104;
          v69 = v110;
          v70 = 4 * v107;
          v111 = 1.0 - v110;
          v71 = v111;
          flt_103B5658 = v119 * v119 * v111 + v69;
          v72 = v150 * v119 * v111;
          v105 = v104 * v154;
          flt_103B565C = v105 + v72;
          v112 = v154 * v119 * v111;
          v73 = v97 * v150;
          flt_103B5660 = v112 - v73;
          flt_103B5668 = v72 - v105;
          flt_103B566C = v150 * v150 * v71 + v69;
          v74 = v150 * v154 * v71;
          v75 = v119 * v97;
          flt_103B5670 = v75 + v74;
          flt_103B5678 = v73 + v112;
          flt_103B567C = v74 - v75;
          flt_103B5680 = v69 + v154 * v154 * v71;
          v108 = -ParticleSystem::Right;
          v98 = -*(float *)&dword_103B5604;
          *(float *)&v105 = -*(float *)&dword_103B5608;
          *(float *)&v116 = v108 - ParticleSystem::up;
          dword_103B5618 = v116;
          *(float *)&v117 = v98 - *(float *)&dword_103B5610;
          dword_103B561C = v117;
          *(float *)&v118 = *(float *)&v105 - *(float *)&dword_103B5614;
          dword_103B5620 = v118;
          *(float *)&v120 = ParticleSystem::Right - ParticleSystem::up;
          dword_103B5624 = v120;
          *(float *)&v121 = *(float *)&dword_103B5604 - *(float *)&dword_103B5610;
          dword_103B5628 = v121;
          *(float *)&v122 = *(float *)&dword_103B5608 - *(float *)&dword_103B5614;
          dword_103B562C = v122;
          *(float *)&v129 = v108 + ParticleSystem::up;
          dword_103B5630 = v129;
          *(float *)&v130 = v98 + *(float *)&dword_103B5610;
          dword_103B5634 = v130;
          *(float *)&v131 = *(float *)&v105 + *(float *)&dword_103B5614;
          dword_103B5638 = v131;
          *(float *)&v135 = ParticleSystem::Right + ParticleSystem::up;
          *(float *)&v136 = *(float *)&dword_103B5604 + *(float *)&dword_103B5610;
          *(float *)&v137 = *(float *)&dword_103B5614 + *(float *)&dword_103B5608;
          dword_103B5640 = v136;
          dword_103B563C = v135;
          dword_103B5644 = v137;
          v76 = &v106[24 * v70];
          *((_DWORD *)v76 + 3) = ParticleSystem::color;
          sub_102C1B80(&dword_103B5618, &flt_103B5648);
          v141 = flt_103B5648 + ParticleSystem::loc;
          v142 = flt_103B564C + *(float *)&dword_103B55F8;
          v77 = flt_103B5650 + *(float *)&dword_103B55FC;
          *(float *)v76 = v141;
          *((float *)v76 + 1) = v142;
          v143 = v77;
          *((float *)v76 + 2) = v143;
          *((float *)v76 + 4) = 0.0;
          *((float *)v76 + 5) = 1.0;
          v78 = &v106[24 * v70 + 24];
          *((_DWORD *)v78 + 3) = ParticleSystem::color;
          sub_102C1B80(&dword_103B5624, &flt_103B5648);
          v147 = flt_103B5648 + ParticleSystem::loc;
          v148 = flt_103B564C + *(float *)&dword_103B55F8;
          v79 = flt_103B5650 + *(float *)&dword_103B55FC;
          *(float *)v78 = v147;
          *((float *)v78 + 1) = v148;
          v149 = v79;
          *((float *)v78 + 2) = v149;
          *((float *)v78 + 4) = 1.0;
          *((float *)v78 + 5) = 1.0;
          v80 = &v106[24 * v70 + 48];
          *((_DWORD *)v80 + 3) = ParticleSystem::color;
          sub_102C1B80(&dword_103B5630, &flt_103B5648);
          v151 = flt_103B5648 + ParticleSystem::loc;
          v152 = flt_103B564C + *(float *)&dword_103B55F8;
          v153 = flt_103B5650 + *(float *)&dword_103B55FC;
          *((float *)v80 + 4) = 0.0;
          *(float *)v80 = v151;
          *((float *)v80 + 5) = 0.0;
          *((float *)v80 + 1) = v152;
          *((float *)v80 + 2) = v153;
          v81 = &v106[24 * v70 + 72];
          *((_DWORD *)v81 + 3) = ParticleSystem::color;
          sub_102C1B80(&dword_103B563C, &flt_103B5648);
          v155 = flt_103B5648 + ParticleSystem::loc;
          v156 = flt_103B564C + *(float *)&dword_103B55F8;
          v82 = flt_103B5650 + *(float *)&dword_103B55FC;
          *(float *)v81 = v155;
          *((float *)v81 + 1) = v156;
          v157 = v82;
          *((float *)v81 + 2) = v157;
          *((float *)v81 + 4) = 1.0;
          *((float *)v81 + 5) = 0.0;
          v83 = *((_DWORD *)this + 48);
          if ( !v83 || i >= (*((_DWORD *)this + 49) - v83) / 96 )
            _invalid_parameter_noinfo();
          v84 = *(_DWORD *)(*((_DWORD *)this + 48) + v96 + 88);
          v85 = *((_DWORD *)this + 98);
          if ( !v85 || v84 >= (*((_DWORD *)this + 99) - v85) >> 2 )
            _invalid_parameter_noinfo();
          v86 = FXManager::batchedQuads[1];
          v87 = *(_DWORD *)(*((_DWORD *)this + 98) + 4 * v84);
          if ( !v86 || v87 >= (FXManager::batchedQuads[2] - v86) / 20 )
            _invalid_parameter_noinfo();
          v11 = i;
          ++*(_DWORD *)(FXManager::batchedQuads[1] + 20 * v87 + 16);
        }
      }
    }
  }
}
