/*
 * func-name: ?PostRender@ParticleSystemEx@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100b0160
 * callers: 0x1000e958
 * callees: 0x10003cba, 0x10005c59, 0x100101e5, 0x10015ac3, 0x102c1b80, 0x102c9fe0, 0x102ca08c, 0x102ca092
 */

void __userpurge ParticleSystemEx::PostRender(
        struct Material **this@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4@<esi>,
        struct Camera *a5)
{
  double v6; // st7
  struct Material *v7; // eax
  unsigned int BatchForWriting; // edi
  unsigned int v9; // esi
  int v10; // edi
  struct Material *v11; // eax
  struct Material *v12; // eax
  int v13; // eax
  _DWORD *v14; // eax
  float *v15; // eax
  double v16; // st7
  double v17; // st7
  float *v18; // eax
  double v19; // st7
  double v20; // st7
  float *v21; // eax
  double v22; // st7
  float v23; // ecx
  double v24; // st7
  float v25; // eax
  float v26; // edx
  float *v27; // eax
  double v28; // st7
  double v29; // st5
  double v30; // st3
  double v31; // st1
  double v32; // st4
  double v33; // st6
  int v34; // esi
  struct Material *v35; // eax
  int v36; // esi
  int v37; // esi
  char *v38; // edi
  double v39; // st7
  char *v40; // edi
  double v41; // st7
  char *v42; // edi
  double v43; // st7
  char *v44; // esi
  double v45; // st7
  int v46; // eax
  int v47; // [esp-Ch] [ebp-134h]
  int v48; // [esp-Ch] [ebp-134h]
  int v49; // [esp-8h] [ebp-130h]
  int v50; // [esp-8h] [ebp-130h]
  int v51; // [esp-8h] [ebp-130h]
  int v52; // [esp-8h] [ebp-130h]
  int v53; // [esp-4h] [ebp-12Ch]
  int v54; // [esp-4h] [ebp-12Ch]
  float v55; // [esp+4h] [ebp-124h]
  float v56; // [esp+4h] [ebp-124h]
  float v57; // [esp+4h] [ebp-124h]
  float v58; // [esp+4h] [ebp-124h]
  float v59; // [esp+4h] [ebp-124h]
  float v60; // [esp+4h] [ebp-124h]
  float v61; // [esp+4h] [ebp-124h]
  float v62; // [esp+4h] [ebp-124h]
  double v63; // [esp+4h] [ebp-124h]
  float v64; // [esp+4h] [ebp-124h]
  int v65; // [esp+Ch] [ebp-11Ch]
  float v66; // [esp+10h] [ebp-118h]
  float v67; // [esp+10h] [ebp-118h]
  int v68; // [esp+14h] [ebp-114h]
  char *v69; // [esp+18h] [ebp-110h]
  float v70; // [esp+1Ch] [ebp-10Ch]
  float v71; // [esp+20h] [ebp-108h]
  float v72; // [esp+24h] [ebp-104h]
  float v73; // [esp+28h] [ebp-100h]
  double v74; // [esp+28h] [ebp-100h]
  float v75; // [esp+28h] [ebp-100h]
  float v76; // [esp+30h] [ebp-F8h]
  unsigned int v77; // [esp+34h] [ebp-F4h]
  int v78; // [esp+38h] [ebp-F0h]
  float v79; // [esp+3Ch] [ebp-ECh]
  float v80; // [esp+40h] [ebp-E8h]
  float v81; // [esp+44h] [ebp-E4h]
  int v82; // [esp+48h] [ebp-E0h]
  int v83; // [esp+4Ch] [ebp-DCh]
  int v84; // [esp+50h] [ebp-D8h]
  int v85; // [esp+54h] [ebp-D4h]
  int v86; // [esp+58h] [ebp-D0h]
  float v87; // [esp+68h] [ebp-C0h]
  float v88; // [esp+6Ch] [ebp-BCh]
  float v89; // [esp+70h] [ebp-B8h]
  int v90; // [esp+74h] [ebp-B4h]
  int v91; // [esp+78h] [ebp-B0h]
  int v92; // [esp+7Ch] [ebp-ACh]
  float v93; // [esp+80h] [ebp-A8h]
  int v94; // [esp+84h] [ebp-A4h]
  int v95; // [esp+88h] [ebp-A0h]
  int v96; // [esp+8Ch] [ebp-9Ch]
  int v97; // [esp+90h] [ebp-98h]
  int v98; // [esp+94h] [ebp-94h]
  float v99; // [esp+98h] [ebp-90h]
  float v100; // [esp+9Ch] [ebp-8Ch]
  float v101; // [esp+A0h] [ebp-88h]
  float v102; // [esp+A4h] [ebp-84h]
  float v103; // [esp+A8h] [ebp-80h]
  float v104; // [esp+ACh] [ebp-7Ch]
  int v105; // [esp+B0h] [ebp-78h]
  int v106; // [esp+B4h] [ebp-74h]
  int v107; // [esp+B8h] [ebp-70h]
  float v108; // [esp+BCh] [ebp-6Ch]
  float v109; // [esp+C0h] [ebp-68h]
  float v110; // [esp+C4h] [ebp-64h]
  float v111; // [esp+C8h] [ebp-60h]
  float v112; // [esp+CCh] [ebp-5Ch]
  float v113; // [esp+D0h] [ebp-58h]
  float v114; // [esp+D4h] [ebp-54h]
  float v115; // [esp+D8h] [ebp-50h]
  float v116; // [esp+DCh] [ebp-4Ch]
  float v117; // [esp+ECh] [ebp-3Ch]
  float v118; // [esp+F0h] [ebp-38h]
  float v119; // [esp+F4h] [ebp-34h]
  float v120; // [esp+F8h] [ebp-30h]
  float v121; // [esp+FCh] [ebp-2Ch]
  float v122; // [esp+100h] [ebp-28h]
  float v123; // [esp+104h] [ebp-24h]
  int v124; // [esp+108h] [ebp-20h]
  int v125; // [esp+10Ch] [ebp-1Ch]
  _BYTE v126[12]; // [esp+11Ch] [ebp-Ch] BYREF

