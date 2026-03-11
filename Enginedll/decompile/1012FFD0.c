/*
 * func-name: ??0SkyController@@QAE@PAVWorld@@@Z
 * func-address: 0x1012ffd0
 * callers: 0x1009b2d0, 0x10131750
 * callees: 0x1000d3d0, 0x1003b320, 0x10050b80, 0x10054c00, 0x100575d0, 0x10057610, 0x100dd7c0, 0x100de9e0, 0x100e2a60, 0x100e40e0, 0x100e68a0, 0x100e8100, 0x100ee260, 0x100efd60, 0x100f2ca0, 0x10117840, 0x101189f0, 0x10118d20, 0x1011faf0, 0x101203c0, 0x10121330, 0x10122ce0, 0x10131f30, 0x10136290, 0x10136530, 0x101786e0, 0x101a2500, 0x101a251c, 0x101a2534, 0x101a281a, 0x101a2820, 0x101a28f8
 */

SkyController *__thiscall SkyController::SkyController(SkyController *this, struct World *a2)
{
  _DWORD *v3; // eax
  _DWORD *v4; // eax
  _DWORD *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax
  _DWORD *v10; // ebp
  struct AudioDevice *v11; // eax
  Light *v12; // eax
  Light *v13; // eax
  int v14; // ebp
  bool v15; // cc
  int v16; // eax
  int v17; // eax
  int v18; // eax
  int SHProbe; // eax
  int v20; // ebp
  int v21; // ebx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  int v25; // ebx
  int v26; // ebp
  int v27; // ebx
  int v28; // eax
  int v29; // ebx
  float v30; // edi
  int v31; // eax
  const char *v32; // eax
  unsigned int i; // ebx
  int v34; // edi
  int v35; // ecx
  int v36; // edi
  int v37; // ecx
  int v38; // edi
  int v39; // edx
  void *v40; // edi
  struct RenderDevice *v41; // eax
  bool v42; // zf
  float *v43; // eax
  float v44; // ecx
  int Technique; // eax
  float v46; // edi
  int v47; // eax
  const char *v48; // eax
  unsigned int j; // ebx
  int v50; // edi
  int v51; // ecx
  int v52; // edi
  int v53; // ecx
  int v54; // edi
  int v55; // eax
  void *v56; // edi
  float v57; // edi
  int v58; // ebx
  int v59; // edi
  int v60; // eax
  int v61; // edi
  int *v62; // edx
  Texture *v63; // eax
  char *v64; // edi
  int v65; // edi
  int v66; // eax
  int v67; // edi
  float v68; // edi
  struct ShaderVar *v69; // ebx
  int v70; // edi
  int v71; // ecx
  int v72; // edi
  float v73; // edi
  int v74; // eax
  const char *v75; // eax
  unsigned int k; // ebx
  int v77; // edi
  int v78; // ecx
  int v79; // edi
  int v80; // ecx
  int v81; // edi
  int v82; // edx
  void *v83; // edi
  float v84; // edi
  int v85; // ebx
  int v86; // edi
  int v87; // eax
  int v88; // edi
  int *v89; // edx
  Texture *v90; // eax
  char *v91; // edi
  int v92; // edi
  int v93; // eax
  int v94; // edi
  float v95; // edi
  struct ShaderVar *v96; // ebx
  int v97; // edi
  int v98; // ecx
  int v99; // edi
  const char *v100; // eax
  int Material; // eax
  int v102; // eax
  struct ShaderVar *Var; // eax
  struct ShaderVar *v104; // eax
  struct ShaderVar *v105; // eax
  struct ShaderVar *v106; // eax
  struct ShaderVar *v107; // eax
  struct ShaderVar *v108; // eax
  struct ShaderVar *v109; // eax
  struct ShaderVar *v110; // eax
  struct ShaderVar *v111; // eax
  struct RenderDevice *v112; // eax
  double v113; // st7
  float v114; // edi
  double v115; // st6
  int v116; // ebx
  double v117; // st7
  int v118; // eax
  int v119; // eax
  struct RenderDevice *v120; // eax
  int v121; // eax
  int m; // edx
  int v123; // ecx
  int v124; // edi
  int v125; // eax
  struct World *v126; // eax
  char v128[4]; // [esp+50h] [ebp-1A0h] BYREF
  int v129; // [esp+54h] [ebp-19Ch]
  int v130; // [esp+58h] [ebp-198h]
  int v131; // [esp+5Ch] [ebp-194h]
  int v132; // [esp+60h] [ebp-190h] BYREF
  int v133; // [esp+64h] [ebp-18Ch]
  const char *v134; // [esp+68h] [ebp-188h]
  int v135; // [esp+6Ch] [ebp-184h] BYREF
  int v136; // [esp+70h] [ebp-180h]
  int v137; // [esp+74h] [ebp-17Ch]
  int v138; // [esp+78h] [ebp-178h]
  int v139; // [esp+7Ch] [ebp-174h]
  float v140; // [esp+80h] [ebp-170h]
  int v141; // [esp+84h] [ebp-16Ch]
  float v142; // [esp+88h] [ebp-168h]
  float v143; // [esp+98h] [ebp-158h]
  float v144; // [esp+9Ch] [ebp-154h]
  int v145; // [esp+A0h] [ebp-150h]
  float v146; // [esp+A4h] [ebp-14Ch]
  int v147; // [esp+A8h] [ebp-148h]
  float v148; // [esp+ACh] [ebp-144h]
  int v149; // [esp+B0h] [ebp-140h] BYREF
  int v150; // [esp+B4h] [ebp-13Ch] BYREF
  float v151; // [esp+B8h] [ebp-138h]
  float v152; // [esp+BCh] [ebp-134h]
  int v153[7]; // [esp+C0h] [ebp-130h] BYREF
  _BYTE v154[28]; // [esp+DCh] [ebp-114h] BYREF
  SkyController *v155; // [esp+F8h] [ebp-F8h]
  int v156[7]; // [esp+FCh] [ebp-F4h] BYREF
  int v157[7]; // [esp+118h] [ebp-D8h] BYREF
  int v158[7]; // [esp+134h] [ebp-BCh] BYREF
  _BYTE v159[28]; // [esp+150h] [ebp-A0h] BYREF
  _BYTE v160[28]; // [esp+16Ch] [ebp-84h] BYREF
  _BYTE v161[28]; // [esp+188h] [ebp-68h] BYREF
  float v162[16]; // [esp+1A4h] [ebp-4Ch] BYREF
  int v163; // [esp+1ECh] [ebp-4h]

  v155 = this;
  Actor::Actor(this, a2);
  *(_DWORD *)this = &SkyController::`vftable';
  *((float *)this + 308) = 0.0;
  *((float *)this + 309) = 0.0;
  *((float *)this + 310) = 0.0;
  v163 = 0;
  v3 = sub_100575D0();
  *((_DWORD *)this + 312) = v3;
  *((_BYTE *)v3 + 53) = 1;
  *(_DWORD *)(*((_DWORD *)this + 312) + 4) = *((_DWORD *)this + 312);
  **((_DWORD **)this + 312) = *((_DWORD *)this + 312);
  *(_DWORD *)(*((_DWORD *)this + 312) + 8) = *((_DWORD *)this + 312);
  *((_DWORD *)this + 313) = 0;
  LOBYTE(v163) = 1;
  v4 = sub_10057610();
  *((_DWORD *)this + 315) = v4;
  *((_BYTE *)v4 + 45) = 1;
  *(_DWORD *)(*((_DWORD *)this + 315) + 4) = *((_DWORD *)this + 315);
  **((_DWORD **)this + 315) = *((_DWORD *)this + 315);
  *(_DWORD *)(*((_DWORD *)this + 315) + 8) = *((_DWORD *)this + 315);
  *((_DWORD *)this + 316) = 0;
  LOBYTE(v163) = 2;
  v5 = sub_10057610();
  *((_DWORD *)this + 318) = v5;
  *((_BYTE *)v5 + 45) = 1;
  *(_DWORD *)(*((_DWORD *)this + 318) + 4) = *((_DWORD *)this + 318);
  **((_DWORD **)this + 318) = *((_DWORD *)this + 318);
  *(_DWORD *)(*((_DWORD *)this + 318) + 8) = *((_DWORD *)this + 318);
  *((_DWORD *)this + 319) = 0;
  LOBYTE(v163) = 3;
  v6 = sub_10057610();
  *((_DWORD *)this + 321) = v6;
  *((_BYTE *)v6 + 45) = 1;
  *(_DWORD *)(*((_DWORD *)this + 321) + 4) = *((_DWORD *)this + 321);
  **((_DWORD **)this + 321) = *((_DWORD *)this + 321);
  *(_DWORD *)(*((_DWORD *)this + 321) + 8) = *((_DWORD *)this + 321);
  *((_DWORD *)this + 322) = 0;
  LOBYTE(v163) = 4;
  v7 = sub_100575D0();
  *((_DWORD *)this + 324) = v7;
  *((_BYTE *)v7 + 53) = 1;
  *(_DWORD *)(*((_DWORD *)this + 324) + 4) = *((_DWORD *)this + 324);
  **((_DWORD **)this + 324) = *((_DWORD *)this + 324);
  *(_DWORD *)(*((_DWORD *)this + 324) + 8) = *((_DWORD *)this + 324);
  *((_DWORD *)this + 325) = 0;
  LOBYTE(v163) = 5;
  v8 = sub_10057610();
  *((_DWORD *)this + 327) = v8;
  *((_BYTE *)v8 + 45) = 1;
  *(_DWORD *)(*((_DWORD *)this + 327) + 4) = *((_DWORD *)this + 327);
  **((_DWORD **)this + 327) = *((_DWORD *)this + 327);
  *(_DWORD *)(*((_DWORD *)this + 327) + 8) = *((_DWORD *)this + 327);
  *((_DWORD *)this + 328) = 0;
  LOBYTE(v163) = 6;
  v9 = sub_10057610();
  *((_DWORD *)this + 330) = v9;
  *((_BYTE *)v9 + 45) = 1;
  *(_DWORD *)(*((_DWORD *)this + 330) + 4) = *((_DWORD *)this + 330);
  **((_DWORD **)this + 330) = *((_DWORD *)this + 330);
  *(_DWORD *)(*((_DWORD *)this + 330) + 8) = *((_DWORD *)this + 330);
  *((_DWORD *)this + 331) = 0;
  Model::Model((SkyController *)((char *)this + 1332));
  `eh vector constructor iterator'(
    (char *)this + 1800,
    0x9Cu,
    4,
    (void (__thiscall *)(void *))Texture::Texture,
    (void (__thiscall *)(void *))Texture::~Texture);
  `eh vector constructor iterator'(
    (char *)this + 2424,
    0x118u,
    4,
    (void (__thiscall *)(void *))ShaderVar::`default constructor closure',
    (void (__thiscall *)(void *))ShaderVar::~ShaderVar);
  LOBYTE(v163) = 10;
  LightState::LightState((SkyController *)((char *)this + 3576));
  LightState::LightState((SkyController *)((char *)this + 3648));
  SkyController::Instance = this;
  *((_BYTE *)this + 724) = 1;
  *((_BYTE *)this + 816) = 1;
  *((_BYTE *)this + 442) = 0;
  *((_BYTE *)this + 1224) = 1;
  v10 = (_DWORD *)((char *)this + 4416);
  v145 = 2;
  do
  {
    v11 = AudioDevice::Instance();
    *v10++ = (*(int (__thiscall **)(struct AudioDevice *))(*(_DWORD *)v11 + 12))(v11);
    --v145;
  }
  while ( *(float *)&v145 != 0.0 );
  (*(void (__thiscall **)(_DWORD, const char *, _DWORD))(**((_DWORD **)this + 1104) + 8))(
    *((_DWORD *)this + 1104),
    "thunder1.wav",
    0);
  (*(void (__thiscall **)(_DWORD, const char *, _DWORD))(**((_DWORD **)this + 1105) + 8))(
    *((_DWORD *)this + 1105),
    "thunder2.wav",
    0);
  *((float *)this + 946) = 0.0;
  *((float *)this + 302) = 1.5707964;
  *((float *)this + 303) = 0.88;
  *((float *)this + 304) = 1076.0;
  *((float *)this + 305) = 5100.0;
  *((_DWORD *)this + 957) = *((_DWORD *)SkyController::mySkySettings + 9);
  *((float *)this + 947) = *((float *)SkyController::mySkySettings + 22);
  *((float *)this + 1102) = 0.0;
  *((float *)this + 1103) = 30.0;
  std::string::string(v154, (char *)SkyController::mySkySettings + 192);
  LOBYTE(v163) = 11;
  if ( std::string::size(v154) )
  {
    *(float *)&v12 = COERCE_FLOAT(operator new(0x5B0u));
    v143 = *(float *)&v12;
    LOBYTE(v163) = 12;
    if ( *(float *)&v12 == 0.0 )
      v13 = 0;
    else
      v13 = Light::Light(v12, *((struct World **)this + 178));
    v141 = (int)v154;
    LOBYTE(v163) = 11;
    *((_DWORD *)this + 307) = v13;
    std::string::operator=((char *)v13 + 444, v141);
    *(_DWORD *)(*((_DWORD *)this + 307) + 1428) = 4;
    *(float *)(*((_DWORD *)this + 307) + 1136) = 10000.0;
    *(float *)(*((_DWORD *)this + 307) + 1140) = 180.0;
    *(float *)(*((_DWORD *)this + 307) + 1144) = 180.0;
    *(_DWORD *)(*((_DWORD *)this + 307) + 1432) = 1;
    *(_BYTE *)(*((_DWORD *)this + 307) + 422) = 1;
    *(_BYTE *)(*((_DWORD *)this + 307) + 421) = 0;
    *(_BYTE *)(*((_DWORD *)this + 307) + 442) = 0;
  }
  else
  {
    *((_DWORD *)this + 307) = 0;
  }
  v14 = 0;
  v15 = *((_DWORD *)this + 957) <= 0;
  *((_DWORD *)this + 890) = 0;
  *((_DWORD *)this + 892) = 0;
  *((_DWORD *)this + 449) = 0;
  if ( !v15 )
  {
    v145 = (int)this + 3796;
    do
    {
      v148 = COERCE_FLOAT(sub_10131F30(v157, ".dds"));
      LOBYTE(v163) = 13;
      *(float *)&v147 = COERCE_FLOAT(sub_1003B320((int)v158, v14));
      LOBYTE(v163) = 14;
      v16 = sub_10131F30(v159, "_");
      LOBYTE(v163) = 15;
      v17 = std::operator+<char>(v161, (char *)SkyController::mySkySettings + 388, v16);
      LOBYTE(v163) = 16;
      v18 = std::operator+<char>(v153, v17, v147);
      v143 = COERCE_FLOAT(&v135);
      LOBYTE(v163) = 17;
      std::operator+<char>(&v135, v18, LODWORD(v148));
      SHProbe = World::LoadSHProbe(*((_DWORD **)this + 178), v135, v136, v137, v138, v139, SLODWORD(v140), v141);
      *(_DWORD *)v145 = SHProbe;
      LOBYTE(v163) = 16;
      std::string::~string(v153);
      LOBYTE(v163) = 15;
      std::string::~string(v161);
      LOBYTE(v163) = 14;
      std::string::~string(v159);
      LOBYTE(v163) = 13;
      std::string::~string(v158);
      LOBYTE(v163) = 11;
      std::string::~string(v157);
      v145 += 4;
      ++v14;
    }
    while ( v14 < *((_DWORD *)this + 957) );
  }
  std::string::string(v156, (char *)SkyController::mySkySettings + 360);
  LOBYTE(v163) = 18;
  v20 = 0;
  v145 = (int)this + 1800;
  do
  {
    v21 = sub_10131F30(v160, ".dds");
    LOBYTE(v163) = 19;
    *(float *)&v147 = COERCE_FLOAT(sub_1003B320((int)v161, v20));
    LOBYTE(v163) = 20;
    v22 = sub_10131F30(v159, "_");
    LOBYTE(v163) = 21;
    v23 = std::operator+<char>(v158, v156, v22);
    LOBYTE(v163) = 22;
    v24 = std::operator+<char>(v157, v23, v147);
    LOBYTE(v163) = 23;
    std::operator+<char>(v153, v24, v21);
    LOBYTE(v163) = 25;
    std::string::~string(v157);
    LOBYTE(v163) = 26;
    std::string::~string(v158);
    LOBYTE(v163) = 27;
    std::string::~string(v159);
    LOBYTE(v163) = 28;
    std::string::~string(v161);
    LOBYTE(v163) = 29;
    std::string::~string(v160);
    v141 = 0;
    v140 = 0.0;
    *(float *)&v139 = 1.0;
    *(float *)&v138 = 1.0;
    *(float *)&v137 = 0.0;
    *(float *)&v136 = 0.0;
    v135 = 0;
    v143 = COERCE_FLOAT(v128);
    std::string::string(v128, v153);
    v25 = v145;
    Texture::Load(
      v128[0],
      v129,
      v130,
      v131,
      v132,
      v133,
      (int)v134,
      v135,
      *(float *)&v136,
      *(float *)&v137,
      *(float *)&v138,
      *(float *)&v139,
      v140,
      v141);
    LOBYTE(v163) = 18;
    std::string::~string(v153);
    ++v20;
    v145 = v25 + 156;
  }
  while ( v20 < 4 );
  *(float *)&v26 = 0.0;
  if ( *((int *)this + 957) > 0 )
  {
    v145 = (int)this + 2424;
    do
    {
      v27 = sub_1003B320((int)v157, v26);
      LOBYTE(v163) = 30;
      v28 = sub_10131F30(v160, "tDiffuse");
      LOBYTE(v163) = 31;
      std::operator+<char>(v153, v28, v27);
      LOBYTE(v163) = 33;
      std::string::~string(v160);
      LOBYTE(v163) = 34;
      std::string::~string(v157);
      v141 = (int)this + 1800;
      v140 = 0.0;
      v139 = 9;
      v143 = COERCE_FLOAT(&v132);
      std::string::string(&v132, v153);
      v29 = v145;
      ShaderVar::Set((_DWORD *)v145, v132, v133, (int)v134, v135, v136, v137, v138, v139, SLODWORD(v140), v141);
      LOBYTE(v163) = 18;
      std::string::~string(v153);
      v15 = ++v26 < *((_DWORD *)this + 957);
      v145 = v29 + 280;
    }
    while ( v15 );
    *(float *)&v26 = 0.0;
  }
  v30 = COERCE_FLOAT(operator new(0x154u));
  v143 = v30;
  LOBYTE(v163) = 35;
  if ( v30 == 0.0 )
  {
    v31 = 0;
  }
  else
  {
    v146 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "SkyBG");
    v31 = Material::Material(SLODWORD(v30), v135, v136, v137, v138, v139, SLODWORD(v140), v141);
  }
  *((_DWORD *)this + 449) = v31;
  *(_DWORD *)(v31 + 148) = 0;
  v141 = 0;
  LOBYTE(v163) = 18;
  v140 = COERCE_FLOAT(std::string::c_str((char *)SkyController::mySkySettings + 164));
  v32 = (const char *)std::string::c_str((char *)SkyController::mySkySettings + 136);
  Material::Initialize(*((Material **)this + 449), v32, (const char *)LODWORD(v140), v141);
  for ( i = 0; ; ++i )
  {
    v34 = *((_DWORD *)this + 449);
    v35 = *(_DWORD *)(v34 + 280);
    if ( !v35 || i >= (*(_DWORD *)(v34 + 284) - v35) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(v34 + 280) + 4 * i) )
    {
      v36 = *((_DWORD *)this + 449);
      v37 = *(_DWORD *)(v36 + 280);
      v38 = v36 + 276;
      if ( !v37 || i >= (*(_DWORD *)(v38 + 8) - v37) >> 2 )
        invalid_parameter_noinfo();
      v39 = *(_DWORD *)(v38 + 4);
      v40 = *(void **)(v39 + 4 * i);
      if ( v40 )
      {
        ShaderVar::~ShaderVar(*(ShaderVar **)(v39 + 4 * i));
        operator delete(v40);
      }
    }
  }
  sub_100E8100((_DWORD *)(*((_DWORD *)this + 449) + 276), 0, 0);
  v41 = RenderDevice::Instance();
  v42 = (*(unsigned __int8 (__thiscall **)(struct RenderDevice *, float))(*(_DWORD *)v41 + 132))(
          v41,
          COERCE_FLOAT(LODWORD(v142))) == 0;
  v43 = *(float **)(*(_DWORD *)(*((_DWORD *)this + 449) + 152) + 16);
  v44 = *v43;
  v142 = *v43;
  if ( v42 )
  {
    v142 = *((float *)SkyController::mySkySettings + 16);
    v141 = (int)"Overbright_Sky";
  }
  else
  {
    v142 = *((float *)SkyController::mySkySettings + 15);
    v141 = (int)"Overbright_Sky";
  }
  (*(void (__stdcall **)(float *, int))(LODWORD(v44) + 120))(v43, v141);
  v143 = COERCE_FLOAT(&v135);
  std::string::string(&v135, "SkyBox_BlendedBG");
  Technique = Shader::GetTechnique(
                *(_DWORD ***)(*((_DWORD *)this + 449) + 152),
                v135,
                v136,
                v137,
                v138,
                v139,
                SLODWORD(v140),
                v141);
  v141 = 340;
  *((_DWORD *)this + 889) = Technique;
  v46 = COERCE_FLOAT(operator new(v141));
  v143 = v46;
  LOBYTE(v163) = 36;
  if ( v46 == 0.0 )
  {
    v47 = 0;
  }
  else
  {
    v146 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "MoonMaterial");
    v47 = Material::Material(SLODWORD(v46), v135, v136, v137, v138, v139, SLODWORD(v140), v141);
  }
  *((_DWORD *)this + 892) = v47;
  *(_DWORD *)(v47 + 148) = 0;
  v141 = 0;
  LOBYTE(v163) = 18;
  v140 = COERCE_FLOAT(std::string::c_str((char *)SkyController::mySkySettings + 248));
  v48 = (const char *)std::string::c_str((char *)SkyController::mySkySettings + 136);
  Material::Initialize(*((Material **)this + 892), v48, (const char *)LODWORD(v140), v141);
  for ( j = 0; ; ++j )
  {
    v50 = *((_DWORD *)this + 892);
    v51 = *(_DWORD *)(v50 + 280);
    if ( !v51 || j >= (*(_DWORD *)(v50 + 284) - v51) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(v50 + 280) + 4 * j) )
    {
      v52 = *((_DWORD *)this + 892);
      v53 = *(_DWORD *)(v52 + 280);
      v54 = v52 + 276;
      if ( !v53 || j >= (*(_DWORD *)(v54 + 8) - v53) >> 2 )
        invalid_parameter_noinfo();
      v55 = *(_DWORD *)(v54 + 4);
      v56 = *(void **)(v55 + 4 * j);
      if ( v56 )
      {
        ShaderVar::~ShaderVar(*(ShaderVar **)(v55 + 4 * j));
        operator delete(v56);
      }
    }
  }
  sub_100E8100((_DWORD *)(*((_DWORD *)this + 892) + 276), 0, 0);
  sub_100E8100((_DWORD *)(*((_DWORD *)this + 892) + 276), 2u, 0);
  v57 = COERCE_FLOAT(operator new(0x118u));
  v143 = v57;
  LOBYTE(v163) = 37;
  if ( v57 == 0.0 )
  {
    v58 = 0;
  }
  else
  {
    v141 = 0;
    v140 = 0.0;
    v139 = 3;
    v146 = COERCE_FLOAT(&v132);
    std::string::string(&v132, &unk_101CAC53);
    v58 = ShaderVar::ShaderVar(
            SLODWORD(v57),
            v132,
            v133,
            (int)v134,
            v135,
            v136,
            v137,
            v138,
            v139,
            SLODWORD(v140),
            (char *)v141);
  }
  v59 = *((_DWORD *)this + 892);
  v60 = *(_DWORD *)(v59 + 280);
  v61 = v59 + 276;
  LOBYTE(v163) = 18;
  if ( !v60 || !((*(_DWORD *)(v61 + 8) - v60) >> 2) )
    invalid_parameter_noinfo();
  v62 = *(int **)(v61 + 4);
  v141 = 156;
  *v62 = v58;
  *(float *)&v63 = COERCE_FLOAT(operator new(v141));
  v143 = *(float *)&v63;
  LOBYTE(v163) = 38;
  if ( *(float *)&v63 == 0.0 )
    v64 = 0;
  else
    v64 = (char *)Texture::Texture(v63);
  v141 = 0;
  v140 = 0.0;
  LOBYTE(v163) = 18;
  *(float *)&v139 = 1.0;
  *(float *)&v138 = 1.0;
  *(float *)&v137 = 0.0;
  *(float *)&v136 = 0.0;
  v135 = 0;
  v143 = COERCE_FLOAT(v128);
  std::string::string(v128, (char *)SkyController::mySkySettings + 276);
  Texture::Load(
    v128[0],
    v129,
    v130,
    v131,
    v132,
    v133,
    (int)v134,
    v135,
    *(float *)&v136,
    *(float *)&v137,
    *(float *)&v138,
    *(float *)&v139,
    v140,
    v141);
  sub_10131F30(v153, "tDiffuse0");
  v141 = (int)v64;
  LODWORD(v140) = 3;
  v139 = 9;
  v143 = COERCE_FLOAT(&v132);
  LOBYTE(v163) = 39;
  std::string::string(&v132, v153);
  v65 = *((_DWORD *)this + 892);
  v66 = *(_DWORD *)(v65 + 280);
  v67 = v65 + 276;
  if ( !v66 || !((*(_DWORD *)(v67 + 8) - v66) >> 2) )
    invalid_parameter_noinfo();
  ShaderVar::Set(**(_DWORD ***)(v67 + 4), v132, v133, (int)v134, v135, v136, v137, v138, v139, SLODWORD(v140), v141);
  v68 = COERCE_FLOAT(operator new(0x118u));
  v143 = v68;
  LOBYTE(v163) = 40;
  if ( v68 == 0.0 )
  {
    v69 = 0;
  }
  else
  {
    v141 = 0;
    v140 = 0.0;
    v139 = 3;
    v146 = COERCE_FLOAT(&v132);
    std::string::string(&v132, &unk_101CAC73);
    v69 = (struct ShaderVar *)ShaderVar::ShaderVar(
                                SLODWORD(v68),
                                v132,
                                v133,
                                (int)v134,
                                v135,
                                v136,
                                v137,
                                v138,
                                v139,
                                SLODWORD(v140),
                                (char *)v141);
  }
  LOBYTE(v163) = 39;
  std::string::operator=((char *)v69 + 4, "MoonAlphaFactor");
  v70 = *((_DWORD *)this + 892);
  v71 = *(_DWORD *)(v70 + 280);
  v72 = v70 + 276;
  if ( !v71 || (unsigned int)((*(_DWORD *)(v72 + 8) - v71) >> 2) <= 1 )
    invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v72 + 4) + 4) = v69;
  Shader::SetVar(*(Shader **)(*((_DWORD *)this + 892) + 152), v69, (char *)this + 1080);
  v143 = COERCE_FLOAT(&v135);
  std::string::string(&v135, (char *)SkyController::mySkySettings + 248);
  *((_DWORD *)this + 893) = Shader::GetTechnique(
                              *(_DWORD ***)(*((_DWORD *)this + 892) + 152),
                              v135,
                              v136,
                              v137,
                              v138,
                              v139,
                              SLODWORD(v140),
                              v141);
  LOBYTE(v163) = 18;
  std::string::~string(v153);
  v73 = COERCE_FLOAT(operator new(0x154u));
  v143 = v73;
  LOBYTE(v163) = 41;
  if ( v73 == 0.0 )
  {
    v74 = 0;
  }
  else
  {
    v146 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "SunMaterial");
    v74 = Material::Material(SLODWORD(v73), v135, v136, v137, v138, v139, SLODWORD(v140), v141);
  }
  *((_DWORD *)this + 890) = v74;
  *(_DWORD *)(v74 + 148) = 0;
  v141 = 0;
  LOBYTE(v163) = 18;
  v140 = COERCE_FLOAT(std::string::c_str((char *)SkyController::mySkySettings + 304));
  v75 = (const char *)std::string::c_str((char *)SkyController::mySkySettings + 136);
  Material::Initialize(*((Material **)this + 890), v75, (const char *)LODWORD(v140), v141);
  for ( k = 0; ; ++k )
  {
    v77 = *((_DWORD *)this + 890);
    v78 = *(_DWORD *)(v77 + 280);
    if ( !v78 || k >= (*(_DWORD *)(v77 + 284) - v78) >> 2 )
      break;
    if ( *(_DWORD *)(*(_DWORD *)(v77 + 280) + 4 * k) )
    {
      v79 = *((_DWORD *)this + 890);
      v80 = *(_DWORD *)(v79 + 280);
      v81 = v79 + 276;
      if ( !v80 || k >= (*(_DWORD *)(v81 + 8) - v80) >> 2 )
        invalid_parameter_noinfo();
      v82 = *(_DWORD *)(v81 + 4);
      v83 = *(void **)(v82 + 4 * k);
      if ( v83 )
      {
        ShaderVar::~ShaderVar(*(ShaderVar **)(v82 + 4 * k));
        operator delete(v83);
      }
    }
  }
  sub_100E8100((_DWORD *)(*((_DWORD *)this + 890) + 276), 0, 0);
  sub_100E8100((_DWORD *)(*((_DWORD *)this + 890) + 276), 2u, 0);
  v84 = COERCE_FLOAT(operator new(0x118u));
  v143 = v84;
  LOBYTE(v163) = 42;
  if ( v84 == 0.0 )
  {
    v85 = 0;
  }
  else
  {
    v141 = 0;
    v140 = 0.0;
    v139 = 3;
    v146 = COERCE_FLOAT(&v132);
    std::string::string(&v132, &unk_101CAC83);
    v85 = ShaderVar::ShaderVar(
            SLODWORD(v84),
            v132,
            v133,
            (int)v134,
            v135,
            v136,
            v137,
            v138,
            v139,
            SLODWORD(v140),
            (char *)v141);
  }
  v86 = *((_DWORD *)this + 890);
  v87 = *(_DWORD *)(v86 + 280);
  v88 = v86 + 276;
  LOBYTE(v163) = 18;
  if ( !v87 || !((*(_DWORD *)(v88 + 8) - v87) >> 2) )
    invalid_parameter_noinfo();
  v89 = *(int **)(v88 + 4);
  v141 = 156;
  *v89 = v85;
  *(float *)&v90 = COERCE_FLOAT(operator new(v141));
  v143 = *(float *)&v90;
  LOBYTE(v163) = 43;
  if ( *(float *)&v90 == 0.0 )
    v91 = 0;
  else
    v91 = (char *)Texture::Texture(v90);
  v141 = 0;
  v140 = 0.0;
  LOBYTE(v163) = 18;
  *(float *)&v139 = 1.0;
  *(float *)&v138 = 1.0;
  *(float *)&v137 = 0.0;
  *(float *)&v136 = 0.0;
  v135 = 0;
  v143 = COERCE_FLOAT(v128);
  std::string::string(v128, (char *)SkyController::mySkySettings + 332);
  Texture::Load(
    v128[0],
    v129,
    v130,
    v131,
    v132,
    v133,
    (int)v134,
    v135,
    *(float *)&v136,
    *(float *)&v137,
    *(float *)&v138,
    *(float *)&v139,
    v140,
    v141);
  sub_10131F30(v153, "tDiffuse0");
  v141 = (int)v91;
  LODWORD(v140) = 3;
  v139 = 9;
  v143 = COERCE_FLOAT(&v132);
  LOBYTE(v163) = 44;
  std::string::string(&v132, v153);
  v92 = *((_DWORD *)this + 890);
  v93 = *(_DWORD *)(v92 + 280);
  v94 = v92 + 276;
  if ( !v93 || !((*(_DWORD *)(v94 + 8) - v93) >> 2) )
    invalid_parameter_noinfo();
  ShaderVar::Set(**(_DWORD ***)(v94 + 4), v132, v133, (int)v134, v135, v136, v137, v138, v139, SLODWORD(v140), v141);
  v95 = COERCE_FLOAT(operator new(0x118u));
  v143 = v95;
  LOBYTE(v163) = 45;
  if ( v95 == 0.0 )
  {
    v96 = 0;
  }
  else
  {
    v141 = 0;
    v140 = 0.0;
    v139 = 3;
    v146 = COERCE_FLOAT(&v132);
    std::string::string(&v132, &unk_101CACA7);
    v96 = (struct ShaderVar *)ShaderVar::ShaderVar(
                                SLODWORD(v95),
                                v132,
                                v133,
                                (int)v134,
                                v135,
                                v136,
                                v137,
                                v138,
                                v139,
                                SLODWORD(v140),
                                (char *)v141);
  }
  LOBYTE(v163) = 44;
  std::string::operator=((char *)v96 + 4, "SunAlphaFactor");
  v97 = *((_DWORD *)this + 890);
  v98 = *(_DWORD *)(v97 + 280);
  v99 = v97 + 276;
  if ( !v98 || (unsigned int)((*(_DWORD *)(v99 + 8) - v98) >> 2) <= 1 )
    invalid_parameter_noinfo();
  *(_DWORD *)(*(_DWORD *)(v99 + 4) + 4) = v96;
  Shader::SetVar(*(Shader **)(*((_DWORD *)this + 890) + 152), v96, (char *)this + 1088);
  v143 = COERCE_FLOAT(&v135);
  std::string::string(&v135, (char *)SkyController::mySkySettings + 304);
  *((_DWORD *)this + 891) = Shader::GetTechnique(
                              *(_DWORD ***)(*((_DWORD *)this + 890) + 152),
                              v135,
                              v136,
                              v137,
                              v138,
                              v139,
                              SLODWORD(v140),
                              v141);
  LOBYTE(v163) = 18;
  std::string::~string(v153);
  *((_BYTE *)this + 1469) = 0;
  v141 = 0;
  v100 = (const char *)std::string::c_str((char *)SkyController::mySkySettings + 416);
  StaticModel::Load((ModelFrame **)this + 333, v100, v141);
  v143 = COERCE_FLOAT(&v135);
  std::string::string(&v135, (char *)SkyController::mySkySettings + 444);
  Material = StaticModel::FindMaterial((_DWORD **)this + 333, v135, v136, v137, v138, v139, SLODWORD(v140), v141);
  *((_DWORD *)this + 447) = Material;
  if ( Material )
  {
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, (char *)SkyController::mySkySettings + 472);
    v102 = Shader::GetTechnique(
             *(_DWORD ***)(*((_DWORD *)this + 447) + 152),
             v135,
             v136,
             v137,
             v138,
             v139,
             SLODWORD(v140),
             v141);
    v143 = COERCE_FLOAT(&v135);
    v134 = "CloudScrollSpeed";
    *((_DWORD *)this + 448) = v102;
    std::string::string(&v135, v134);
    Var = (struct ShaderVar *)Material::FindVar(
                                *((_DWORD **)this + 447),
                                v135,
                                v136,
                                v137,
                                v138,
                                v139,
                                SLODWORD(v140),
                                v141);
    if ( Var )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), Var, (char *)this + 1096);
    *((float *)this + 930) = 1.0;
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "CloudIntensityFactor");
    v104 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v104 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v104, (char *)this + 3720);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "CloudSolidity");
    v105 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v105 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v105, (char *)this + 1104);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "MaxCloudIntensity");
    v106 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v106 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v106, (char *)this + 1108);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "MinCloudIntensity");
    v107 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v107 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v107, (char *)this + 1112);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "CloudAddRed");
    v108 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v108 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v108, (char *)this + 1116);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "CloudAddGreen");
    v109 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v109 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v109, (char *)this + 1120);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "CloudAddBlue");
    v110 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v110 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v110, (char *)this + 1124);
    v143 = COERCE_FLOAT(&v135);
    std::string::string(&v135, "CloudAlphaFactor");
    v111 = (struct ShaderVar *)Material::FindVar(
                                 *((_DWORD **)this + 447),
                                 v135,
                                 v136,
                                 v137,
                                 v138,
                                 v139,
                                 SLODWORD(v140),
                                 v141);
    if ( v111 )
      Shader::SetVar(*(Shader **)(*((_DWORD *)this + 447) + 152), v111, (char *)this + 1128);
  }
  *(float *)&v147 = 0.0009765625 + 0.0;
  dword_11241A54 = v147;
  dword_11241A58 = v147;
  dword_11241A68 = v147;
  v143 = 0.99902344;
  *(float *)&dword_11241A6C = 0.99902344;
  v144 = 0.99902344;
  *(float *)&dword_11241A7C = 0.99902344;
  dword_11241A80 = v147;
  *(float *)&dword_11241A90 = 0.99902344;
  *(float *)&dword_11241A94 = 0.99902344;
  *((_DWORD *)this + 888) = 32;
  v112 = RenderDevice::Instance();
  if ( (*(int (__stdcall **)(_DWORD, int, int, _DWORD, int, char *, _DWORD))(**((_DWORD **)v112 + 427) + 104))(
         *((_DWORD *)v112 + 427),
         56 * *((_DWORD *)this + 888) * *((_DWORD *)this + 888),
         8,
         0,
         1,
         (char *)this + 3544,
         0) >= 0
    && (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(**((_DWORD **)this + 886) + 44))(
         *((_DWORD *)this + 886),
         0,
         0,
         &v150,
         0) >= 0 )
  {
    v15 = *((_DWORD *)this + 888) <= 0;
    *(float *)&v147 = 0.0;
    if ( !v15 )
    {
      v113 = 1.0;
      do
      {
        v114 = 0.0;
        v15 = *((_DWORD *)this + 888) <= 0;
        v148 = 0.0;
        if ( !v15 )
        {
          *(float *)&v147 = (float)v147;
          v115 = *(float *)&v147;
          do
          {
            v145 = *((int *)this + 888);
            v116 = v145;
            v148 = (float)SLODWORD(v148);
            v117 = (double)v145 - v113;
            v152 = v148 / v117 * -6.2831853;
            *(float *)&v145 = v115 / v117 * 1.884955664901406;
            v151 = sin(*(float *)&v145);
            v146 = sin(v152);
            v143 = v146 * v151;
            *(float *)(v150 + 56 * (LODWORD(v114) + v116 * v26)) = v143;
            v143 = cos(*(float *)&v145);
            *(float *)(v150 + 56 * (LODWORD(v114) + v26 * *((_DWORD *)this + 888)) + 4) = v143;
            v146 = v151;
            v143 = cos(v152);
            v118 = v26 * *((_DWORD *)this + 888);
            v143 = v143 * v151;
            *(float *)(v150 + 56 * (LODWORD(v114) + v118) + 8) = v143;
            v145 = *((int *)this + 888);
            v113 = 1.0;
            v143 = v148 / ((double)v145 - 1.0);
            *(float *)(v150 + 56 * (LODWORD(v114) + v145 * v26) + 48) = v143;
            v115 = *(float *)&v147;
            v145 = *((int *)this + 888);
            v119 = LODWORD(v114) + v145 * v26;
            ++LODWORD(v114);
            v148 = v114;
            v143 = *(float *)&v147 / ((double)v145 - 1.0);
            *(float *)(v150 + 56 * v119 + 52) = v143;
          }
          while ( SLODWORD(v114) < *((_DWORD *)this + 888) );
        }
        v15 = ++v26 < *((_DWORD *)this + 888);
        v147 = v26;
      }
      while ( v15 );
    }
    (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 886) + 48))(*((_DWORD *)this + 886));
    v120 = RenderDevice::Instance();
    if ( (*(int (__stdcall **)(_DWORD, int, int, int, int, char *, _DWORD))(**((_DWORD **)v120 + 427) + 108))(
           *((_DWORD *)v120 + 427),
           24 * (*((_DWORD *)this + 888) - 1) * (*((_DWORD *)this + 888) - 1),
           8,
           102,
           1,
           (char *)this + 3548,
           0) >= 0
      && (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int *, _DWORD))(**((_DWORD **)this + 887) + 44))(
           *((_DWORD *)this + 887),
           0,
           0,
           &v149,
           0) >= 0 )
    {
      v121 = 0;
      for ( m = 0; m < *((_DWORD *)this + 888) - 1; ++m )
      {
        v123 = 0;
        if ( *((_DWORD *)this + 888) - 1 > 0 )
        {
          v124 = m + 1;
          do
          {
            *(_DWORD *)(v149 + 4 * v121) = v123 + m * *((_DWORD *)this + 888);
            *(_DWORD *)(v149 + 4 * v121 + 4) = m * *((_DWORD *)this + 888) + v123 + 1;
            v125 = v121 + 1;
            *(_DWORD *)(v149 + 4 * v125++ + 4) = v123 + v124 * *((_DWORD *)this + 888);
            *(_DWORD *)(v149 + 4 * v125++ + 4) = v123 + v124 * *((_DWORD *)this + 888);
            *(_DWORD *)(v149 + 4 * v125 + 4) = m * *((_DWORD *)this + 888) + v123 + 1;
            v125 += 2;
            *(_DWORD *)(v149 + 4 * v125) = v124 * *((_DWORD *)this + 888) + v123++ + 1;
            v121 = v125 + 1;
          }
          while ( v123 < *((_DWORD *)this + 888) - 1 );
        }
      }
      (*(void (__stdcall **)(_DWORD))(**((_DWORD **)this + 887) + 48))(*((_DWORD *)this + 887));
      memset(v162, 0, sizeof(v162));
      sub_101786E0(1.0);
      v126 = (struct World *)*((_DWORD *)this + 178);
      v162[15] = 1.0;
      Script::Initialize(SkyController::m_ControllerScript, 0, v126, (struct Matrix *)v162);
    }
  }
  LOBYTE(v163) = 11;
  std::string::~string(v156);
  LOBYTE(v163) = 10;
  std::string::~string(v154);
  return this;
}
