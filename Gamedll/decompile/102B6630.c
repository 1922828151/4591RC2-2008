/*
 * func-name: ?Tick@Game@@QAEXXZ_0
 * func-address: 0x102b6630
 * callers: 0x10004322
 * callees: 0x10003f58, 0x10006384, 0x10008e72, 0x1000a097, 0x1000fed4, 0x100109a1, 0x10014aba, 0x102c9ea8
 */

void __usercall Game::Tick(Game *this@<ecx>, char a2@<bl>)
{
  CRETimer *v3; // eax
  CRETimer *v4; // eax
  Editor *v5; // eax
  CameraHandler *v6; // eax
  struct Camera *Camera; // eax
  Editor *v8; // eax
  Editor *v9; // eax
  Editor *v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // ecx
  bool v14; // bl
  int v15; // eax
  float *v16; // ebx
  CRETimer *v17; // eax
  CRETimer *v18; // eax
  NxPhysics *v19; // eax
  CRETimer *v20; // eax
  CRETimer *v21; // eax
  NxPhysics *v22; // eax
  CRETimer *v23; // eax
  World *v24; // ecx
  CRETimer *v25; // eax
  CameraHandler *v26; // eax
  CRETimer *v27; // eax
  CRETimer *v28; // eax
  ShaderManager *v29; // eax
  HUDSystem *v30; // eax
  CRETimer *v31; // eax
  int v32; // ecx
  int v33; // eax
  CRETimer *v34; // eax
  Input *v35; // eax
  float *v36; // ebx
  CRETimer *v37; // eax
  Editor *v38; // eax
  bool v39; // al
  float *v40; // edi
  CRETimer *v41; // eax
  bool v42; // [esp+18h] [ebp-14h]
  int v43; // [esp+18h] [ebp-14h]
  int v44; // [esp+18h] [ebp-14h]
  int v45; // [esp+18h] [ebp-14h]
  char v46; // [esp+18h] [ebp-14h]
  char v47; // [esp+1Ch] [ebp-10h]
  int v48; // [esp+1Ch] [ebp-10h]
  struct World *v49; // [esp+1Ch] [ebp-10h]
  int v50; // [esp+1Ch] [ebp-10h]
  int v51; // [esp+1Ch] [ebp-10h]
  int v52; // [esp+1Ch] [ebp-10h]
  int v53; // [esp+1Ch] [ebp-10h]
  int v54; // [esp+20h] [ebp-Ch]
  int v55; // [esp+20h] [ebp-Ch]
  int v56; // [esp+20h] [ebp-Ch]
  int v57; // [esp+24h] [ebp-8h]
  int v58; // [esp+24h] [ebp-8h]
  int v59; // [esp+28h] [ebp-4h]
  float *v60; // [esp+28h] [ebp-4h]
  float *v61; // [esp+28h] [ebp-4h]
  float *v62; // [esp+28h] [ebp-4h]
  float *v63; // [esp+28h] [ebp-4h]

  v3 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v3);
  v4 = REGetGlobalTimer();
  CRETimer::StartMiniTimer(v4);
  if ( *(_DWORD *)this )
  {
    v5 = (Editor *)Editor::Instance(v47, v54);
    if ( Editor::GetEditorMode(v5) )
    {
      v8 = (Editor *)Editor::Instance((unsigned __int8)*((_DWORD *)this + 25), v48);
      Editor::Update(v8, v49);
    }
    else
    {
      v6 = CameraHandler::Instance();
      Camera = CameraHandler::GetCamera(v6, 0);
      Engine::Update(*(Engine **)this, Camera);
    }
    v9 = (Editor *)Editor::Instance(a2, v48);
    if ( Editor::GetEditorMode(v9) || *((_BYTE *)this + 33) )
    {
      v10 = (Editor *)Editor::Instance((_BYTE)v50, v55);
      if ( Editor::GetEditorMode(v10) )
      {
        v11 = *((_DWORD *)this + 27);
        if ( v11 )
        {
          v12 = _RTDynamicCast(v11, 0, &Actor `RTTI Type Descriptor', &SamplePlayer `RTTI Type Descriptor');
          if ( v12 )
          {
            (*(void (__thiscall **)(int, int))(*(_DWORD *)v12 + 80))(v12, 1);
            *((_DWORD *)this + 27) = 0;
          }
          if ( Engine::HasRenderSystem(*(Engine **)this) )
          {
            v14 = *((_BYTE *)this + 5) != 0;
            v15 = RenderDevice::Instance(v13);
            (*(void (__thiscall **)(int, bool, _DWORD))(*(_DWORD *)v15 + 372))(v15, v14, 0);
          }
          *((_BYTE *)this + 4) = 1;
        }
      }
    }
    v16 = (float *)(Profiler::Get() + 120);
    v17 = REGetGlobalTimer();
    *v16 = CRETimer::StopMiniTimer(v17) + *v16;
    v18 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v18);
    v19 = (NxPhysics *)NxPhysics::Instance(0, v50, v55, v57, v59);
    NxPhysics::UpdateScene(v19, v42);
    v60 = (float *)(Profiler::Get() + 96);
    v20 = REGetGlobalTimer();
    *v60 = CRETimer::StopMiniTimer(v20) + *v60;
    v21 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v21);
    v22 = (NxPhysics *)NxPhysics::Instance(v43, v51, v56, v58, v60);
    NxPhysics::FlushScene(v22);
    v61 = (float *)(Profiler::Get() + 96);
    v23 = REGetGlobalTimer();
    *v61 = CRETimer::StopMiniTimer(v23) + *v61;
    v24 = (World *)*((_DWORD *)this + 25);
    if ( v24 )
      World::Tick(v24);
    v25 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v25);
    if ( dword_103B665C )
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_103B665C + 16))(dword_103B665C);
      (*(void (__stdcall **)(_DWORD))(*(_DWORD *)dword_103B665C + 8))(LODWORD(GDeltaTime));
      (*(void (__thiscall **)(int))(*(_DWORD *)dword_103B665C + 20))(dword_103B665C);
    }
    v26 = CameraHandler::Instance();
    CameraHandler::Tick(v26, 0.0);
    v62 = (float *)(Profiler::Get() + 100);
    v27 = REGetGlobalTimer();
    *v62 = CRETimer::StopMiniTimer(v27) + *v62;
    v28 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v28);
    v29 = (ShaderManager *)ShaderManager::Instance();
    ShaderManager::Tick(v29);
    sub_10014ABA(v44, v52);
    if ( *((_DWORD *)this + 25) && (*((_BYTE *)this + 32) || !byte_103B80F1) )
    {
      v30 = HUDSystem::Instance();
      HUDSystem::Tick(v30);
    }
    v63 = (float *)(Profiler::Get() + 104);
    v31 = REGetGlobalTimer();
    *v63 = CRETimer::StopMiniTimer(v31) + *v63;
    v33 = RenderDevice::Instance(v32);
    (*(void (__thiscall **)(int))(*(_DWORD *)v33 + 384))(v33);
    v34 = REGetGlobalTimer();
    CRETimer::StartMiniTimer(v34);
    v35 = (Input *)Input::Instance(v45);
    Input::FlushKeyboardBuffer(v35);
    v36 = (float *)(Profiler::Get() + 120);
    v37 = REGetGlobalTimer();
    *v36 = CRETimer::StopMiniTimer(v37) + *v36;
    v38 = (Editor *)Editor::Instance(v46, v53);
    if ( !Editor::GetEditorMode(v38) )
    {
      v39 = *(_BYTE *)(CDlgMgr::Instance() + 128) || *(_BYTE *)(*((_DWORD *)this + 26) + 32);
      Game::SetCursorVisible(this, v39);
    }
    v40 = (float *)(Profiler::Get() + 136);
    v41 = REGetGlobalTimer();
    *v40 = CRETimer::StopMiniTimer(v41) + *v40;
  }
}
