/*
 * func-name: ?RenderPerformanceView@Editor@@IAEXPAVWorld@@@Z
 * func-address: 0x10082b00
 * callers: 0x10088cd0
 * callees: 0x10080700, 0x1009dd90, 0x1009ee50, 0x101189f0, 0x101786e0, 0x101a2500, 0x101a251c
 */

void __thiscall Editor::RenderPerformanceView(Editor *this, struct World *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // edi
  _DWORD *v5; // ebp
  void (__stdcall **v6)(_DWORD *, _DWORD, _DWORD, int, int); // esi
  int v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct RenderDevice *v21; // eax
  unsigned int v22; // edi
  int v23; // ecx
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  int v27; // eax
  int v28; // ecx
  int v29; // eax
  int v30; // eax
  struct Mesh *Mesh; // eax
  int v32; // eax
  double v33; // st7
  struct RenderDevice *v34; // eax
  int v35; // ecx
  float v36; // [esp+88h] [ebp-A4h]
  _BYTE v37[4]; // [esp+8Ch] [ebp-A0h] BYREF
  void *v38; // [esp+90h] [ebp-9Ch]
  int v39; // [esp+94h] [ebp-98h]
  int v40; // [esp+98h] [ebp-94h]
  float v41[17]; // [esp+9Ch] [ebp-90h] BYREF
  float v42[16]; // [esp+E0h] [ebp-4Ch] BYREF
  int v43; // [esp+128h] [ebp-4h]

  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 388))(v3);
  v4 = RenderDevice::Instance();
  v5 = (_DWORD *)*((_DWORD *)RenderDevice::Instance() + 427);
  v6 = (void (__stdcall **)(_DWORD *, _DWORD, _DWORD, int, int))(*v5 + 172);
  v7 = (*(int (__thiscall **)(struct RenderDevice *, _DWORD, _DWORD))(*(_DWORD *)v4 + 212))(v4, 1.0, 0);
  (*v6)(v5, 0, 0, 3, v7);
  memset(v42, 0, sizeof(v42));
  sub_101786E0(1.0);
  memset(v42, 0, sizeof(v42));
  sub_101786E0(1.0);
  v42[15] = 1.0;
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v8 + 456))(v8, v42);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v9 + 496))(v9);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v10 + 432))(v10, 137, 1);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v11 + 432))(v11, 28, 0);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 8, 3);
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v13 + 432))(v13, 176, 0);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v14 + 432))(v14, 27, 0);
  v15 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v15 + 432))(v15, 19, 5);
  v16 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v16 + 432))(v16, 20, 6);
  v17 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v17 + 440))(v17, 0, 2, 0);
  v18 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v18 + 440))(v18, 0, 1, 2);
  v19 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v19 + 440))(v19, 0, 4, 1);
  v20 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v20 + 464))(v20, (char *)this + 472);
  v21 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v21 + 476))(v21, (char *)this + 408);
  memset(v41, 0, sizeof(v41));
  v41[0] = 0.0;
  v41[12] = 0.0;
  v41[1] = 0.0;
  v41[13] = 0.0;
  v41[2] = 0.0;
  v22 = 0;
  v41[14] = 0.0;
  v41[3] = 1.0;
  v41[15] = 1.0;
  while ( 1 )
  {
    v23 = *((_DWORD *)a2 + 806);
    if ( !v23 || v22 >= (*((_DWORD *)a2 + 807) - v23) >> 2 )
      break;
    v24 = *((_DWORD *)a2 + 806);
    if ( *(_DWORD *)(*(_DWORD *)(v24 + 4 * v22) + 716) )
    {
      if ( !v24 || v22 >= (*((_DWORD *)a2 + 807) - v24) >> 2 )
        invalid_parameter_noinfo();
      v25 = *((_DWORD *)a2 + 806);
      if ( !*(_BYTE *)(*(_DWORD *)(v25 + 4 * v22) + 816) )
      {
        v38 = 0;
        v39 = 0;
        v40 = 0;
        v43 = 0;
        if ( !v25 || v22 >= (*((_DWORD *)a2 + 807) - v25) >> 2 )
          invalid_parameter_noinfo();
        ModelFrame::EnumerateMeshes(v37);
        v36 = 0.0;
        if ( *((_DWORD *)this + 57) == 2 )
        {
          v26 = *((_DWORD *)a2 + 806);
          if ( !v26 || v22 >= (*((_DWORD *)a2 + 807) - v26) >> 2 )
            invalid_parameter_noinfo();
          v27 = *(_DWORD *)(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * v22) + 716);
          v28 = *(_DWORD *)(v27 + 292);
          v29 = v27 + 288;
          if ( v28 )
            v30 = (*(_DWORD *)(v29 + 8) - v28) >> 2;
          else
            v30 = 0;
          v36 = (double)(unsigned int)v30 / flt_10281268;
        }
        if ( *((_DWORD *)this + 57) == 3 && v38 && (v39 - (int)v38) >> 2 )
        {
          Mesh = ModelFrame::GetMesh(*(ModelFrame **)v38, 0);
          v32 = (*(int (__thiscall **)(struct Mesh *))(*(_DWORD *)Mesh + 4))(Mesh);
          v36 = (double)(unsigned int)(*(int (__stdcall **)(int))(*(_DWORD *)v32 + 16))(v32) / (double)dword_10281264;
        }
        if ( v36 <= 1.0 )
          v33 = v36;
        else
          v33 = (float)1.0;
        v41[0] = v33;
        v41[12] = v33;
        v41[1] = 1.0 - v33;
        v41[13] = v41[1];
        v34 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v34 + 488))(v34, v41);
        v35 = *((_DWORD *)a2 + 806);
        if ( !v35 || v22 >= (*((_DWORD *)a2 + 807) - v35) >> 2 )
          invalid_parameter_noinfo();
        Editor::DrawModel(
          this,
          *(struct ModelFrame ****)(*(_DWORD *)(*((_DWORD *)a2 + 806) + 4 * v22) + 716),
          (Editor *)((char *)this + 252));
        v43 = -1;
        if ( v38 )
          operator delete(v38);
        v38 = 0;
        v39 = 0;
        v40 = 0;
      }
    }
    ++v22;
  }
}
