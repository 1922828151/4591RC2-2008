/*
 * func-name: ?PostRender@WaterDecal@@UAEXAAVCamera@@@Z_0
 * func-address: 0x100beff0
 * callers: 0x10016abd
 * callees: 0x10003cba, 0x10005646, 0x10014669, 0x1001717a, 0x102c13d0, 0x102c1be0
 */

void __thiscall WaterDecal::PostRender(WaterDecal *this, struct Camera *a2)
{
  int BatchForWriting; // esi
  int v4; // eax
  int v5; // edi
  double v6; // st7
  unsigned int v7; // edi
  int i; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ebx
  int v14; // ebx
  int v15; // eax
  double v16; // st7
  double v17; // st7
  int v18; // eax
  double v19; // st7
  double v20; // st7
  float *v21; // eax
  double v22; // st7
  int v23; // eax
  double v24; // st7
  float v25; // ecx
  double v26; // st7
  float v27; // eax
  float v28; // edx
  int v29; // eax
  int v30; // ebx
  int v31; // eax
  double v32; // st7
  int v33; // eax
  double v34; // st7
  int v35; // eax
  double v36; // st7
  double v37; // st7
  double v38; // st7
  double v39; // st7
  float *v40; // eax
  float *v41; // eax
  float *v42; // eax
  float *v43; // eax
  int v44; // ecx
  int v45; // edx
  int v46; // eax
  float *v47; // ecx
  float v48; // edx
  int v49; // ebx
  float *v50; // ecx
  float v51; // edx
  char *v52; // ecx
  float v53; // edx
  char *v54; // ecx
  float v55; // eax
  int v56; // eax
  int v57; // ebx
  int v58; // eax
  int v59; // [esp-10h] [ebp-204h]
  int v60; // [esp-Ch] [ebp-200h]
  float v61; // [esp+14h] [ebp-1E0h]
  int v62; // [esp+18h] [ebp-1DCh]
  char *v63; // [esp+1Ch] [ebp-1D8h]
  int v64; // [esp+20h] [ebp-1D4h]
  float v65; // [esp+24h] [ebp-1D0h] BYREF
  float v66; // [esp+28h] [ebp-1CCh]
  float v67; // [esp+2Ch] [ebp-1C8h]
  float v68; // [esp+30h] [ebp-1C4h] BYREF
  float v69; // [esp+34h] [ebp-1C0h]
  float v70; // [esp+38h] [ebp-1BCh]
  float v71; // [esp+3Ch] [ebp-1B8h] BYREF
  float v72; // [esp+40h] [ebp-1B4h]
  float v73; // [esp+44h] [ebp-1B0h]
  float v74; // [esp+48h] [ebp-1ACh] BYREF
  float v75; // [esp+4Ch] [ebp-1A8h]
  float v76; // [esp+50h] [ebp-1A4h]
  double v77; // [esp+54h] [ebp-1A0h]
  int v78; // [esp+60h] [ebp-194h]
  char *v79; // [esp+64h] [ebp-190h]
  char *v80; // [esp+68h] [ebp-18Ch]
  int v81; // [esp+6Ch] [ebp-188h]
  int v82; // [esp+70h] [ebp-184h]
  float v83; // [esp+74h] [ebp-180h] BYREF
  float v84; // [esp+78h] [ebp-17Ch]
  float v85; // [esp+7Ch] [ebp-178h]
  float v86; // [esp+80h] [ebp-174h] BYREF
  float v87; // [esp+84h] [ebp-170h]
  float v88; // [esp+88h] [ebp-16Ch]
  float v89; // [esp+8Ch] [ebp-168h] BYREF
  float v90; // [esp+90h] [ebp-164h]
  float v91; // [esp+94h] [ebp-160h]
  float v92; // [esp+98h] [ebp-15Ch] BYREF
  float v93; // [esp+9Ch] [ebp-158h]
  float v94; // [esp+A0h] [ebp-154h]
  float v95; // [esp+A4h] [ebp-150h]
  float v96; // [esp+A8h] [ebp-14Ch]
  float v97; // [esp+ACh] [ebp-148h]
  float v98; // [esp+B0h] [ebp-144h]
  float v99; // [esp+B4h] [ebp-140h]
  float v100; // [esp+B8h] [ebp-13Ch]
  float v101; // [esp+BCh] [ebp-138h]
  float v102; // [esp+C0h] [ebp-134h]
  float v103; // [esp+C4h] [ebp-130h]
  float v104; // [esp+C8h] [ebp-12Ch]
  float v105; // [esp+CCh] [ebp-128h]
  float v106; // [esp+D0h] [ebp-124h]
  float v107; // [esp+D4h] [ebp-120h]
  float v108; // [esp+D8h] [ebp-11Ch]
  float v109; // [esp+DCh] [ebp-118h]
  float v110; // [esp+E0h] [ebp-114h]
  float v111; // [esp+E4h] [ebp-110h]
  float v112; // [esp+E8h] [ebp-10Ch]
  float v113; // [esp+ECh] [ebp-108h]
  float v114; // [esp+F0h] [ebp-104h]
  float v115; // [esp+F4h] [ebp-100h]
  float v116; // [esp+F8h] [ebp-FCh]
  float v117; // [esp+FCh] [ebp-F8h]
  float v118; // [esp+100h] [ebp-F4h]
  float v119; // [esp+104h] [ebp-F0h]
  float v120; // [esp+108h] [ebp-ECh]
  float v121; // [esp+10Ch] [ebp-E8h]
  float v122; // [esp+110h] [ebp-E4h]
  float v123; // [esp+114h] [ebp-E0h]
  float v124; // [esp+118h] [ebp-DCh]
  float v125; // [esp+11Ch] [ebp-D8h]
  float v126; // [esp+120h] [ebp-D4h]
  float v127; // [esp+124h] [ebp-D0h]
  float v128; // [esp+128h] [ebp-CCh]
  float v129; // [esp+12Ch] [ebp-C8h]
  float v130; // [esp+130h] [ebp-C4h]
  float v131; // [esp+134h] [ebp-C0h]
  float v132; // [esp+138h] [ebp-BCh]
  float v133; // [esp+13Ch] [ebp-B8h]
  float v134; // [esp+140h] [ebp-B4h]
  float v135; // [esp+144h] [ebp-B0h]
  float v136; // [esp+148h] [ebp-ACh]
  float v137; // [esp+14Ch] [ebp-A8h]
  float v138; // [esp+150h] [ebp-A4h]
  float v139; // [esp+154h] [ebp-A0h]
  float v140; // [esp+158h] [ebp-9Ch]
  float v141; // [esp+15Ch] [ebp-98h]
  float v142; // [esp+160h] [ebp-94h]
  int v143; // [esp+164h] [ebp-90h]
  int v144; // [esp+168h] [ebp-8Ch]
  int v145; // [esp+16Ch] [ebp-88h]
  float v146; // [esp+170h] [ebp-84h]
  float v147; // [esp+174h] [ebp-80h]
  float v148; // [esp+17Ch] [ebp-78h]
  float v149; // [esp+180h] [ebp-74h]
  float v150; // [esp+188h] [ebp-6Ch]
  float v151; // [esp+18Ch] [ebp-68h]
  float v152; // [esp+194h] [ebp-60h]
  float v153; // [esp+198h] [ebp-5Ch]
  float v154; // [esp+1A0h] [ebp-54h]
  float v155; // [esp+1A4h] [ebp-50h]
  float v156; // [esp+1A8h] [ebp-4Ch]
  float v157; // [esp+1ACh] [ebp-48h]
  float v158; // [esp+1B0h] [ebp-44h]
  char v159[64]; // [esp+1B4h] [ebp-40h] BYREF

  BatchForWriting = FXManager::getBatchForWriting(this, *((_DWORD *)this + 87), *((_DWORD *)this + 65));
  v60 = *((_DWORD *)this + 65);
  v59 = *((_DWORD *)this + 88);
  v82 = BatchForWriting;
  v4 = FXManager::getBatchForWriting(this, v59, v60);
  v5 = v4;
  v81 = v4;
  if ( BatchForWriting != -1 && v4 != -1 )
  {
    v80 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(BatchForWriting) + 12);
    v62 = *(_DWORD *)(sub_10003CBA(BatchForWriting) + 16);
    v79 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v5) + 12);
    v6 = 0.0;
    v7 = 0;
    v64 = *(_DWORD *)(sub_10003CBA(BatchForWriting) + 16);
    for ( i = 0; ; i = v57 + 28 )
    {
      while ( 1 )
      {
        v9 = *((_DWORD *)this + 45);
        v78 = i;
        if ( !v9 || v7 >= (*((_DWORD *)this + 46) - v9) / 28 )
          return;
        v10 = *((_DWORD *)this + 45);
        if ( !v10 || v7 >= (*((_DWORD *)this + 46) - v10) / 28 )
        {
          _invalid_parameter_noinfo();
          v6 = 0.0;
        }
        if ( v6 < *(float *)(i + *((_DWORD *)this + 45)) )
          break;
LABEL_38:
        ++v7;
        i = v78 + 28;
      }
      v11 = *((_DWORD *)this + 45);
      v68 = v6;
      v69 = v6;
      v70 = v6;
      v71 = v6;
      v72 = v6;
      v73 = v6;
      v74 = v6;
      v75 = v6;
      v76 = v6;
      v65 = v6;
      v66 = v6;
      v67 = v6;
      if ( !v11 || v7 >= (*((_DWORD *)this + 46) - v11) / 28 )
        _invalid_parameter_noinfo();
      if ( *(_BYTE *)(i + *((_DWORD *)this + 45) + 24) )
      {
        if ( v62 > 1499 )
        {
          v12 = FXManager::addNewBatch(*((_DWORD *)this + 87), *((_DWORD *)this + 65));
          v13 = v12;
          v82 = v12;
          if ( v12 == -1 )
            return;
          v80 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v12) + 12);
          v62 = *(_DWORD *)(sub_10003CBA(v13) + 16);
        }
        v14 = 4 * v62;
        v63 = v80;
        v147 = -*(float *)(sub_1001717A(v7) + 20);
        v148 = -*(float *)(sub_1001717A(v7) + 20);
        v15 = sub_1001717A(v7);
        v16 = *(float *)(v15 + 4) + v147;
        v15 += 4;
        v104 = v16;
        v105 = *(float *)(v15 + 4) + 0.1000000014901161;
        v17 = *(float *)(v15 + 8) + v148;
        v69 = v105;
        v68 = v104;
        v106 = v17;
        v70 = v106;
        v149 = *(float *)(sub_1001717A(v7) + 20);
        v150 = -*(float *)(sub_1001717A(v7) + 20);
        v18 = sub_1001717A(v7);
        v19 = v149 + *(float *)(v18 + 4);
        v18 += 4;
        v128 = v19;
        v129 = *(float *)(v18 + 4) + 0.1000000014901161;
        v20 = *(float *)(v18 + 8) + v150;
        v72 = v129;
        v71 = v128;
        v130 = v20;
        v73 = v130;
        v151 = -*(float *)(sub_1001717A(v7) + 20);
        v152 = *(float *)(sub_1001717A(v7) + 20);
        v21 = (float *)(sub_1001717A(v7) + 4);
        v95 = *v21 + v151;
        v96 = v21[1] + 0.1000000014901161;
        v22 = v21[2] + v152;
        v75 = v96;
        v74 = v95;
        v97 = v22;
        v76 = v97;
        v153 = *(float *)(sub_1001717A(v7) + 20);
        v154 = *(float *)(sub_1001717A(v7) + 20);
        v23 = sub_1001717A(v7);
        v24 = *(float *)(v23 + 4) + v153;
        v23 += 4;
        v137 = v24;
        v138 = *(float *)(v23 + 4) + 0.1000000014901161;
        v25 = v138;
        v26 = *(float *)(v23 + 8);
        v27 = v137;
        v139 = v26 + v154;
        v28 = v139;
      }
      else
      {
        if ( v64 > 1499 )
        {
          v29 = FXManager::addNewBatch(*((_DWORD *)this + 88), *((_DWORD *)this + 65));
          v30 = v29;
          v81 = v29;
          if ( v29 == -1 )
            return;
          v79 = (char *)&FXManager::vertexIndicesBatches + 162110 * *(_DWORD *)(sub_10003CBA(v29) + 12);
          v64 = *(_DWORD *)(sub_10003CBA(v30) + 16);
        }
        v14 = 4 * v64;
        v63 = v79;
        v110 = -*(float *)(sub_1001717A(v7) + 20);
        v68 = v110;
        v111 = 0.1;
        v112 = 0.0;
        v69 = 0.1;
        v70 = 0.0;
        v125 = *(float *)(sub_1001717A(v7) + 20);
        v71 = v125;
        v126 = 0.1;
        v127 = 0.0;
        v72 = 0.1;
        v73 = 0.0;
        v116 = -*(float *)(sub_1001717A(v7) + 20);
        v117 = 0.1;
        v31 = sub_1001717A(v7);
        v32 = *(float *)(v31 + 20) + *(float *)(v31 + 20);
        v74 = v116;
        v118 = v32;
        v75 = v117;
        v76 = v118;
        v134 = *(float *)(sub_1001717A(v7) + 20);
        v135 = 0.1;
        v33 = sub_1001717A(v7);
        v34 = *(float *)(v33 + 20) + *(float *)(v33 + 20);
        v65 = v134;
        v136 = v34;
        v66 = v135;
        v67 = v136;
        sub_10014669(v159);
        v35 = sub_1001717A(v7);
        sub_102C13D0(*(float *)(v35 + 16));
        v122 = *((float *)this + 5);
        v123 = *(float *)(sub_1001717A(v7) + 8);
        v124 = *((float *)this + 7);
        v83 = 0.0;
        v84 = 0.0;
        v85 = 0.0;
        sub_102C1BE0(&v68, &v83);
        v140 = v83 + v122;
        v68 = v140;
        v141 = v84 + v123;
        v69 = v141;
        v142 = v85 + v124;
        v36 = *((float *)this + 5);
        v70 = v142;
        v131 = v36;
        v132 = *(float *)(sub_1001717A(v7) + 8);
        v133 = *((float *)this + 7);
        v89 = 0.0;
        v90 = 0.0;
        v91 = 0.0;
        sub_102C1BE0(&v71, &v89);
        v98 = v89 + v131;
        v71 = v98;
        v99 = v90 + v132;
        v72 = v99;
        v100 = v91 + v133;
        v37 = *((float *)this + 5);
        v73 = v100;
        v101 = v37;
        v102 = *(float *)(sub_1001717A(v7) + 8);
        v103 = *((float *)this + 7);
        v86 = 0.0;
        v87 = 0.0;
        v88 = 0.0;
        sub_102C1BE0(&v74, &v86);
        v107 = v86 + v101;
        v74 = v107;
        v108 = v87 + v102;
        v75 = v108;
        v109 = v88 + v103;
        v38 = *((float *)this + 5);
        v76 = v109;
        v113 = v38;
        v114 = *(float *)(sub_1001717A(v7) + 8);
        v115 = *((float *)this + 7);
        v92 = 0.0;
        v93 = 0.0;
        v94 = 0.0;
        sub_102C1BE0(&v65, &v92);
        v119 = v92 + v113;
        v27 = v119;
        v120 = v93 + v114;
        v25 = v120;
        v121 = v94 + v115;
        v28 = v121;
      }
      v66 = v25;
      v61 = 1.0;
      v67 = v28;
      v65 = v27;
      if ( *(_BYTE *)(sub_1001717A(v7) + 24) )
      {
        if ( *((float *)this + 53) <= (double)*(float *)sub_1001717A(v7) )
        {
          v77 = *((float *)this + 49);
          v40 = (float *)sub_1001717A(v7);
          if ( *((float *)this + 54) <= v77 - *v40 )
            goto LABEL_32;
          v77 = *((float *)this + 49);
          v41 = (float *)sub_1001717A(v7);
          v39 = (v77 - *v41) / *((float *)this + 54);
        }
        else
        {
          v39 = *(float *)sub_1001717A(v7) / *((float *)this + 53);
        }
      }
      else if ( *((float *)this + 59) <= (double)*(float *)sub_1001717A(v7) )
      {
        v77 = *((float *)this + 55);
        v42 = (float *)sub_1001717A(v7);
        if ( *((float *)this + 60) <= v77 - *v42 )
          goto LABEL_32;
        v77 = *((float *)this + 55);
        v43 = (float *)sub_1001717A(v7);
        v39 = (v77 - *v43) / *((float *)this + 60);
      }
      else
      {
        v39 = *(float *)sub_1001717A(v7) / *((float *)this + 59);
      }
      v61 = v39;
