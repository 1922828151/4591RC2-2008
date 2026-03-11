/*
 * func-name: ?Render@World@@QAEXPAVCamera@@@Z
 * func-address: 0x10139890
 * callers: 0x10088cd0
 * callees: 0x10001370, 0x1000d550, 0x10010060, 0x10011750, 0x10012a30, 0x1001b2e0, 0x10020830, 0x10021e30, 0x10055320, 0x10055360, 0x100562d0, 0x10056380, 0x10063830, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1009fdd0, 0x100a01c0, 0x100a0810, 0x100e2550, 0x101017c0, 0x10104910, 0x10106720, 0x10106760, 0x10106b20, 0x10116f70, 0x10117a10, 0x101189f0, 0x10127d20, 0x101286c0, 0x10128c50, 0x10139150, 0x1013ec70, 0x1013f210, 0x1013f7b0, 0x1013f8f0, 0x1017a0b0, 0x101a2500
 */

void __thiscall World::Render(World *this, struct Camera *a2)
{
  LARGE_INTEGER *v3; // eax
  LARGE_INTEGER *v4; // eax
  _DWORD *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  void (__stdcall *v8)(_DWORD); // edx
  char *v9; // edi
  _DWORD *v10; // ebp
  double v11; // st7
  double v12; // st6
  int v13; // eax
  int v14; // eax
  int v15; // ecx
  _DWORD *v16; // eax
  struct Camera *v17; // ebp
  unsigned int i; // esi
  float *v19; // edx
  double v20; // st7
  double v21; // st6
  double v22; // st7
  float *v23; // eax
  double v24; // st6
  _DWORD *v25; // eax
  int v26; // edx
  struct RenderDevice *v27; // eax
  struct RenderDevice *v28; // eax
  World *v29; // ebx
  struct RenderDevice *v30; // eax
  CRETimer *v31; // eax
  unsigned int v32; // esi
  LARGE_INTEGER *v33; // eax
  CRETimer *v34; // eax
  int v35; // eax
  int v36; // ebx
  float *v37; // eax
  _DWORD *v38; // ebp
  int v39; // ebx
  int (__thiscall *v40)(char *); // eax
  int v41; // eax
  int v42; // edi
  _DWORD *v43; // esi
  int v44; // ebx
  const char *v45; // eax
  char *j; // esi
  _DWORD *v47; // eax
  float *v48; // esi
  CRETimer *v49; // eax
  LARGE_INTEGER *v50; // eax
  FXManager *v51; // eax
  float *v52; // esi
  CRETimer *v53; // eax
  LARGE_INTEGER *v54; // eax
  struct PostProcess *v55; // eax
  float v56; // ecx
  char *v57; // eax
  unsigned int v58; // esi
  void (__cdecl *v59)(); // ebx
  char *v60; // ebp
  BatchRenderer *v61; // eax
  ShadowEngine *v62; // eax
  struct RenderDevice *v63; // eax
  unsigned int k; // esi
  CRETimer *v65; // eax
  struct RenderDevice *v66; // eax
  LARGE_INTEGER *v67; // eax
  bool v68; // zf
  BatchRenderer *v69; // eax
  _DWORD *v70; // eax
  char *v71; // ebp
  void (__cdecl *v72)(); // ebx
  char *v73; // ebp
  char *v74; // edx
  int *v75; // ebp
  char *v76; // ebx
  BatchRenderer *v77; // eax
  ShadowEngine *v78; // eax
  struct FXManager *v79; // eax
  int v80; // edx
  _DWORD **v81; // ecx
  unsigned int m; // esi
  float *v83; // esi
  CRETimer *v84; // eax
  LARGE_INTEGER *v85; // eax
  PostProcess *v86; // eax
  PostProcess *v87; // eax
  float *v88; // esi
  CRETimer *v89; // eax
  float v90; // [esp+3Ch] [ebp-C4h]
  float v91; // [esp+3Ch] [ebp-C4h]
  int v92; // [esp+3Ch] [ebp-C4h]
  float v93; // [esp+3Ch] [ebp-C4h]
  float v94; // [esp+40h] [ebp-C0h]
  float v95; // [esp+40h] [ebp-C0h]
  float v96; // [esp+40h] [ebp-C0h]
  float v97; // [esp+40h] [ebp-C0h]
  int v99; // [esp+48h] [ebp-B8h] BYREF
  void *v100; // [esp+4Ch] [ebp-B4h]
  float v101; // [esp+50h] [ebp-B0h]
  int v102; // [esp+54h] [ebp-ACh]
  __int64 v103; // [esp+58h] [ebp-A8h] BYREF
  int v104; // [esp+60h] [ebp-A0h] BYREF
  void *v105; // [esp+64h] [ebp-9Ch]
  int v106; // [esp+68h] [ebp-98h]
  int v107; // [esp+6Ch] [ebp-94h]
  int v108; // [esp+70h] [ebp-90h] BYREF
  void *v109; // [esp+74h] [ebp-8Ch]
  void *Source; // [esp+78h] [ebp-88h]
  int v111; // [esp+7Ch] [ebp-84h]
  float v112[2]; // [esp+80h] [ebp-80h] BYREF
  int v113; // [esp+88h] [ebp-78h] BYREF
  void *v114; // [esp+8Ch] [ebp-74h]
  float v115; // [esp+90h] [ebp-70h]
  float v116; // [esp+94h] [ebp-6Ch]
  int v117[3]; // [esp+98h] [ebp-68h] BYREF
  float v118; // [esp+A4h] [ebp-5Ch] BYREF
  float v119; // [esp+A8h] [ebp-58h]
  float v120; // [esp+ACh] [ebp-54h]
  _BYTE v121[28]; // [esp+B0h] [ebp-50h] BYREF
  float v122[7]; // [esp+CCh] [ebp-34h] BYREF
  int v123; // [esp+E8h] [ebp-18h]
  int v124; // [esp+ECh] [ebp-14h]
  int v125; // [esp+FCh] [ebp-4h]

  v3 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v3);
  if ( *((_BYTE *)this + 726) )
  {
    v4 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v4);
    sub_10020830(*(void ***)(*((_DWORD *)this + 2) + 4));
    *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
    v5 = (_DWORD *)*((_DWORD *)this + 2);
    *((_DWORD *)this + 3) = 0;
    *v5 = v5;
    *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((_DWORD *)this + 2);
  }
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v6 + 216))(v6, 1);
  if ( SkyController::Instance )
  {
    v7 = RenderDevice::Instance();
    v114 = *((void **)this + 7);
    v116 = *((float *)this + 9);
    v113 = *((int *)this + 6);
    v115 = *((float *)this + 8);
    v8 = *(void (__stdcall **)(_DWORD))(*(_DWORD *)v7 + 208);
    v103 = (__int64)(255.0 * v115);
    v8(
      v103
    | (((unsigned int)(__int64)(*(float *)&v114 * 255.0)
      | (((unsigned int)(__int64)(*(float *)&v113 * 255.0) | ((unsigned int)(__int64)(v116 * 255.0) << 8)) << 8)) << 8));
  }
  v9 = (char *)*((_DWORD *)a2 + 37);
  if ( *((_DWORD *)a2 + 36) > (unsigned int)v9 )
    invalid_parameter_noinfo();
  v10 = (_DWORD *)*((_DWORD *)a2 + 36);
  if ( (unsigned int)v10 > *((_DWORD *)a2 + 37) )
    invalid_parameter_noinfo();
  sub_10010060((int *)a2 + 35, v117, (int)a2 + 140, v10, (int)a2 + 140, (int)v9);
  v11 = (double)*((int *)this + 18);
  v12 = *((float *)this + 19) * v11;
  v105 = 0;
  v106 = 0;
  v107 = 0;
  v94 = v11 - v12 * *((float *)this + 16);
  *((float *)a2 + 100) = v94;
  v125 = 0;
  v100 = 0;
  v101 = 0.0;
  v102 = 0;
  v109 = 0;
  Source = 0;
  v111 = 0;
  v68 = *((_BYTE *)this + 84) == 0;
  LOBYTE(v125) = 2;
  if ( v68 )
  {
    sub_10021E30((int)&v104, (int)this + 3236);
    std::vector<Actor *>::operator=((int)&v99, (int)this + 3220);
  }
  else
  {
    v90 = v94 + 10.0;
    v13 = World::EnumerateLightsInSphere((int)&v113, (int)a2 + 352, v90);
    LOBYTE(v125) = 3;
    sub_10021E30((int)&v104, v13);
    LOBYTE(v125) = 2;
    if ( *(float *)&v114 != 0.0 )
      operator delete(v114);
    v14 = World::EnumerateActorsInSphere((int)&v113, 1, 1, (int)a2 + 352, v90);
    LOBYTE(v125) = 4;
    std::vector<Actor *>::operator=((int)&v99, v14);
    LOBYTE(v125) = 2;
    if ( *(float *)&v114 != 0.0 )
      operator delete(v114);
  }
  std::vector<Actor *>::operator=((int)&dword_11241AB8, (int)&v99);
  v15 = v106;
  v16 = v105;
  v17 = a2;
  for ( i = 0; v16 && i < (v15 - (int)v16) >> 2; ++i )
  {
    v9 = (char *)invalid_parameter_noinfo;
    *(_BYTE *)(v16[i] + 1052) = 0;
    v16 = v105;
    if ( !v105 || (v15 = v106, i >= (v106 - (int)v105) >> 2) )
    {
      invalid_parameter_noinfo();
      v15 = v106;
      v16 = v105;
    }
    if ( !*(_BYTE *)(v16[i] + 816) )
    {
      if ( !v16 || i >= (v15 - (int)v16) >> 2 )
      {
        invalid_parameter_noinfo();
        v15 = v106;
        v16 = v105;
      }
      v91 = *(float *)(v16[i] + 1136);
      if ( !v16 || i >= (v15 - (int)v16) >> 2 )
      {
        invalid_parameter_noinfo();
        v15 = v106;
        v16 = v105;
      }
      v19 = (float *)v16[i];
      v20 = v19[214];
      v19 += 214;
      v21 = v20 + v91;
      v22 = v91;
      v95 = v21;
      v112[0] = v19[1] + v91;
      *(float *)&v103 = v19[2] + v91;
      *(float *)v117 = v95;
      v117[1] = SLODWORD(v112[0]);
      v117[2] = v103;
      if ( !v16 || i >= (v15 - (int)v16) >> 2 )
      {
        invalid_parameter_noinfo();
        v16 = v105;
        v22 = v91;
      }
      v23 = (float *)v16[i];
      v24 = v23[214];
      v23 += 214;
      *(float *)&v103 = v24 - v22;
      v112[0] = v23[1] - v22;
      v96 = v23[2] - v22;
      v118 = *(float *)&v103;
      v119 = v112[0];
      v120 = v96;
      sub_10001370(v122, &v118, (float *)v117);
      LOBYTE(v125) = 5;
      v68 = Camera::BoxInFrustum(a2, (const struct BBox *)v122, 0.0, 1) == 0;
      v25 = v105;
      if ( v68 )
      {
        v26 = v106;
        goto LABEL_38;
      }
      if ( !v105 || (v26 = v106, i >= (v106 - (int)v105) >> 2) )
      {
        invalid_parameter_noinfo();
        v26 = v106;
        v25 = v105;
      }
      if ( *(_BYTE *)(v25[i] + 364) )
      {
LABEL_38:
        if ( !v25 || i >= (v26 - (int)v25) >> 2 )
        {
          invalid_parameter_noinfo();
          v26 = v106;
          v25 = v105;
        }
        if ( !*(_BYTE *)(v25[i] + 1452) )
          goto LABEL_42;
      }
      else
      {
LABEL_42:
        if ( !v25 || i >= (v26 - (int)v25) >> 2 )
        {
          invalid_parameter_noinfo();
          v25 = v105;
        }
        *(_BYTE *)(v25[i] + 1052) = 1;
      }
      LOBYTE(v125) = 2;
      sub_1017A0B0(v122);
      v15 = v106;
      v16 = v105;
      continue;
    }
  }
  v27 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v27 + 464))(v27, (char *)a2 + 220);
  v28 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v28 + 476))(v28, (char *)a2 + 156);
  v29 = this;
  if ( *((_BYTE *)this + 781) )
    sub_101017C0(*((_DWORD ***)this + 4), (int)a2, (int)this);
  v30 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v30 + 92))(v30);
  if ( *((_BYTE *)this + 726) )
  {
    v31 = REGetGlobalTimer();
    *(float *)&v103 = CRETimer::StopMiniTimer(v31);
    std::string::string(v121, "PreRender: Other");
    LOBYTE(v125) = 6;
    std::string::string(v122, v121);
    v123 = v103;
    v124 = 1;
    LOBYTE(v125) = 7;
    sub_1013F210(v117, v122);
    LOBYTE(v125) = 6;
    std::string::~string(v122);
    LOBYTE(v125) = 2;
    std::string::~string(v121);
    v17 = a2;
    v29 = this;
  }
  v32 = 0;
  v92 = 0;
  while ( v100 && v32 < (LODWORD(v101) - (int)v100) >> 2 )
  {
    v9 = (char *)*((_DWORD *)v100 + v32);
    if ( *((_BYTE *)v29 + 726) )
    {
      v33 = (LARGE_INTEGER *)REGetGlobalTimer();
      CRETimer::StartMiniTimer(v33);
    }
    (*(void (__thiscall **)(char *, struct Camera *))(*(_DWORD *)v9 + 64))(v9, v17);
    if ( !*((_BYTE *)v29 + 726) )
      goto LABEL_76;
    v34 = REGetGlobalTimer();
    v97 = CRETimer::StopMiniTimer(v34);
    v35 = (*(int (__thiscall **)(char *))(*(_DWORD *)v9 + 100))(v9);
    std::string::string(v121, v35);
    LOBYTE(v125) = 8;
    v36 = sub_1013EC70(v121);
    HIDWORD(v103) = v36;
    if ( this == (World *)-4 )
      invalid_parameter_noinfo();
    v68 = v36 == *((_DWORD *)this + 2);
    LODWORD(v103) = (char *)this + 4;
    if ( v68 || (unsigned __int8)std::operator<<char>(v121, v36 + 12) )
    {
      v112[1] = *((float *)this + 2);
      LODWORD(v112[0]) = (char *)this + 4;
      v37 = v112;
    }
    else
    {
      v37 = (float *)&v103;
    }
    v38 = *(_DWORD **)v37;
    v39 = *((_DWORD *)v37 + 1);
    LOBYTE(v125) = 2;
    std::string::~string(v121);
    v119 = *((float *)this + 2);
    if ( !v38 || v38 != (_DWORD *)((char *)this + 4) )
      invalid_parameter_noinfo();
    if ( v39 != LODWORD(v119) )
    {
      if ( !v38 )
        invalid_parameter_noinfo();
      if ( v39 == v38[1] )
        invalid_parameter_noinfo();
      *(float *)(v39 + 40) = *(float *)(v39 + 40) + v97;
      if ( v39 == v38[1] )
        invalid_parameter_noinfo();
      ++*(_DWORD *)(v39 + 44);
LABEL_76:
      v32 = ++v92;
      v29 = this;
      v17 = a2;
      continue;
    }
    v40 = *(int (__thiscall **)(char *))(*(_DWORD *)v9 + 100);
    *(float *)v117 = v97;
    v41 = v40(v9);
    std::string::string(v121, v41);
    LOBYTE(v125) = 9;
    std::string::string(v122, v121);
    v123 = v117[0];
    v124 = 1;
    LOBYTE(v125) = 10;
    sub_1013F210(&v113, v122);
    LOBYTE(v125) = 9;
    std::string::~string(v122);
    LOBYTE(v125) = 2;
    std::string::~string(v121);
    v32 = ++v92;
    v29 = this;
    v17 = a2;
  }
  if ( *((_BYTE *)v29 + 726) )
  {
    v93 = 0.0;
    v42 = **((_DWORD **)this + 2);
    v43 = (_DWORD *)((char *)this + 4);
    HIDWORD(v103) = v42;
    LODWORD(v103) = (char *)this + 4;
    while ( 1 )
    {
      v44 = *((_DWORD *)this + 2);
      if ( !v43 || v43 != (_DWORD *)((char *)this + 4) )
        invalid_parameter_noinfo();
      if ( v42 == v44 )
        break;
      if ( !v43 )
        invalid_parameter_noinfo();
      if ( v42 == v43[1] )
        invalid_parameter_noinfo();
      if ( v42 == v43[1] )
      {
        invalid_parameter_noinfo();
        if ( v42 == v43[1] )
        {
          invalid_parameter_noinfo();
          if ( v42 == v43[1] )
          {
            invalid_parameter_noinfo();
            if ( v42 == v43[1] )
              invalid_parameter_noinfo();
          }
        }
      }
      v45 = (const char *)std::string::c_str(v42 + 12);
      LogPrintf(
        "PreR --- %.3f %.2f %03d %s",
        *(float *)(v42 + 40) / (double)*(int *)(v42 + 44),
        *(float *)(v42 + 40),
        *(_DWORD *)(v42 + 44),
        v45);
      if ( v42 == v43[1] )
        invalid_parameter_noinfo();
      v93 = *(float *)(v42 + 40) + v93;
      sub_1001B2E0(&v103);
      v42 = HIDWORD(v103);
      v43 = (_DWORD *)v103;
    }
    LogPrintf("PreR --- AllElesp %.2f", v93);
    v9 = *(char **)(*((_DWORD *)this + 2) + 4);
    for ( j = v9; !j[49]; v9 = j )
    {
      sub_10020830(*((void ***)j + 2));
      j = *(char **)j;
      std::string::~string(v9 + 12);
      operator delete(v9);
    }
    v29 = this;
    *(_DWORD *)(*((_DWORD *)this + 2) + 4) = *((_DWORD *)this + 2);
    v47 = (_DWORD *)*((_DWORD *)this + 2);
    *((_DWORD *)this + 3) = 0;
    *v47 = v47;
    *(_DWORD *)(*((_DWORD *)this + 2) + 8) = *((_DWORD *)this + 2);
    v17 = a2;
  }
  v48 = (float *)((char *)Profiler::Get() + 76);
  v49 = REGetGlobalTimer();
  *v48 = CRETimer::StopMiniTimer(v49) + *v48;
  v50 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v50);
  v51 = FXManager::Instance();
  FXManager::Tick(v51, v29);
  v52 = (float *)((char *)Profiler::Get() + 104);
  v53 = REGetGlobalTimer();
  *v52 = CRETimer::StopMiniTimer(v53) + *v52;
  v54 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v54);
  v55 = PostProcess::Instance();
  if ( *((_BYTE *)v55 + 1) && *((_DWORD *)v55 + 3) )
    World::RenderMotionBlur(v29, v17);
  if ( SkyController::Instance && *((World **)SkyController::Instance + 178) == v29 )
    (*(void (__stdcall **)(struct Camera *))(*(_DWORD *)SkyController::Instance + 108))(v17);
  if ( *((_BYTE *)v29 + 762) )
    World::UpdateGlobalPRT(v29);
  v56 = v101;
  v57 = (char *)v100;
  v58 = 0;
  if ( *((_DWORD *)v29 + 189) )
  {
    while ( v57 && v58 < (LODWORD(v56) - (int)v57) >> 2 )
    {
      (*(void (__thiscall **)(_DWORD, struct Camera *))(**(_DWORD **)&v57[4 * v58] + 72))(*(_DWORD *)&v57[4 * v58], v17);
      v57 = (char *)v100;
      if ( !v100 || (v56 = v101, v58 >= (LODWORD(v101) - (int)v100) >> 2) )
      {
        invalid_parameter_noinfo();
        v56 = v101;
        v57 = (char *)v100;
      }
      if ( !*(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 696) )
      {
        if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
        {
          invalid_parameter_noinfo();
          v56 = v101;
          v57 = (char *)v100;
        }
        if ( *(_DWORD *)(*(_DWORD *)&v57[4 * v58] + 716) )
        {
          if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
          {
            invalid_parameter_noinfo();
            v56 = v101;
            v57 = (char *)v100;
          }
          if ( !*(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 816) )
          {
            if ( !*((_BYTE *)this + 781) )
              goto LABEL_127;
            if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
            {
              invalid_parameter_noinfo();
              v56 = v101;
              v57 = (char *)v100;
            }
            if ( !*(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 364) )
            {
LABEL_127:
              if ( v57 && v58 < (LODWORD(v56) - (int)v57) >> 2 )
              {
                v59 = invalid_parameter_noinfo;
              }
              else
              {
                v59 = invalid_parameter_noinfo;
                invalid_parameter_noinfo();
                v56 = v101;
                v57 = (char *)v100;
              }
              if ( *(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 824) )
              {
                if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
                {
                  v59();
                  v57 = (char *)v100;
                }
                std::vector<Actor *>::push_back(&v108, (int *)&v57[4 * v58]);
              }
              else
              {
                if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
                {
                  v59();
                  v56 = v101;
                  v57 = (char *)v100;
                }
                v9 = *(char **)(*(_DWORD *)&v57[4 * v58] + 716);
                if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
                {
                  v59();
                  v56 = v101;
                  v57 = (char *)v100;
                }
                v60 = &v57[4 * v58];
                if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
                {
                  invalid_parameter_noinfo();
                  v57 = (char *)v100;
                }
                (**(void (__thiscall ***)(void *, struct Camera *, World *, _DWORD, int, _DWORD, int))v9)(
                  v9,
                  a2,
                  this,
                  *(unsigned __int8 *)(*(_DWORD *)&v57[4 * v58] + 726),
                  1,
                  *(_DWORD *)v60,
                  1);
              }
              v57 = (char *)v100;
              v56 = v101;
            }
          }
        }
      }
      v17 = a2;
      v29 = this;
      ++v58;
    }
    sub_10104910(*((int **)v29 + 189), v17, &v108);
  }
  else
  {
    while ( v57 && v58 < (LODWORD(v56) - (int)v57) >> 2 )
    {
      (*(void (__thiscall **)(_DWORD, struct Camera *))(**(_DWORD **)&v57[4 * v58] + 72))(*(_DWORD *)&v57[4 * v58], v17);
      v57 = (char *)v100;
      if ( !v100 || (v56 = v101, v58 >= (LODWORD(v101) - (int)v100) >> 2) )
      {
        invalid_parameter_noinfo();
        v56 = v101;
        v57 = (char *)v100;
      }
      if ( *(_DWORD *)(*(_DWORD *)&v57[4 * v58] + 716) )
      {
        if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
        {
          invalid_parameter_noinfo();
          v56 = v101;
          v57 = (char *)v100;
        }
        if ( !*(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 816) )
        {
          if ( !*((_BYTE *)this + 781) )
            goto LABEL_172;
          if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
          {
            invalid_parameter_noinfo();
            v56 = v101;
            v57 = (char *)v100;
          }
          if ( !*(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 364) )
          {
LABEL_172:
            if ( v57 && v58 < (LODWORD(v56) - (int)v57) >> 2 )
            {
              v72 = invalid_parameter_noinfo;
            }
            else
            {
              v72 = invalid_parameter_noinfo;
              invalid_parameter_noinfo();
              v56 = v101;
              v57 = (char *)v100;
            }
            if ( *(_BYTE *)(*(_DWORD *)&v57[4 * v58] + 824) )
            {
              if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
              {
                v72();
                v57 = (char *)v100;
              }
              v9 = (char *)v109;
              v74 = (char *)Source;
              v75 = (int *)&v57[4 * v58];
              if ( v109 && ((_BYTE *)Source - (_BYTE *)v109) >> 2 < (unsigned int)((v111 - (int)v109) >> 2) )
              {
                *(_DWORD *)Source = *v75;
                Source = v74 + 4;
              }
              else
              {
                v76 = (char *)Source;
                if ( v109 > Source )
                  invalid_parameter_noinfo();
                std::vector<Actor *>::insert(&v108, v117, &v108, v76, v75);
              }
            }
            else
            {
              if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
              {
                v72();
                v56 = v101;
                v57 = (char *)v100;
              }
              v9 = *(char **)(*(_DWORD *)&v57[4 * v58] + 716);
              if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
              {
                v72();
                v56 = v101;
                v57 = (char *)v100;
              }
              v73 = &v57[4 * v58];
              if ( !v57 || v58 >= (LODWORD(v56) - (int)v57) >> 2 )
              {
                invalid_parameter_noinfo();
                v57 = (char *)v100;
              }
              (**(void (__thiscall ***)(void *, struct Camera *, World *, _DWORD, int, _DWORD, int))v9)(
                v9,
                a2,
                this,
                *(unsigned __int8 *)(*(_DWORD *)&v57[4 * v58] + 726),
                1,
                *(_DWORD *)v73,
                1);
            }
            v56 = v101;
            v57 = (char *)v100;
          }
        }
      }
      v17 = a2;
      v29 = this;
      ++v58;
    }
  }
  v61 = BatchRenderer::Instance();
  BatchRenderer::PrepareQueuedBatches(v61, v17, v29);
  v62 = ShadowEngine::Instance();
  ShadowEngine::RenderShadowMaps(v62, v29, v17);
  v63 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v63 + 360))(v63);
  k = (unsigned int)Profiler::Get() + 68;
  v65 = REGetGlobalTimer();
  *(float *)k = CRETimer::StopMiniTimer(v65) + *(float *)k;
  v66 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v66 + 92))(v66);
  v67 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v67);
  v68 = *((_BYTE *)v29 + 760) == 0;
  if ( *((_BYTE *)v29 + 760) )
  {
    v69 = BatchRenderer::Instance();
    BatchRenderer::RenderQueuedBatches(v69, v29);
    for ( k = 0; ; ++k )
    {
      v70 = v109;
      if ( !v109 || k >= ((_BYTE *)Source - (_BYTE *)v109) >> 2 )
        break;
      v9 = *(char **)(*((_DWORD *)v109 + k) + 716);
      v71 = (char *)v109 + 4 * k;
      if ( k >= ((_BYTE *)Source - (_BYTE *)v109) >> 2 )
      {
        invalid_parameter_noinfo();
        v70 = v109;
      }
      (*(void (__thiscall **)(char *, _DWORD, struct Camera *, World *, _DWORD, int, _DWORD))(*(_DWORD *)v9 + 4))(
        v9,
        *(float *)(v70[k] + 828),
        a2,
        this,
        *(unsigned __int8 *)(*(_DWORD *)v71 + 726),
        1,
        0);
      v17 = a2;
      v29 = this;
    }
    v68 = *((_BYTE *)v29 + 760) == 0;
  }
  if ( v68 )
  {
    v77 = BatchRenderer::Instance();
    BatchRenderer::ClearAll(v77);
  }
  v78 = ShadowEngine::Instance();
  ShadowEngine::RenderDropShadows(v78, (int)v29, v17, &v99);
  v79 = FXManager::Instance();
  (**(void (__thiscall ***)(struct FXManager *, World *, struct Camera *))v79)(v79, v29, v17);
  FXManager::Instance();
  FXManager::DrawShadedQuads((int)v29, (int)v17, (int)v9, k);
  if ( !byte_10282ED4 && *((_BYTE *)BatchRenderer::Instance() + 1045) )
  {
    v80 = dword_11240D94;
    v81 = (_DWORD **)dword_11240D90;
    for ( m = 0; v81 && m < (v80 - (int)v81) >> 2; ++m )
    {
      if ( GSeconds - *((float *)v81[m] + 5) > 5.0 )
      {
        if ( m >= (v80 - (int)v81) >> 2 )
        {
          invalid_parameter_noinfo();
          v81 = (_DWORD **)dword_11240D90;
        }
        (*(void (__thiscall **)(_DWORD *))(*v81[m] + 156))(v81[m]);
        v80 = dword_11240D94;
        v81 = (_DWORD **)dword_11240D90;
        --m;
      }
    }
  }
  v83 = (float *)((char *)Profiler::Get() + 80);
  v84 = REGetGlobalTimer();
  *v83 = CRETimer::StopMiniTimer(v84) + *v83;
  v85 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v85);
  v86 = PostProcess::Instance();
  PostProcess::PostRender(v86);
  v87 = PostProcess::Instance();
  PostProcess::PostRenderHDR(v87);
  v88 = (float *)((char *)Profiler::Get() + 84);
  v89 = REGetGlobalTimer();
  *v88 = CRETimer::StopMiniTimer(v89) + *v88;
  if ( v109 )
    operator delete(v109);
  v109 = 0;
  Source = 0;
  v111 = 0;
  if ( v100 )
    operator delete(v100);
  v100 = 0;
  v101 = 0.0;
  v102 = 0;
  if ( v105 )
    operator delete(v105);
}
