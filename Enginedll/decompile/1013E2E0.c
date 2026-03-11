/*
 * func-name: ?Load@World@@QAE_NV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
 * func-address: 0x1013e2e0
 * callers: 0x100aec90
 * callees: 0x1007bf30, 0x1007dcf0, 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007ec70, 0x100971c0, 0x10097220, 0x100e2550, 0x10101210, 0x10102270, 0x10103770, 0x10106b20, 0x10108550, 0x10116f50, 0x10116f70, 0x101189f0, 0x1011acf0, 0x101370c0, 0x10137300, 0x10138380, 0x1013e1c0, 0x1013ec20, 0x1013ed50, 0x1016ed30, 0x1016f670, 0x1017c0d0, 0x1017e0a0, 0x101a2500, 0x101a252e, 0x101a2534
 */

char __thiscall World::Load(World *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  struct EventAttemper *v10; // eax
  int v11; // edi
  int v12; // ebp
  int *v13; // edi
  void *v14; // ebp
  Profiler *v15; // eax
  bool v16; // zf
  struct RenderDevice *v17; // eax
  bool v18; // al
  LARGE_INTEGER *v19; // eax
  int v20; // eax
  int v21; // ebp
  int v22; // eax
  int v23; // eax
  int v24; // ebp
  int v25; // eax
  int v26; // eax
  int v27; // ebp
  int v28; // eax
  int v29; // eax
  char Media; // al
  const char *v31; // eax
  int last_of; // eax
  int v34; // eax
  int v35; // eax
  PostProcess *v36; // eax
  void (__thiscall *v37)(World *); // edx
  CRETimer *v38; // eax
  LARGE_INTEGER *v39; // eax
  CRETimer *v40; // eax
  unsigned int i; // edi
  int v42; // ecx
  int v43; // eax
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // ecx
  int v49; // ecx
  _DWORD *v50; // eax
  int *v51; // edi
  void *v52; // ebp
  char v53; // dl
  float v54; // eax
  struct EventAttemper *v55; // eax
  int v56; // esi
  int v57; // eax
  size_t v58; // edi
  const void *v59; // eax
  char v60; // [esp-8h] [ebp-FCh] BYREF
  int v61; // [esp-4h] [ebp-F8h]
  int v62; // [esp+0h] [ebp-F4h]
  int v63; // [esp+4h] [ebp-F0h]
  int v64; // [esp+8h] [ebp-ECh]
  int v65; // [esp+Ch] [ebp-E8h]
  int v66; // [esp+10h] [ebp-E4h] BYREF
  int v67; // [esp+14h] [ebp-E0h] BYREF
  int v68; // [esp+18h] [ebp-DCh]
  int v69; // [esp+1Ch] [ebp-D8h]
  __int64 v70; // [esp+20h] [ebp-D4h]
  int v71; // [esp+28h] [ebp-CCh]
  size_t v72; // [esp+2Ch] [ebp-C8h]
  char v73; // [esp+40h] [ebp-B4h]
  float v74; // [esp+44h] [ebp-B0h]
  float v75; // [esp+48h] [ebp-ACh]
  float v76; // [esp+4Ch] [ebp-A8h]
  char *v77; // [esp+50h] [ebp-A4h]
  _BYTE v78[4]; // [esp+54h] [ebp-A0h] BYREF
  void *v79; // [esp+58h] [ebp-9Ch]
  int v80; // [esp+5Ch] [ebp-98h]
  int v81; // [esp+60h] [ebp-94h]
  float v82; // [esp+64h] [ebp-90h]
  float v83; // [esp+68h] [ebp-8Ch]
  float v84; // [esp+6Ch] [ebp-88h]
  _DWORD v85[6]; // [esp+70h] [ebp-84h] BYREF
  char v86; // [esp+88h] [ebp-6Ch]
  char v87; // [esp+89h] [ebp-6Bh]
  float v88; // [esp+8Ch] [ebp-68h]
  float v89; // [esp+90h] [ebp-64h]
  _BYTE v90[28]; // [esp+94h] [ebp-60h] BYREF
  _BYTE v91[28]; // [esp+B0h] [ebp-44h] BYREF
  _BYTE v92[28]; // [esp+CCh] [ebp-28h] BYREF
  int v93; // [esp+F0h] [ebp-4h]

  v93 = 0;
  v10 = EventAttemper::Instance();
  v11 = EventAttemper::AddEvent(v10, 9, 1, 0.0, 0) + 36;
  sub_101370C0(v11, 4u);
  v12 = a9;
  *(_DWORD *)(*(_DWORD *)(v11 + 4) + *(_DWORD *)(v11 + 8)) = a9;
  *(_DWORD *)(v11 + 8) += 4;
  sub_1013ED50(&a2);
  v13 = (int *)*((_DWORD *)this + 189);
  *((_DWORD *)this + 804) = v12;
  if ( v13 )
  {
    v14 = (void *)*v13;
    if ( *v13 )
    {
      sub_10102270(*v13);
      operator delete(v14);
      *v13 = 0;
    }
    operator delete(v13);
    *((_DWORD *)this + 189) = 0;
  }
  v15 = Profiler::Get();
  Profiler::Reset(v15);
  v16 = *((_BYTE *)this + 20) == 0;
  *((_BYTE *)this + 80) = 1;
  *((_BYTE *)this + 82) = 0;
  *((_DWORD *)this + 132) = 0;
  v18 = 0;
  if ( v16 )
  {
    v17 = RenderDevice::Instance();
    if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v17 + 96))(v17) )
      v18 = 1;
  }
  *((_BYTE *)this + 781) = v18;
  v19 = (LARGE_INTEGER *)REGetGlobalTimer();
  CRETimer::StartMiniTimer(v19);
  v20 = *((_DWORD *)this + 806);
  if ( v20 && (*((_DWORD *)this + 807) - v20) >> 2 )
    World::UnLoad(this);
  if ( !*((_BYTE *)Editor::Instance() + 2056) )
  {
    v74 = COERCE_FLOAT(std::string::find(&a2, ".xml", 0));
    if ( LODWORD(v74) != std::string::npos )
    {
      v21 = std::string::string(v90, ".reb");
      LOBYTE(v93) = 1;
      v22 = std::string::substr(&a2, v92, 0, LODWORD(v74));
      LOBYTE(v93) = 2;
      v23 = std::operator+<char>(v91, v22, v21);
      LOBYTE(v93) = 3;
      std::string::operator=(&a2, v23);
      LOBYTE(v93) = 2;
      std::string::~string(v91);
      LOBYTE(v93) = 1;
      std::string::~string(v92);
      LOBYTE(v93) = 0;
      std::string::~string(v90);
    }
  }
  v73 = 1;
  if ( FindMedia((int)&a2, (int)"Maps", 0, 0) || FindMedia((int)&a2, (int)"Models", 0, 0) )
    goto LABEL_24;
  v74 = COERCE_FLOAT(std::string::find(&a2, ".xml", 0));
  if ( LODWORD(v74) != std::string::npos )
  {
    v24 = std::string::string(v91, ".reb");
    LOBYTE(v93) = 4;
    v25 = std::string::substr(&a2, v92, 0, LODWORD(v74));
    LOBYTE(v93) = 5;
    v26 = std::operator+<char>(v90, v25, v24);
    LOBYTE(v93) = 6;
    std::string::operator=(&a2, v26);
    LOBYTE(v93) = 5;
    std::string::~string(v90);
    LOBYTE(v93) = 4;
LABEL_21:
    std::string::~string(v92);
    LOBYTE(v93) = 0;
    std::string::~string(v91);
    goto LABEL_22;
  }
  v74 = COERCE_FLOAT(std::string::find(&a2, ".reb", 0));
  if ( LODWORD(v74) != std::string::npos )
  {
    v27 = std::string::string(v91, ".xml");
    LOBYTE(v93) = 7;
    v28 = std::string::substr(&a2, v92, 0, LODWORD(v74));
    LOBYTE(v93) = 8;
    v29 = std::operator+<char>(v90, v28, v27);
    LOBYTE(v93) = 9;
    std::string::operator=(&a2, v29);
    LOBYTE(v93) = 8;
    std::string::~string(v90);
    LOBYTE(v93) = 7;
    goto LABEL_21;
  }
