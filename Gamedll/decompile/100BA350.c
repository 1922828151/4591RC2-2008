/*
 * func-name: ?PostRender@RandomTexturePhysicsParticles@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100ba350
 * callers: 0x1000b60e
 * callees: 0x100029cd, 0x102c9fe0
 */

void __userpurge RandomTexturePhysicsParticles::PostRender(
        RandomTexturePhysicsParticles *this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        struct Camera *a4)
{
  unsigned int v5; // ebp
  int v6; // ecx
  void (__cdecl *v7)(); // edi
  int v8; // ecx
  _DWORD *v9; // ebx
  _DWORD *v10; // edi
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // edx
  int v14; // edi
  int v15; // ecx
  unsigned int v16; // ebp
  int v17; // eax
  int v18; // ecx
  unsigned int v19; // ebx
  unsigned int v20; // edi
  int v21; // eax
  int v22; // eax
  unsigned int v23; // ebx
  char *v24; // ebp
  unsigned int v25; // edi
  int v26; // ecx
  unsigned int v27; // edi
  int v28; // eax
  int v29; // eax
  unsigned int v30; // edi
  int v31; // ecx
  int v32; // eax
  _DWORD *v33; // ebp
  unsigned int v34; // edi
  int v35; // ecx
  _DWORD *v36; // edi
  int v37; // eax
  int v38; // ecx
  unsigned int v39; // edi
  int v40; // eax
  unsigned int v41; // edi
  int v42; // ecx
  int v43; // eax
  unsigned int v44; // edi
  int v45; // eax
  int v46; // ecx
  unsigned int v47; // edi
  unsigned int v48; // edi
  int v49; // eax
  int v50; // eax
  _DWORD *v51; // eax
  int v52; // eax
  float *v53; // eax
  double v54; // st7
  int v55; // eax
  int v56; // edi
  float *v57; // eax
  double v58; // st7
  int v59; // eax
  float v60; // ecx
  float v61; // edx
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  double v65; // st7
  int v66; // eax
  int v67; // edx
  int v68; // eax
  float *v69; // ecx
  double v70; // st6
  int v71; // ecx
  float *v72; // ecx
  double v73; // st5
  int v74; // ecx
  float *v75; // ecx
  char *v76; // eax
  double v77; // st5
  double v78; // st5
  int v79; // eax
  unsigned int v80; // edi
  int v81; // ecx
  int v82; // eax
  unsigned int v83; // edi
  int v84; // [esp-Ch] [ebp-C8h]
  int v85; // [esp-Ch] [ebp-C8h]
  int v86; // [esp-8h] [ebp-C4h]
  int v87; // [esp-8h] [ebp-C4h]
  int v88; // [esp+4h] [ebp-B8h]
  unsigned int v89; // [esp+8h] [ebp-B4h]
  int v90; // [esp+Ch] [ebp-B0h]
  int v91; // [esp+Ch] [ebp-B0h]
  float v92; // [esp+10h] [ebp-ACh]
  float v93; // [esp+10h] [ebp-ACh]
  float v94; // [esp+10h] [ebp-ACh]
  float v95; // [esp+20h] [ebp-9Ch]
  float v96; // [esp+24h] [ebp-98h]
  float v97; // [esp+28h] [ebp-94h]
  float v98; // [esp+2Ch] [ebp-90h]
  float v99; // [esp+30h] [ebp-8Ch]
  float v100; // [esp+34h] [ebp-88h]
  float v101; // [esp+38h] [ebp-84h]
  float v102; // [esp+3Ch] [ebp-80h]
  float v103; // [esp+40h] [ebp-7Ch]
  float v104; // [esp+44h] [ebp-78h]
  float v105; // [esp+48h] [ebp-74h]
  float v106; // [esp+4Ch] [ebp-70h]
  float v107; // [esp+50h] [ebp-6Ch]
  float v108; // [esp+54h] [ebp-68h]
  float v109; // [esp+58h] [ebp-64h]
  float v110; // [esp+5Ch] [ebp-60h]
  int v111; // [esp+60h] [ebp-5Ch]
  int v112; // [esp+64h] [ebp-58h]
  float v113; // [esp+68h] [ebp-54h]
  float v114; // [esp+6Ch] [ebp-50h]
  float v115; // [esp+70h] [ebp-4Ch]
  float v116; // [esp+74h] [ebp-48h]
  int v117; // [esp+78h] [ebp-44h]
  int v118; // [esp+7Ch] [ebp-40h]
  float v119; // [esp+80h] [ebp-3Ch]
  float v120; // [esp+84h] [ebp-38h]
  float v121; // [esp+88h] [ebp-34h]
  float v122; // [esp+8Ch] [ebp-30h]
  float v123; // [esp+90h] [ebp-2Ch]
  float v124; // [esp+94h] [ebp-28h]
  float v125; // [esp+98h] [ebp-24h]
  float v126; // [esp+9Ch] [ebp-20h]
  float v127; // [esp+A0h] [ebp-1Ch]
  float v128; // [esp+A4h] [ebp-18h]
  int v129; // [esp+A8h] [ebp-14h]
  int v130; // [esp+ACh] [ebp-10h]
  float v131; // [esp+B0h] [ebp-Ch]
  float v132; // [esp+B4h] [ebp-8h]
  float v133; // [esp+B8h] [ebp-4h]

  if ( *((_DWORD *)this + 51) )
  {
    v86 = a3;
    v5 = 0;
    v84 = a2;
    while ( 1 )
    {
      v6 = *((_DWORD *)this + 97);
      v7 = _invalid_parameter_noinfo;
      if ( !v6 || v5 >= (*((_DWORD *)this + 98) - v6) >> 2 )
        break;
      v8 = *((_DWORD *)this + 101);
      v9 = (_DWORD *)(4 * v5 + *((_DWORD *)this + 97));
      if ( !v8 || v5 >= (*((_DWORD *)this + 102) - v8) >> 2 )
        _invalid_parameter_noinfo();
      v10 = (_DWORD *)(4 * v5 + *((_DWORD *)this + 101));
      *v10 = FXManager::getBatchForWriting(this, *v9, *((_DWORD *)this + 56));
      ++v5;
    }
    v11 = 0;
    v89 = 0;
    if ( *((int *)this + 51) > 0 )
    {
      while ( 1 )
      {
        v12 = *((_DWORD *)this + 48);
        if ( !v12 || v11 >= (*((_DWORD *)this + 49) - v12) / 96 )
          v7();
        v13 = *((_DWORD *)this + 48);
        v14 = 96 * v11;
        v88 = 96 * v11;
        if ( *(float *)(96 * v11 + v13 + 52) > 0.0 )
        {
          if ( !v13 || v11 >= (*((_DWORD *)this + 49) - v13) / 96 )
            _invalid_parameter_noinfo();
          v15 = *((_DWORD *)this + 101);
          v16 = *(_DWORD *)(v14 + *((_DWORD *)this + 48) + 88);
          if ( !v15 || v16 >= (*((_DWORD *)this + 102) - v15) >> 2 )
            _invalid_parameter_noinfo();
          if ( *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v16) == -1 )
            return;
          v17 = *((_DWORD *)this + 48);
          if ( !v17 || v11 >= (*((_DWORD *)this + 49) - v17) / 96 )
            _invalid_parameter_noinfo();
          v18 = *((_DWORD *)this + 101);
          v19 = *(_DWORD *)(v14 + *((_DWORD *)this + 48) + 88);
          if ( !v18 || v19 >= (*((_DWORD *)this + 102) - v18) >> 2 )
            _invalid_parameter_noinfo();
          v20 = *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v19);
          v21 = FXManager::batchedQuads[1];
          if ( !v21 || v20 >= (FXManager::batchedQuads[2] - v21) / 20 )
            _invalid_parameter_noinfo();
          v22 = *((_DWORD *)this + 48);
          v23 = v89;
          v24 = (char *)&FXManager::vertexIndicesBatches
              + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v20 + 12);
          if ( !v22 || v89 >= (*((_DWORD *)this + 49) - v22) / 96 )
            _invalid_parameter_noinfo();
          v25 = *(_DWORD *)(*((_DWORD *)this + 48) + v88 + 88);
          v26 = *((_DWORD *)this + 101);
          if ( !v26 || v25 >= (*((_DWORD *)this + 102) - v26) >> 2 )
            _invalid_parameter_noinfo();
          v27 = *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v25);
          v28 = FXManager::batchedQuads[1];
          if ( !v28 || v27 >= (FXManager::batchedQuads[2] - v28) / 20 )
            _invalid_parameter_noinfo();
          v90 = *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v27 + 16);
          if ( v90 > 1499 )
          {
            v29 = *((_DWORD *)this + 48);
            if ( !v29 || v89 >= (*((_DWORD *)this + 49) - v29) / 96 )
              _invalid_parameter_noinfo();
            v30 = *(_DWORD *)(*((_DWORD *)this + 48) + v88 + 88);
            v31 = *((_DWORD *)this + 97);
            if ( !v31 || v30 >= (*((_DWORD *)this + 98) - v31) >> 2 )
              _invalid_parameter_noinfo();
            v32 = *((_DWORD *)this + 48);
            v33 = (_DWORD *)(*((_DWORD *)this + 97) + 4 * v30);
            if ( !v32 || v89 >= (*((_DWORD *)this + 49) - v32) / 96 )
              _invalid_parameter_noinfo();
            v34 = *(_DWORD *)(v88 + *((_DWORD *)this + 48) + 88);
            v35 = *((_DWORD *)this + 101);
            if ( !v35 || v34 >= (*((_DWORD *)this + 102) - v35) >> 2 )
              _invalid_parameter_noinfo();
            v36 = (_DWORD *)(*((_DWORD *)this + 101) + 4 * v34);
            *v36 = FXManager::addNewBatch(*v33, *((_DWORD *)this + 56));
            v37 = *((_DWORD *)this + 48);
            if ( !v37 || v89 >= (*((_DWORD *)this + 49) - v37) / 96 )
              _invalid_parameter_noinfo();
            v38 = *((_DWORD *)this + 101);
            v39 = *(_DWORD *)(*((_DWORD *)this + 48) + v88 + 88);
            if ( !v38 || v39 >= (*((_DWORD *)this + 102) - v38) >> 2 )
              _invalid_parameter_noinfo();
            if ( *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v39) == -1 )
              return;
            v40 = *((_DWORD *)this + 48);
            if ( !v40 || v89 >= (*((_DWORD *)this + 49) - v40) / 96 )
              _invalid_parameter_noinfo();
            v41 = *(_DWORD *)(*((_DWORD *)this + 48) + v88 + 88);
            v42 = *((_DWORD *)this + 101);
            if ( !v42 || v41 >= (*((_DWORD *)this + 102) - v42) >> 2 )
              _invalid_parameter_noinfo();
            v43 = FXManager::batchedQuads[1];
            v44 = *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v41);
            if ( !v43 || v44 >= (FXManager::batchedQuads[2] - v43) / 20 )
              _invalid_parameter_noinfo();
            v45 = *((_DWORD *)this + 48);
            v24 = (char *)&FXManager::vertexIndicesBatches
                + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v44 + 12);
            if ( !v45 || v89 >= (*((_DWORD *)this + 49) - v45) / 96 )
              _invalid_parameter_noinfo();
            v46 = *((_DWORD *)this + 101);
            v47 = *(_DWORD *)(*((_DWORD *)this + 48) + v88 + 88);
            if ( !v46 || v47 >= (*((_DWORD *)this + 102) - v46) >> 2 )
              _invalid_parameter_noinfo();
            v48 = *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v47);
            v49 = FXManager::batchedQuads[1];
            if ( !v49 || v48 >= (FXManager::batchedQuads[2] - v49) / 20 )
              _invalid_parameter_noinfo();
            v23 = v89;
            v90 = *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v48 + 16);
          }
          v50 = *((_DWORD *)this + 48);
          if ( !v50 || v23 >= (*((_DWORD *)this + 49) - v50) / 96 )
            _invalid_parameter_noinfo();
          v51 = (_DWORD *)(v88 + *((_DWORD *)this + 48));
          ParticleSystem::loc = *v51;
          dword_103B55F8 = v51[1];
          dword_103B55FC = v51[2];
          v52 = *((_DWORD *)this + 48);
          if ( !v52 || v23 >= (*((_DWORD *)this + 49) - v52) / 96 )
            _invalid_parameter_noinfo();
          v92 = *(float *)(*((_DWORD *)this + 48) + v88 + 60);
          v53 = (float *)(FXManager::Instance(v84, v86) + 36);
          v128 = v92 * *v53;
          *(float *)&v129 = v53[1] * v92;
          v54 = v92 * v53[2];
          dword_103B5604 = v129;
          ParticleSystem::Right = LODWORD(v128);
          *(float *)&v130 = v54;
          dword_103B5608 = v130;
          if ( 0.0 == *((float *)this + 75) )
          {
            v55 = *((_DWORD *)this + 48);
            if ( !v55 || v23 >= (*((_DWORD *)this + 49) - v55) / 96 )
              _invalid_parameter_noinfo();
            v93 = *(float *)(*((_DWORD *)this + 48) + v88 + 64);
            v56 = v88;
            v57 = (float *)(FXManager::Instance(v85, v87) + 48);
            v116 = v93 * *v57;
            *(float *)&v117 = v57[1] * v93;
            v58 = v93 * v57[2];
            ParticleSystem::up = LODWORD(v116);
            dword_103B5610 = v117;
            *(float *)&v118 = v58;
            dword_103B5614 = v118;
          }
          else
          {
            v59 = FXManager::Instance(v85, v87);
            v60 = *(float *)(v59 + 48);
            v61 = *(float *)(v59 + 52);
            v106 = *(float *)(v59 + 56);
            v62 = *((_DWORD *)this + 48);
            v104 = v60;
            v105 = v61;
            if ( !v62 || v23 >= (*((_DWORD *)this + 49) - v62) / 96 )
              _invalid_parameter_noinfo();
            v63 = *((_DWORD *)this + 48);
            v56 = v88;
            v95 = v104 + *(float *)(v63 + v88 + 72);
            v96 = *(float *)(v63 + v88 + 76) + v105;
            v97 = *(float *)(v63 + v88 + 80) + v106;
            sub_100029CD();
            v64 = *((_DWORD *)this + 48);
            if ( !v64 || v23 >= (*((_DWORD *)this + 49) - v64) / 96 )
              _invalid_parameter_noinfo();
            v94 = *(float *)(*((_DWORD *)this + 48) + v88 + 64);
            v110 = v95 * v94;
            ParticleSystem::up = LODWORD(v110);
            *(float *)&v111 = v96 * v94;
            dword_103B5610 = v111;
            *(float *)&v112 = v94 * v97;
            dword_103B5614 = v112;
          }
          v65 = 1.0;
          v66 = *((_DWORD *)this + 48);
          if ( 1.0 == *((float *)this + 81) )
          {
            if ( !v66 || v23 >= (*((_DWORD *)this + 49) - v66) / 96 )
            {
              _invalid_parameter_noinfo();
              v65 = 1.0;
            }
            v67 = *(_DWORD *)(*((_DWORD *)this + 48) + v56 + 44);
          }
          else
          {
            if ( !v66 || v23 >= (*((_DWORD *)this + 49) - v66) / 96 )
            {
              _invalid_parameter_noinfo();
              v65 = 1.0;
            }
            ParticleSystem::color = *(_DWORD *)(v88 + *((_DWORD *)this + 48) + 44);
            v68 = (int)((double)HIBYTE(ParticleSystem::color) * *((float *)this + 81));
            if ( v68 > 255 )
              v68 = 255;
            v23 = v89;
            v67 = (unsigned __int8)ParticleSystem::color
                | ((BYTE1(ParticleSystem::color) | (((v68 << 8) | BYTE2(ParticleSystem::color)) << 8)) << 8);
          }
          ParticleSystem::color = v67;
          *(_DWORD *)&v24[96 * v90 + 12] = v67;
          v69 = (float *)&v24[96 * v90];
          v122 = ParticleSystem::loc - ParticleSystem::Right;
          v123 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
          v124 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
          v98 = v122 - ParticleSystem::up;
          v99 = v123 - *(float *)&dword_103B5610;
          v70 = v124 - *(float *)&dword_103B5614;
          *v69 = v98;
          v69[1] = v99;
          v100 = v70;
          v69[2] = v100;
          v69[4] = 0.0;
          v69[5] = v65;
          v71 = 12 * v90 + 3;
          *(_DWORD *)&v24[8 * v71 + 12] = ParticleSystem::color;
          v72 = (float *)&v24[8 * v71];
          v101 = ParticleSystem::Right + ParticleSystem::loc;
          v102 = *(float *)&dword_103B55F8 + *(float *)&dword_103B5604;
          v103 = *(float *)&dword_103B55FC + *(float *)&dword_103B5608;
          v107 = v101 - ParticleSystem::up;
          v108 = v102 - *(float *)&dword_103B5610;
          v73 = v103 - *(float *)&dword_103B5614;
          *v72 = v107;
          v72[1] = v108;
          v109 = v73;
          v72[2] = v109;
          v72[4] = v65;
          v72[5] = v65;
          v74 = 12 * v90 + 6;
          *(_DWORD *)&v24[8 * v74 + 12] = ParticleSystem::color;
          v75 = (float *)&v24[8 * v74];
          v113 = ParticleSystem::loc - ParticleSystem::Right;
          v114 = *(float *)&dword_103B55F8 - *(float *)&dword_103B5604;
          v115 = *(float *)&dword_103B55FC - *(float *)&dword_103B5608;
          v119 = v113 + ParticleSystem::up;
          v76 = &v24[96 * v90 + 72];
          v120 = v114 + *(float *)&dword_103B5610;
          v91 = v90 + 1;
          v77 = v115 + *(float *)&dword_103B5614;
          *v75 = v119;
          v75[1] = v120;
          v121 = v77;
          v75[2] = v121;
          v75[4] = 0.0;
          v75[5] = 0.0;
          *((_DWORD *)v76 + 3) = ParticleSystem::color;
          v125 = ParticleSystem::Right + ParticleSystem::loc;
          v126 = *(float *)&dword_103B55F8 + *(float *)&dword_103B5604;
          v127 = *(float *)&dword_103B55FC + *(float *)&dword_103B5608;
          v131 = v125 + ParticleSystem::up;
          v132 = v126 + *(float *)&dword_103B5610;
          v78 = v127 + *(float *)&dword_103B5614;
          *(float *)v76 = v131;
          *((float *)v76 + 1) = v132;
          v133 = v78;
          *((float *)v76 + 2) = v133;
          *((float *)v76 + 4) = v65;
          *((float *)v76 + 5) = 0.0;
          v79 = *((_DWORD *)this + 48);
          if ( !v79 || v23 >= (*((_DWORD *)this + 49) - v79) / 96 )
            _invalid_parameter_noinfo();
          v80 = *(_DWORD *)(*((_DWORD *)this + 48) + v88 + 88);
          v81 = *((_DWORD *)this + 101);
          if ( !v81 || v80 >= (*((_DWORD *)this + 102) - v81) >> 2 )
            _invalid_parameter_noinfo();
          v82 = FXManager::batchedQuads[1];
          v83 = *(_DWORD *)(*((_DWORD *)this + 101) + 4 * v80);
          if ( !v82 || v83 >= (FXManager::batchedQuads[2] - v82) / 20 )
            _invalid_parameter_noinfo();
          v11 = v89;
          *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v83 + 16) = v91;
        }
        v89 = ++v11;
        if ( (signed int)v11 >= *((_DWORD *)this + 51) )
          return;
        v7 = _invalid_parameter_noinfo;
      }
    }
  }
}
