/*
 * func-name: ?PostRender@World@@QAEXPAVCamera@@@Z
 * func-address: 0x101396e0
 * callers: 0x10088cd0
 * callees: 0x1007e380, 0x1007e3d0, 0x1007e670, 0x1007ec70, 0x100a01c0, 0x100a0d00, 0x10101230, 0x10101ef0, 0x10102250, 0x10116f70, 0x101189f0, 0x10137580, 0x101385a0, 0x10143fd0, 0x10145a20
 */

void __userpurge World::PostRender(World *this@<ecx>, int a2@<esi>, struct Camera *a3, int a4)
{
  LARGE_INTEGER *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  Camera *v9; // ebx
  struct RenderDevice *v10; // eax
  int *v11; // ecx
  FXManager *v12; // eax
  unsigned int i; // esi
  NxPhysics *v14; // eax
  float *v15; // esi
  CRETimer *v16; // eax

  if ( *((_BYTE *)this + 763) )
  {
    v5 = (LARGE_INTEGER *)REGetGlobalTimer();
    CRETimer::StartMiniTimer(v5);
    v6 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 7, 1);
    v7 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 22, 3);
    v8 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 23, 4);
    v9 = a3;
    if ( *((_BYTE *)this + 781) )
    {
      v10 = RenderDevice::Instance();
      (*(void (__stdcall **)(_DWORD, int, struct Camera **, int))(**((_DWORD **)v10 + 427) + 236))(
        *((_DWORD *)v10 + 427),
        1,
        &a3,
        a2);
      sub_10101EF0(*((_DWORD **)this + 4), v9, (int)this, &dword_11241AB8);
      if ( *((_BYTE *)this + 780) )
        nullsub_3((int)v9, (int)this);
      (*(void (__cdecl **)(int))(*(_DWORD *)a4 + 20))(a4);
      if ( a3 )
        (*(void (__stdcall **)(struct Camera *))(*(_DWORD *)a3 + 8))(a3);
    }
    if ( *((_BYTE *)Editor::Instance() + 2056) )
    {
      if ( *((_BYTE *)Editor::Instance() + 232) )
      {
        v11 = (int *)*((_DWORD *)this + 189);
        if ( v11 )
          sub_10102250(v11, v9);
      }
    }
    if ( *((_BYTE *)this + 764) )
    {
      v12 = FXManager::Instance();
      FXManager::PostRender(v12, (int)v9, (int)this, v9, 1);
    }
    if ( !*((_BYTE *)Editor::Instance() + 2056) || *((_DWORD *)Editor::Instance() + 57) == 1 )
    {
      for ( i = 0; dword_11241ABC && i < ((_BYTE *)dword_11241AC0 - (_BYTE *)dword_11241ABC) >> 2; ++i )
        (*(void (__thiscall **)(_DWORD, Camera *))(**((_DWORD **)dword_11241ABC + i) + 68))(
          *((_DWORD *)dword_11241ABC + i),
          v9);
    }
    v14 = NxPhysics::Instance();
    NxPhysics::PostRender(v14);
    if ( *((_BYTE *)this + 552) )
      World::PostRenderSubarea(this);
    if ( *((_BYTE *)this + 728) )
      World::PostRenderCollisionFace(this);
    v15 = (float *)((char *)Profiler::Get() + 84);
    v16 = REGetGlobalTimer();
    *v15 = CRETimer::StopMiniTimer(v16) + *v15;
  }
}
