/*
 * func-name: ?PostRenderHDR@PostProcess@@QAEXXZ
 * func-address: 0x10106720
 * callers: 0x10139890
 * callees: 0x10106520, 0x101189f0
 */

void __thiscall PostProcess::PostRenderHDR(PostProcess *this)
{
  struct RenderDevice *v2; // eax

  if ( *(_BYTE *)this )
  {
    v2 = RenderDevice::Instance();
    if ( (*(unsigned __int8 (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 132))(v2) )
    {
      if ( PostProcess::EffectsActive(this) )
        PostProcess::PostRenderFunc(this);
    }
  }
}
