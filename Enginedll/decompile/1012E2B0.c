/*
 * func-name: ?DrawSky@SkyController@@UAEXPAVCamera@@@Z
 * func-address: 0x1012e2b0
 * callers: none
 * callees: 0x1000b770, 0x10010f10, 0x1008fcc0, 0x100d9f80, 0x100e2b60, 0x100e8cd0, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10120900, 0x101210f0, 0x10121e80, 0x10122050, 0x10124d90, 0x1012c590, 0x1012cad0, 0x1012d220, 0x1012d660, 0x10136140, 0x101374b0, 0x1017810a, 0x101786e0, 0x1017a0b0, 0x101a2500, 0x101a251c
 */

void __thiscall SkyController::DrawSky(SkyController *this, struct Camera *a2)
{
  char v3; // al
  struct Vector *v4; // esi
  float v5; // edx
  float v6; // edi
  float v7; // ecx
  float *v8; // eax
  float *v9; // edi
  float v10; // eax
  float *v11; // edx
  bool v12; // cc
  double v13; // st7
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  World *v16; // ecx
  struct RenderDevice *v17; // eax
  float *v18; // esi
  int v19; // ecx
  int v20; // edi
  float *v21; // edx
  double v22; // st7
  struct IDirect3DTexture9 *Texture; // eax
  struct IDirect3DTexture9 *v24; // eax
  struct RenderDevice *v25; // eax
  char v26; // al
  float *v27; // edx
  Shader *v28; // ecx
  bool v29; // zf
  float v30; // eax
  Shader *v31; // eax
  int v32; // ecx
  Shader *v33; // eax
  int v34; // ecx
  struct RenderDevice *v35; // eax
  struct RenderDevice *v36; // eax
  struct RenderDevice *v37; // eax
  struct RenderDevice *v38; // eax
  struct RenderDevice *v39; // eax
  struct RenderDevice *v40; // eax
  struct RenderDevice *v41; // eax
  int v42; // edi
  int v43; // edx
  _DWORD *v44; // eax
  struct RenderDevice *v45; // eax
  struct RenderDevice *v46; // eax
  int v47; // edx
  float *v48; // ecx
  float *v49; // eax
  double v50; // st7
  struct RenderDevice *v51; // eax
  struct RenderDevice *v52; // esi
  struct RenderDevice *v53; // eax
  struct RenderDevice *v54; // eax
  struct RenderDevice *v55; // eax
  struct RenderDevice *v56; // eax
  struct RenderDevice *v57; // eax
  struct RenderDevice *v58; // eax
  struct RenderDevice *v59; // eax
  double v60; // st6
  double v61; // st7
  int v62; // eax
  _DWORD *v63; // eax
  _DWORD *v64; // eax
  float v65; // eax
  float *v66; // ecx
  int v67; // edx
  _DWORD *v68; // eax
  double v69; // st7
  bool v70; // c0
  bool v71; // c3
  double v72; // st7
  double v73; // st7
  double v74; // st7
  float v75; // edx
  int v76; // eax
  float v77; // ecx
  float v78; // edx
  _DWORD *v79; // eax
  unsigned int *v80; // edx
  int v81; // esi
  int v82; // ecx
  unsigned int v83; // eax
  double v84; // st7
  _DWORD *v85; // eax
  unsigned int v86; // edi
  int v87; // ecx
  float FogDistance; // [esp+F4h] [ebp-2FCh]
  int v89; // [esp+F8h] [ebp-2F8h]
  int v90; // [esp+FCh] [ebp-2F4h]
  int v91; // [esp+100h] [ebp-2F0h]
  int v92; // [esp+104h] [ebp-2ECh]
  float v93; // [esp+108h] [ebp-2E8h]
  float v94; // [esp+10Ch] [ebp-2E4h]
  float v95; // [esp+10Ch] [ebp-2E4h]
  float *v96; // [esp+110h] [ebp-2E0h]
  Shader *v97; // [esp+128h] [ebp-2C8h]
  Shader *v98; // [esp+128h] [ebp-2C8h]
  Shader *v99; // [esp+128h] [ebp-2C8h]
  Shader *v100; // [esp+128h] [ebp-2C8h]
  Shader *v101; // [esp+128h] [ebp-2C8h]
  float v102; // [esp+128h] [ebp-2C8h]
  Shader *v103; // [esp+128h] [ebp-2C8h]
  float v104; // [esp+128h] [ebp-2C8h]
  float v105; // [esp+128h] [ebp-2C8h]
  float v106; // [esp+128h] [ebp-2C8h]
  Shader *v107; // [esp+128h] [ebp-2C8h]
  int v108; // [esp+12Ch] [ebp-2C4h]
  float v109; // [esp+12Ch] [ebp-2C4h]
  int v110; // [esp+12Ch] [ebp-2C4h]
  float v111; // [esp+12Ch] [ebp-2C4h]
  unsigned int *v112; // [esp+12Ch] [ebp-2C4h]
  float v113; // [esp+130h] [ebp-2C0h] BYREF
  float v114; // [esp+134h] [ebp-2BCh]
  float v115; // [esp+138h] [ebp-2B8h]
  float v116; // [esp+13Ch] [ebp-2B4h]
  float v117; // [esp+140h] [ebp-2B0h]
  float v118; // [esp+144h] [ebp-2ACh] BYREF
  float v119; // [esp+148h] [ebp-2A8h]
  float v120; // [esp+14Ch] [ebp-2A4h]
  float v121; // [esp+150h] [ebp-2A0h]
  float v122; // [esp+154h] [ebp-29Ch]
  struct RenderDevice *v123; // [esp+158h] [ebp-298h]
  float *v124; // [esp+15Ch] [ebp-294h]
  double v125; // [esp+160h] [ebp-290h]
  struct VertexManager *v126; // [esp+16Ch] [ebp-284h]
  float v127[16]; // [esp+170h] [ebp-280h] BYREF
  float v128[18]; // [esp+1B0h] [ebp-240h] BYREF
  char v129[100]; // [esp+1F8h] [ebp-1F8h] BYREF
  char v130[44]; // [esp+25Ch] [ebp-194h] BYREF
  void *v131; // [esp+288h] [ebp-168h]
  struct RenderDevice *v132; // [esp+28Ch] [ebp-164h]
  int v133; // [esp+290h] [ebp-160h]
  _BYTE v134[64]; // [esp+294h] [ebp-15Ch] BYREF
  _BYTE v135[64]; // [esp+2D4h] [ebp-11Ch] BYREF
  int v136; // [esp+380h] [ebp-70h]
  float v137; // [esp+384h] [ebp-6Ch]
  float v138; // [esp+388h] [ebp-68h]
  float v139[17]; // [esp+3A0h] [ebp-50h] BYREF
  int v140; // [esp+3ECh] [ebp-4h]
  int savedregs; // [esp+3F0h] [ebp+0h] BYREF

  v3 = *((_BYTE *)this + 1224);
  v4 = (struct Camera *)((char *)a2 + 352);
  *((_BYTE *)this + 1328) = v3;
  v5 = *((float *)a2 + 89);
  v6 = 0.0;
  v118 = *((float *)a2 + 88);
  v7 = *((float *)a2 + 90);
  LODWORD(v125) = (char *)a2 + 352;
  v119 = v5;
  v120 = v7;
  v108 = 0;
  v117 = 0.0;
  v97 = 0;
  v122 = 0.0;
  if ( v3 )
  {
    v8 = (float *)&unk_11241A18;
    v117 = COERCE_FLOAT(&unk_11241A18);
    v9 = (float *)((char *)this + 1176);
    do
    {
      *v8 = *v9;
      v11 = (float *)*((_DWORD *)this + 327);
      v109 = 1.0;
      v114 = *v11;
      v10 = v114;
      LODWORD(v113) = (char *)this + 1304;
      v124 = v11;
      if ( (float *)LODWORD(v114) != v11 )
      {
        if ( LODWORD(v114) == *((_DWORD *)this + 327) )
        {
          invalid_parameter_noinfo();
          v10 = v114;
        }
        v109 = *(float *)(LODWORD(v10) + 40);
        sub_1000B770(&v113);
      }
      v8 = (float *)(LODWORD(v117) + 4);
      ++v9;
      v12 = LODWORD(v117) + 4 < (int)&SkyController::mySkySettings;
      v13 = (v109 + *((float *)this + 1102)) * *(v9 - 1);
      LODWORD(v117) += 4;
      *(v9 - 1) = v13;
    }
    while ( v12 );
    v14 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v14 + 464))(v14, (char *)a2 + 220);
    v98 = *(Shader **)(*((_DWORD *)this + 449) + 152);
    Shader::SetTechnique(v98, (int)this, (int)&savedregs, (int)a2, *((const char **)this + 889));
    memset(v127, 0, sizeof(v127));
    sub_101786E0(1.0);
    v127[15] = 1.0;
    Shader::SetWorld(v98, (const struct Matrix *)v127);
    v15 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v15 + 416))(v15, 258);
    Material::Apply(*((Material **)this + 449), 0);
    Shader::Begin(v98, 0);
    Shader::BeginPass(v98, 0);
    v16 = (World *)*((_DWORD *)this + 178);
    v94 = 0.0;
    v93 = 2.0;
    v89 = *((_DWORD *)v16 + 6);
    v90 = *((_DWORD *)v16 + 7);
    v91 = *((_DWORD *)v16 + 8);
    v92 = *((_DWORD *)v16 + 9);
    FogDistance = World::GetFogDistance(v16);
    Shader::SetFog(v98, SLOBYTE(FogDistance), v89, v90, v91, v92, SLOBYTE(v93), SLOBYTE(v94));
    Camera::Camera((Camera *)v129, a2);
    v137 = 0.0099999998;
    v140 = 0;
    v138 = 1000.0;
    v17 = RenderDevice::Instance();
    qmemcpy(
      v134,
      (const void *)(*(int (__thiscall **)(struct RenderDevice *, float *, int, float, float))(*(_DWORD *)v17 + 412))(
                      v17,
                      v127,
                      v136,
                      COERCE_FLOAT(LODWORD(v137)),
                      COERCE_FLOAT(LODWORD(v138))),
      sizeof(v134));
    qmemcpy(v128, v135, 0x40u);
    v128[12] = 0.0;
    v128[13] = 0.0;
    v128[14] = 0.0;
    D3DXMatrixMultiply(v127, v128, v134);
    qmemcpy(v128, v127, 0x40u);
    v18 = (float *)v98;
    (*(void (__stdcall **)(_DWORD, const char *, float *))(**((_DWORD **)v98 + 4) + 152))(
      *((_DWORD *)v98 + 4),
      "mViewProj",
      v128);
    v19 = 0;
    v110 = 0;
    v117 = 0.0;
    v20 = 0;
    v122 = 0.0;
    v21 = (float *)((char *)this + 1176);
    v22 = (float)0.0;
    do
    {
      if ( *v21 <= v22 )
      {
        if ( v122 < (double)*v21 )
        {
          v20 = v19;
          v122 = *v21;
        }
      }
      else
      {
        v20 = v110;
        v122 = v22;
        v110 = v19;
        v117 = *v21;
        v22 = v117;
      }
      ++v19;
      ++v21;
    }
    while ( v19 < 4 );
    v95 = v22;
    (*(void (__stdcall **)(_DWORD, const char *, _DWORD))(**((_DWORD **)v98 + 4) + 120))(
      *((_DWORD *)v98 + 4),
      "SkyMix0",
      LODWORD(v95));
    (*(void (__stdcall **)(_DWORD, const char *, float))(**((_DWORD **)v98 + 4) + 120))(
      *((_DWORD *)v98 + 4),
      "SkyMix1",
      COERCE_FLOAT(LODWORD(v122)));
    v117 = *((float *)v98 + 4);
    v99 = (Shader *)(*(_DWORD *)LODWORD(v117) + 208);
    Texture = Texture::GetTexture((SkyController *)((char *)this + 156 * v110 + 1800));
    (*(void (__stdcall **)(float, const char *, struct IDirect3DTexture9 *))v99)(
      COERCE_FLOAT(LODWORD(v117)),
      "EnvironmentMap0",
      Texture);
    v117 = v18[4];
    v100 = (Shader *)(*(_DWORD *)LODWORD(v117) + 208);
    v24 = Texture::GetTexture((SkyController *)((char *)this + 156 * v20 + 1800));
    (*(void (__stdcall **)(float, const char *, struct IDirect3DTexture9 *))v100)(
      COERCE_FLOAT(LODWORD(v117)),
      "EnvironmentMap1",
      v24);
    (*(void (__stdcall **)(_DWORD, const char *, _DWORD))(**((_DWORD **)v18 + 4) + 120))(
      *((_DWORD *)v18 + 4),
      "AntiFogBias",
      *((float *)SkyController::mySkySettings + 19));
    v25 = RenderDevice::Instance();
    v26 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v25 + 132))(v25);
    v27 = (float *)*((_DWORD *)this + 327);
    v111 = 1.0;
    v28 = (Shader *)*((_DWORD *)v18 + 4);
    v29 = v26 == 0;
    v30 = *v27;
    LODWORD(v113) = (char *)this + 1304;
    v124 = v27;
    v114 = v30;
    if ( v29 )
    {
      v103 = v28;
      if ( (float *)LODWORD(v30) != v124 )
      {
        if ( LODWORD(v30) == *((_DWORD *)this + 327) )
        {
          invalid_parameter_noinfo();
          v30 = v114;
        }
        v111 = *(float *)(LODWORD(v30) + 40);
        sub_1000B770(&v113);
      }
      v33 = v103;
      v34 = *(_DWORD *)v103;
      v104 = *((float *)SkyController::mySkySettings + 16) * v111;
      (*(void (__stdcall **)(Shader *, const char *, _DWORD))(v34 + 120))(v33, "Overbright_Sky", LODWORD(v104));
    }
    else
    {
      v101 = v28;
      if ( (float *)LODWORD(v30) != v124 )
      {
        if ( LODWORD(v30) == *((_DWORD *)this + 327) )
        {
          invalid_parameter_noinfo();
          v30 = v114;
        }
        v111 = *(float *)(LODWORD(v30) + 40);
        sub_1000B770(&v113);
      }
      v31 = v101;
      v32 = *(_DWORD *)v101;
      v102 = *((float *)SkyController::mySkySettings + 15) * v111;
      (*(void (__stdcall **)(Shader *, const char *, _DWORD))(v32 + 120))(v31, "Overbright_Sky", LODWORD(v102));
    }
    Shader::CommitChanges((Shader *)v18);
    v35 = RenderDevice::Instance();
    v113 = COERCE_FLOAT((*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v35 + 432))(v35, 28, 0));
    v36 = RenderDevice::Instance();
    v108 = (*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v36 + 432))(v36, 27, 0);
    v37 = RenderDevice::Instance();
    v117 = COERCE_FLOAT((*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v37 + 432))(v37, 14, 0));
    v38 = RenderDevice::Instance();
    v122 = COERCE_FLOAT((*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v38 + 432))(v38, 7, 0));
    v39 = RenderDevice::Instance();
    v97 = (Shader *)(*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v39 + 432))(v39, 22, 2);
    v40 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**((_DWORD **)v40 + 427) + 400))(
      *((_DWORD *)v40 + 427),
      0,
      *((_DWORD *)this + 886),
      0,
      56);
    v126 = VertexManager::Instance();
    v41 = (struct RenderDevice *)*((_DWORD *)RenderDevice::Instance() + 427);
    v42 = *(_DWORD *)v41;
    v43 = *(_DWORD *)v126;
    v123 = v41;
    v44 = (_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(v43 + 20))(v126, 56);
    (*(void (__stdcall **)(struct RenderDevice *, _DWORD))(v42 + 348))(v123, *v44);
    v45 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v45 + 427) + 416))(
      *((_DWORD *)v45 + 427),
      *((_DWORD *)this + 887));
    v46 = RenderDevice::Instance();
    v47 = *((_DWORD *)this + 888);
    v123 = v46;
    (*(void (__thiscall **)(struct RenderDevice *, int, int, int))(*(_DWORD *)v46 + 424))(
      v46,
      4,
      v47 * v47,
      (v47 - 1) * (2 * v47 - 2));
    Shader::EndPass((Shader *)v18);
    Shader::End((Shader *)v18);
    v48 = (float *)&unk_11241A18;
    v49 = (float *)((char *)this + 1176);
    do
    {
      v50 = *v48++;
      *v49++ = v50;
    }
    while ( (int)v48 < (int)&SkyController::mySkySettings );
    if ( *((_BYTE *)SkyController::mySkySettings + 57) || *((_BYTE *)SkyController::mySkySettings + 56) )
    {
      v51 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v51 + 184))(v51);
    }
    v52 = (struct RenderDevice *)v131;
    v140 = 1;
    if ( v131 )
    {
      v123 = v132;
      if ( v131 != v132 )
      {
        do
        {
          sub_1017A0B0((char *)v52 + 100);
          v52 = (struct RenderDevice *)((char *)v52 + 140);
        }
        while ( v52 != v123 );
        v52 = (struct RenderDevice *)v131;
      }
      operator delete(v52);
    }
    v131 = 0;
    v132 = 0;
    v133 = 0;
    v140 = -1;
    sub_1017A0B0(v130);
    v4 = (struct Vector *)LODWORD(v125);
    v6 = v113;
  }
  v53 = RenderDevice::Instance();
  v113 = COERCE_FLOAT((*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v53 + 432))(v53, 22, 1));
  SkyController::DrawMoon(this, (int)this, (int)&savedregs, (struct Vector *)&v118, v96);
  SkyController::DrawSun(this, (int)this, (int)&savedregs, (struct Vector *)&v118);
  v54 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v54 + 432))(
    v54,
    22,
    COERCE_FLOAT(LODWORD(v113)));
  if ( *((_BYTE *)this + 1328) )
  {
    if ( *((_BYTE *)SkyController::mySkySettings + 40) )
      SkyController::DrawClouds(this, (int)this, (int)&savedregs, (struct Vector *)&v118);
    v55 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v55 + 432))(v55, 27, v108);
    v56 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v56 + 432))(
      v56,
      14,
      COERCE_FLOAT(LODWORD(v117)));
    v57 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v57 + 432))(
      v57,
      7,
      COERCE_FLOAT(LODWORD(v122)));
    v58 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, float))(*(_DWORD *)v58 + 432))(
      v58,
      28,
      COERCE_FLOAT(LODWORD(v6)));
    v59 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, Shader *))(*(_DWORD *)v59 + 432))(v59, 22, v97);
  }
  if ( !*((_BYTE *)SkyController::mySkySettings + 41) )
  {
LABEL_43:
    *((float *)this + 1102) = 0.0;
    goto LABEL_52;
  }
  if ( *((float *)this + 1102) > 0.0 )
  {
    v113 = *((float *)this + 1102) - GDeltaTime * 20.0;
    v60 = v113;
    *((float *)this + 1102) = v113;
    if ( v60 > 0.0 )
      goto LABEL_52;
    goto LABEL_43;
  }
  if ( *((float *)SkyController::mySkySettings + 11) < (double)*((float *)this + 948)
    && *((float *)SkyController::mySkySettings + 12) > (double)*((float *)this + 948) )
  {
    v125 = *((float *)this + 1103);
    v113 = COERCE_FLOAT(rand());
    v113 = v125 - (double)SLODWORD(v113) / 32767.0 * (*((float *)SkyController::mySkySettings + 13) * GDeltaTime * 35.0);
    v61 = v113;
    *((float *)this + 1103) = v113;
    if ( v61 < 0.0 )
    {
      if ( rand() % 3 == 1 )
      {
        v105 = 1.0;
        if ( IndoorVolume::IsIndoors(*((struct World **)this + 178), v4) )
          v105 = 0.5;
        v62 = rand() % 2;
        (*(void (__stdcall **)(_DWORD, float))(**((_DWORD **)this + v62 + 1104) + 36))(0, COERCE_FLOAT(LODWORD(v105)));
        *((float *)this + 1102) = 10.0;
      }
      *((float *)this + 1103) = 60.0;
    }
  }