  if ( 0.0 == *((float *)this + 89) && 0.0 == *((float *)this + 91) && !*((_BYTE *)this + 377) )
  {
    ParticleSystem::PostRender((ParticleSystem *)this, a5);
    return;
  }
  if ( this[51] )
  {
    v80 = *(float *)(FXManager::Instance(a3, a4) + 60);
    v76 = *(float *)(FXManager::Instance(v49, v53) + 64);
    v6 = *(float *)(FXManager::Instance(v50, v54) + 68);
    v7 = this[44];
    v79 = v6;
    if ( v7 )
    {
      BatchForWriting = FXManager::getBatchForWriting(this, v7, this[56]);
      v65 = BatchForWriting;
    }
    else
    {
      if ( !*((_DWORD *)this[45] + 38) )
        return;
      v65 = FXManager::getBatchForWriting((struct FXSystem *)this, this[45]);
      BatchForWriting = v65;
    }
    if ( BatchForWriting != -1 )
    {
      v47 = a2;
      v69 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12);
      v9 = 0;
      v68 = *(_DWORD *)(sub_10003CBA(BatchForWriting) + 16);
      v77 = 0;
      if ( (int)this[51] > 0 )
      {
        v10 = 0;
        v78 = 0;
        do
        {
          v11 = this[48];
          if ( !v11 || v9 >= (this[49] - v11) / 96 )
            _invalid_parameter_noinfo();
          if ( *(float *)((char *)this[48] + v10 + 52) > 0.0 )
          {
            v12 = this[48];
            if ( !v12 || v9 >= (this[49] - v12) / 96 )
              _invalid_parameter_noinfo();
            ParticleSystem::color = *(_DWORD *)((char *)this[48] + v10 + 44);
            if ( HIBYTE(ParticleSystem::color) )
            {
              if ( *((float *)this + 81) < 1.0 )
              {
                v13 = (int)((double)HIBYTE(ParticleSystem::color) * *((float *)this + 81));
                if ( v13 > 255 )
                  v13 = 255;
                ParticleSystem::color = (unsigned __int8)ParticleSystem::color
                                      | ((BYTE1(ParticleSystem::color)
                                        | (((v13 << 8) | BYTE2(ParticleSystem::color)) << 8)) << 8);
              }
              v14 = (_DWORD *)sub_10015AC3(v9);
              ParticleSystem::loc = *v14;
              dword_103B55F8 = v14[1];
              dword_103B55FC = v14[2];
              if ( *((_BYTE *)this + 332) )
              {
                v15 = (float *)sub_10015AC3(v9);
                v16 = *((float *)this + 5) - v15[3];
                v15 += 3;
                v111 = v16;
                v112 = *((float *)this + 6) - v15[1];
                v113 = *((float *)this + 7) - v15[2];
                ParticleSystem::loc = v111 + ParticleSystem::loc;
                *(float *)&dword_103B55F8 = *(float *)&dword_103B55F8 + v112;
                *(float *)&dword_103B55FC = *(float *)&dword_103B55FC + v113;
              }
              if ( *((_BYTE *)this + 377) )
              {
                v55 = *(float *)(sub_10015AC3(v9) + 60);
                v123 = *((float *)this + 58) * v55;
                *(float *)&v124 = *((float *)this + 59) * v55;
                v17 = v55 * *((float *)this + 60);
                dword_103B5604 = v124;
                ParticleSystem::Right = LODWORD(v123);
                *(float *)&v125 = v17;
                dword_103B5608 = v125;
                v87 = -*((float *)this + 58);
                v88 = -*((float *)this + 59);
                v89 = -*((float *)this + 60);
                v56 = *(float *)(sub_10015AC3(v9) + 64);
                v81 = v87 * v56;
                ParticleSystem::up = LODWORD(v81);
                *(float *)&v82 = v88 * v56;
                dword_103B5610 = v82;
                *(float *)&v83 = v56 * v89;
                dword_103B5614 = v83;
                v80 = *((float *)this + 58);
                v76 = *((float *)this + 59);
                v79 = *((float *)this + 60);
              }
              else
              {
                v57 = *(float *)(sub_10015AC3(v9) + 60);
                v18 = (float *)FXManager::Instance(v47, v51);
                v19 = v18[9];
                v18 += 9;
                v93 = v19 * v57;
                *(float *)&v94 = v18[1] * v57;
                v20 = v57 * v18[2];
                ParticleSystem::Right = LODWORD(v93);
                dword_103B5604 = v94;
                *(float *)&v95 = v20;
                dword_103B5608 = v95;
                if ( 0.0 == *((float *)this + 75) )
                {
                  v58 = *(float *)(sub_10015AC3(v9) + 64);
                  v21 = (float *)FXManager::Instance(v48, v52);
                  v22 = v21[12];
                  v21 += 12;
                  v120 = v22 * v58;
                  v121 = v21[1] * v58;
                  v23 = v121;
                  v24 = v58 * v21[2];
                  v25 = v120;
                  v122 = v24;
                  v26 = v122;
                }
                else
                {
                  FXManager::Instance(v48, v52);
                  sub_10015AC3(v9);
                  v27 = (float *)sub_10005C59((int)v126);
                  v70 = *v27;
                  v71 = v27[1];
                  v72 = v27[2];
                  v59 = *(float *)(sub_10015AC3(v9) + 64);
                  v99 = v70 * v59;
                  v25 = v99;
                  v100 = v71 * v59;
                  v23 = v100;
                  v101 = v59 * v72;
                  v26 = v101;
                }
                dword_103B5614 = LODWORD(v26);
                dword_103B5610 = LODWORD(v23);
                ParticleSystem::up = LODWORD(v25);
              }
              v60 = cos(*(float *)(sub_10015AC3(v9) + 36));
              v73 = v60;
              v61 = sin(*(float *)(sub_10015AC3(v9) + 36));
              v66 = v61;
              v28 = v73;
              v62 = 1.0 - v73;
              v29 = v62;
              flt_103B5658 = v80 * v80 * v62 + v73;
              v30 = v76 * v80 * v62;
              v74 = v66 * v79;
              flt_103B565C = v74 + v30;
              v63 = v79 * v80 * v62;
              v31 = v66 * v76;
              flt_103B5660 = v63 - v31;
              flt_103B5668 = v30 - v74;
              flt_103B566C = v76 * v76 * v29 + v28;
              v32 = v76 * v79 * v29;
              v33 = v80 * v66;
              flt_103B5670 = v33 + v32;
              flt_103B5678 = v31 + v63;
              flt_103B567C = v32 - v33;
              flt_103B5680 = v28 + v79 * v79 * v29;
              v34 = v68;
              if ( v68 > 1499 )
              {
                *(_DWORD *)(sub_10003CBA(v65) + 16) = v68;
                v35 = this[44];
                if ( v35 )
                {
                  v36 = FXManager::addNewBatch(v35, this[56]);
                  v65 = v36;
                }
                else
                {
                  v65 = FXManager::addNewBatch(this[45]);
                  v36 = v65;
                }
                if ( v36 == -1 )
                  return;
                v69 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v36) + 12);
                v68 = *(_DWORD *)(sub_10003CBA(v36) + 16);
                v34 = v68;
              }
              v37 = 4 * v34;
              v67 = -ParticleSystem::Right;
              v75 = -*(float *)&dword_103B5604;
              v64 = -*(float *)&dword_103B5608;
              *(float *)&v105 = v67 - ParticleSystem::up;
              dword_103B5618 = v105;
              *(float *)&v106 = v75 - *(float *)&dword_103B5610;
              dword_103B561C = v106;
              *(float *)&v107 = v64 - *(float *)&dword_103B5614;
              dword_103B5620 = v107;
              *(float *)&v84 = ParticleSystem::Right - ParticleSystem::up;
              dword_103B5624 = v84;
              *(float *)&v85 = *(float *)&dword_103B5604 - *(float *)&dword_103B5610;
              dword_103B5628 = v85;
              *(float *)&v86 = *(float *)&dword_103B5608 - *(float *)&dword_103B5614;
              dword_103B562C = v86;
              *(float *)&v90 = v67 + ParticleSystem::up;
              dword_103B5630 = v90;
              *(float *)&v91 = v75 + *(float *)&dword_103B5610;
              dword_103B5634 = v91;
              *(float *)&v92 = v64 + *(float *)&dword_103B5614;
              dword_103B5638 = v92;
              *(float *)&v96 = ParticleSystem::Right + ParticleSystem::up;
              dword_103B563C = v96;
              *(float *)&v97 = *(float *)&dword_103B5604 + *(float *)&dword_103B5610;
              dword_103B5640 = v97;
              v38 = &v69[24 * v37];
              *(float *)&v98 = *(float *)&dword_103B5614 + *(float *)&dword_103B5608;
              dword_103B5644 = v98;
              *((_DWORD *)v38 + 3) = ParticleSystem::color;
              sub_102C1B80(&dword_103B5618, &flt_103B5648);
              v102 = flt_103B5648 + ParticleSystem::loc;
              v103 = flt_103B564C + *(float *)&dword_103B55F8;
              v39 = flt_103B5650 + *(float *)&dword_103B55FC;
              *(float *)v38 = v102;
              *((float *)v38 + 1) = v103;
              v104 = v39;
              *((float *)v38 + 2) = v104;
              *((float *)v38 + 4) = 0.0;
              *((float *)v38 + 5) = 1.0;
              v40 = &v69[24 * v37 + 24];
              *((_DWORD *)v40 + 3) = ParticleSystem::color;
              sub_102C1B80(&dword_103B5624, &flt_103B5648);
              v108 = flt_103B5648 + ParticleSystem::loc;
              v109 = flt_103B564C + *(float *)&dword_103B55F8;
              v41 = flt_103B5650 + *(float *)&dword_103B55FC;
              *(float *)v40 = v108;
              *((float *)v40 + 1) = v109;
              v110 = v41;
              *((float *)v40 + 2) = v110;
              *((float *)v40 + 4) = 1.0;
              *((float *)v40 + 5) = 1.0;
              v42 = &v69[24 * v37 + 48];
              *((_DWORD *)v42 + 3) = ParticleSystem::color;
              sub_102C1B80(&dword_103B5630, &flt_103B5648);
              v114 = flt_103B5648 + ParticleSystem::loc;
              v115 = flt_103B564C + *(float *)&dword_103B55F8;
              v43 = flt_103B5650 + *(float *)&dword_103B55FC;
              *(float *)v42 = v114;
              *((float *)v42 + 1) = v115;
              v116 = v43;
              *((float *)v42 + 2) = v116;
              *((float *)v42 + 4) = 0.0;
              *((float *)v42 + 5) = 0.0;
              v44 = &v69[24 * v37 + 72];
              *((_DWORD *)v44 + 3) = ParticleSystem::color;
              sub_102C1B80(&dword_103B563C, &flt_103B5648);
              ++v68;
              v10 = v78;
              v117 = flt_103B5648 + ParticleSystem::loc;
              v118 = flt_103B564C + *(float *)&dword_103B55F8;
              v45 = flt_103B5650 + *(float *)&dword_103B55FC;
              *(float *)v44 = v117;
              *((float *)v44 + 1) = v118;
              v119 = v45;
              *((float *)v44 + 2) = v119;
              *((float *)v44 + 4) = 1.0;
              *((float *)v44 + 5) = 0.0;
              v9 = v77;
            }
          }
          ++v9;
          v10 += 96;
          v77 = v9;
          v78 = v10;
        }
        while ( (int)v9 < (int)this[51] );
        BatchForWriting = v65;
      }
      v46 = FXManager::batchedQuads[1];
      if ( !v46 || BatchForWriting >= (FXManager::batchedQuads[2] - v46) / 20 )
        _invalid_parameter_noinfo();
      *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 16) = v68;
    }
  }
}
