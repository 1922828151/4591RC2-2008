/*
 * func-name: ?DrawSimple@StaticModel@@IAEXPAVCamera@@PAUModelFrame@@@Z
 * func-address: 0x100ee9d0
 * callers: 0x100ee9d0, 0x100eeb20
 * callees: 0x1009dd90, 0x100e8cd0, 0x100ee360, 0x100ee9d0, 0x101189f0
 */

void __thiscall StaticModel::DrawSimple(StaticModel *this, struct Camera *a2, struct ModelFrame **a3)
{
  struct Mesh *Mesh; // eax
  struct Mesh *v5; // esi
  struct RenderDevice *v6; // eax
  struct VertexManager *v7; // eax
  unsigned int v8; // edi
  int i; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  ModelFrame *v13; // [esp+18h] [ebp+8h]

  if ( a3 )
  {
    StaticModel::DrawSimple(this, a2, a3[90]);
    StaticModel::DrawSimple(this, a2, a3[89]);
    Mesh = ModelFrame::GetMesh((ModelFrame *)a3, 0);
    if ( Mesh )
    {
      if ( !*((_BYTE *)Mesh + 2524) )
      {
        v5 = StaticModel::ChooseLOD(this, a2, (struct ModelFrame *)a3);
        if ( v5 )
        {
          v6 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v6 + 456))(v6, (char *)a3 + 164);
          v13 = (ModelFrame *)*((_DWORD *)v5 + 4);
          v7 = VertexManager::Instance();
          v8 = 0;
          *((_DWORD *)v5 + 4) = *(_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v7 + 20))(
                                             v7,
                                             12);
          for ( i = 0; ; i += 20 )
          {
            v10 = *((_DWORD *)v5 + 620);
            if ( !v10 || v8 >= (*((_DWORD *)v5 + 621) - v10) / 20 )
              break;
            v11 = *((_DWORD *)v5 + 620);
            if ( !v11 || v8 >= (*((_DWORD *)v5 + 621) - v11) / 20 )
              invalid_parameter_noinfo();
            v12 = *((_DWORD *)v5 + 620);
            (*(void (__thiscall **)(struct Mesh *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 60))(
              v5,
              *(_DWORD *)(v12 + i),
              *(_DWORD *)(i + v12 + 4),
              *(_DWORD *)(i + v12 + 8),
              *(_DWORD *)(i + v12 + 12),
              *(_DWORD *)(i + v12 + 16));
            ++v8;
          }
          *((_DWORD *)v5 + 4) = v13;
        }
      }
    }
  }
}
