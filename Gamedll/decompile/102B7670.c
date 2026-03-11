/*
 * func-name: ?NewMap@Game@@QAEPAVWorld@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z_0
 * func-address: 0x102b7670
 * callers: 0x1000d6de
 * callees: 0x10003f58, 0x10004dcc, 0x1000a097, 0x1000aa9c, 0x100109a1, 0x10014669, 0x100172d8, 0x10018e71, 0x102c9d98
 */

// write access to const memory has been detected, the output may be wrong!
World *__thiscall Game::NewMap(int this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, float a9)
{
  unsigned int v10; // ebp
  bool v11; // cc
  World **v12; // eax
  World *v13; // eax
  int (__stdcall *v14)(int, int); // ebx
  World *v15; // eax
  World *v16; // eax
  World *v17; // ecx
  World *v18; // edi
  int v20; // ecx
  int v21; // eax
  int v22; // ecx
  int v23; // eax
  Editor *v24; // eax
  CameraHandler *v25; // eax
  float *v26; // eax
  CameraHandler *v27; // eax
  struct Camera *Camera; // eax
  CameraHandler *v29; // eax
  struct Camera *v30; // eax
  int v31; // ecx
  Editor *v32; // eax
  NxPhysics *v33; // eax
  NxPhysics *v34; // eax
  Editor *v35; // eax
  bool v36; // zf
  int v37; // eax
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  struct CameraHandler *v41; // eax
  World *v42; // ebp
  const void *v43; // eax
  CameraHandler *v44; // eax
  CameraHandler *v45; // eax
  int v46; // [esp+20h] [ebp-DCh] BYREF
  int v47; // [esp+24h] [ebp-D8h] BYREF
  int v48; // [esp+28h] [ebp-D4h]
  int v49; // [esp+2Ch] [ebp-D0h]
  struct Vector *v50; // [esp+30h] [ebp-CCh]
  struct Matrix *v51; // [esp+34h] [ebp-C8h]
  float v52; // [esp+38h] [ebp-C4h]
  float v53; // [esp+3Ch] [ebp-C0h]
  int v54; // [esp+40h] [ebp-BCh]
  int v55; // [esp+44h] [ebp-B8h]
  int v56; // [esp+48h] [ebp-B4h]
  int v57; // [esp+4Ch] [ebp-B0h]
  int v58; // [esp+50h] [ebp-ACh]
  World **v59; // [esp+54h] [ebp-A8h]
  int v60[3]; // [esp+58h] [ebp-A4h] BYREF
  float v61[3]; // [esp+64h] [ebp-98h] BYREF
  _BYTE v62[64]; // [esp+70h] [ebp-8Ch] BYREF
  _BYTE v63[64]; // [esp+B0h] [ebp-4Ch] BYREF
  int v64; // [esp+F8h] [ebp-4h]

  Actor::callback_Landed = 0;
  v10 = Precacher::m_vecSounds[2];
  v11 = Precacher::m_vecSounds[1] <= v10;
  v12 = (World **)&Precacher::m_vecSounds[1];
  v64 = 0;
  v59 = (World **)&Precacher::m_vecSounds[1];
  if ( !v11 )
  {
    _invalid_parameter_noinfo();
    v12 = v59;
  }
  v13 = *v12;
  v11 = (unsigned int)v13 <= Precacher::m_vecSounds[2];
  v59 = (World **)v13;
  if ( !v11 )
  {
    _invalid_parameter_noinfo();
    v13 = (World *)v59;
  }
  sub_10004DCC((int)v60, Precacher::m_vecSounds[0], (int)v13, Precacher::m_vecSounds[0], v10);
  v14 = Editor::Instance;
  *(_BYTE *)(Editor::Instance(v54, v55) + 2076) = 0;
  if ( !*(_DWORD *)(this + 100) )
  {
    v15 = (World *)operator new(0xED4u);
    v59 = (World **)v15;
    LOBYTE(v64) = 1;
    if ( v15 )
      v16 = World::World(v15);
    else
      v16 = 0;
    *(_DWORD *)(this + 100) = v16;
    *((_DWORD *)v16 + 948) = sub_100014D8;
    v17 = *(World **)(this + 100);
    LOBYTE(v64) = 0;
    World::NewWorld(v17);
  }
  v18 = *(World **)(this + 100);
  v59 = (World **)v18;
  if ( std::string::size(&a2) )
  {
    std::string::operator=(this + 40, &a2);
    if ( Engine::HasRenderSystem(*(Engine **)this) )
    {
      v21 = RenderDevice::Instance(v20);
      (*(void (__thiscall **)(int, _DWORD, int))(*(_DWORD *)v21 + 372))(v21, 0, 1);
    }
    v53 = COERCE_FLOAT(&unk_10324E4F);
    *(float *)(this + 96) = 0.0;
    *(_BYTE *)(this + 4) = 0;
    *(_BYTE *)(this + 36) = 1;
    std::string::operator=(this + 68, LODWORD(v53));
    v23 = RenderDevice::Instance(v22);
    (*(void (__thiscall **)(int))(*(_DWORD *)v23 + 384))(v23);
    v24 = (Editor *)Editor::Instance(v54, v55);
    if ( Editor::GetEditorMode(v24) )
    {
      v32 = (Editor *)Editor::Instance(v54, v55);
      Editor::Reset(v32);
    }
    else
    {
      v25 = CameraHandler::Instance();
      v26 = (float *)((char *)CameraHandler::GetCamera(v25, 0) + 352);
      *v26 = 0.0;
      LOBYTE(v53) = 0;
      v26[1] = 999999.0;
      v26[2] = 0.0;
      v27 = CameraHandler::Instance();
      Camera = CameraHandler::GetCamera(v27, SLOBYTE(v53));
      Engine::Update(*(Engine **)this, Camera);
      v60[0] = (int)&v47;
      std::string::string(&v47, (void *)(this + 40));
      LOBYTE(v64) = 2;
      v29 = CameraHandler::Instance();
      v30 = CameraHandler::GetCamera(v29, 0);
      v31 = *(_DWORD *)(this + 100);
      LOBYTE(v64) = 0;
      SubareaManager::Init(SubareaManager::m_Instance, v31, v30, v47, v48, v49, v50, v51, LODWORD(v52), LODWORD(v53));
    }
    v33 = (NxPhysics *)NxPhysics::Instance(v54, v55, v56, v57, v58);
    NxPhysics::FlushScene(v33);
    World::UnLoad(*(World **)(this + 100));
    v34 = (NxPhysics *)NxPhysics::Instance(v54, v55, v56, v57, v58);
    NxPhysics::Reset(v34);
    v35 = (Editor *)Editor::Instance(v54, v55);
    v36 = !Editor::GetEditorMode(v35);
    v37 = *(_DWORD *)(this + 100);
    v53 = a9;
    v60[0] = (int)&v46;
    *(_BYTE *)(v37 + 724) = v36;
    std::string::string(&v46, (void *)(this + 40));
    World::Load(*(_DWORD *)(this + 100), v46, v47, v48, v49, v50, v51, LODWORD(v52), LODWORD(v53));
    v38 = *(_DWORD *)(this + 104);
    *(_BYTE *)(this + 32) = 1;
    *(_BYTE *)(this + 36) = 0;
    *(_BYTE *)(v38 + 32) = 0;
    *(_BYTE *)(v38 + 68) = 0;
    GUIConsole::Clear(*(GUIConsole **)(this + 104));
    if ( Engine::HasRenderSystem(*(Engine **)this) )
    {
      LOBYTE(v14) = *(_BYTE *)(this + 5) != 0;
      v40 = RenderDevice::Instance(v39);
      (*(void (__thiscall **)(int, int (__stdcall *)(int, int), _DWORD))(*(_DWORD *)v40 + 372))(v40, v14, 0);
      v14 = Editor::Instance;
    }
    *(_BYTE *)(this + 4) = 1;
    v41 = CameraHandler::Instance();
    v42 = (World *)v59;
    if ( v41 )
    {
      if ( v59 )
      {
        v61[0] = 0.0;
        v61[1] = 0.0;
        v61[2] = 0.0;
        *(float *)v60 = 0.0;
        *(float *)&v60[1] = 0.0;
        *(float *)&v60[2] = 0.0;
        World::GetDefaultCameraPos((World *)v59, (struct Vector *)v61);
        World::GetDefaultCameraDir(v42, (struct Vector *)v60);
        sub_10014669(v62);
        v43 = (const void *)sub_10018E71(v63, (int)v60);
        v53 = 90.0;
        v52 = 0.0;
        v51 = (struct Matrix *)v62;
        v50 = (struct Vector *)v61;
        qmemcpy(v62, v43, sizeof(v62));
        v44 = CameraHandler::Instance();
        CameraHandler::setToView(v44, v50, v51, v52, v53);
        v53 = 0.0;
        v45 = CameraHandler::Instance();
        CameraHandler::Tick(v45, v53);
      }
    }
    *(_BYTE *)(v14(v54, v55) + 2076) = 1;
    v64 = -1;
    std::string::~string(&a2);
    return v42;
  }
  else
  {
    v64 = -1;
    std::string::~string(&a2);
    return v18;
  }
}
