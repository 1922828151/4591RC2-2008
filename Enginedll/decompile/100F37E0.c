/*
 * func-name: sub_100F37E0
 * func-address: 0x100f37e0
 * callers: 0x100f4a90
 * callees: 0x10076ef0, 0x100956d0, 0x100e2700, 0x100f35c0, 0x100f6560, 0x100f7380, 0x100f7530, 0x100f7610, 0x100f7fc0, 0x1017811c, 0x1017817c, 0x10178740, 0x10178c30, 0x1017eaef, 0x101a24ac, 0x101a2500, 0x101a253a
 */

int __thiscall sub_100F37E0(float *this, int a2)
{
  void (__stdcall *v2)(int, _DWORD, int *); // edx
  float *v3; // edi
  void *v4; // ebx
  int v5; // ebx
  void (__stdcall *v6)(int, int, int *); // edx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  void (**v10)(void *, const char *, ...); // esi
  int v11; // eax
  int v12; // ecx
  _DWORD *v13; // ebp
  unsigned int v14; // esi
  int v15; // ebx
  int i; // edi
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // eax
  float *v25; // ebp
  int v26; // ecx
  int v27; // edx
  float v28; // edx
  int v29; // eax
  float v30; // ecx
  float v31; // edx
  int v32; // eax
  int v33; // eax
  int v34; // ecx
  int v35; // eax
  int v36; // esi
  int v37; // eax
  int v38; // esi
  unsigned int j; // ebp
  int v40; // eax
  int v41; // eax
  _DWORD *v42; // edx
  int v43; // esi
  double v44; // st7
  int v45; // eax
  int v46; // eax
  float *v47; // ecx
  int v48; // esi
  int v49; // esi
  int v50; // edi
  int v51; // esi
  int v52; // eax
  int v53; // eax
  int v54; // eax
  int v55; // esi
  int v56; // ecx
  int v57; // esi
  int v58; // ecx
  _DWORD *v59; // edx
  int v60; // ecx
  int v61; // edi
  int v62; // ecx
  int v63; // eax
  int v64; // eax
  int v65; // esi
  int v66; // eax
  int v67; // edi
  int v68; // eax
  int v69; // eax
  int v70; // eax
  int v71; // eax
  int v72; // esi
  int v73; // eax
  int v74; // edi
  int v75; // eax
  int v76; // esi
  float v77; // edx
  int v78; // eax
  float v79; // ecx
  float v80; // edx
  int v81; // eax
  unsigned int v82; // edi
  float *v83; // edi
  int v84; // eax
  int v85; // edx
  int v86; // eax
  int v87; // eax
  int v88; // esi
  int v89; // eax
  int v90; // edi
  int v91; // eax
  int v92; // eax
  int v93; // ecx
  int v94; // edx
  int v95; // ecx
  int v96; // eax
  int v97; // eax
  float *v98; // edi
  int v99; // ecx
  float *v100; // esi
  int v101; // ecx
  int v102; // eax
  int v103; // ecx
  float v104; // edi
  int v105; // eax
  unsigned int v106; // ebp
  int v107; // edi
  _DWORD *v108; // esi
  int v109; // ecx
  float *v110; // ecx
  float *v111; // eax
  double v112; // st7
  int v113; // ecx
  int v114; // ecx
  _DWORD *v115; // edx
  int v116; // ecx
  int v117; // esi
  int v118; // ecx
  int v119; // ecx
  int v120; // edx
  int v121; // edi
  int v122; // eax
  int v123; // eax
  int v124; // eax
  int v125; // eax
  int v126; // edi
  int v127; // eax
  int v128; // ebp
  int v129; // eax
  int v130; // edx
  int v131; // ecx
  int (__stdcall **v132)(_DWORD *, int, int, int, int, int, int, float, float *); // esi
  int v133; // eax
  const char *v134; // eax
  unsigned int k; // ebp
  int v136; // esi
  int v137; // eax
  int v138; // eax
  int v139; // eax
  int v140; // eax
  int v141; // eax
  int v142; // eax
  int v143; // edi
  int v144; // eax
  int v145; // ebp
  int v146; // eax
  int v147; // edx
  int v148; // ecx
  int (__stdcall **v149)(_DWORD *, int, int, int, int, int, int, float, float *); // esi
  int v150; // eax
  int v151; // eax
  void (**v152)(void *, const char *, ...); // esi
  int v153; // eax
  unsigned int v154; // esi
  int v155; // edx
  double v156; // st7
  int v158; // [esp+44h] [ebp-140h]
  int v159; // [esp+44h] [ebp-140h]
  int v160; // [esp+48h] [ebp-13Ch]
  int v161; // [esp+48h] [ebp-13Ch]
  int v162; // [esp+54h] [ebp-130h]
  int v163; // [esp+54h] [ebp-130h]
  float v164; // [esp+58h] [ebp-12Ch]
  float v165; // [esp+58h] [ebp-12Ch]
  const char *v166; // [esp+5Ch] [ebp-128h]
  _DWORD *v167; // [esp+70h] [ebp-114h]
  int v168; // [esp+74h] [ebp-110h] BYREF
  float v169[2]; // [esp+78h] [ebp-10Ch] BYREF
  double v170; // [esp+80h] [ebp-104h]
  int v171; // [esp+88h] [ebp-FCh]
  float *v172; // [esp+8Ch] [ebp-F8h]
  _DWORD *v173; // [esp+90h] [ebp-F4h]
  _DWORD *v174; // [esp+94h] [ebp-F0h] BYREF
  float v175; // [esp+98h] [ebp-ECh]
  void *v176; // [esp+9Ch] [ebp-E8h]
  float v177; // [esp+A0h] [ebp-E4h]
  float v178; // [esp+A4h] [ebp-E0h] BYREF
  int v179; // [esp+A8h] [ebp-DCh]
  int v180; // [esp+ACh] [ebp-D8h]
  int v181; // [esp+B0h] [ebp-D4h]
  int v182; // [esp+B4h] [ebp-D0h] BYREF
  float v183; // [esp+B8h] [ebp-CCh] BYREF
  int v184; // [esp+BCh] [ebp-C8h]
  float v185; // [esp+C0h] [ebp-C4h] BYREF
  float v186; // [esp+C4h] [ebp-C0h]
  float v187; // [esp+C8h] [ebp-BCh]
  float v188; // [esp+CCh] [ebp-B8h]
  float v189; // [esp+D0h] [ebp-B4h]
  float v190; // [esp+D4h] [ebp-B0h]
  float v191; // [esp+D8h] [ebp-ACh]
  float v192; // [esp+DCh] [ebp-A8h]
  float v193; // [esp+E0h] [ebp-A4h]
  float v194[16]; // [esp+E4h] [ebp-A0h] BYREF
  int v195; // [esp+124h] [ebp-60h]
  int v196; // [esp+128h] [ebp-5Ch]
  int v197; // [esp+12Ch] [ebp-58h]
  int v198; // [esp+130h] [ebp-54h]
  int v199; // [esp+134h] [ebp-50h]
  _BYTE v200[64]; // [esp+138h] [ebp-4Ch] BYREF
  int v201; // [esp+180h] [ebp-4h]

  v2 = *(void (__stdcall **)(int, _DWORD, int *))(*(_DWORD *)a2 + 16);
  v3 = this;
  v172 = this;
  v184 = 0;
  v182 = 0;
  v2(a2, 0, &v182);
  if ( v182 )
  {
    v4 = operator new(v182 + 1);
    (*(void (__stdcall **)(int, void *, int *))(*(_DWORD *)a2 + 16))(a2, v4, &v182);
    v176 = v4;
  }
  else
  {
    v176 = 0;
  }
  (*(void (__stdcall **)(int, float *))(*(_DWORD *)a2 + 40))(a2, &v183);
  v5 = 0;
  if ( LODWORD(v183) )
  {
    while ( 1 )
    {
      v168 = 0;
      v6 = *(void (__stdcall **)(int, int, int *))(*(_DWORD *)a2 + 44);
      v201 = 0;
      v6(a2, v5, &v168);
      (*(void (__stdcall **)(int, float *))(*(_DWORD *)v168 + 32))(v168, &v178);
      if ( sub_100E2700(&v178, dword_101C860C) )
      {
        v184 = sub_100F35C0(v3, (_DWORD *)v168);
        if ( v184 < 0 )
          break;
      }
      v201 = -1;
      if ( v168 )
        (*(void (__stdcall **)(int))(*(_DWORD *)v168 + 8))(v168);
      if ( (unsigned int)++v5 >= LODWORD(v183) )
        goto LABEL_13;
    }
    v201 = -1;
    if ( v168 )
      (*(void (__stdcall **)(int))(*(_DWORD *)v168 + 8))(v168);
  }
LABEL_13:
  v7 = *((_DWORD *)v3 + 1);
  if ( v7 )
    v8 = (*((_DWORD *)v3 + 2) - v7) >> 2;
  else
    v8 = 0;
  v9 = D3DXCreateKeyframedAnimationSet(
         v176,
         COERCE_UNSIGNED_INT64(v3[5]),
         HIDWORD(COERCE_UNSIGNED_INT64(v3[5])),
         *((_DWORD *)v3 + 11) == 0,
         v8,
         0,
         0,
         &v174);
  if ( v9 < 0 )
  {
    v10 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
    v11 = sub_1017EAEF(v9);
    (*v10)(
      dword_11249F38,
      " Error: %s, in: D3DXCreateKeyframedAnimationSet(animeName, m_TicksPerSec, bLooping ? D3DXPLAY_LOOP : D3DXPLAY_ONCE"
      ", animations.size(), 0, NULL, &animationSet)",
      v11);
  }
  v175 = 0.0;
  v177 = 0.0;
  if ( std::vector<Model *>::size(v3) )
  {
    do
    {
      v12 = *((_DWORD *)v172 + 1);
      if ( !v12 || LODWORD(v177) >= (*((_DWORD *)v172 + 2) - v12) >> 2 )
        invalid_parameter_noinfo();
      v13 = *(_DWORD **)(*((_DWORD *)v172 + 1) + 4 * LODWORD(v177));
      v167 = v13;
      v14 = 1;
      v15 = (int)(v13 + 7);
      for ( i = 20; ; i += 20 )
      {
        v17 = *(_DWORD *)(v15 + 4);
        if ( !v17 || v14 >= (*(_DWORD *)(v15 + 8) - v17) / 20 )
          break;
        if ( *((_DWORD *)v172 + 12) )
        {
          v18 = *(_DWORD *)(v15 + 4);
          if ( !v18 || v14 >= (*(_DWORD *)(v15 + 8) - v18) / 20 )
            invalid_parameter_noinfo();
          v19 = *(_DWORD *)(v15 + 4);
          v169[0] = *(float *)(i + v19 + 8);
          if ( !v19 || v14 >= (*(_DWORD *)(v15 + 8) - v19) / 20 )
            invalid_parameter_noinfo();
          v20 = *(_DWORD *)(v15 + 4);
          v21 = i + v20;
          if ( !v20 || v14 >= (*(_DWORD *)(v15 + 8) - v20) / 20 )
            invalid_parameter_noinfo();
          *(float *)(i + *(_DWORD *)(v15 + 4) + 8) = *(float *)(v21 + 12);
          v22 = *(_DWORD *)(v15 + 4);
          if ( !v22 || v14 >= (*(_DWORD *)(v15 + 8) - v22) / 20 )
            invalid_parameter_noinfo();
          *(float *)(i + *(_DWORD *)(v15 + 4) + 12) = -v169[0];
        }
        v23 = *(_DWORD *)(v15 + 4);
        if ( !v23 || v14 - 1 >= (*(_DWORD *)(v15 + 8) - v23) / 20 )
          invalid_parameter_noinfo();
        v24 = *(_DWORD *)(v15 + 4);
        v25 = (float *)(i + v24 - 20);
        if ( !v24 || v14 >= (*(_DWORD *)(v15 + 8) - v24) / 20 )
          invalid_parameter_noinfo();
        v26 = *(_DWORD *)(v15 + 4);
        v169[0] = *(float *)(i + v26 + 8) * v25[2]
                + *(float *)(i + v26 + 4) * v25[1]
                + *(float *)(i + v26 + 12) * v25[3]
                + *(float *)(i + v26 + 16) * v25[4];
        if ( v169[0] < 0.0 )
        {
          if ( !v26 || v14 >= (*(_DWORD *)(v15 + 8) - v26) / 20 )
            invalid_parameter_noinfo();
          v27 = *(_DWORD *)(v15 + 4);
          v186 = -*(float *)(i + v27 + 4);
          v187 = -*(float *)(i + v27 + 8);
          v188 = -*(float *)(i + v27 + 12);
          v189 = -*(float *)(i + v27 + 16);
          if ( !v27 || v14 >= (*(_DWORD *)(v15 + 8) - v27) / 20 )
            invalid_parameter_noinfo();
          v28 = v187;
          v29 = i + *(_DWORD *)(v15 + 4) + 4;
          *(float *)v29 = v186;
          v30 = v188;
          *(float *)(v29 + 4) = v28;
          v31 = v189;
          *(float *)(v29 + 8) = v30;
          *(float *)(v29 + 12) = v31;
        }
        v13 = v167;
        ++v14;
      }
      v32 = v13[20];
      if ( v32 && (v13[21] - v32) / 68 )
      {
        v33 = v13[20];
        if ( v33 )
          v34 = (v13[21] - v33) / 68;
        else
          v34 = 0;
        sub_100F7530(v15, v34, v195, v196, v197, v198, v199);
        v35 = v13[20];
        if ( v35 )
          v36 = (v13[21] - v35) / 68;
        else
          v36 = 0;
        sub_100F7610((int)(v13 + 11), v36, SLOBYTE(v178), v179, v180, v181);
        v37 = v13[20];
        if ( v37 )
          v38 = (v13[21] - v37) / 68;
        else
          v38 = 0;
        sub_100F7610((int)(v167 + 15), v38, SLOBYTE(v178), v179, v180, v181);
        for ( j = 0; ; ++j )
        {
          v40 = v167[20];
          if ( !v40 || j >= (v167[21] - v40) / 68 )
            break;
          v41 = v167[20];
          if ( !v41 || j >= (v167[21] - v41) / 68 )
            invalid_parameter_noinfo();
          v42 = v167;
          v43 = v167[20];
          v194[0] = 0.0;
          v194[1] = 0.0;
          v194[2] = 0.0;
          v194[4] = 0.0;
          v194[5] = 0.0;
          v194[6] = 0.0;
          v194[8] = 0.0;
          v194[9] = 0.0;
          LODWORD(v169[0]) = 68 * j;
          v194[10] = 0.0;
          v194[12] = 0.0;
          v194[13] = 0.0;
          v194[14] = 0.0;
          v44 = v172[13];
          qmemcpy(v194, (const void *)(68 * j + v43), sizeof(v194));
          *(float *)&v170 = v44;
          v194[12] = v194[12] * *(float *)&v170;
          v45 = v167[16];
          v194[13] = v194[13] * *(float *)&v170;
          v194[14] = *(float *)&v170 * v194[14];
          if ( !v45 || j >= (v167[17] - v45) >> 4 )
          {
            invalid_parameter_noinfo();
            v42 = v167;
          }
          v46 = 16 * j;
          v47 = (float *)(v42[16] + 16 * j + 4);
          *v47 = v194[12];
          v47[1] = v194[13];
          v47[2] = v194[14];
          v48 = v42[12];
          v168 = 16 * j;
          if ( !v48 || j >= (v42[13] - v48) >> 4 )
          {
            invalid_parameter_noinfo();
            v46 = v168;
            v42 = v167;
          }
          v49 = v42[12];
          v50 = v46 + v49;
          if ( !v49 || j >= (v42[13] - v49) >> 4 )
          {
            invalid_parameter_noinfo();
            v46 = v168;
            v42 = v167;
          }
          v51 = v46 + v42[12];
          v52 = v42[12];
          if ( !v52 || j >= (v42[13] - v52) >> 4 )
            invalid_parameter_noinfo();
          sub_10178740(v167[12] + v168 + 4, v51 + 8, v50 + 12);
          qmemcpy(v200, v194, sizeof(v200));
          sub_10178C30(v200);
          v53 = *(_DWORD *)(v15 + 4);
          if ( !v53 || j >= (*(_DWORD *)(v15 + 8) - v53) / 20 )
            invalid_parameter_noinfo();
          v54 = *(_DWORD *)(v15 + 4);
          v55 = 20 * j;
          v171 = 20 * j;
          D3DXQuaternionRotationMatrix(20 * j + v54 + 4, v200);
          if ( *((_DWORD *)v172 + 12) )
          {
            v56 = v167[16];
            v173 = v167 + 15;
            if ( !v56 || j >= (v167[17] - v56) >> 4 )
              invalid_parameter_noinfo();
            v57 = v168;
            v58 = v167[16];
            *(float *)&v170 = *(float *)(v168 + v58 + 8);
            if ( !v58 || j >= (v167[17] - v58) >> 4 )
              invalid_parameter_noinfo();
            v59 = v173;
            v60 = v173[1];
            v61 = v57 + v60;
            if ( !v60 || j >= (v173[2] - v60) >> 4 )
            {
              invalid_parameter_noinfo();
              v59 = v173;
            }
            *(float *)(v59[1] + v57 + 8) = *(float *)(v61 + 12);
            v62 = v59[1];
            if ( !v62 || j >= (v59[2] - v62) >> 4 )
            {
              invalid_parameter_noinfo();
              v59 = v173;
            }
            *(float *)(v59[1] + v57 + 12) = -*(float *)&v170;
            v63 = *(_DWORD *)(v15 + 4);
            if ( !v63 || j >= (*(_DWORD *)(v15 + 8) - v63) / 20 )
              invalid_parameter_noinfo();
            v64 = *(_DWORD *)(v15 + 4);
            v65 = v171;
            *(float *)&v170 = *(float *)(v171 + v64 + 8);
            if ( !v64 || j >= (*(_DWORD *)(v15 + 8) - v64) / 20 )
              invalid_parameter_noinfo();
            v66 = *(_DWORD *)(v15 + 4);
            v67 = v65 + v66;
            if ( !v66 || j >= (*(_DWORD *)(v15 + 8) - v66) / 20 )
              invalid_parameter_noinfo();
            *(float *)(v65 + *(_DWORD *)(v15 + 4) + 8) = *(float *)(v67 + 12);
            v68 = *(_DWORD *)(v15 + 4);
            if ( !v68 || j >= (*(_DWORD *)(v15 + 8) - v68) / 20 )
              invalid_parameter_noinfo();
            *(float *)(v65 + *(_DWORD *)(v15 + 4) + 12) = -*(float *)&v170;
            v55 = v171;
          }
          v69 = *(_DWORD *)(v15 + 4);
          if ( !v69 || j >= (*(_DWORD *)(v15 + 8) - v69) / 20 )
            invalid_parameter_noinfo();
          LODWORD(v170) = v55 + *(_DWORD *)(v15 + 4);
          v70 = *(_DWORD *)(v15 + 4);
          if ( !v70 || j >= (*(_DWORD *)(v15 + 8) - v70) / 20 )
            invalid_parameter_noinfo();
          v71 = *(_DWORD *)(v15 + 4);
          v72 = v171 + v71;
          if ( !v71 || j >= (*(_DWORD *)(v15 + 8) - v71) / 20 )
            invalid_parameter_noinfo();
          v73 = *(_DWORD *)(v15 + 4);
          v74 = v171 + v73;
          if ( !v73 || j >= (*(_DWORD *)(v15 + 8) - v73) / 20 )
            invalid_parameter_noinfo();
          v75 = *(_DWORD *)(v15 + 4);
          v190 = -*(float *)(v75 + v171 + 4);
          v191 = -*(float *)(v74 + 8);
          v192 = -*(float *)(v72 + 12);
          v193 = *(float *)(LODWORD(v170) + 16);
          if ( !v75 || j >= (*(_DWORD *)(v15 + 8) - v75) / 20 )
            invalid_parameter_noinfo();
          v76 = v171;
          v77 = v191;
          v78 = v171 + *(_DWORD *)(v15 + 4) + 4;
          *(float *)v78 = v190;
          v79 = v192;
          *(float *)(v78 + 4) = v77;
          v80 = v193;
          *(float *)(v78 + 8) = v79;
          *(float *)(v78 + 12) = v80;
          if ( j )
          {
            v81 = *(_DWORD *)(v15 + 4);
            v82 = j - 1;
            if ( !v81 || v82 >= (*(_DWORD *)(v15 + 8) - v81) / 20 )
              invalid_parameter_noinfo();
            v83 = (float *)(*(_DWORD *)(v15 + 4) + 20 * v82);
            v84 = *(_DWORD *)(v15 + 4);
            if ( !v84 || j >= (*(_DWORD *)(v15 + 8) - v84) / 20 )
              invalid_parameter_noinfo();
            v85 = *(_DWORD *)(v15 + 4);
            *(float *)&v170 = *(float *)(v76 + v85 + 8) * v83[2]
                            + *(float *)(v76 + v85 + 4) * v83[1]
                            + *(float *)(v76 + v85 + 12) * v83[3]
                            + *(float *)(v76 + v85 + 16) * v83[4];
            if ( *(float *)&v170 < 0.0 )
            {
              if ( !v85 || j >= (*(_DWORD *)(v15 + 8) - v85) / 20 )
                invalid_parameter_noinfo();
              LODWORD(v170) = v76 + *(_DWORD *)(v15 + 4);
              v86 = *(_DWORD *)(v15 + 4);
              if ( !v86 || j >= (*(_DWORD *)(v15 + 8) - v86) / 20 )
                invalid_parameter_noinfo();
              v87 = *(_DWORD *)(v15 + 4);
              v88 = v171 + v87;
              if ( !v87 || j >= (*(_DWORD *)(v15 + 8) - v87) / 20 )
                invalid_parameter_noinfo();
              v89 = *(_DWORD *)(v15 + 4);
              v90 = v171 + v89;
              if ( !v89 || j >= (*(_DWORD *)(v15 + 8) - v89) / 20 )
                invalid_parameter_noinfo();
              v91 = *(_DWORD *)(v15 + 4);
              v178 = -*(float *)(v91 + v171 + 4);
              *(float *)&v179 = -*(float *)(v90 + 8);
              *(float *)&v180 = -*(float *)(v88 + 12);
              *(float *)&v181 = -*(float *)(LODWORD(v170) + 16);
              if ( !v91 || j >= (*(_DWORD *)(v15 + 8) - v91) / 20 )
                invalid_parameter_noinfo();
              v76 = v171;
              v92 = v171 + *(_DWORD *)(v15 + 4) + 4;
              v93 = v179;
              *(float *)v92 = v178;
              v94 = v180;
              *(_DWORD *)(v92 + 4) = v93;
              v95 = v181;
              *(_DWORD *)(v92 + 8) = v94;
              *(_DWORD *)(v92 + 12) = v95;
            }
          }
          v96 = *(_DWORD *)(v15 + 4);
          if ( !v96 || j >= (*(_DWORD *)(v15 + 8) - v96) / 20 )
            invalid_parameter_noinfo();
          v97 = v167[20];
          v98 = (float *)(v76 + *(_DWORD *)(v15 + 4));
          if ( !v97 || j >= (v167[21] - v97) / 68 )
            invalid_parameter_noinfo();
          *v98 = *(float *)(v167[20] + LODWORD(v169[0]) + 64);
          v99 = v167[12];
          if ( !v99 || j >= (v167[13] - v99) >> 4 )
            invalid_parameter_noinfo();
          v100 = (float *)(v168 + v167[12]);
          *v100 = *v98;
          v101 = v167[16];
          if ( !v101 || j >= (v167[17] - v101) >> 4 )
            invalid_parameter_noinfo();
          *(float *)(v168 + v167[16]) = *v100;
          v102 = v167[20];
          if ( !v102 || j >= (v167[21] - v102) / 68 )
            invalid_parameter_noinfo();
          v103 = v167[20];
          v104 = v169[0];
          if ( v175 < (double)*(float *)(v103 + LODWORD(v169[0]) + 64) )
          {
            if ( !v103 || j >= (v167[21] - v103) / 68 )
              invalid_parameter_noinfo();
            v175 = *(float *)(LODWORD(v104) + v167[20] + 64);
          }
        }
      }
      else
      {
        v105 = v13[16];
        if ( v105 && (v167[17] - v105) >> 4 )
        {
          v106 = 0;
          v107 = 0;
          v108 = v167;
          while ( 1 )
          {
            v109 = v108[16];
            if ( !v109 || v106 >= (v108[17] - v109) >> 4 )
              break;
            v110 = v172;
            v111 = (float *)(v107 + v108[16] + 4);
            v169[0] = v172[13];
            v112 = v169[0];
            *v111 = *v111 * v169[0];
            v111[1] = v112 * v111[1];
            v111[2] = v112 * v111[2];
            if ( *((_DWORD *)v110 + 12) )
            {
              v113 = v108[16];
              if ( !v113 || v106 >= (v108[17] - v113) >> 4 )
                invalid_parameter_noinfo();
              v114 = v108[16];
              v169[0] = *(float *)(v107 + v114 + 8);
              if ( !v114 || v106 >= (v108[17] - v114) >> 4 )
                invalid_parameter_noinfo();
              v115 = v167;
              v116 = v167[16];
              v117 = v107 + v116;
              if ( !v116 || v106 >= (v167[17] - v116) >> 4 )
              {
                invalid_parameter_noinfo();
                v115 = v167;
              }
              *(float *)(v107 + v115[16] + 8) = *(float *)(v117 + 12);
              v118 = v115[16];
              if ( !v118 || v106 >= (v115[17] - v118) >> 4 )
              {
                invalid_parameter_noinfo();
                v115 = v167;
              }
              v108 = v167;
              *(float *)(v107 + v115[16] + 12) = -v169[0];
            }
            v119 = v108[16];
            if ( !v119 || v106 >= (v108[17] - v119) >> 4 )
              invalid_parameter_noinfo();
            v120 = v108[16];
            if ( v175 < (double)*(float *)(v107 + v120) )
            {
              if ( !v120 || v106 >= (v108[17] - v120) >> 4 )
                invalid_parameter_noinfo();
              v175 = *(float *)(v107 + v108[16]);
            }
            ++v106;
            v107 += 16;
          }
        }
      }
      v121 = 0;
      if ( *((_DWORD *)v172 + 6) )
      {
        for ( k = 0; ; ++k )
        {
          v136 = *((_DWORD *)v172 + 6);
          v137 = *(_DWORD *)(v136 + 4);
          if ( !v137 || k >= (*(_DWORD *)(v136 + 8) - v137) / 28 )
            break;
          v138 = *(_DWORD *)(v136 + 4);
          if ( !v138 || k >= (*(_DWORD *)(v136 + 8) - v138) / 28 )
            invalid_parameter_noinfo();
          if ( (unsigned __int8)std::operator==<char>(v167, v121 + *(_DWORD *)(v136 + 4)) )
          {
            v139 = v167[16];
            if ( v139 && (v167[17] - v139) >> 4 )
              v169[0] = *((float *)v167 + 16);
            else
              v169[0] = 0.0;
            v140 = *(_DWORD *)(v15 + 4);
            if ( v140 && (*(_DWORD *)(v15 + 8) - v140) / 20 )
            {
              v141 = *(_DWORD *)(v15 + 4);
              if ( !v141 || !((*(_DWORD *)(v15 + 8) - v141) / 20) )
                invalid_parameter_noinfo();
              LODWORD(v170) = *(_DWORD *)(v15 + 4);
            }
            else
            {
              LODWORD(v170) = 0;
            }
            v142 = v167[12];
            if ( v142 && (v167[13] - v142) >> 4 )
              v143 = v167[12];
            else
              v143 = 0;
            v144 = v167[16];
            if ( v144 )
              v145 = (v167[17] - v144) >> 4;
            else
              v145 = 0;
            v146 = *(_DWORD *)(v15 + 4);
            if ( v146 )
              v146 = (*(_DWORD *)(v15 + 8) - v146) / 20;
            v147 = v167[12];
            if ( v147 )
              v148 = (v167[13] - v147) >> 4;
            else
              v148 = 0;
            v165 = v169[0];
            v163 = LODWORD(v170);
            v161 = v146;
            v159 = v148;
            v149 = (int (__stdcall **)(_DWORD *, int, int, int, int, int, int, float, float *))(*v174 + 128);
            v150 = std::string::c_str(v167);
            v151 = (*v149)(v174, v150, v159, v161, v145, v143, v163, COERCE_FLOAT(LODWORD(v165)), &v185);
            if ( v151 < 0 )
            {
              v152 = (void (**)(void *, const char *, ...))(*(_DWORD *)dword_11249F38 + 4);
              v153 = sub_1017EAEF(v151);
              (*v152)(
                dword_11249F38,
                " Error: %s, in: animationSet->RegisterAnimationSRTKeys(a->name.c_str(), a->scalings.size(),a->rotations."
                "size(),a->translations.size(), (D3DXKEY_VECTOR3*)a->scalings.size()==0?0:&a->scalings[0], (D3DXKEY_QUATE"
                "RNION*)a->rotations.size()==0?0:&a->rotations[0], (D3DXKEY_VECTOR3*)a->translations.size()==0?0:&a->tran"
                "slations[0],&pAnimationIndex)",
                v153);
            }
            break;
          }
          v121 += 28;
        }
      }
      else
      {
        v122 = v167[16];
        if ( v122 && (v167[17] - v122) >> 4 )
          v169[0] = *((float *)v167 + 16);
        else
          v169[0] = 0.0;
        v123 = *(_DWORD *)(v15 + 4);
        if ( v123 && (*(_DWORD *)(v15 + 8) - v123) / 20 )
        {
          v124 = *(_DWORD *)(v15 + 4);
          if ( !v124 || !((*(_DWORD *)(v15 + 8) - v124) / 20) )
            invalid_parameter_noinfo();
          LODWORD(v170) = *(_DWORD *)(v15 + 4);
        }
        else
        {
          LODWORD(v170) = 0;
        }
        v125 = v167[12];
        if ( v125 && (v167[13] - v125) >> 4 )
          v126 = v167[12];
        else
          v126 = 0;
        v127 = v167[16];
        if ( v127 )
          v128 = (v167[17] - v127) >> 4;
        else
          v128 = 0;
        v129 = *(_DWORD *)(v15 + 4);
        if ( v129 )
          v129 = (*(_DWORD *)(v15 + 8) - v129) / 20;
        v130 = v167[12];
        if ( v130 )
          v131 = (v167[13] - v130) >> 4;
        else
          v131 = 0;
        v164 = v169[0];
        v162 = LODWORD(v170);
        v160 = v129;
        v158 = v131;
        v132 = (int (__stdcall **)(_DWORD *, int, int, int, int, int, int, float, float *))(*v174 + 128);
        v133 = std::string::c_str(v167);
        if ( (*v132)(v174, v133, v158, v160, v128, v126, v162, COERCE_FLOAT(LODWORD(v164)), &v185) < 0 )
        {
          v166 = (const char *)v176;
          v134 = (const char *)std::string::c_str(v172 + 14);
          Error("RegisterAnimationSRTKeys failed. Filename: %s AnimName: %s", v134, v166);
        }
      }
      if ( v167 )
      {
        sub_100F7380(v167);
        operator delete(v167);
      }
      v154 = ++LODWORD(v177);
    }
    while ( v154 < std::vector<Model *>::size(v172) );
    v3 = v172;
  }
  sub_100F6560((int)v3, 0, 0);
  v170 = v175;
  v155 = *v174;
  LODWORD(v169[1]) = v174;
  v156 = ((double (__stdcall *)(_DWORD *))*(_DWORD *)(v155 + 48))(v174);
  v169[0] = v170 / v156;
  sub_100F7FC0(v169);
  operator delete[](v176);
  return v184;
}
