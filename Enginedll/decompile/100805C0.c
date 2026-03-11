/*
 * func-name: ?DrawFrame@Editor@@IAEXPAVModel@@PAUModelFrame@@@Z
 * func-address: 0x100805c0
 * callers: 0x100805c0, 0x10080700
 * callees: 0x100805c0, 0x100e8cd0, 0x100ee360, 0x101189f0
 */

void __thiscall Editor::DrawFrame(Editor *this, struct Model *a2, struct ModelFrame **a3)
{
  struct Mesh *v4; // eax
  struct Mesh *v5; // esi
  struct RenderDevice *v6; // eax
  struct VertexManager *v7; // eax
  unsigned int v8; // edi
  int i; // ebx
  int v10; // eax
  int v11; // eax
  int v12; // eax
  struct ModelFrame *v13; // [esp+18h] [ebp+8h]

  if ( a3 )
  {
    Editor::DrawFrame(this, a2, a3[90]);
    Editor::DrawFrame(this, a2, a3[89]);
    v4 = StaticModel::ChooseLOD(a2, (Editor *)((char *)this + 252), (struct ModelFrame *)a3);
    v5 = v4;
    if ( v4 )
    {
      *((_DWORD *)v4 + 21) = 0;
      v6 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, char *))(*(_DWORD *)v6 + 456))(v6, (char *)a3 + 164);
      v13 = (struct ModelFrame *)*((_DWORD *)v5 + 4);
      v7 = VertexManager::Instance();
      v8 = 0;
      *((_DWORD *)v5 + 4) = *(_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v7 + 20))(v7, 12);
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
