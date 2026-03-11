/*
 * func-name: ?Clone@ModelFrame@@QAEPAU1@PAVStaticModel@@_N1@Z
 * func-address: 0x1009f940
 * callers: 0x10080a00, 0x100846a0, 0x1009f940, 0x100efd90, 0x100f5330
 * callees: 0x10028a50, 0x1002ff40, 0x10078420, 0x1007ec70, 0x1009e990, 0x1009f940, 0x101189f0, 0x101786e0, 0x101a251c, 0x101a2534
 */

struct ModelFrame *__userpurge ModelFrame::Clone@<eax>(
        ModelFrame *this@<ecx>,
        int a2@<edi>,
        int a3@<esi>,
        struct StaticModel *a4,
        bool a5,
        bool a6)
{
  ModelFrame *v7; // eax
  ModelFrame *v8; // ebx
  struct Mesh *v9; // edi
  int v10; // ecx
  unsigned int i; // esi
  int v12; // ecx
  struct RenderDevice *v13; // eax
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  int v21; // ecx
  int v22; // eax
  ModelFrame *v23; // ecx
  ModelFrame *v24; // ecx
  float v28[16]; // [esp+1Ch] [ebp-4Ch] BYREF
  int v29; // [esp+64h] [ebp-4h]

  v7 = (ModelFrame *)operator new(0x1C8u);
  v29 = 0;
  if ( v7 )
    v8 = ModelFrame::ModelFrame(v7, a4);
  else
    v8 = 0;
  v29 = -1;
  ModelFrame::operator=((int)v8, (int)this);
  *((_BYTE *)v8 + 376) = 0;
  memset(v28, 0, sizeof(v28));
  sub_101786E0(1.0);
  memset(v28, 0, sizeof(v28));
  sub_101786E0(1.0);
  v28[15] = 1.0;
  qmemcpy((char *)v8 + 292, v28, 0x40u);
  std::string::operator=((char *)v8 + 72, &unk_101C46BA);
  v9 = 0;
  if ( a5 )
  {
    v10 = *((_DWORD *)this + 1);
    if ( v10 )
    {
      if ( (*((_DWORD *)this + 2) - v10) >> 2 && **((_DWORD **)this + 1) )
      {
        for ( i = 0; (signed int)i < *((_DWORD *)this + 10); v9 = 0 )
        {
          v12 = *((_DWORD *)this + 1);
          if ( v12 && i < (*((_DWORD *)this + 2) - v12) >> 2 )
            v9 = *(struct Mesh **)(v12 + 4 * i);
          if ( a6 )
          {
            v13 = RenderDevice::Instance();
            v14 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 8))(v13, a2, a3);
            v15 = *((_DWORD *)this + 1);
            v9 = (struct Mesh *)v14;
            if ( v15 && i < (*((_DWORD *)this + 2) - v15) >> 2 )
              v16 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
            else
              v16 = 0;
            a3 = 1;
            a2 = v14;
            (*(void (__thiscall **)(int))(*(_DWORD *)v16 + 100))(v16);
            v17 = *((_DWORD *)this + 1);
            if ( v17 && i < (*((_DWORD *)this + 2) - v17) >> 2 )
              v18 = *(_DWORD *)(*((_DWORD *)this + 1) + 4 * i);
            else
              v18 = 0;
            std::string::operator=((char *)v9 + 2383, v18 + 2383);
          }
          ModelFrame::SetLOD(v8, v9, i++);
        }
        if ( *((_BYTE *)Editor::Instance() + 2056) || (v19 = *((_DWORD *)v8 + 91)) != 0 && *(_BYTE *)(v19 + 137) )
        {
          v20 = operator new(0x2Cu);
          if ( v20 )
          {
            v20[1] = 0;
            v20[2] = 0;
            v20[3] = 0;
            v20[5] = 0;
            v20[6] = 0;
            v20[7] = 0;
            v20[9] = 0;
            v20[10] = 0;
          }
          else
          {
            v20 = 0;
          }
          v21 = *((_DWORD *)v8 + 1);
          v29 = -1;
          *((_DWORD *)v8 + 113) = v20;
          if ( v21 && (*((_DWORD *)v8 + 2) - v21) >> 2 )
            v22 = **((_DWORD **)v8 + 1);
          else
            v22 = 0;
          sub_10078420(*((_DWORD *)v8 + 113), 0, v22);
        }
      }
    }
  }
  v23 = (ModelFrame *)*((_DWORD *)this + 89);
  if ( v23 )
    *((_DWORD *)v8 + 89) = ModelFrame::Clone(v23, a4, a5, 1);
  v24 = (ModelFrame *)*((_DWORD *)this + 90);
  if ( v24 )
    *((_DWORD *)v8 + 90) = ModelFrame::Clone(v24, a4, a5, 1);
  return v8;
}
