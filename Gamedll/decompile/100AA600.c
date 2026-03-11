/*
 * func-name: ?PostRender@LightBeam@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100aa600
 * callers: 0x1000a89e
 * callees: 0x10014669, 0x102c1b80, 0x102ca08c, 0x102ca092
 */

void __thiscall LightBeam::PostRender(LightBeam *this, struct Camera *a2)
{
  int v3; // eax
  double v4; // st7
  int v5; // eax
  unsigned int BatchForWriting; // edi
  int v7; // eax
  char *v8; // ebp
  int v9; // eax
  unsigned int v10; // esi
  int v11; // edi
  int v12; // eax
  int v13; // eax
  int v14; // edx
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edi
  double v22; // st5
  double v23; // st3
  double v24; // st2
  double v25; // st1
  double v26; // rt2
  double v27; // st2
  double v28; // st4
  int v29; // eax
  int v30; // eax
  unsigned int v31; // esi
  int v32; // ecx
  int v33; // eax
  int v34; // eax
  int v35; // esi
  char *v36; // edi
  double v37; // st7
  char *v38; // edi
  double v39; // st7
  char *v40; // edi
  double v41; // st7
  char *v42; // esi
  double v43; // st7
  int v44; // eax
  int v45; // [esp+0h] [ebp-128h]
  int v46; // [esp+0h] [ebp-128h]
  int v47; // [esp+0h] [ebp-128h]
  int v48; // [esp+4h] [ebp-124h]
  int v49; // [esp+4h] [ebp-124h]
  int v50; // [esp+4h] [ebp-124h]
  float v51; // [esp+14h] [ebp-114h]
  float v52; // [esp+14h] [ebp-114h]
  float v53; // [esp+14h] [ebp-114h]
  float v54; // [esp+14h] [ebp-114h]
  float v55; // [esp+14h] [ebp-114h]
  _DWORD *v56; // [esp+14h] [ebp-114h]
  float v57; // [esp+14h] [ebp-114h]
  unsigned int v58; // [esp+18h] [ebp-110h]
  int v59; // [esp+1Ch] [ebp-10Ch]
  int v60; // [esp+20h] [ebp-108h]
  float v61; // [esp+24h] [ebp-104h]
  float v62; // [esp+24h] [ebp-104h]
  float v63; // [esp+28h] [ebp-100h]
  float v64; // [esp+28h] [ebp-100h]
  int v65; // [esp+2Ch] [ebp-FCh]
  int v66; // [esp+30h] [ebp-F8h]
  signed int v67; // [esp+34h] [ebp-F4h]
  float v68; // [esp+38h] [ebp-F0h]
  float v69; // [esp+3Ch] [ebp-ECh]
  float v70; // [esp+40h] [ebp-E8h]
  float v71; // [esp+44h] [ebp-E4h]
  float v72; // [esp+48h] [ebp-E0h]
  float v73; // [esp+4Ch] [ebp-DCh]
  float v74; // [esp+50h] [ebp-D8h]
  float v75; // [esp+54h] [ebp-D4h]
  float v76; // [esp+58h] [ebp-D0h]
  float v77; // [esp+5Ch] [ebp-CCh]
  float v78; // [esp+60h] [ebp-C8h]
  float v79; // [esp+64h] [ebp-C4h]
  float v80; // [esp+74h] [ebp-B4h]
  float v81; // [esp+78h] [ebp-B0h]
  float v82; // [esp+7Ch] [ebp-ACh]
  float v83; // [esp+80h] [ebp-A8h]
  float v84; // [esp+84h] [ebp-A4h]
  float v85; // [esp+88h] [ebp-A0h]
  float v86; // [esp+98h] [ebp-90h]
  float v87; // [esp+9Ch] [ebp-8Ch]
  float v88; // [esp+A0h] [ebp-88h]
  int v89; // [esp+A4h] [ebp-84h]
  int v90; // [esp+A8h] [ebp-80h]
  int v91; // [esp+ACh] [ebp-7Ch]
  float v92; // [esp+B0h] [ebp-78h]
  float v93; // [esp+B4h] [ebp-74h]
  float v94; // [esp+B8h] [ebp-70h]
  float v95; // [esp+BCh] [ebp-6Ch]
  float v96; // [esp+C0h] [ebp-68h]
  float v97; // [esp+C4h] [ebp-64h]
  float v98; // [esp+C8h] [ebp-60h]
  float v99; // [esp+CCh] [ebp-5Ch]
  float v100; // [esp+D0h] [ebp-58h]
  int v101; // [esp+D4h] [ebp-54h]
  int v102; // [esp+D8h] [ebp-50h]
  int v103; // [esp+DCh] [ebp-4Ch]
  float v104; // [esp+E0h] [ebp-48h]
  float v105; // [esp+E4h] [ebp-44h]
  float v106; // [esp+E8h] [ebp-40h]

  v3 = dword_103B55BC;
  if ( (dword_103B55BC & 1) == 0 )
  {
    flt_103B55AC = 0.0;
    v3 = dword_103B55BC | 1;
    flt_103B55B0 = 0.0;
    dword_103B55BC |= 1u;
    flt_103B55B4 = 0.0;
  }
  if ( (v3 & 2) == 0 )
  {
    flt_103B559C = 0.0;
    v3 |= 2u;
    flt_103B55A0 = 0.0;
    dword_103B55BC = v3;
    flt_103B55A4 = 0.0;
  }
  if ( (v3 & 4) == 0 )
  {
    flt_103B558C = 0.0;
    v3 |= 4u;
    flt_103B5590 = 0.0;
    dword_103B55BC = v3;
    flt_103B5594 = 0.0;
  }
  if ( (v3 & 8) == 0 )
  {
    flt_103B557C = 0.0;
    v3 |= 8u;
    flt_103B5580 = 0.0;
    dword_103B55BC = v3;
    flt_103B5584 = 0.0;
  }
  if ( (v3 & 0x10) == 0 )
  {
    flt_103B556C = 0.0;
    v3 |= 0x10u;
    flt_103B5570 = 0.0;
    dword_103B55BC = v3;
    flt_103B5574 = 0.0;
  }
  if ( (v3 & 0x20) == 0 )
  {
    dword_103B55BC = v3 | 0x20;
    sub_10014669(&flt_103B5520);
  }
  v71 = *((float *)a2 + 55);
  v72 = *((float *)a2 + 59);
  v73 = *((float *)a2 + 63);
  v80 = *((float *)a2 + 56);
  v81 = *((float *)a2 + 60);
  v82 = *((float *)a2 + 64);
  v69 = *(float *)(FXManager::Instance(v45, v48) + 60);
  v70 = *(float *)(FXManager::Instance(v46, v49) + 64);
  v4 = *(float *)(FXManager::Instance(v47, v50) + 68);
  v5 = *((_DWORD *)this + 44);
  v68 = v4;
  if ( v5 )
  {
    BatchForWriting = FXManager::getBatchForWriting(this, v5, 2);
    v58 = BatchForWriting;
  }
  else
  {
    if ( !*(_DWORD *)(*((_DWORD *)this + 45) + 152) )
      return;
    v58 = FXManager::getBatchForWriting(this, *((struct Material **)this + 45));
    BatchForWriting = v58;
  }
  if ( BatchForWriting != -1 )
  {
    v7 = FXManager::batchedQuads[1];
    if ( !v7 || BatchForWriting >= (FXManager::batchedQuads[2] - v7) / 20 )
      _invalid_parameter_noinfo();
    v8 = (char *)&FXManager::vertexIndicesBatches
       + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 12);
    v66 = 20 * BatchForWriting;
    v9 = FXManager::batchedQuads[1];
    if ( !v9 || BatchForWriting >= (FXManager::batchedQuads[2] - v9) / 20 )
      _invalid_parameter_noinfo();
    v10 = 0;
    v59 = *(_DWORD *)(FXManager::batchedQuads[1] + v66 + 16);
    v67 = 0;
    if ( *((int *)this + 61) > 0 )
    {
      v11 = 0;
      v65 = 0;
      while ( 1 )
      {
        v12 = *((_DWORD *)this + 47);
        if ( !v12 || v10 >= (*((_DWORD *)this + 48) - v12) / 24 )
          _invalid_parameter_noinfo();
        v13 = *((_DWORD *)this + 47);
        v14 = *(_DWORD *)(v13 + v11);
        v15 = v11 + v13;
        dword_103B55C0 = v14;
        dword_103B55C4 = *(_DWORD *)(v15 + 4);
        dword_103B55C8 = *(_DWORD *)(v15 + 8);
        v16 = *((_DWORD *)this + 47);
        if ( !v16 || v10 >= (*((_DWORD *)this + 48) - v16) / 24 )
          _invalid_parameter_noinfo();
        v51 = *(float *)(v11 + *((_DWORD *)this + 47) + 12);
        *(float *)&v89 = v51 * v71;
        dword_103B55CC = v89;
        *(float *)&v90 = v72 * v51;
        dword_103B55D0 = v90;
        *(float *)&v91 = v51 * v73;
        dword_103B55D4 = v91;
        v17 = *((_DWORD *)this + 47);
        if ( !v17 || v10 >= (*((_DWORD *)this + 48) - v17) / 24 )
          _invalid_parameter_noinfo();
        v52 = *(float *)(v11 + *((_DWORD *)this + 47) + 12);
        *(float *)&v101 = v52 * v80;
        dword_103B55D8 = v101;
        *(float *)&v102 = v81 * v52;
        dword_103B55DC = v102;
        *(float *)&v103 = v52 * v82;
        dword_103B55E0 = v103;
        v18 = *((_DWORD *)this + 47);
        if ( !v18 || v10 >= (*((_DWORD *)this + 48) - v18) / 24 )
          _invalid_parameter_noinfo();
        v19 = *((_DWORD *)this + 47);
        v60 = *(_DWORD *)(v11 + v19 + 16);
        if ( !v19 || v10 >= (*((_DWORD *)this + 48) - v19) / 24 )
          _invalid_parameter_noinfo();
        v53 = cos(*(float *)(v11 + *((_DWORD *)this + 47) + 20));
        v20 = *((_DWORD *)this + 47);
        v61 = v53;
        if ( !v20 || v10 >= (*((_DWORD *)this + 48) - v20) / 24 )
          _invalid_parameter_noinfo();
        v54 = sin(*(float *)(v11 + *((_DWORD *)this + 47) + 20));
        v21 = v59;
        v63 = v54;
        v55 = 1.0 - v61;
        flt_103B5520 = v69 * v69 * v55 + v61;
        v22 = v70 * v69 * v55;
        v23 = v63 * v68;
        flt_103B5524 = v23 + v22;
        v24 = v55 * (v69 * v68);
        v25 = v63 * v70;
        flt_103B5528 = v24 - v25;
        v26 = v24;
        flt_103B5530 = v22 - v23;
        flt_103B5534 = v55 * (v70 * v70) + v61;
        v27 = v55 * (v70 * v68);
        v28 = v63 * v69;
        flt_103B5538 = v28 + v27;
        flt_103B5540 = v26 + v25;
        flt_103B5544 = v27 - v28;
        flt_103B5548 = v61 + v55 * (v68 * v68);
        if ( v59 > 1499 )
        {
          v29 = FXManager::batchedQuads[1];
          if ( !v29 || v58 >= (FXManager::batchedQuads[2] - v29) / 20 )
            _invalid_parameter_noinfo();
          *(_DWORD *)(v66 + FXManager::batchedQuads[1] + 16) = v59;
          v30 = *((_DWORD *)this + 44);
          if ( v30 )
          {
            v31 = FXManager::addNewBatch(v30, 2);
            v58 = v31;
          }
          else
          {
            v58 = FXManager::addNewBatch(*((struct Material **)this + 45));
            v31 = v58;
          }
          if ( v31 == -1 )
            return;
          v32 = FXManager::batchedQuads[0];
          v33 = FXManager::batchedQuads[1];
          if ( !v33 || v31 >= (FXManager::batchedQuads[2] - v33) / 20 )
          {
            _invalid_parameter_noinfo();
            v32 = FXManager::batchedQuads[0];
          }
          v8 = (char *)&FXManager::vertexIndicesBatches
             + 162110 * *(_DWORD *)(FXManager::batchedQuads[1] + 20 * v31 + 12);
          v56 = (_DWORD *)(v32 + 4);
          v34 = *(_DWORD *)(v32 + 4);
          v66 = 20 * v31;
          if ( !v34 || v31 >= (*(_DWORD *)(v32 + 8) - v34) / 20 )
            _invalid_parameter_noinfo();
          v59 = *(_DWORD *)(*v56 + 20 * v31 + 16);
          v21 = v59;
        }
        v64 = -*(float *)&dword_103B55CC;
        v62 = -*(float *)&dword_103B55D0;
        v57 = -*(float *)&dword_103B55D4;
        v95 = v64 - *(float *)&dword_103B55D8;
        flt_103B55AC = v95;
        v96 = v62 - *(float *)&dword_103B55DC;
        flt_103B55B0 = v96;
        v97 = v57 - *(float *)&dword_103B55E0;
        flt_103B55B4 = v97;
        v74 = *(float *)&dword_103B55CC - *(float *)&dword_103B55D8;
        flt_103B559C = v74;
        v75 = *(float *)&dword_103B55D0 - *(float *)&dword_103B55DC;
        flt_103B55A0 = v75;
        v76 = *(float *)&dword_103B55D4 - *(float *)&dword_103B55E0;
        flt_103B55A4 = v76;
        v83 = v64 + *(float *)&dword_103B55D8;
        flt_103B558C = v83;
        v84 = v62 + *(float *)&dword_103B55DC;
        flt_103B5590 = v84;
        v85 = v57 + *(float *)&dword_103B55E0;
        flt_103B5594 = v85;
        v86 = *(float *)&dword_103B55CC + *(float *)&dword_103B55D8;
        flt_103B557C = v86;
        v35 = 4 * v21;
        v36 = &v8[96 * v21];
        v87 = *(float *)&dword_103B55D0 + *(float *)&dword_103B55DC;
        flt_103B5580 = v87;
        v88 = *(float *)&dword_103B55E0 + *(float *)&dword_103B55D4;
        flt_103B5584 = v88;
        *((_DWORD *)v36 + 3) = v60;
        sub_102C1B80(&flt_103B55AC, &flt_103B556C);
        v92 = *(float *)&dword_103B55C0 + flt_103B556C;
        v93 = *(float *)&dword_103B55C4 + flt_103B5570;
        v37 = *(float *)&dword_103B55C8 + flt_103B5574;
        *(float *)v36 = v92;
        *((float *)v36 + 1) = v93;
        v94 = v37;
        *((float *)v36 + 2) = v94;
        *((float *)v36 + 4) = 0.0;
        *((float *)v36 + 5) = 1.0;
        v38 = &v8[24 * v35 + 24];
        *((_DWORD *)v38 + 3) = v60;
        sub_102C1B80(&flt_103B559C, &flt_103B556C);
        v98 = *(float *)&dword_103B55C0 + flt_103B556C;
        v99 = *(float *)&dword_103B55C4 + flt_103B5570;
        v39 = *(float *)&dword_103B55C8 + flt_103B5574;
        *(float *)v38 = v98;
        *((float *)v38 + 1) = v99;
        v100 = v39;
        *((float *)v38 + 2) = v100;
        *((float *)v38 + 4) = 1.0;
        *((float *)v38 + 5) = 1.0;
        v40 = &v8[24 * v35 + 48];
        *((_DWORD *)v40 + 3) = v60;
        sub_102C1B80(&flt_103B558C, &flt_103B556C);
        v104 = *(float *)&dword_103B55C0 + flt_103B556C;
        v105 = *(float *)&dword_103B55C4 + flt_103B5570;
        v41 = *(float *)&dword_103B55C8 + flt_103B5574;
        *(float *)v40 = v104;
        *((float *)v40 + 1) = v105;
        v106 = v41;
        *((float *)v40 + 4) = 0.0;
        v42 = &v8[24 * v35 + 72];
        *((float *)v40 + 5) = 0.0;
        *((float *)v40 + 2) = v106;
        *((_DWORD *)v42 + 3) = v60;
        sub_102C1B80(&flt_103B557C, &flt_103B556C);
        ++v59;
        v65 += 24;
        v77 = *(float *)&dword_103B55C0 + flt_103B556C;
        v78 = *(float *)&dword_103B55C4 + flt_103B5570;
        v43 = *(float *)&dword_103B55C8 + flt_103B5574;
        *(float *)v42 = v77;
        *((float *)v42 + 1) = v78;
        v79 = v43;
        *((float *)v42 + 4) = 1.0;
        *((float *)v42 + 2) = v79;
        ++v67;
        *((float *)v42 + 5) = 0.0;
        if ( v67 >= *((_DWORD *)this + 61) )
          break;
        v11 = v65;
        v10 = v67;
      }
      BatchForWriting = v58;
    }
    v44 = FXManager::batchedQuads[1];
    if ( !v44 || BatchForWriting >= (FXManager::batchedQuads[2] - v44) / 20 )
      _invalid_parameter_noinfo();
    *(_DWORD *)(FXManager::batchedQuads[1] + 20 * BatchForWriting + 16) = v59;
  }
}
