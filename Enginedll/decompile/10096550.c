/*
 * func-name: ?Shutdown@Engine@@QAEXXZ
 * func-address: 0x10096550
 * callers: none
 * callees: 0x10029ca0, 0x10054c00, 0x1007e740, 0x1007e750, 0x1007e880, 0x1007ec70, 0x1007f2e0, 0x100956d0, 0x100d6d20, 0x100dad30, 0x100e2290, 0x100e23a0, 0x100e2550, 0x101189f0, 0x101195c0, 0x10119cc0, 0x10143fd0, 0x101459a0, 0x1016ed10, 0x1016ed30, 0x10171b80, 0x101a2500
 */

void __thiscall Engine::Shutdown(Engine *this)
{
  unsigned int v2; // ebx
  int v3; // eax
  struct GUISystem *v4; // eax
  struct RenderDevice *v5; // eax
  struct Input *v6; // eax
  struct AudioDevice *v7; // eax
  Editor *v8; // eax
  NxPhysics *v9; // eax
  void *v10; // edi
  void *v11; // edi
  EngineLog *v12; // eax
  int v13; // eax
  unsigned int v14; // ecx
  int v15; // ecx
  void (*Symbol)(void); // edi
  int v17; // ecx
  void (__cdecl *v18)(); // edi
  int v19; // ecx
  int v20; // ecx
  int v21; // edx
  void *v22; // edi
  int v23; // ecx
  char *v24; // ebx
  char *v25; // edi
  int v26; // eax
  char *v27; // ebp
  struct EventAttemper *v28; // eax
  _BYTE v29[28]; // [esp+8h] [ebp-1Ch] BYREF

  v2 = 0;
  if ( *((_DWORD *)this + 29) )
  {
    LogPrintf("\nEngine shutting down...");
    if ( AsyncLoader::s_pInstance )
    {
      AsyncLoader::Shutdown(AsyncLoader::s_pInstance);
      if ( AsyncLoader::s_pInstance )
      {
        (**(void (__thiscall ***)(AsyncLoader *, int))AsyncLoader::s_pInstance)(AsyncLoader::s_pInstance, 1);
        AsyncLoader::s_pInstance = 0;
      }
    }
    v3 = sub_10119CC0();
    sub_101195C0(v3);
    v4 = GUISystem::Instance();
    (*(void (__thiscall **)(struct GUISystem *))(*(_DWORD *)v4 + 12))(v4);
    v5 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 40))(v5);
    v6 = Input::Instance();
    (*(void (__thiscall **)(struct Input *))(*(_DWORD *)v6 + 4))(v6);
    v7 = AudioDevice::Instance();
    (*(void (__thiscall **)(struct AudioDevice *))(*(_DWORD *)v7 + 28))(v7);
    v8 = Editor::Instance();
    Editor::Shutdown(v8);
    v9 = NxPhysics::Instance();
    NxPhysics::Shutdown(v9);
    ShowWindow(*((HWND *)this + 35), 0);
    v10 = (void *)*((_DWORD *)this + 29);
    if ( v10 )
    {
      sub_10029CA0(*((int **)this + 29));
      operator delete(v10);
      *((_DWORD *)this + 29) = 0;
    }
    v11 = (void *)*((_DWORD *)this + 30);
    if ( v11 )
    {
      sub_10029CA0(*((int **)this + 30));
      operator delete(v11);
      *((_DWORD *)this + 30) = 0;
    }
    LogPrintf("Engine Shutdown Complete!");
    v12 = EngineLog::Instance();
    EngineLog::Exit(v12);
    v13 = sub_10119CC0();
    sub_101195C0(v13);
    while ( 1 )
    {
      v14 = *((_DWORD *)this + 5);
      if ( !v14 || v2 >= (int)(*((_DWORD *)this + 6) - v14) >> 2 )
        break;
      std::string::string(v29, "dllStopPlugin");
      v15 = *((_DWORD *)this + 5);
      if ( !v15 || v2 >= (*((_DWORD *)this + 6) - v15) >> 2 )
        invalid_parameter_noinfo();
      Symbol = (void (*)(void))DynLib::GetSymbol(*(HMODULE **)(*((_DWORD *)this + 5) + 4 * v2), (int)v29);
      std::string::~string(v29);
      if ( !Symbol )
        Error("Cannot find symbol dllStopPlugin in library");
      Symbol();
      v17 = *((_DWORD *)this + 5);
      if ( v17 && v2 < (*((_DWORD *)this + 6) - v17) >> 2 )
      {
        v18 = invalid_parameter_noinfo;
      }
      else
      {
        v18 = invalid_parameter_noinfo;
        invalid_parameter_noinfo();
      }
      DynLib::Unload(*(HMODULE **)(*((_DWORD *)this + 5) + 4 * v2));
      v19 = *((_DWORD *)this + 5);
      if ( !v19 || v2 >= (*((_DWORD *)this + 6) - v19) >> 2 )
        v18();
      v20 = *((_DWORD *)this + 5);
      if ( *(_DWORD *)(v20 + 4 * v2) )
      {
        if ( !v20 || v2 >= (*((_DWORD *)this + 6) - v20) >> 2 )
          v18();
        v21 = *((_DWORD *)this + 5);
        v22 = *(void **)(v21 + 4 * v2);
        if ( v22 )
        {
          DynLib::~DynLib(*(DynLib **)(v21 + 4 * v2));
          operator delete(v22);
        }
        v23 = *((_DWORD *)this + 5);
        if ( !v23 || v2 >= (*((_DWORD *)this + 6) - v23) >> 2 )
          invalid_parameter_noinfo();
        *(_DWORD *)(*((_DWORD *)this + 5) + 4 * v2) = 0;
      }
      ++v2;
    }
    v24 = (char *)*((_DWORD *)this + 6);
    if ( v14 > (unsigned int)v24 )
      invalid_parameter_noinfo();
    v25 = (char *)*((_DWORD *)this + 5);
    if ( (unsigned int)v25 > *((_DWORD *)this + 6) )
      invalid_parameter_noinfo();
    if ( v25 != v24 )
    {
      v26 = (*((_DWORD *)this + 6) - (int)v24) >> 2;
      v27 = &v25[4 * v26];
      if ( v26 > 0 )
        memmove_s(v25, 4 * v26, v24, 4 * v26);
      *((_DWORD *)this + 6) = v27;
    }
    v28 = EventAttemper::Instance();
    (*(void (__thiscall **)(struct EventAttemper *))(*(_DWORD *)v28 + 12))(v28);
    EventAttemper::DestroyInstance();
    if ( dword_11249F38 )
    {
      operator delete(dword_11249F38);
      dword_11249F38 = 0;
    }
  }
}
