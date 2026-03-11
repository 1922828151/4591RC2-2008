/*
 * func-name: ?RenderShadowItem@ShadowEngine@@IAEXPAUModelFrame@@PAVShader@@@Z
 * func-address: 0x101280a0
 * callers: 0x101280a0, 0x101282d0, 0x10128c50
 * callees: 0x10021240, 0x1009dd90, 0x100a1b10, 0x100e3150, 0x101189f0, 0x10120900, 0x101215e0, 0x10124d90, 0x101280a0
 */

void __thiscall ShadowEngine::RenderShadowItem(ShadowEngine *this, struct ModelFrame **a2, struct Shader *a3)
{
  struct Mesh *Mesh; // eax
  struct Mesh *v5; // ebx
  unsigned int v6; // ebp
  int v7; // eax
  int v8; // eax
  _DWORD *v9; // edi
  int (__thiscall *v10)(struct Mesh *); // edx
  char v11; // al
  int Technique; // eax
  Shader *v13; // edi
  struct ModelFrame *v14; // ecx
  void (__thiscall **v15)(struct Mesh *, struct Shader *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int); // edi
  _DWORD *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  int v19; // eax
  _DWORD *v20; // eax
  _DWORD v21[2]; // [esp+8h] [ebp-28h] BYREF
  int v22; // [esp+10h] [ebp-20h]
  int v23; // [esp+14h] [ebp-1Ch]
  int i; // [esp+28h] [ebp-8h]
  _DWORD *v25; // [esp+2Ch] [ebp-4h]

  if ( a2 )
  {
    ShadowEngine::RenderShadowItem(this, a2[90], a3);
    ShadowEngine::RenderShadowItem(this, a2[89], a3);
    Mesh = ModelFrame::GetMesh((ModelFrame *)a2, 0);
    v5 = Mesh;
    if ( Mesh )
    {
      if ( !*((_BYTE *)Mesh + 2524) )
      {
        v6 = 0;
        for ( i = 0; ; i += 20 )
        {
          v7 = *((_DWORD *)v5 + 620);
          if ( !v7 || v6 >= (*((_DWORD *)v5 + 621) - v7) / 20 )
            break;
          v8 = *((_DWORD *)v5 + 620);
          if ( !v8 || v6 >= (*((_DWORD *)v5 + 621) - v8) / 20 )
            invalid_parameter_noinfo();
          v9 = (_DWORD *)(*(int (__thiscall **)(struct Mesh *, _DWORD))(*(_DWORD *)v5 + 108))(
                           v5,
                           *(_DWORD *)(i + *((_DWORD *)v5 + 620)));
          if ( !v9
            || (v10 = *(int (__thiscall **)(struct Mesh *))(*(_DWORD *)v5 + 20),
                v23 = 0,
                v22 = 0,
                v11 = v10(v5),
                (Technique = Material::GetTechnique(v9, 2, v11, v22, v23)) == 0)
            || !*(_BYTE *)(Technique + 81)
            || *(_BYTE *)(Technique + 84) )
          {
            v13 = a3;
            Shader::SetWorld(a3, (const struct Matrix *)(a2 + 41));
            v14 = a2[106];
            if ( v14 && (a2[107] - v14) >> 2 )
            {
              v25 = v21;
              std::vector<Matrix *>::vector<Matrix *>(v21, (int)(a2 + 105));
              v15 = (void (__thiscall **)(struct Mesh *, struct Shader *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD, int, int))(*(_DWORD *)v5 + 88);
              v16 = (_DWORD *)std::vector<AttributeRange>::operator[]((_DWORD *)v5 + 619, v6);
              (*v15)(v5, a3, *v16, v16[1], v16[2], v16[3], v16[4], v21[0], v21[1], v22, v23);
              v13 = a3;
            }
            else
            {
              Shader::SetSkinning(a3, 0, 0, 0);
            }
            Shader::CommitChanges(v13);
            v17 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v17 + 432))(v17, 27, 0);
            v18 = RenderDevice::Instance();
            (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v18 + 432))(v18, 14, 1);
            v19 = *((_DWORD *)v5 + 620);
            if ( !v19 || v6 >= (*((_DWORD *)v5 + 621) - v19) / 20 )
              invalid_parameter_noinfo();
            v20 = (_DWORD *)(i + *((_DWORD *)v5 + 620));
            (*(void (__thiscall **)(struct Mesh *, _DWORD, _DWORD, _DWORD, _DWORD, _DWORD))(*(_DWORD *)v5 + 60))(
              v5,
              *v20,
              v20[1],
              v20[2],
              v20[3],
              v20[4]);
          }
          ++v6;
        }
      }
    }
  }
}