LABEL_52:
  v63 = (_DWORD *)*((_DWORD *)this + 307);
  if ( !v63 )
    goto LABEL_65;
  v63[278] = *((_DWORD *)this + 903);
  v106 = 1.0;
  v63[279] = *((_DWORD *)this + 904);
  v63[280] = *((_DWORD *)this + 905);
  v64 = (_DWORD *)(*((_DWORD *)this + 307) + 1124);
  *v64 = *((_DWORD *)this + 906);
  v64[1] = *((_DWORD *)this + 907);
  v64[2] = *((_DWORD *)this + 908);
  v66 = (float *)*((_DWORD *)this + 327);
  v114 = *v66;
  v65 = v114;
  LODWORD(v113) = (char *)this + 1304;
  HIDWORD(v125) = v66;
  if ( (float *)LODWORD(v114) != v66 )
  {
    if ( LODWORD(v114) == *((_DWORD *)this + 327) )
    {
      invalid_parameter_noinfo();
      v65 = v114;
    }
    v106 = *(float *)(LODWORD(v65) + 40);
    sub_1000B770(&v113);
  }
  v67 = *((_DWORD *)this + 307);
  v113 = *((float *)this + 1102) / 2.5 + v106;
  *(float *)(v67 + 1092) = v113;
  v68 = (_DWORD *)(*((_DWORD *)this + 307) + 856);
  *v68 = *((_DWORD *)this + 903);
  v68[1] = *((_DWORD *)this + 904);
  v68[2] = *((_DWORD *)this + 905);
  qmemcpy((void *)(*((_DWORD *)this + 307) + 868), sub_1008FCC0(v139, (int *)this + 906), 0x40u);
  if ( flt_10282B6C > (double)*((float *)this + 948)
    || (v69 = *((float *)this + 948), v70 = flt_10282B68 < v69,
                                      v71 = flt_10282B68 == v69,
                                      v72 = flt_10282B68,
                                      v70 || v71) )
  {
    v85 = (_DWORD *)(*((_DWORD *)this + 307) + 1076);
    *v85 = *((_DWORD *)this + 912);
    v85[1] = *((_DWORD *)this + 913);
    v85[2] = *((_DWORD *)this + 914);
    v85[3] = *((_DWORD *)this + 915);
    goto LABEL_64;
  }
  if ( flt_10282B64 <= (double)*((float *)this + 948) )
  {
    if ( flt_10282B5C > (double)*((float *)this + 948) )
    {
      v79 = (_DWORD *)(*((_DWORD *)this + 307) + 1076);
      *v79 = *((_DWORD *)this + 894);
      v79[1] = *((_DWORD *)this + 895);
      v79[2] = *((_DWORD *)this + 896);
      v79[3] = *((_DWORD *)this + 897);
      goto LABEL_64;
    }
    if ( *((float *)this + 948) >= v72 )
      goto LABEL_64;
    v113 = 1.0 - (v72 - *((float *)this + 948)) / flt_10282B58;
    v118 = *((float *)this + 912) - *((float *)this + 894);
    v119 = *((float *)this + 913) - *((float *)this + 895);
    v120 = *((float *)this + 914) - *((float *)this + 896);
    v121 = *((float *)this + 915) - *((float *)this + 897);
    v84 = v113;
    v113 = v118 * v113;
    v114 = v119 * v84;
    v115 = v120 * v84;
    v116 = v84 * v121;
    v118 = *((float *)this + 894) + v113;
    v119 = *((float *)this + 895) + v114;
    v120 = *((float *)this + 896) + v115;
    v74 = *((float *)this + 897);
  }
  else
  {
    v113 = 1.0 - (flt_10282B64 - *((float *)this + 948)) / flt_10282B60;
    v118 = *((float *)this + 894) - *((float *)this + 912);
    v119 = *((float *)this + 895) - *((float *)this + 913);
    v120 = *((float *)this + 896) - *((float *)this + 914);
    v121 = *((float *)this + 897) - *((float *)this + 915);
    v73 = v113;
    v113 = v118 * v113;
    v114 = v119 * v73;
    v115 = v120 * v73;
    v116 = v73 * v121;
    v118 = v113 + *((float *)this + 912);
    v119 = *((float *)this + 913) + v114;
    v120 = *((float *)this + 914) + v115;
    v74 = *((float *)this + 915);
  }
  v75 = v119;
  v76 = *((_DWORD *)this + 307) + 1076;
  v121 = v74 + v116;
  *(float *)v76 = v118;
  v77 = v120;
  *(float *)(v76 + 4) = v75;
  v78 = v121;
  *(float *)(v76 + 8) = v77;
  *(float *)(v76 + 12) = v78;
