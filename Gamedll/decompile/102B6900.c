/*
 * func-name: ?PrintStats@Game@@QAEXPAVCanvas@@@Z_0
 * func-address: 0x102b6900
 * callers: 0x10002a22
 * callees: 0x10003f58, 0x100075db, 0x1000a097, 0x1000a3a8, 0x1000adc6, 0x1000e56b, 0x1000f885, 0x10012837, 0x1001344e, 0x100145e7, 0x102c9fe0
 */

void __userpurge Game::PrintStats(Game *this@<ecx>, float a2, int a3, int *a4)
{
  int v5; // ecx
  int v6; // edi
  int v7; // eax
  float v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14; // eax
  double v15; // st7
  double v16; // st7
  double v17; // st7
  double v18; // st7
  int v19; // eax
  double v20; // st7
  double v21; // st7
  double v22; // st7
  double v23; // st7
  double v24; // st7
  double v25; // st7
  double v26; // st7
  double v27; // st7
  AudioDevice *v28; // eax
  AudioDevice *v29; // eax
  double v30; // st7
  int v31; // eax
  double v32; // st7
  double v33; // st7
  double v34; // st7
  int v35; // ebp
  CameraHandler *v36; // eax
  CameraHandler *v37; // eax
  CameraHandler *v38; // eax
  struct Camera *Camera; // eax
  int v40; // ebp
  CameraHandler *v41; // eax
  CameraHandler *v42; // eax
  CameraHandler *v43; // eax
  struct Camera *v44; // eax
  unsigned int v45; // ebp
  int v46; // eax
  int v47; // eax
  int v48; // eax
  void (**v49)(_DWORD, _DWORD, int, _DWORD, _DWORD, const char *, ...); // ebp
  int v50; // eax
  void (*v51)(_DWORD, _DWORD, int, _DWORD, _DWORD, const char *, ...); // ecx
  int v52; // eax
  double v53; // st7
  int v54; // [esp+468h] [ebp-44h] BYREF
  int v55; // [esp+46Ch] [ebp-40h]
  int v56; // [esp+470h] [ebp-3Ch] BYREF
  int v57; // [esp+474h] [ebp-38h]
  int v58; // [esp+478h] [ebp-34h]
  BOOL v59; // [esp+47Ch] [ebp-30h]
  double v60; // [esp+480h] [ebp-2Ch]
  __int64 v61; // [esp+488h] [ebp-24h]
  int v62; // [esp+490h] [ebp-1Ch]
  int v63; // [esp+494h] [ebp-18h]
  int v64; // [esp+4A0h] [ebp-Ch] BYREF
  unsigned int v65; // [esp+4A4h] [ebp-8h] BYREF
  int v66; // [esp+4A8h] [ebp-4h] BYREF

  v6 = Profiler::Get();
  if ( *((_BYTE *)this + 34) )
  {
    v7 = RenderDevice::Instance(v5);
    HIDWORD(v61) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v7 + 328))(v7, 500, 0);
    a2 = COERCE_FLOAT(&v56);
    std::string::string(&v56, "Drawn");
    v8 = *(float *)&a4;
    (*(void (__thiscall **)(int *, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*a4 + 36))(
      a4,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v10 = RenderDevice::Instance(v9);
    HIDWORD(v61) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v10 + 320))(v10, 550000, 0);
    a4 = &v56;
    std::string::string(&v56, "Tris");
    (*(void (__thiscall **)(float, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8) + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v12 = RenderDevice::Instance(v11);
    HIDWORD(v61) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v12 + 324))(v12, 550000, 0);
    a4 = &v56;
    std::string::string(&v56, "Verts");
    (*(void (__thiscall **)(float, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8) + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v14 = RenderDevice::Instance(v13);
    HIDWORD(v61) = (*(int (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v14 + 332))(v14, 5, 0);
    a4 = &v56;
    std::string::string(&v56, "Dynamic");
    (*(void (__thiscall **)(float, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8) + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v15 = *(float *)(v6 + 80) / (double)*(int *)(v6 + 64);
    v61 = 25;
    HIDWORD(v60) = (int)v15;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "RenderMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v16 = *(float *)(v6 + 76) / (double)*(int *)(v6 + 64);
    v61 = 15;
    HIDWORD(v60) = (int)v16;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "PreRenderMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v17 = *(float *)(v6 + 84) / (double)*(int *)(v6 + 64);
    v61 = 15;
    HIDWORD(v60) = (int)v17;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "PostRenderMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v18 = *(float *)(v6 + 104) / (double)*(int *)(v6 + 64);
    v61 = 5;
    HIDWORD(v60) = (int)v18;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "FXMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v19 = *(_DWORD *)(v6 + 52) / *(_DWORD *)(v6 + 64);
    v61 = 60;
    HIDWORD(v60) = v19;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "FXDraws");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v20 = *(float *)(v6 + 120) / (double)*(int *)(v6 + 64);
    v61 = 5;
    HIDWORD(v60) = (int)v20;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "ScriptMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 25;
    HIDWORD(v60) = (int)(*(float *)(v6 + 132) / (double)*(int *)(v6 + 64));
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "PresMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v21 = *(float *)(v6 + 108) / (double)*(int *)(v6 + 64);
    v61 = 5;
    HIDWORD(v60) = (int)v21;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "TickMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v22 = *(float *)(v6 + 112) / (double)*(int *)(v6 + 64);
    v61 = 15;
    HIDWORD(v60) = (int)v22;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "TickPhysicsMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v23 = *(float *)(v6 + 100) / (double)*(int *)(v6 + 64);
    v61 = 10;
    HIDWORD(v60) = (int)v23;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "GameMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v24 = *(float *)(v6 + 96) / (double)*(int *)(v6 + 64);
    v61 = 5;
    HIDWORD(v60) = (int)v24;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "PhysicsMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v25 = *(float *)(v6 + 124) / (double)*(int *)(v6 + 64);
    v61 = 2;
    HIDWORD(v60) = (int)v25;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "SubMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v26 = *(float *)(v6 + 132) / (double)*(int *)(v6 + 64);
    v61 = 2;
    HIDWORD(v60) = (int)v26;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "PresentMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v27 = *(float *)(v6 + 68) / (double)*(int *)(v6 + 64);
    v61 = 5;
    HIDWORD(v60) = (int)v27;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "BatchMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 100;
    v28 = (AudioDevice *)AudioDevice::Instance();
    HIDWORD(v61) = AudioDevice::GetSoundCount(v28);
    a4 = &v56;
    std::string::string(&v56, "AudioCount");
    (*(void (__thiscall **)(float, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8) + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 16;
    v29 = (AudioDevice *)AudioDevice::Instance();
    HIDWORD(v61) = AudioDevice::GetSoundActiveCount(v29);
    a4 = &v56;
    std::string::string(&v56, "AudioActiveCount");
    (*(void (__thiscall **)(float, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8) + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v30 = *(float *)(v6 + 128) / (double)*(int *)(v6 + 64);
    v61 = 5;
    HIDWORD(v60) = (int)v30;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "AudioMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v31 = *(_DWORD *)(v6 + 60) / *(_DWORD *)(v6 + 64);
    v61 = 3;
    HIDWORD(v60) = v31;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "Actors");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v32 = *(float *)(v6 + 116) / (double)*(int *)(v6 + 64);
    v61 = 3;
    HIDWORD(v60) = (int)v32;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "LightMS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v33 = Profiler::GetTotalMS((Profiler *)v6) / (double)*(int *)(v6 + 64);
    v61 = 4294967276LL;
    a2 = v33;
    HIDWORD(v60) = (int)(1000.0 / a2);
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "Expected FPS");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v34 = *(float *)(v6 + 136) / (double)*(int *)(v6 + 64);
    v61 = 100;
    HIDWORD(v60) = (int)v34;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "All Elesp");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v35 = *(_DWORD *)LODWORD(v8);
    HIDWORD(v61) = 0;
    v36 = CameraHandler::Instance();
    *(double *)&v61 = *((float *)CameraHandler::GetCamera(v36, SBYTE4(v61)) + 90);
    HIDWORD(v60) = 0;
    v37 = CameraHandler::Instance();
    v60 = *((float *)CameraHandler::GetCamera(v37, SBYTE4(v60)) + 89);
    v59 = 0;
    v38 = CameraHandler::Instance();
    Camera = CameraHandler::GetCamera(v38, v59);
    (*(void (**)(float, _DWORD, int, _DWORD, _DWORD, const char *, ...))(v35 + 44))(
      COERCE_FLOAT(LODWORD(v8)),
      0,
      -16711936,
      20.0,
      20.0,
      "Loc: %.2f,%.2f,%.2f",
      *((float *)Camera + 88));
    v40 = *(_DWORD *)LODWORD(v8);
    HIDWORD(v61) = 0;
    v41 = CameraHandler::Instance();
    *(double *)&v61 = *((float *)CameraHandler::GetCamera(v41, SBYTE4(v61)) + 96);
    HIDWORD(v60) = 0;
    v42 = CameraHandler::Instance();
    v60 = *((float *)CameraHandler::GetCamera(v42, SBYTE4(v60)) + 95);
    v59 = 0;
    v43 = CameraHandler::Instance();
    v44 = CameraHandler::GetCamera(v43, v59);
    (*(void (**)(float, _DWORD, int, _DWORD, _DWORD, const char *, ...))(v40 + 44))(
      COERCE_FLOAT(LODWORD(v8)),
      0,
      -16711936,
      20.0,
      40.0,
      "Dir: %.2f,%.2f,%.2f",
      *((float *)v44 + 94));
    if ( sub_1000E56B(v62, v63) )
    {
      HIDWORD(v61) = &v66;
      LODWORD(v61) = &v64;
      sub_1000E56B((int)&a2, (int)&v65);
      sub_100075DB(SLODWORD(v60), SHIDWORD(v60), v61, SHIDWORD(v61));
      (*(void (**)(float, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)LODWORD(v8) + 44))(
        COERCE_FLOAT(LODWORD(v8)),
        0,
        -16711936,
        20.0,
        80.0,
        "SendBytes: %d",
        a2);
      (*(void (**)(float, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)LODWORD(v8) + 44))(
        COERCE_FLOAT(LODWORD(v8)),
        0,
        -16711936,
        20.0,
        100.0,
        "SendCount: %d",
        v65);
      (*(void (**)(float, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)LODWORD(v8) + 44))(
        COERCE_FLOAT(LODWORD(v8)),
        0,
        -16711936,
        20.0,
        120.0,
        "RecvBytes: %d",
        v64);
      (*(void (**)(float, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)LODWORD(v8) + 44))(
        COERCE_FLOAT(LODWORD(v8)),
        0,
        -16711936,
        20.0,
        140.0,
        "RecvCount: %d",
        v66);
    }
    v45 = 0;
    a2 = 0.0;
    v64 = 180;
    while ( 1 )
    {
      v46 = *((_DWORD *)this + 31);
      v65 = v45;
      if ( !v46 || v45 >= (*((_DWORD *)this + 32) - v46) / 28 )
        break;
      v47 = *((_DWORD *)this + 31);
      if ( !v47 || v45 >= (*((_DWORD *)this + 32) - v47) / 28 )
        _invalid_parameter_noinfo();
      if ( (unsigned __int8)std::operator!=<char>(LODWORD(a2) + *((_DWORD *)this + 31), &unk_10324E5E) )
      {
        v48 = *((_DWORD *)this + 31);
        if ( !v48 || v45 >= (*((_DWORD *)this + 32) - v48) / 28 )
          _invalid_parameter_noinfo();
        v49 = (void (**)(_DWORD, _DWORD, int, _DWORD, _DWORD, const char *, ...))(*(_DWORD *)LODWORD(v8) + 44);
        v50 = std::string::c_str(LODWORD(a2) + *((_DWORD *)this + 31));
        v51 = *v49;
        *((float *)&v60 + 1) = (float)v64;
        v51(LODWORD(v8), 0, -16711936, 20.0, HIDWORD(v60), "%s", v50);
        v45 = v65;
      }
      v64 += 20;
      ++v45;
      LODWORD(a2) += 28;
    }
    (*(void (__cdecl **)(float, _DWORD, int, _DWORD, _DWORD, void *, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8) + 44))(
      COERCE_FLOAT(LODWORD(v8)),
      0,
      -926391196,
      100.0,
      100.0,
      &unk_103250C0,
      COERCE_UNSIGNED_INT64(*((float *)this + 28)),
      HIDWORD(COERCE_UNSIGNED_INT64(*((float *)this + 28))));
    v61 = 100;
    HIDWORD(v60) = *((_DWORD *)GameClient::RobotManager::Instance() + 3);
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "NumRobot:");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 200;
    HIDWORD(v60) = *((_DWORD *)GameClient::EstabManager::Instance() + 4);
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "NumEstab:");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 100;
    HIDWORD(v60) = *((_DWORD *)GameClient::EquipManager::Instance() + 3);
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "NumEquip:");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 100;
    HIDWORD(v60) = *((_DWORD *)GameClient::SkillManager::Instance() + 3);
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "NumSkill:");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v61 = 100;
    HIDWORD(v60) = *((_DWORD *)GameClient::AuraManager::Instance() + 3);
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "NumAura:");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
    v52 = *(_DWORD *)(dword_103B6670 + 20);
    v61 = 100;
    HIDWORD(v60) = v52;
    a2 = COERCE_FLOAT(&v54);
    std::string::string(&v54, "NumCharacter:");
    (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                                 + 36))(
      COERCE_FLOAT(LODWORD(v8)),
      v54,
      v55,
      v56,
      v57,
      v58,
      v59,
      LODWORD(v60),
      HIDWORD(v60),
      v61,
      HIDWORD(v61));
  }
  else
  {
    v8 = a2;
    *(_DWORD *)(LODWORD(a2) + 48) = 22;
  }
  v53 = *(float *)(v6 + 140) / (double)*(int *)(v6 + 64);
  v61 = 4294967276LL;
  HIDWORD(v60) = (int)(1000.0 / v53);
  a2 = COERCE_FLOAT(&v54);
  std::string::string(&v54, "FPS");
  (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                               + 36))(
    COERCE_FLOAT(LODWORD(v8)),
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    LODWORD(v60),
    HIDWORD(v60),
    v61,
    HIDWORD(v61));
  sub_1000E56B(100, 0);
  HIDWORD(v60) = sub_100145E7();
  a2 = COERCE_FLOAT(&v54);
  std::string::string(&v54, "NetPing");
  (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                               + 36))(
    COERCE_FLOAT(LODWORD(v8)),
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    LODWORD(v60),
    HIDWORD(v60),
    v61,
    HIDWORD(v61));
  HIDWORD(v60) = (int)(*(double *)(sub_1000E56B(100, 0) + 160) * 1000.0);
  a2 = COERCE_FLOAT(&v54);
  std::string::string(&v54, "LogicPing");
  (*(void (__thiscall **)(float, int, int, int, int, int, BOOL, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)LODWORD(v8)
                                                                                               + 36))(
    COERCE_FLOAT(LODWORD(v8)),
    v54,
    v55,
    v56,
    v57,
    v58,
    v59,
    LODWORD(v60),
    HIDWORD(v60),
    v61,
    HIDWORD(v61));
  Profiler::Update((Profiler *)v6);
}