LABEL_22:
  v73 = 1;
  if ( FindMedia((int)&a2, (int)"Maps", 0, 0) || (Media = FindMedia((int)&a2, (int)"Models", 0, 0)) != 0 )
LABEL_24:
    Media = v73;
  if ( !a7 || Media )
  {
    last_of = std::string::find_last_of(&a2, ".", std::string::npos);
    v34 = std::string::substr(&a2, v90, 0, last_of);
    v75 = COERCE_FLOAT(&v67);
    LOBYTE(v93) = 10;
    std::operator+<char>(&v67, v34, ".ini");
    sub_1017E0A0(v67, v68, v69, v70, HIDWORD(v70), v71, v72);
    LOBYTE(v93) = 0;
    std::string::~string(v90);
    std::string::operator=((char *)this + 3188, &a2);
    SkySettings::Reset((World *)((char *)this + 3288));
    if ( World::m_RegisterWorld )
      World::m_RegisterWorld(this);
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v72 = (size_t)this;
    LOBYTE(v93) = 11;
    v35 = std::string::c_str(&a2);
    v75 = COERCE_FLOAT(&v66);
    std::string::string(&v66, v35);
    Serializer::LoadWorld(v78, v66, v67, v68, v69, v70, SHIDWORD(v70), v71, (const char *)v72);
    if ( !*((_BYTE *)Editor::Instance() + 2056) )
    {
      v72 = (size_t)this + 784;
      v36 = PostProcess::Instance();
      PostProcess::CreateFXFromConfigFile(v36, (struct ConfigFile *)v72);
    }
    v37 = *(void (__thiscall **)(World *))(*(_DWORD *)this + 16);
    *((float *)this + 843) = 14.5;
    *((float *)this + 845) = 1.0;
    *((_BYTE *)this + 3289) = 0;
    v37(this);
    if ( !*((_BYTE *)Editor::Instance() + 2056) )
      World::InitializeScripts(this);
    v38 = REGetGlobalTimer();
    v74 = CRETimer::StopMiniTimer(v38) / 1000.0;
    LogPrintf("Entire world load took %f secs.", v74);
    v84 = *((float *)Profiler::Get() + 36);
    v83 = *((float *)Profiler::Get() + 37);
    v82 = *((float *)Profiler::Get() + 39);
    v75 = *((float *)Profiler::Get() + 38);
    v39 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v39);
    v88 = 100.0;
    v86 = 1;
    v89 = 100.0;
    v85[4] = 0;
    v85[1] = 0;
    LOWORD(v85[0]) = 0;
    v87 = 0;
    v85[2] = 0;
    v85[5] = 0;
    v85[3] = GetTickCount();
    LOBYTE(v93) = 12;
    if ( *((_BYTE *)Editor::Instance() + 2056) )
      goto LABEL_36;
    v76 = COERCE_FLOAT(&v67);
    std::string::string(&v67, &unk_101CB50F);
    v77 = &v60;
    LOBYTE(v93) = 13;
    std::string::string(&v60, "PRTAutoCompile");
    LOBYTE(v93) = 14;
    Engine::Instance();
    LOBYTE(v93) = 12;
    if ( !(unsigned __int8)sub_1017C0D0(v60, v61, v62, v63, v64, v65, v66, v67, v68, v69, v70, HIDWORD(v70), v71, v72) )
