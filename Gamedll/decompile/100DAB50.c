/*
 * func-name: ?RenderBefore@AnimationModal@@MAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x100dab50
 * callers: 0x1000ad2b
 * callees: none
 */

void __thiscall AnimationModal::RenderBefore(AnimationModal *this, struct Shader *a2, struct Material *a3)
{
  struct ID3DXEffect *Effect; // eax
  struct ID3DXEffect *v5; // eax
  float v6; // edx
  float v7; // eax
  float v8; // ecx
  struct ID3DXEffect *v9; // eax
  struct ID3DXEffect *v10; // eax
  float v11; // [esp+20h] [ebp-10h] BYREF
  float v12; // [esp+24h] [ebp-Ch]
  float v13; // [esp+28h] [ebp-8h]
  float v14; // [esp+2Ch] [ebp-4h]

  if ( a2 )
  {
    if ( *((_DWORD *)this + 273) == 2 )
    {
      Effect = Shader::GetEffect(a2);
      (*(void (__stdcall **)(struct ID3DXEffect *, const char *, float *, int))(*(_DWORD *)Effect + 132))(
        Effect,
        "MatDiffuse",
        &v11,
        4);
      v11 = *((float *)this + 278) * v11;
      v12 = *((float *)this + 278) * v12;
      v13 = *((float *)this + 278) * v13;
      v14 = *((float *)this + 278) * v14;
      v5 = Shader::GetEffect(a2);
      (*(void (__stdcall **)(struct ID3DXEffect *, const char *, float *, int))(*(_DWORD *)v5 + 128))(
        v5,
        "MatDiffuse",
        &v11,
        4);
      v6 = v12;
      v7 = v13;
      *((float *)this + 317) = v11;
      v8 = v14;
      *((float *)this + 318) = v6;
      *((float *)this + 319) = v7;
      *((float *)this + 320) = v8;
    }
    else
    {
      v9 = Shader::GetEffect(a2);
      (*(void (__stdcall **)(struct ID3DXEffect *, const char *, char *))(*(_DWORD *)v9 + 124))(
        v9,
        "Opacity",
        (char *)this + 1264);
      v10 = Shader::GetEffect(a2);
      (*(void (__stdcall **)(struct ID3DXEffect *, const char *, _DWORD))(*(_DWORD *)v10 + 120))(
        v10,
        "Opacity",
        *((float *)this + 278));
    }
    Actor::RenderBefore(this, a2, a3);
  }
}
