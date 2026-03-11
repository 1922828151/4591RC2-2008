/*
 * func-name: sub_1007C450
 * func-address: 0x1007c450
 * callers: 0x1007d280
 * callees: 0x10001150, 0x10009730, 0x10009f20, 0x1000cb70, 0x1000d680, 0x1001cb70, 0x10029240, 0x1007bd30, 0x1007be20, 0x1007bf40, 0x1007c180, 0x1007c3c0, 0x1007e190, 0x1007e290, 0x1007ec70, 0x100977a0, 0x10097800, 0x1009dd90, 0x1009ed40, 0x100e2550, 0x101189f0, 0x10136290, 0x10136530, 0x1017a230, 0x1017a280, 0x101a24ac, 0x101a2500, 0x101a2516, 0x101a252e, 0x101a253a
 */

char __thiscall sub_1007C450(_DWORD *this, ModelFrame *a2)
{
  _DWORD *v2; // ebx
  struct RenderDevice *v3; // eax
  struct Mesh *Mesh; // eax
  int v5; // ebp
  int v6; // eax
  int last_of; // eax
  const CHAR *v8; // eax
  char v9; // dl
  unsigned int v10; // edi
  int v11; // eax
  int v12; // eax
  char *v13; // eax
  ModelFrame *v14; // esi
  struct Mesh *v15; // eax
  float *v16; // eax
  int v17; // eax
  unsigned int i; // edi
  int v19; // eax
  int v20; // edx
  int v21; // ecx
  int v22; // eax
  int v23; // ecx
  int v24; // esi
  _DWORD *v25; // eax
  int v26; // eax
  int v27; // edi
  int (__thiscall *v28)(int); // eax
  int v29; // eax
  int (__thiscall *v30)(int, float *); // edx
  const void *v31; // ebx
  ModelFrame *v32; // eax
  ModelFrame *v33; // esi
  int v34; // esi
  int v35; // ebx
  const void *v36; // eax
  ModelFrame *v37; // edi
  bool v38; // cc
  void *v39; // esi
  ModelFrame *v40; // edi
  const char *v41; // eax
  int v43; // esi
  int v44; // eax
  int v45; // eax
  const char *v46; // eax
  unsigned int v47; // edx
  unsigned int v48; // ecx
  unsigned int v49; // eax
  int v50; // eax
  int v51; // eax
  __int16 *v52; // eax
  char *v53; // edx
  __int16 v54; // cx
  struct RenderDevice *v55; // eax
  const char *v56; // eax
  unsigned __int64 v57; // st7
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  int v62; // eax
  int v63; // eax
  int v64; // eax
  struct Editor *v65; // eax
  unsigned __int8 (__thiscall ***v66)(_DWORD); // ecx
  struct Editor *v67; // eax
  int v68; // eax
  int v69; // eax
  int v70; // eax
  const char *v71; // eax
  char v72; // al
  char v73; // [esp-24h] [ebp-CD0h] BYREF
  int v74; // [esp-20h] [ebp-CCCh]
  int v75; // [esp-1Ch] [ebp-CC8h]
  int v76; // [esp-18h] [ebp-CC4h]
  int v77; // [esp-14h] [ebp-CC0h]
  int v78; // [esp-10h] [ebp-CBCh]
  int v79; // [esp-Ch] [ebp-CB8h]
  char v80; // [esp-8h] [ebp-CB4h] BYREF
  int v81; // [esp-4h] [ebp-CB0h]
  int v82; // [esp+0h] [ebp-CACh]
  int v83; // [esp+4h] [ebp-CA8h]
  int v84; // [esp+8h] [ebp-CA4h]
  int v85; // [esp+Ch] [ebp-CA0h] BYREF
  int v86; // [esp+10h] [ebp-C9Ch]
  int v87; // [esp+14h] [ebp-C98h] BYREF
  int v88; // [esp+18h] [ebp-C94h]
  int v89; // [esp+1Ch] [ebp-C90h]
  int v90; // [esp+20h] [ebp-C8Ch] BYREF
  int v91; // [esp+24h] [ebp-C88h]
  double v92; // [esp+28h] [ebp-C84h]
  int v93; // [esp+30h] [ebp-C7Ch]
  void *v94; // [esp+40h] [ebp-C6Ch] BYREF
  char v95; // [esp+47h] [ebp-C65h]
  float v96; // [esp+48h] [ebp-C64h]
  ModelFrame *v97; // [esp+4Ch] [ebp-C60h]
  char *v98; // [esp+50h] [ebp-C5Ch]
  ModelFrame *v99; // [esp+54h] [ebp-C58h] BYREF
  _DWORD *v100; // [esp+58h] [ebp-C54h]
  int v101; // [esp+5Ch] [ebp-C50h] BYREF
  int v102; // [esp+60h] [ebp-C4Ch] BYREF
  void *v103; // [esp+64h] [ebp-C48h]
  int v104; // [esp+68h] [ebp-C44h]
  int v105; // [esp+6Ch] [ebp-C40h]
  int v106; // [esp+70h] [ebp-C3Ch] BYREF
  void *v107; // [esp+74h] [ebp-C38h]
  int v108; // [esp+78h] [ebp-C34h]
  int v109; // [esp+7Ch] [ebp-C30h]
  float v110; // [esp+80h] [ebp-C2Ch] BYREF
  int v111; // [esp+84h] [ebp-C28h] BYREF
  int v112; // [esp+88h] [ebp-C24h]
  _BYTE v113[28]; // [esp+8Ch] [ebp-C20h] BYREF
  _BYTE v114[28]; // [esp+A8h] [ebp-C04h] BYREF
  _BYTE v115[28]; // [esp+C4h] [ebp-BE8h] BYREF
  _BYTE v116[28]; // [esp+E0h] [ebp-BCCh] BYREF
  _BYTE v117[28]; // [esp+FCh] [ebp-BB0h] BYREF
  _BYTE v118[28]; // [esp+118h] [ebp-B94h] BYREF
  float v119[16]; // [esp+134h] [ebp-B78h] BYREF
  _BYTE v120[28]; // [esp+174h] [ebp-B38h] BYREF
  void *v121[39]; // [esp+190h] [ebp-B1Ch] BYREF
  _BYTE v122[64]; // [esp+22Ch] [ebp-A80h] BYREF
  float v123[16]; // [esp+26Ch] [ebp-A40h] BYREF
  char Buffer[256]; // [esp+2ACh] [ebp-A00h] BYREF
  _BYTE v125[1041]; // [esp+3ACh] [ebp-900h] BYREF
  char v126; // [esp+7BDh] [ebp-4EFh] BYREF
  int v127; // [esp+9C5h] [ebp-2E7h]
  float v128; // [esp+9D6h] [ebp-2D6h]
  unsigned int v129; // [esp+C4Fh] [ebp-5Dh]
  int v130; // [esp+CA8h] [ebp-4h]

  v2 = this;
  v100 = this;
  v3 = RenderDevice::Instance();
  if ( !(*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 124))(v3) )
    return 0;
  Mesh = ModelFrame::GetMesh(a2, 0);
  qmemcpy(v122, (char *)a2 + 164, sizeof(v122));
  ++v2[3];
  v5 = (int)Mesh;
  v6 = sub_10009F20((int)v120, v2[3]);
  v130 = 0;
  v98 = (char *)a2 + 44;
  std::operator+<char>(v116, (char *)a2 + 44, v6);
  LOBYTE(v130) = 2;
  std::string::~string(v120);
  *(float *)&v94 = COERCE_FLOAT(&v87);
  std::string::string(&v87, ".prt");
  v96 = COERCE_FLOAT(&v80);
  LOBYTE(v130) = 3;
  std::string::string(&v80, v116);
  LOBYTE(v130) = 2;
  sub_1007BF40(v2, (int)v113, v80, v81, v82, v83, v84, v85, v86, v87, v88, v89, v90, v91, SLODWORD(v92), SHIDWORD(v92));
  LOBYTE(v130) = 4;
  last_of = std::string::find_last_of(v113, "\\", std::string::npos);
  std::string::substr(v113, v117, 0, last_of);
  HIDWORD(v92) = 0;
  LOBYTE(v130) = 5;
  v8 = (const CHAR *)std::string::c_str(v117);
  CreateDirectoryA(v8, (LPSECURITY_ATTRIBUTES)HIDWORD(v92));
  v9 = *(_BYTE *)v2;
  *(float *)&v94 = COERCE_FLOAT(&v87);
  v95 = v9;
  std::string::string(&v87, v113);
  if ( sub_1007BE20(v5, v87, v88, v89, v90, v91, SLODWORD(v92), SHIDWORD(v92)) )
    v95 = 1;
  v103 = 0;
  v104 = 0;
  v105 = 0;
  v107 = 0;
  v108 = 0;
  v109 = 0;
  LOBYTE(v130) = 7;
  v10 = 0;
  v97 = 0;
  while ( 1 )
  {
    v11 = *(_DWORD *)(v5 + 2355);
    if ( !v11 || v10 >= (*(_DWORD *)(v5 + 2359) - v11) / 28 )
      break;
    v12 = *(_DWORD *)(v5 + 2355);
    HIDWORD(v92) = &v99;
    v99 = 0;
    LODWORD(v92) = &v94;
    if ( !v12 || v10 >= (*(_DWORD *)(v5 + 2359) - v12) / 28 )
      invalid_parameter_noinfo();
    v13 = (char *)v97 + *(_DWORD *)(v5 + 2355);
    v96 = COERCE_FLOAT(&v85);
    std::string::string(&v85, v13);
    sub_1007C180(v2, v85, v86, v87, v88, v89, v90, v91, (_DWORD *)LODWORD(v92), (_DWORD *)HIDWORD(v92));
    v14 = v99;
    if ( v99 && ModelFrame::GetMesh(v99, 0) != (struct Mesh *)v5 )
    {
      if ( !v95 )
      {
        *(float *)&v94 = COERCE_FLOAT(&v87);
        std::string::string(&v87, v113);
        LOBYTE(v130) = 8;
        v15 = ModelFrame::GetMesh(v14, 0);
        LOBYTE(v130) = 7;
        if ( sub_1007BE20((int)v15, v87, v88, v89, v90, v91, SLODWORD(v92), SHIDWORD(v92)) )
          v95 = 1;
      }
      if ( ModelFrame::GetMesh(v14, 0) )
      {
        v101 = (int)ModelFrame::GetMesh(v14, 0);
        sub_1007E190((int)&v102, (int)&v101);
        v16 = sub_1007BD30(v122, v123);
        sub_1001CB70((char *)v14 + 164, v119, (int)v16);
        sub_1007E290((int)&v106, v119);
      }
    }
    v97 = (ModelFrame *)((char *)v97 + 28);
    ++v10;
  }
  if ( v95 )
  {
    if ( *(_BYTE *)(v5 + 2330) )
    {
      HIDWORD(v92) = std::string::c_str(v98);
      LogPrintf("Generating Per-Pixel PRT for %s ...", HIDWORD(v92));
    }
    else
    {
      HIDWORD(v92) = std::string::c_str(v98);
      LogPrintf("Generating Per-Vertex PRT for %s ...", HIDWORD(v92));
    }
    v17 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 124))(v5);
    if ( *(_BYTE *)(v5 + 2330) )
    {
      if ( v17 == 156 )
      {
        v27 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 120))(v5);
        v28 = *(int (__thiscall **)(int))(*(_DWORD *)v5 + 116);
        v112 = v27;
        v29 = v28(v5);
        v30 = *(int (__thiscall **)(int, float *))(*(_DWORD *)v5 + 128);
        v101 = 3 * v29;
        v96 = COERCE_FLOAT(v30(v5, &v110));
        v31 = (const void *)(*(int (__thiscall **)(int, int *))(*(_DWORD *)v5 + 136))(v5, &v111);
        v32 = (ModelFrame *)operator new(56 * v27);
        v33 = v32;
        v94 = v32;
        LOBYTE(v130) = 9;
        if ( v32 )
        {
          sub_10009730((int)v32, 56, v27, (int (__thiscall *)(int))sub_10009700);
          v99 = v33;
        }
        else
        {
          v99 = 0;
        }
        v34 = v101;
        LOBYTE(v130) = 7;
        *(float *)&v94 = COERCE_FLOAT(operator new(v101 * v111));
        memcpy(v94, v31, v34 * v111);
        v35 = 0;
        if ( v112 > 0 )
        {
          v97 = v99;
          do
          {
            v36 = (const void *)(*(int (__thiscall **)(int, float *, int))(*(_DWORD *)v5 + 148))(
                                  v5,
                                  v119,
                                  LODWORD(v96) + LODWORD(v110) * v35);
            v37 = v97;
            v97 = (ModelFrame *)((char *)v97 + 56);
            v38 = ++v35 < v112;
            qmemcpy(v37, v36, 0x38u);
          }
          while ( v38 );
        }
        v96 = COERCE_FLOAT(&v90);
        std::vector<Material *>::vector<Material *>(&v90, v5 + 2460);
        v39 = v94;
        v40 = v99;
        (*(void (__thiscall **)(int, ModelFrame *, void *, int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 72))(
          v5,
          v99,
          v94,
          56,
          v111,
          v112,
          v101,
          v90,
          v91,
          LODWORD(v92),
          HIDWORD(v92));
        operator delete[](v40);
        operator delete[](v39);
      }
      else
      {
        if ( v17 == 60 || v17 == 40 )
        {
          v41 = (const char *)std::string::c_str(v98);
          SeriousWarning(
            "Cannot convert mesh to per-pixel (was previously per vertex or baked). TODO: Ask someone to add support for "
            "this by rebuilding mesh decl/contents. Mesh is '%s'",
            v41);
          if ( v107 )
            operator delete(v107);
          v107 = 0;
          v108 = 0;
          v109 = 0;
          if ( v103 )
            operator delete(v103);
          v103 = 0;
          v104 = 0;
          v105 = 0;
          goto LABEL_54;
        }
        (*(void (__thiscall **)(struct MeshOps *, int, _DWORD, _DWORD))(*(_DWORD *)MeshOps::Instance + 20))(
          MeshOps::Instance,
          v5,
          *(_DWORD *)(v5 + 2331),
          *(_DWORD *)(v5 + 2331));
        *(_DWORD *)(v5 + 2412) = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 124))(v5);
      }
    }
    std::string::string(v114);
    LOBYTE(v130) = 10;
    for ( i = 0; ; ++i )
    {
      v19 = *(_DWORD *)(v5 + 2464);
      if ( !v19 || !((*(_DWORD *)(v5 + 2468) - v19) >> 2) )
        invalid_parameter_noinfo();
      v20 = *(_DWORD *)(v5 + 2464);
      v21 = *(_DWORD *)(*(_DWORD *)v20 + 280);
      if ( !v21 || i >= (*(_DWORD *)(*(_DWORD *)v20 + 284) - v21) >> 2 )
        break;
      if ( !v20 || !((*(_DWORD *)(v5 + 2468) - v20) >> 2) )
        invalid_parameter_noinfo();
      v22 = *(_DWORD *)(v5 + 2464);
      v23 = *(_DWORD *)(*(_DWORD *)v22 + 280);
      v24 = *(_DWORD *)v22 + 276;
      if ( !v23 || i >= (*(_DWORD *)(*(_DWORD *)v22 + 284) - v23) >> 2 )
        invalid_parameter_noinfo();
      v25 = *(_DWORD **)(*(_DWORD *)(v24 + 4) + 4 * i);
      if ( *v25 == 9 )
      {
        v26 = v25[15];
        if ( *(_DWORD *)(v26 + 96) == 2 )
        {
          v43 = v26 + 100;
          v44 = std::string::find_last_of(v26 + 100, ".", std::string::npos);
          v45 = std::string::substr(v43, v115, 0, v44);
          LOBYTE(v130) = 11;
          std::string::operator=(v114, v45);
          LOBYTE(v130) = 10;
          std::string::~string(v115);
          std::string::operator+=(v114, "_PRT.dds");
          break;
        }
      }
    }
    Texture::Texture((Texture *)v121);
    LOBYTE(v130) = 12;
    if ( std::string::length(v114) && std::string::find(v114, "NoBump_PRT.dds", 0) == -1 )
    {
      HIDWORD(v92) = 0;
      *(float *)&v92 = 0.0;
      *(float *)&v91 = 1.0;
      *(float *)&v90 = 1.0;
      *(float *)&v89 = 0.0;
      *(float *)&v88 = 0.0;
      v87 = 2;
      *(float *)&v94 = COERCE_FLOAT(&v80);
      std::string::string(&v80, v114);
      Texture::Load(
        v80,
        v81,
        v82,
        v83,
        v84,
        v85,
        v86,
        v87,
        *(float *)&v88,
        *(float *)&v89,
        *(float *)&v90,
        *(float *)&v91,
        *(float *)&v92,
        SHIDWORD(v92));
    }
    sub_1007C3C0((int)v100, (PRTSettings *)v125, (struct PRTSettings *)(v5 + 120));
    LOBYTE(v130) = 13;
    if ( v127 < 5 )
    {
      HIDWORD(v92) = v127;
      v46 = (const char *)std::string::c_str(v98);
      SeriousWarning(
        "Your mesh %s has only %d SH rays. The normal number of rays is 1024.\n"
        "Check 1)Under Scene Settings you don't have Global Percentage set to 0% or something very low 2) That your objec"
        "t settings do in fact have a high number of rays, and that you have not got rays and bounces mixed up!",
        v46,
        HIDWORD(v92),
        v93);
    }
    if ( v128 == 25.0 )
      v128 = 1.0;
    v96 = *(float *)(v5 + 2448) - *(float *)(v5 + 2436);
    *(float *)&v94 = *(float *)(v5 + 2452) - *(float *)(v5 + 2440);
    v110 = *(float *)(v5 + 2456) - *(float *)(v5 + 2444);
    *(float *)&v94 = *(float *)&v94 * *(float *)&v94 + v96 * v96 + v110 * v110;
    *(float *)&v94 = sqrt(*(float *)&v94);
    v47 = 0;
    v48 = 16;
    v49 = 0x10000;
    v128 = *(float *)&v94 * 500.0 * v128;
    if ( v129 >= 2 )
    {
      do
      {
        v48 >>= 1;
        if ( v129 > v49 )
        {
          v49 <<= v48;
        }
        else
        {
          v47 = v49;
          v49 >>= v48;
        }
      }
      while ( v48 );
      v50 = v47;
    }
    else
    {
      v50 = 1;
    }
    v129 = v50;
    v51 = sub_1017A280(v115, v113);
    LOBYTE(v130) = 14;
    v52 = (__int16 *)std::wstring::c_str(v51);
    v53 = &v126;
    do
    {
      v54 = *v52;
      *(_WORD *)v53 = *v52++;
      v53 += 2;
    }
    while ( v54 );
    LOBYTE(v130) = 13;
    std::wstring::~wstring(v115);
    std::string::operator=(v5 + 2383, v116);
    *(_BYTE *)(v5 + 2417) = 1;
    byte_10284F38 = 1;
    v55 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v55 + 372))(v55, 1, 0);
    v56 = (const char *)std::string::c_str(v98);
    LogPrintf("Starting compile thread for %s...", v56);
    if ( (*(int (__thiscall **)(struct CPRTSimulator *, _BYTE *, int, int *, int *, void **))(*(_DWORD *)CPRTSimulator::Instance
                                                                                            + 8))(
           CPRTSimulator::Instance,
           v125,
           v5,
           &v102,
           &v106,
           v121) < 0 )
    {
      LOBYTE(v130) = 12;
      PRTSettings::~PRTSettings((PRTSettings *)v125);
      LOBYTE(v130) = 10;
      Texture::~Texture(v121);
      LOBYTE(v130) = 7;
      std::string::~string(v114);
      if ( v107 )
        operator delete(v107);
      v107 = 0;
      v108 = 0;
      v109 = 0;
      if ( v103 )
        operator delete(v103);
      v103 = 0;
      v104 = 0;
      v105 = 0;
LABEL_54:
      LOBYTE(v130) = 4;
      std::string::~string(v117);
      LOBYTE(v130) = 2;
      std::string::~string(v113);
      v130 = -1;
      std::string::~string(v116);
      return 0;
    }
    if ( (*(unsigned __int8 (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 12))(CPRTSimulator::Instance) )
    {
      while ( 1 )
      {
        if ( ((double (__thiscall *)(struct CPRTSimulator *))*(_DWORD *)(*(_DWORD *)CPRTSimulator::Instance + 20))(CPRTSimulator::Instance) < 0.0 )
        {
          v60 = (*(int (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 32))(CPRTSimulator::Instance);
          v61 = (*(int (__thiscall **)(struct CPRTSimulator *, int))(*(_DWORD *)CPRTSimulator::Instance + 24))(
                  CPRTSimulator::Instance,
                  v60);
          sprintf(Buffer, "Step %d of %d (progress n/a)", v61, HIDWORD(v92));
        }
        else
        {
          *(double *)&v57 = ((double (__thiscall *)(struct CPRTSimulator *))*(_DWORD *)(*(_DWORD *)CPRTSimulator::Instance
                                                                                      + 20))(CPRTSimulator::Instance);
          v58 = (*(int (__thiscall **)(struct CPRTSimulator *, _DWORD, _DWORD))(*(_DWORD *)CPRTSimulator::Instance + 32))(
                  CPRTSimulator::Instance,
                  v57,
                  HIDWORD(v57));
          v59 = (*(int (__thiscall **)(struct CPRTSimulator *, int))(*(_DWORD *)CPRTSimulator::Instance + 24))(
                  CPRTSimulator::Instance,
                  v58);
          sprintf(Buffer, "Step %d of %d: %0.1f%% done", v59, v91, v92);
        }
        v62 = (*(int (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 28))(CPRTSimulator::Instance);
        std::wstring::wstring(v115, v62);
        *(float *)&v94 = COERCE_FLOAT(&v87);
        LOBYTE(v130) = 15;
        std::string::string(&v87, Buffer);
        LOBYTE(v130) = 16;
        v63 = sub_1017A230(v119, v115);
        LOBYTE(v130) = 17;
        v64 = std::operator+<char>(v118, v63, " for ");
        v96 = COERCE_FLOAT(&v80);
        LOBYTE(v130) = 18;
        std::operator+<char>(&v80, v64, v98);
        LOBYTE(v130) = 19;
        v65 = Editor::Instance();
        LOBYTE(v130) = 21;
        Editor::SetCompiling(
          v65,
          1,
          v80,
          v81,
          v82,
          v83,
          v84,
          v85,
          v86,
          v87,
          v88,
          v89,
          v90,
          v91,
          SLODWORD(v92),
          SHIDWORD(v92));
        LOBYTE(v130) = 20;
        std::string::~string(v118);
        LOBYTE(v130) = 15;
        std::string::~string(v119);
        LOBYTE(v130) = 13;
        std::wstring::~wstring(v115);
        v66 = (unsigned __int8 (__thiscall ***)(_DWORD))v100[5];
        if ( v66 )
        {
          if ( (**v66)(v66) )
            break;
        }
        Sleep(0xC8u);
        if ( !(*(unsigned __int8 (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 12))(CPRTSimulator::Instance) )
          goto LABEL_88;
      }
      (*(void (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 16))(CPRTSimulator::Instance);
    }
LABEL_88:
    byte_10284F38 = 0;
    HIDWORD(v92) = "..done";
    *(_BYTE *)(v5 + 2417) = 0;
    LogPrintf((const char *)HIDWORD(v92));
    *(float *)&v94 = COERCE_FLOAT(&v87);
    std::string::string(&v87, &unk_101C2DB6);
    v96 = COERCE_FLOAT(&v80);
    LOBYTE(v130) = 22;
    std::string::string(&v80, &unk_101C2DB7);
    LOBYTE(v130) = 23;
    v67 = Editor::Instance();
    LOBYTE(v130) = 13;
    Editor::SetCompiling(
      v67,
      0,
      v80,
      v81,
      v82,
      v83,
      v84,
      v85,
      v86,
      v87,
      v88,
      v89,
      v90,
      v91,
      SLODWORD(v92),
      SHIDWORD(v92));
    *((_BYTE *)v100 + 1) = 1;
    if ( (*(unsigned __int8 (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 36))(CPRTSimulator::Instance) )
    {
      v68 = (*(int (__thiscall **)(struct CPRTSimulator *))(*(_DWORD *)CPRTSimulator::Instance + 40))(CPRTSimulator::Instance);
      v69 = std::string::string(v118, v68);
      LOBYTE(v130) = 24;
      v70 = std::operator+<char>(v119, "Compiling Aborted/Failed: ", v69);
      LOBYTE(v130) = 25;
      v71 = (const char *)std::string::c_str(v70);
      Warning(v71);
      LOBYTE(v130) = 24;
      std::string::~string(v119);
      LOBYTE(v130) = 13;
      std::string::~string(v118);
    }
    HIDWORD(v92) = "done!\n";
    *((_BYTE *)v100 + 1) = 0;
    LogPrintf((const char *)HIDWORD(v92));
    LOBYTE(v130) = 12;
    PRTSettings::~PRTSettings((PRTSettings *)v125);
    LOBYTE(v130) = 10;
    Texture::~Texture(v121);
    LOBYTE(v130) = 7;
    std::string::~string(v114);
    v2 = v100;
  }
  v72 = std::operator!=<char>(v5 + 2383, &unk_101C2DBA);
  *(float *)&v94 = COERCE_FLOAT(&v80);
  if ( v72 )
  {
    std::string::string(&v80, ".prt");
    v96 = COERCE_FLOAT(&v73);
    LOBYTE(v130) = 26;
    std::string::string(&v73, v5 + 2383);
  }
  else
  {
    std::string::string(&v80, ".prt");
    v96 = COERCE_FLOAT(&v73);
    LOBYTE(v130) = 27;
    std::string::string(&v73, v98);
  }
  LOBYTE(v130) = 7;
  sub_1007BF40(v2, (int)&v87, v73, v74, v75, v76, v77, v78, v79, v80, v81, v82, v83, v84, v85, v86);
  (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD))(*(_DWORD *)v5 + 52))(
    v5,
    v87,
    v88,
    v89,
    v90,
    v91,
    LODWORD(v92),
    HIDWORD(v92));
  ModelFrame::SetMesh(a2, (struct Mesh *)v5, 1);
  if ( v107 )
    operator delete(v107);
  v107 = 0;
  v108 = 0;
  v109 = 0;
  if ( v103 )
    operator delete(v103);
  v103 = 0;
  v104 = 0;
  v105 = 0;
  LOBYTE(v130) = 4;
  std::string::~string(v117);
  LOBYTE(v130) = 2;
  std::string::~string(v113);
  v130 = -1;
  std::string::~string(v116);
  return 1;
}