LABEL_36:
      v86 = 0;
    sub_1007DCF0(v85, (int)this);
    v40 = REGetGlobalTimer();
    v76 = CRETimer::StopMiniTimer(v40) / 1000.0;
    LogPrintf(
      "(Seconds) Textures: %f. Meshes (Load: %f Setup: %f). Shaders: %f. Compile/LoadPRT: %f Unaccounted time: %f",
      v84,
      v83,
      v75,
      v82,
      v76,
      v74 - (v83 + v84 + v82));
    nullsub_2((int)this);
    for ( i = 0; ; ++i )
    {
      v42 = *((_DWORD *)this + 806);
      if ( !v42 || i >= (*((_DWORD *)this + 807) - v42) >> 2 )
        break;
      v43 = *((_DWORD *)this + 806);
      if ( *(_BYTE *)(*(_DWORD *)(v43 + 4 * i) + 696) )
      {
        if ( !v43 || i >= (*((_DWORD *)this + 807) - v43) >> 2 )
          invalid_parameter_noinfo();
        v44 = *(_DWORD *)(*((_DWORD *)this + 806) + 4 * i);
        v45 = *(_DWORD *)(v44 + 388);
        v46 = v44 + 384;
        if ( v45 && (*(_DWORD *)(v46 + 8) - v45) >> 2 && !*((_BYTE *)Editor::Instance() + 2122) )
        {
          v47 = *((_DWORD *)this + 806);
          if ( !v47 || i >= (*((_DWORD *)this + 807) - v47) >> 2 )
            invalid_parameter_noinfo();
          *(_BYTE *)(*(_DWORD *)(*((_DWORD *)this + 806) + 4 * i) + 1012) = 1;
        }
        v48 = *((_DWORD *)this + 806);
        if ( !v48 || i >= (*((_DWORD *)this + 807) - v48) >> 2 )
          invalid_parameter_noinfo();
        v49 = *(_DWORD *)(*((_DWORD *)this + 806) + 4 * i);
        (*(void (__thiscall **)(int))(*(_DWORD *)v49 + 60))(v49);
      }
    }
    if ( !*((_DWORD *)this + 189) )
    {
      v50 = operator new(0x10u);
      if ( v50 )
      {
        *v50 = 0;
        v50[1] = 0;
        v50[2] = 0;
        v50[3] = 0;
      }
      else
      {
        v50 = 0;
      }
      *((_DWORD *)this + 189) = v50;
    }
    v51 = (int *)*((_DWORD *)this + 189);
    v52 = (void *)*v51;
    v16 = *v51 == 0;
    v53 = *((_BYTE *)this + 748);
    v75 = *((float *)this + 188);
    v73 = v53;
    if ( !v16 )
    {
      sub_10102270((int)v52);
      operator delete(v52);
      *v51 = 0;
    }
    v16 = v73 == 0;
    v54 = v75;
    v51[1] = (int)this;
    *((float *)v51 + 3) = v54;
    v51[2] = 4;
    if ( !v16 )
      v51[2] = 8;
    sub_10103770(v51);
    v72 = 1;
    *(float *)&v71 = 0.0;
    v70 = 0x100000009LL;
    *((_BYTE *)this + 80) = 0;
    v55 = EventAttemper::Instance();
    v56 = EventAttemper::AddEvent(v55, v70, HIDWORD(v70), v71, v72) + 36;
    sub_101370C0(v56, 4u);
    *(_DWORD *)(*(_DWORD *)(v56 + 4) + *(_DWORD *)(v56 + 8)) = a9;
    *(_DWORD *)(v56 + 8) += 4;
    v57 = std::string::size(&a2);
    sub_1013EC20(v57);
    v58 = std::string::length(&a2);
    sub_101370C0(v56, v58 + 4);
    v72 = v58;
    v59 = (const void *)std::string::c_str(&a2);
    memcpy((void *)(*(_DWORD *)(v56 + 8) + *(_DWORD *)(v56 + 4)), v59, v72);
    *(_DWORD *)(v56 + 8) += v58;
    LOBYTE(v93) = 11;
    nullsub_1();
    if ( v79 )
      operator delete(v79);
    v79 = 0;
    v80 = 0;
    v81 = 0;
    v93 = -1;
    std::string::~string(&a2);
    return 1;
  }
  else
  {
    v31 = (const char *)std::string::c_str(&a2);
    LogPrintf("%s doesn't exist!", v31);
    v93 = -1;
    std::string::~string(&a2);
    return 0;
  }
}
