/*
 * func-name: ?DrawSimple@StaticModel@@IAEXPAVCamera@@PAVShader@@PAVTexture@@K@Z
 * func-address: 0x100f1010
 * callers: none
 * callees: 0x100f0c50, 0x101189f0, 0x1011fd80, 0x1011fdc0, 0x101206e0, 0x10120900, 0x10121380, 0x101216e0, 0x10121e80, 0x10122050, 0x10124d90, 0x10136140
 */

void __thiscall StaticModel::DrawSimple(
        ModelFrame **this,
        struct Camera *a2,
        struct Shader *a3,
        struct Texture *a4,
        unsigned int a5)
{
  _DWORD *v7; // edi
  void (__stdcall **v8)(_DWORD *, const char *, struct IDirect3DTexture9 *); // esi
  struct IDirect3DTexture9 *Texture; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  int v14[16]; // [esp-28h] [ebp-50h] BYREF
  int v15; // [esp+18h] [ebp-10h] BYREF
  Shader *v16; // [esp+30h] [ebp+8h]
  Texture *v17; // [esp+34h] [ebp+Ch]

  if ( this[77] )
  {
    Shader::SetTechnique(a3, "Fullbright_PS20");
    Shader::Begin(a3, 0);
    Shader::BeginPass(a3, 0);
    Shader::SetMBSkinning(a3, 0, 0, 0, 0);
    v7 = (_DWORD *)*((_DWORD *)a3 + 4);
    v8 = (void (__stdcall **)(_DWORD *, const char *, struct IDirect3DTexture9 *))(*v7 + 208);
    Texture = Texture::GetTexture(a4);
    (*v8)(v7, "tDiffuse0", Texture);
    (*(void (__stdcall **)(_DWORD, const char *, unsigned int *, int))(**((_DWORD **)a3 + 4) + 128))(
      *((_DWORD *)a3 + 4),
      "MatDiffuse",
      &a5,
      4);
    Shader::SetWorld(a3, (const struct Matrix *)(this + 56));
    Shader::SetMBVP(a3, (struct Camera *)((char *)a2 + 284), (struct Camera *)((char *)a2 + 284));
    Shader::CommitChanges(a3);
    v10 = RenderDevice::Instance();
    v16 = (Shader *)(*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v10 + 432))(v10, 14, 1);
    v11 = RenderDevice::Instance();
    v17 = (Texture *)(*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 7, 1);
    qmemcpy(v14, (char *)a2 + 284, sizeof(v14));
    StaticModel::DrawSimpleWithShader(
      (StaticModel *)this,
      (int)a3,
      (int)this,
      (int)&v15,
      (int)a2 + 348,
      a2,
      this[77],
      a3,
      v14[0],
      v14[1],
      v14[2],
      v14[3],
      v14[4],
      (Shader *)v14[5],
      v14[6],
      v14[7],
      v14[8],
      v14[9],
      v14[10],
      v14[11],
      v14[12],
      v14[13],
      v14[14],
      v14[15]);
    Shader::EndPass(a3);
    Shader::End(a3);
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, Shader *))(*(_DWORD *)v12 + 432))(v12, 14, v16);
    v13 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, Texture *))(*(_DWORD *)v13 + 432))(v13, 7, v17);
  }
}
