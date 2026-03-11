/*
 * func-name: ?SetLightShaderConstants@Shader@@QAEXAAV?$vector@PAVLight@@V?$allocator@PAVLight@@@std@@@std@@@Z
 * func-address: 0x101220b0
 * callers: 0x10057160, 0x1005cb50
 * callees: 0x10009730, 0x1001cb70, 0x100dd990, 0x100ddae0, 0x101207d0, 0x10120f40, 0x101263c0, 0x10127b10, 0x101a24ac, 0x101a253a, 0x101a281a
 */

void __userpurge Shader::SetLightShaderConstants(
        Shader *this@<ecx>,
        int a2@<ebx>,
        int a3@<ebp>,
        int a4@<edi>,
        int a5@<esi>,
        int a6)
{
  struct _EXCEPTION_REGISTRATION_RECORD *ExceptionList; // eax
  int v7; // eax
  int v9; // eax
  int v10; // edi
  int v11; // eax
  float *View; // eax
  int v13; // ecx
  void (__stdcall **v14)(_DWORD, const char *, float *); // ebx
  float *v15; // eax
  void (__stdcall **v16)(_DWORD, const char *, float *); // ebx
  float *v17; // eax
  double v18; // st7
  double v19; // st7
  int v20; // ecx
  float *v21; // ebx
  int v22; // eax
  unsigned int i; // edi
  int v24; // ecx
  int v25; // ecx
  int v26; // ebx
  float v27; // edi
  float v28; // eax
  unsigned int v29; // ebx
  float *v30; // edi
  int v31; // ecx
  int v32; // eax
  float v33; // edx
  int v34; // ecx
  int v35; // eax
  double v36; // st7
  float v37; // ecx
  double v38; // st7
  int *v39; // ecx
  void *v40; // edi
  int v41; // edx
  void *v42; // eax
  int v43; // ebx
  float v44; // eax
  float v45; // edi
  int v46; // eax
  unsigned int v47; // ebx
  int v48; // ecx
  float v49; // ecx
  float *v50; // eax
  float v51; // ecx
  double v52; // st7
  float v53; // eax
  float v54; // edx
  int *v55; // ecx
  int v56; // edx
  float v57; // eax
  float v58; // edi
  char *v59; // eax
  int v60; // edx
  float *v61; // ecx
  float v62; // eax
  unsigned int v63; // ebx
  float *v64; // edi
  int v65; // ecx
  int v66; // eax
  float v67; // ecx
  int v68; // ecx
  int v69; // eax
  double v70; // st7
  float v71; // edx
  float v72; // eax
  float v73; // ecx
  int *v74; // ecx
  void *v75; // edi
  int v76; // edx
  int v77; // eax
  float *v78; // ebx
  signed int v79; // eax
  unsigned int j; // edi
  int v81; // ecx
  float *v82; // ebx
  float v83; // eax
  unsigned int k; // edi
  int v85; // ecx
  float *Projection; // [esp+48h] [ebp-154h]
  float v87; // [esp+48h] [ebp-154h]
  int v91; // [esp+5Ch] [ebp-140h] BYREF
  float v92; // [esp+60h] [ebp-13Ch] BYREF
  float v93; // [esp+64h] [ebp-138h]
  float v94; // [esp+68h] [ebp-134h] BYREF
  float v95; // [esp+6Ch] [ebp-130h]
  int v96; // [esp+70h] [ebp-12Ch]
  void *v97; // [esp+74h] [ebp-128h]
  float v98; // [esp+78h] [ebp-124h]
  signed int v99; // [esp+7Ch] [ebp-120h]
  float v100; // [esp+80h] [ebp-11Ch] BYREF
  float v101; // [esp+84h] [ebp-118h]
  float v102; // [esp+88h] [ebp-114h]
  float v103; // [esp+8Ch] [ebp-110h]
  void *v104; // [esp+90h] [ebp-10Ch] BYREF
  int *v105; // [esp+94h] [ebp-108h]
  float v106; // [esp+98h] [ebp-104h]
  int v107; // [esp+9Ch] [ebp-100h]
  float v108; // [esp+A0h] [ebp-FCh]
  float v109; // [esp+A4h] [ebp-F8h]
  float v110; // [esp+A8h] [ebp-F4h]
  float v111; // [esp+ACh] [ebp-F0h]
  void *v112; // [esp+B0h] [ebp-ECh]
  float v113; // [esp+B4h] [ebp-E8h]
  float v114; // [esp+B8h] [ebp-E4h]
  float v115; // [esp+BCh] [ebp-E0h]
  float v116; // [esp+C0h] [ebp-DCh]
  float v117; // [esp+C4h] [ebp-D8h]
  float v118; // [esp+C8h] [ebp-D4h]
  float v119; // [esp+CCh] [ebp-D0h]
  float v120[16]; // [esp+D0h] [ebp-CCh] BYREF
  float v121[16]; // [esp+110h] [ebp-8Ch] BYREF
  float v122[19]; // [esp+150h] [ebp-4Ch] BYREF

  v122[18] = NAN;
  ExceptionList = NtCurrentTeb()->NtTib.ExceptionList;
  LODWORD(v122[17]) = &loc_101B1E2F;
  LODWORD(v122[16]) = ExceptionList;
  v7 = *(_DWORD *)(a6 + 4);
  if ( v7 )
    v91 = (*(_DWORD *)(a6 + 8) - v7) >> 2;
  else
    v91 = 0;
  *((_DWORD *)this + 1897) = &v91;
  Shader::SetVar(this, (Shader *)((char *)this + 7528));
  *((_DWORD *)this + 1951) = 0;
  v9 = *(_DWORD *)(a6 + 4);
  if ( v9 && (*(_DWORD *)(a6 + 8) - v9) >> 2 )
  {
    v10 = **(_DWORD **)(a6 + 4);
    v11 = *(_DWORD *)(v10 + 1428);
    if ( v11 == 2 || v11 == 1 && *(_BYTE *)(v10 + 1420) )
    {
      *((_DWORD *)this + 1407) = v10 + 1124;
      Shader::SetVar(this, (Shader *)((char *)this + 5568));
      *((_DWORD *)this + 1461) = 0;
      v92 = cos(*(float *)(v10 + 1140) * 0.01745329300562541 * 0.5);
      *((_DWORD *)this + 1477) = &v92;
      Shader::SetVar(this, (Shader *)((char *)this + 5848));
      *((_DWORD *)this + 1531) = 0;
      v94 = *(float *)(v10 + 1144) * 0.01745329300562541 * 0.5;
      v94 = cos(v94);
      *((_DWORD *)this + 1547) = &v94;
      Shader::SetVar(this, (Shader *)((char *)this + 6128));
      *((_DWORD *)this + 1601) = 0;
      Projection = Light::GetProjection((float *)v10, v121);
      View = Light::GetView(v10, v120);
      sub_1001CB70(View, (float *)&v104, (int)Projection);
      *((_DWORD *)this + 1617) = &v104;
      Shader::SetVar(this, (Shader *)((char *)this + 6408));
      *((_DWORD *)this + 1671) = 0;
      if ( *(_BYTE *)(v10 + 1420) && (v13 = *(_DWORD *)(v10 + 1260)) != 0 )
      {
        v87 = (float)*(int *)(v13 + 4);
        (*(void (__stdcall **)(_DWORD, const char *, _DWORD))(**((_DWORD **)this + 4) + 120))(
          *((_DWORD *)this + 4),
          "fShadowMapSize",
          LODWORD(v87));
        *((_DWORD *)this + 1672) = 10;
        *((_DWORD *)this + 1687) = sub_10127B10(*(_DWORD *)(v10 + 1260));
        Shader::SetVar(this, (Shader *)((char *)this + 6688));
        *((_DWORD *)this + 1741) = 0;
        v95 = 0.5 / (double)*(int *)(*(_DWORD *)(v10 + 1260) + 4) + 0.5;
        v93 = v95;
        sub_101263C0(0.5, 0.0, 0.0, 0.0, 0.0, -0.5, 0.0, 0.0, 0.0, 0.0, 1.0, 0.0, v95, v95, -0.001, 1.0);
        v14 = (void (__stdcall **)(_DWORD, const char *, float *))(**((_DWORD **)this + 4) + 152);
        v15 = Light::GetView(v10, v120);
        (*v14)(*((_DWORD *)this + 4), "mLightView", v15);
        v16 = (void (__stdcall **)(_DWORD, const char *, float *))(**((_DWORD **)this + 4) + 152);
        v17 = Light::GetProjection((float *)v10, v120);
        (*v16)(*((_DWORD *)this + 4), "mLightProj", v17);
        (*(void (__stdcall **)(_DWORD, const char *, void **))(**((_DWORD **)this + 4) + 152))(
          *((_DWORD *)this + 4),
          "mTexProj",
          &v104);
      }
      else
      {
        *((_DWORD *)this + 1672) = 9;
        *((_DWORD *)this + 1687) = v10 + 1264;
        Shader::SetVar(this, (Shader *)((char *)this + 6688));
        *((_DWORD *)this + 1741) = 0;
      }
    }
    if ( *(_DWORD *)(v10 + 1428) == 8 )
    {
      *((_DWORD *)this + 1617) = Light::GetView(v10, v122);
      Shader::SetVar(this, (Shader *)((char *)this + 6408));
      *((_DWORD *)this + 1671) = 0;
      *((_DWORD *)this + 1742) = 9;
      *((_DWORD *)this + 1757) = v10 + 1264;
      Shader::SetVar(this, (Shader *)((char *)this + 6968));
      *((_DWORD *)this + 1811) = 0;
    }
    if ( *(_DWORD *)(v10 + 1428) == 4 )
    {
      *((_DWORD *)this + 1407) = v10 + 1124;
      Shader::SetVar(this, (Shader *)((char *)this + 5568));
      *((_DWORD *)this + 1461) = 0;
    }
    *((_DWORD *)this + 1267) = v10 + 1136;
    Shader::SetVar(this, (Shader *)((char *)this + 5008));
    *((_DWORD *)this + 1321) = 0;
    *((_DWORD *)this + 1197) = v10 + 1112;
    Shader::SetVar(this, (Shader *)((char *)this + 4728));
    *((_DWORD *)this + 1251) = 0;
    v93 = *(float *)(v10 + 1092);
    v18 = v93;
    v93 = *(float *)(v10 + 1076) * v93;
    v95 = *(float *)(v10 + 1080) * v18;
    v19 = v18 * *(float *)(v10 + 1084);
    *((_DWORD *)this + 1337) = &v100;
    v92 = v19;
    v100 = v93;
    v101 = v95;
    v102 = v92;
    v103 = 1.0;
    Shader::SetVar(this, (Shader *)((char *)this + 5288));
    *((_DWORD *)this + 1391) = 0;
  }
  v20 = *(_DWORD *)(a6 + 4);
  if ( v20 )
  {
    if ( (unsigned int)((*(_DWORD *)(a6 + 8) - v20) >> 2) > 1 && (*(_BYTE *)this & 8) != 0 )
    {
      if ( *((_DWORD *)this + 2039)
        || (Shader::CreateHandle(this, (Shader *)((char *)this + 8088)), *((_DWORD *)this + 2039)) )
      {
        if ( *((_DWORD *)this + 2109)
          || (Shader::CreateHandle(this, (Shader *)((char *)this + 8368)), *((_DWORD *)this + 2109)) )
        {
          if ( *((_DWORD *)this + 1969)
            || (Shader::CreateHandle(this, (Shader *)((char *)this + 7808)), *((_DWORD *)this + 1969)) )
          {
            if ( *((_DWORD *)this + 2179)
              || (Shader::CreateHandle(this, (Shader *)((char *)this + 8648)), *((_DWORD *)this + 2179)) )
            {
              if ( *((_DWORD *)this + 2249)
                || (Shader::CreateHandle(this, (Shader *)((char *)this + 8928)), *((_DWORD *)this + 2249)) )
              {
                if ( *((_DWORD *)this + 2319)
                  || (Shader::CreateHandle(this, (Shader *)((char *)this + 9208)), *((_DWORD *)this + 2319)) )
                {
                  v21 = (float *)operator new(4 * v91);
                  v22 = v91;
                  for ( i = 0; (int)i < v91; v22 = v91 )
                  {
                    v24 = *(_DWORD *)(a6 + 4);
                    if ( !v24 || i >= (*(_DWORD *)(a6 + 8) - v24) >> 2 )
                      invalid_parameter_noinfo();
                    v25 = *(_DWORD *)(*(_DWORD *)(a6 + 4) + 4 * i++);
                    v21[i - 1] = *(float *)(v25 + 1136);
                  }
                  (*(void (__stdcall **)(_DWORD, _DWORD, float *, int, int, int, int, int, int, float, float, float, float, int, void *, float, signed int, float, float, float, float, void *, int *, float))(**((_DWORD **)this + 4) + 128))(
                    *((_DWORD *)this + 4),
                    *((_DWORD *)this + 2039),
                    v21,
                    v22,
                    a4,
                    a5,
                    a3,
                    a2,
                    v91,
                    COERCE_FLOAT(LODWORD(v92)),
                    COERCE_FLOAT(LODWORD(v93)),
                    COERCE_FLOAT(LODWORD(v94)),
                    COERCE_FLOAT(LODWORD(v95)),
                    v96,
                    v97,
                    COERCE_FLOAT(LODWORD(v98)),
                    v99,
                    COERCE_FLOAT(LODWORD(v100)),
                    COERCE_FLOAT(LODWORD(v101)),
                    COERCE_FLOAT(LODWORD(v102)),
                    COERCE_FLOAT(LODWORD(v103)),
                    v104,
                    v105,
                    COERCE_FLOAT(LODWORD(v106)));
                  if ( v21 )
                    operator delete[](v21);
                  v26 = LODWORD(v111);
                  v27 = COERCE_FLOAT(operator new(16 * LODWORD(v111)));
                  v113 = v27;
                  if ( v27 == 0.0 )
                  {
                    *(float *)&v112 = 0.0;
                  }
                  else
                  {
                    sub_10009730(SLODWORD(v27), 16, v26, (int (__thiscall *)(int))sub_10049070);
                    *(float *)&v112 = v27;
                  }
                  v28 = v111;
                  v29 = 0;
                  if ( SLODWORD(v111) > 0 )
                  {
                    v30 = (float *)v112;
                    v119 = 1.0;
                    do
                    {
                      v31 = *(_DWORD *)(a6 + 4);
                      if ( !v31 || v29 >= (*(_DWORD *)(a6 + 8) - v31) >> 2 )
                        invalid_parameter_noinfo();
                      v32 = *(_DWORD *)(a6 + 4);
                      LODWORD(v113) = v32 + 4 * v29;
                      if ( !v32 || v29 >= (*(_DWORD *)(a6 + 8) - v32) >> 2 )
                        invalid_parameter_noinfo();
                      v114 = *(float *)(a6 + 4);
                      v33 = v114;
                      if ( v114 == 0.0 || v29 >= (*(_DWORD *)(a6 + 8) - LODWORD(v114)) >> 2 )
                      {
                        invalid_parameter_noinfo();
                        v33 = v114;
                      }
                      v34 = *(_DWORD *)(4 * v29 + LODWORD(v33));
                      v115 = *(float *)(*(_DWORD *)(4 * v29 + *(_DWORD *)(a6 + 4)) + 1112);
                      v35 = *(_DWORD *)LODWORD(v113);
                      v114 = *(float *)(v34 + 1116);
                      ++v29;
                      v30 += 4;
                      v113 = *(float *)(v35 + 1120);
                      v116 = v115;
                      v36 = v114;
                      *(v30 - 4) = v115;
                      v37 = v119;
                      v117 = v36;
                      v38 = v113;
                      *(v30 - 3) = v117;
                      v118 = v38;
                      *(v30 - 2) = v118;
                      *(v30 - 1) = v37;
                      v28 = v111;
                    }
                    while ( (int)v29 < SLODWORD(v111) );
                  }
                  v39 = *((int **)this + 4);
                  v40 = v112;
                  v41 = *v39;
                  v106 = v28;
                  v42 = (void *)*((_DWORD *)this + 1969);
                  v105 = (int *)v112;
                  v104 = v42;
                  v103 = *(float *)&v39;
                  (*(void (**)(void))(v41 + 144))();
                  if ( v40 )
                    operator delete[](v40);
                  v43 = v107;
                  v44 = COERCE_FLOAT(operator new(16 * v107));
                  v45 = v44;
                  v109 = v44;
                  if ( v44 == 0.0 )
                    v45 = 0.0;
                  else
                    sub_10009730(SLODWORD(v44), 16, v43, (int (__thiscall *)(int))sub_10049070);
                  v46 = v107;
                  v47 = 0;
                  v108 = v45;
                  if ( v107 > 0 )
                  {
                    do
                    {
                      v48 = *(_DWORD *)(a6 + 4);
                      if ( !v48 || v47 >= (*(_DWORD *)(a6 + 8) - v48) >> 2 )
                        invalid_parameter_noinfo();
                      v110 = *(float *)(a6 + 4);
                      v49 = v110;
                      if ( v110 == 0.0 || v47 >= (*(_DWORD *)(a6 + 8) - LODWORD(v110)) >> 2 )
                      {
                        invalid_parameter_noinfo();
                        v49 = v110;
                      }
                      v50 = *(float **)(*(_DWORD *)(a6 + 4) + 4 * v47);
                      v109 = *(float *)(*(_DWORD *)(LODWORD(v49) + 4 * v47) + 1092);
                      v50 += 269;
                      ++v47;
                      LODWORD(v45) += 16;
                      *(float *)&v112 = v109 * *v50;
                      v113 = v50[1] * v109;
                      v114 = v50[2] * v109;
                      v51 = v114;
                      v52 = v109 * v50[3];
                      v53 = v113;
                      *(float *)(LODWORD(v45) - 16) = *(float *)&v112;
                      *(float *)(LODWORD(v45) - 12) = v53;
                      v115 = v52;
                      v54 = v115;
                      *(float *)(LODWORD(v45) - 8) = v51;
                      *(float *)(LODWORD(v45) - 4) = v54;
                      v46 = v107;
                    }
                    while ( (int)v47 < v107 );
                    v45 = v108;
                  }
                  v55 = (int *)*((_DWORD *)this + 4);
                  v56 = *v55;
                  v102 = *(float *)&v46;
                  v57 = *((float *)this + 2109);
                  v101 = v45;
                  v100 = v57;
                  v99 = (signed int)v55;
                  (*(void (**)(void))(v56 + 144))();
                  if ( v45 != 0.0 )
                    operator delete[]((void *)LODWORD(v45));
                  v58 = v103;
                  v59 = (char *)operator new(16 * LODWORD(v103));
                  if ( v59 )
                  {
                    v60 = LODWORD(v58) - 1;
                    if ( LODWORD(v58) - 1 >= 0 )
                    {
                      v61 = (float *)(v59 + 8);
                      do
                      {
                        *(v61 - 2) = 0.0;
                        v61 += 4;
                        --v60;
                        *(v61 - 5) = 0.0;
                        *(v61 - 4) = 0.0;
                        *(v61 - 3) = 0.0;
                      }
                      while ( v60 >= 0 );
                    }
                    v104 = v59;
                  }
                  else
                  {
                    v104 = 0;
                  }
                  v62 = v103;
                  v63 = 0;
                  if ( SLODWORD(v103) > 0 )
                  {
                    v64 = (float *)v104;
                    v111 = 1.0;
                    do
                    {
                      v65 = *(_DWORD *)(a6 + 4);
                      if ( !v65 || v63 >= (*(_DWORD *)(a6 + 8) - v65) >> 2 )
                        invalid_parameter_noinfo();
                      v66 = *(_DWORD *)(a6 + 4);
                      v105 = (int *)(v66 + 4 * v63);
                      if ( !v66 || v63 >= (*(_DWORD *)(a6 + 8) - v66) >> 2 )
                        invalid_parameter_noinfo();
                      v106 = *(float *)(a6 + 4);
                      v67 = v106;
                      if ( v106 == 0.0 || v63 >= (*(_DWORD *)(a6 + 8) - LODWORD(v106)) >> 2 )
                      {
                        invalid_parameter_noinfo();
                        v67 = v106;
                      }
                      v68 = *(_DWORD *)(LODWORD(v67) + 4 * v63);
                      v108 = *(float *)(*(_DWORD *)(*(_DWORD *)(a6 + 4) + 4 * v63) + 1124);
                      v69 = *v105;
                      v109 = *(float *)(v68 + 1128);
                      v70 = *(float *)(v69 + 1132);
                      v71 = v109;
                      *v64 = v108;
                      v110 = v70;
                      v72 = v110;
                      v73 = v111;
                      v64[1] = v71;
                      v64[2] = v72;
                      v64[3] = v73;
                      v62 = v103;
                      ++v63;
                      v64 += 4;
                    }
                    while ( (int)v63 < SLODWORD(v103) );
                  }
                  v74 = *((int **)this + 4);
                  v75 = v104;
                  v76 = *v74;
                  v98 = v62;
                  v77 = *((_DWORD *)this + 2179);
                  v97 = v104;
                  v96 = v77;
                  v95 = *(float *)&v74;
                  (*(void (**)(void))(v76 + 144))();
                  if ( v75 )
                    operator delete[](v75);
                  v78 = (float *)operator new(4 * v99);
                  v79 = v99;
                  for ( j = 0; (int)j < v99; ++j )
                  {
                    v81 = *(_DWORD *)(a6 + 4);
                    if ( !v81 || j >= (*(_DWORD *)(a6 + 8) - v81) >> 2 )
                      invalid_parameter_noinfo();
                    v78[j] = cos(*(float *)(*(_DWORD *)(*(_DWORD *)(a6 + 4) + 4 * j) + 1140) * 0.01745329300562541 * 0.5);
                    v79 = v99;
                  }
                  (*(void (__cdecl **)(_DWORD, _DWORD, float *, signed int))(**((_DWORD **)this + 4) + 128))(
                    *((_DWORD *)this + 4),
                    *((_DWORD *)this + 2249),
                    v78,
                    v79);
                  if ( v78 )
                    operator delete[](v78);
                  v82 = (float *)operator new(4 * LODWORD(v95));
                  v83 = v95;
                  for ( k = 0; (int)k < SLODWORD(v95); ++k )
                  {
                    v85 = *(_DWORD *)(a6 + 4);
                    if ( !v85 || k >= (*(_DWORD *)(a6 + 8) - v85) >> 2 )
                      invalid_parameter_noinfo();
                    v82[k] = cos(*(float *)(*(_DWORD *)(*(_DWORD *)(a6 + 4) + 4 * k) + 1144) * 0.01745329300562541 * 0.5);
                    v83 = v95;
                  }
                  (*(void (__cdecl **)(_DWORD, _DWORD, float *, float))(**((_DWORD **)this + 4) + 128))(
                    *((_DWORD *)this + 4),
                    *((_DWORD *)this + 2319),
                    v82,
                    COERCE_FLOAT(LODWORD(v83)));
                  if ( v82 )
                    operator delete[](v82);
                }
              }
            }
          }
        }
      }
    }
  }
}