LABEL_64:
  v113 = 0.0;
  v114 = 0.0;
  v115 = 0.0;
  SkyController::GetBiasLightColor(this, (struct Vector *)&v113);
  *(float *)(*((_DWORD *)this + 307) + 1076) = *(float *)(*((_DWORD *)this + 307) + 1076) * v113;
  *(float *)(*((_DWORD *)this + 307) + 1080) = *(float *)(*((_DWORD *)this + 307) + 1080) * v114;
  *(float *)(*((_DWORD *)this + 307) + 1084) = *(float *)(*((_DWORD *)this + 307) + 1084) * v115;
LABEL_65:
  v107 = 0;
  if ( *((int *)this + 957) > 0 )
  {
    v80 = (unsigned int *)((char *)this + 3796);
    v112 = (unsigned int *)((char *)this + 3796);
    do
    {
      v81 = *((_DWORD *)this + 178);
      v82 = *(_DWORD *)(v81 + 3272);
      if ( v82 )
        v83 = (*(_DWORD *)(v81 + 3276) - v82) >> 2;
      else
        v83 = 0;
      v86 = *v80;
      if ( v83 > *v80 )
      {
        if ( !v82 || v86 >= (*(_DWORD *)(v81 + 3276) - v82) >> 2 )
        {
          invalid_parameter_noinfo();
          v80 = v112;
        }
        v87 = *(_DWORD *)(*(_DWORD *)(v81 + 3272) + 4 * v86);
        v113 = *((float *)v80 - 655) * *((float *)SkyController::mySkySettings + 2);
        *(float *)(v87 + 460) = v113;
      }
      ++v80;
      v12 = (int)v107 + 1 < *((_DWORD *)this + 957);
      v107 = (Shader *)((char *)v107 + 1);
      v112 = v80;
    }
    while ( v12 );
  }
}
