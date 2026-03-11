/*
 * func-name: ?FrameRender@Game@@QAEXXZ_0
 * func-address: 0x102b72a0
 * callers: 0x10013bb0
 * callees: 0x10002a22, 0x100030e9, 0x10003f58, 0x10008e72, 0x100091fb, 0x10009a39, 0x1000a097, 0x10011c16, 0x10014669
 */

void __usercall Game::FrameRender(Game *this@<ecx>, int a2@<edi>)
{
  Editor *v3; // eax
  int v4; // ecx
  Editor *v5; // eax
  int v6; // eax
  int v7; // ecx
  CameraHandler *v8; // eax
  struct Camera *Camera; // eax
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  _DWORD *v14; // ebx
  void (__thiscall **v15)(_DWORD *, char *); // edi
  CameraHandler *v16; // eax
  struct Camera *v17; // eax
  int v18; // ecx
  _DWORD *v19; // ebx
  void (__thiscall **v20)(_DWORD *, char *); // edi
  CameraHandler *v21; // eax
  struct Camera *v22; // eax
  int v23; // ecx
  _DWORD *v24; // ebx
  void (__thiscall **v25)(_DWORD *, int); // edi
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // ecx
  int v30; // eax
  int v31; // ecx
  int v32; // eax
  int v33; // ecx
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // ecx
  int v38; // eax
  int v39; // ecx
  int v40; // eax
  int v41; // ecx
  int v42; // eax
  int v43; // ecx
  int v44; // eax
  int v45; // ecx
  int v46; // eax
  int v47; // ecx
  int v48; // eax
  int v49; // ecx
  int v50; // eax
  int v51; // ecx
  int v52; // eax
  int v53; // ecx
  CameraHandler *v54; // eax
  struct Camera *v55; // eax
  CRETimer *v56; // eax
  CameraHandler *v57; // eax
  HUDSystem *v58; // eax
  int v59; // eax
  float *v60; // esi
  CRETimer *v61; // eax
  int v62; // eax
  int v63; // ecx
  int v64; // eax
  int v65; // ecx
  int v66; // eax
  int v67; // eax
  int v68; // ecx
  int v69; // eax
  CameraHandler *v70; // eax
  struct Camera *v71; // eax
  int v72; // eax
  struct Camera *v73; // [esp+B0h] [ebp-5Ch]
  float v75; // [esp+B8h] [ebp-54h]
  int v76; // [esp+BCh] [ebp-50h]
  int v77; // [esp+BCh] [ebp-50h]
  struct World *v78; // [esp+BCh] [ebp-50h]
  int v79; // [esp+C0h] [ebp-4Ch]
  int *v80; // [esp+C4h] [ebp-48h]
  float v81; // [esp+C8h] [ebp-44h]
  float v82; // [esp+C8h] [ebp-44h]
  char v83[64]; // [esp+CCh] [ebp-40h] BYREF

  v3 = (Editor *)Editor::Instance(v76, v79);
  if ( !Editor::GetEditorMode(v3) || *((_BYTE *)this + 36) )
  {
    v6 = RenderDevice::Instance(v4);
    v80 = (int *)(*(int (__thiscall **)(int))(*(_DWORD *)v6 + 392))(v6);
    v81 = (double)v80[17] / 768.0;
    v75 = v81;
    v82 = (double)v80[16] * 0.0009765625;
    (*(void (__thiscall **)(int *, _DWORD, _DWORD))(*v80 + 32))(v80, LODWORD(v82), LODWORD(v75));
    if ( *((_BYTE *)this + 36) )
    {
      Game::DrawLoadingScreen(this, *((float *)this + 24));
    }
    else
    {
      if ( *((_DWORD *)this + 25) )
      {
        v8 = CameraHandler::Instance();
        Camera = CameraHandler::GetCamera(v8, 0);
        World::Render(*((World **)this + 25), Camera);
      }
      v10 = RenderDevice::Instance(v7);
      (*(void (__thiscall **)(int))(*(_DWORD *)v10 + 388))(v10);
      v12 = RenderDevice::Instance(v11);
      (*(void (__thiscall **)(int))(*(_DWORD *)v12 + 364))(v12);
      v14 = (_DWORD *)RenderDevice::Instance(v13);
      v15 = (void (__thiscall **)(_DWORD *, char *))(*v14 + 464);
      v16 = CameraHandler::Instance();
      v17 = CameraHandler::GetCamera(v16, 0);
      (*v15)(v14, (char *)v17 + 220);
      v19 = (_DWORD *)RenderDevice::Instance(v18);
      v20 = (void (__thiscall **)(_DWORD *, char *))(*v19 + 476);
      v21 = CameraHandler::Instance();
      v22 = CameraHandler::GetCamera(v21, 0);
      (*v20)(v19, (char *)v22 + 156);
      v24 = (_DWORD *)RenderDevice::Instance(v23);
      v25 = (void (__thiscall **)(_DWORD *, int))(*v24 + 456);
      v26 = sub_10014669(v83);
      (*v25)(v24, v26);
      v28 = RenderDevice::Instance(v27);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v28 + 432))(v28, 14, 0);
      v30 = RenderDevice::Instance(v29);
      (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v30 + 432))(v30, 27, 1);
      v32 = RenderDevice::Instance(v31);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v32 + 432))(v32, 137, 0);
      v34 = RenderDevice::Instance(v33);
      (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v34 + 432))(v34, 28, 0);
      v36 = RenderDevice::Instance(v35);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v36 + 448))(v36, 0, 7, 2);
      v38 = RenderDevice::Instance(v37);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v38 + 448))(v38, 0, 5, 2);
      v40 = RenderDevice::Instance(v39);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v40 + 448))(v40, 0, 6, 2);
      v42 = RenderDevice::Instance(v41);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v42 + 440))(v42, 0, 4, 4);
      v44 = RenderDevice::Instance(v43);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v44 + 440))(v44, 0, 5, 2);
      v46 = RenderDevice::Instance(v45);
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v46 + 440))(v46, 0, 6, 0);
      v48 = RenderDevice::Instance(v47);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v48 + 440))(v48, 0, 1, 4);
      v50 = RenderDevice::Instance(v49);
      (*(void (__thiscall **)(int, _DWORD, int, int))(*(_DWORD *)v50 + 440))(v50, 0, 2, 2);
      v52 = RenderDevice::Instance(v51);
      (*(void (__thiscall **)(int, _DWORD, int, _DWORD))(*(_DWORD *)v52 + 440))(v52, 0, 3, 0);
      if ( !*((_BYTE *)this + 32) && byte_103B80F1 )
      {
        v62 = RenderDevice::Instance(v53);
        (*(void (__thiscall **)(int, int, _DWORD))(*(_DWORD *)v62 + 432))(v62, 28, 0);
        v64 = RenderDevice::Instance(v63);
        (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))(**(_DWORD **)(v64 + 1708) + 172))(
          *(_DWORD *)(v64 + 1708),
          0,
          0,
          2,
          0,
          1.0,
          0);
        v66 = RenderDevice::Instance(v65);
        v67 = (*(int (__thiscall **)(int))(*(_DWORD *)v66 + 392))(v66);
        (*(void (__thiscall **)(int, int, int, int, int, int, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v67 + 68))(
          v67,
          -16777216,
          -2,
          -2,
          1030,
          780,
          0,
          0,
          0);
        v69 = RenderDevice::Instance(v68);
        (*(void (__thiscall **)(int, int, int))(*(_DWORD *)v69 + 432))(v69, 168, -1);
        if ( *((_DWORD *)this + 25) )
        {
          v70 = CameraHandler::Instance();
          v71 = CameraHandler::GetCamera(v70, 0);
          World::PostRender(*((World **)this + 25), v71);
        }
        if ( *((_BYTE *)this + 33) )
        {
          v72 = GUISystem::Instance(a2);
          (*(void (__thiscall **)(int))(*(_DWORD *)v72 + 8))(v72);
        }
      }
      else
      {
        if ( *((_DWORD *)this + 25) )
        {
          v54 = CameraHandler::Instance();
          v55 = CameraHandler::GetCamera(v54, 0);
          World::PostRender(*((World **)this + 25), v55);
        }
        v56 = REGetGlobalTimer();
        CRETimer::StartMiniTimer(v56);
        v57 = CameraHandler::Instance();
        v73 = CameraHandler::GetCamera(v57, 0);
        v58 = HUDSystem::Instance();
        HUDSystem::PostRender(v58, v73);
        if ( *((_BYTE *)this + 33) )
        {
          v59 = GUISystem::Instance(a2);
          (*(void (__thiscall **)(int))(*(_DWORD *)v59 + 8))(v59);
        }
        v60 = (float *)(Profiler::Get() + 124);
        v61 = REGetGlobalTimer();
        *v60 = CRETimer::StopMiniTimer(v61) + *v60;
        if ( *((_BYTE *)this + 35) )
          Game::PrintStats(this, (struct Canvas *)v80);
        sub_100091FB();
        GUIConsole::Render(*((GUIConsole **)this + 26), (struct Canvas *)v80);
      }
    }
  }
  else
  {
    v5 = (Editor *)Editor::Instance(*((_DWORD *)this + 25), v77);
    Editor::Render(v5, v78);
  }
}
