/*
 * func-name: ?RenderAfter@AnimationModal@@MAEXPAVShader@@PAVMaterial@@@Z_0
 * func-address: 0x100dac60
 * callers: 0x1001016d
 * callees: none
 */

void __thiscall AnimationModal::RenderAfter(AnimationModal *this, struct Shader *a2, struct Material *a3)
{
  struct ID3DXEffect *Effect; // eax
  struct ID3DXEffect *v5; // eax

  if ( a2 )
  {
    if ( *((_DWORD *)this + 273) == 2 )
    {
      Effect = Shader::GetEffect(a2);
      (*(void (__stdcall **)(struct ID3DXEffect *, const char *, char *, int))(*(_DWORD *)Effect + 128))(
        Effect,
        "MatDiffuse",
        (char *)this + 1268,
        4);
    }
    else
    {
      v5 = Shader::GetEffect(a2);
      (*(void (__stdcall **)(struct ID3DXEffect *, const char *, _DWORD))(*(_DWORD *)v5 + 120))(
        v5,
        "Opacity",
        *((float *)this + 316));
    }
    Actor::RenderAfter(this, a2, a3);
  }
}