LABEL_32:
      if ( *((_DWORD *)this + 65) == 2 )
      {
        v155 = *((float *)this + 61) * v61;
        v156 = *((float *)this + 62) * v61;
        v157 = *((float *)this + 63) * v61;
        v158 = v61 * *((float *)this + 64);
      }
      else
      {
        v44 = *((_DWORD *)this + 62);
        v45 = *((_DWORD *)this + 63);
        v143 = *((_DWORD *)this + 61);
        v146 = *((float *)this + 64);
        v144 = v44;
        v145 = v45;
        v146 = v146 * v61;
      }
      v46 = sub_10005646();
      *(_DWORD *)&v63[24 * v14 + 12] = v46;
      v47 = (float *)&v63[24 * v14];
      *v47 = v68;
      v47[1] = v69;
      v48 = v70;
      v47[4] = 0.0;
      v47[2] = v48;
      v47[5] = 1.0;
      v49 = v14 + 1;
      *(_DWORD *)&v63[24 * v49 + 12] = v46;
      v50 = (float *)&v63[24 * v49];
      *v50 = v71;
      v50[1] = v72;
      v51 = v73;
      v50[4] = 1.0;
      v50[5] = 1.0;
      v50[2] = v51;
      ++v49;
      v52 = &v63[24 * v49];
      *((_DWORD *)v52 + 3) = v46;
      *(float *)v52 = v74;
      *((float *)v52 + 1) = v75;
      v53 = v76;
      *((float *)v52 + 4) = 0.0;
      *((float *)v52 + 5) = 0.0;
      *((float *)v52 + 2) = v53;
      v54 = &v63[24 * v49 + 24];
      *((_DWORD *)v54 + 3) = v46;
      *(float *)v54 = v65;
      *((float *)v54 + 1) = v66;
      v55 = v67;
      *((float *)v54 + 4) = 1.0;
      *((float *)v54 + 2) = v55;
      *((float *)v54 + 5) = 0.0;
      if ( !*(_BYTE *)(sub_1001717A(v7) + 24) )
      {
        v58 = sub_10003CBA(v81);
        v6 = 0.0;
        ++*(_DWORD *)(v58 + 16);
        ++v64;
        goto LABEL_38;
      }
      v56 = sub_10003CBA(v82);
      v6 = 0.0;
      v57 = v78;
      ++*(_DWORD *)(v56 + 16);
      ++v62;
      ++v7;
    }
  }
}
