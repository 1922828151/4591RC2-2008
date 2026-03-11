/*
 * func-name: ?PostRender@PostProcess@@QAEXXZ
 * func-address: 0x10106760
 * callers: 0x10139890
 * callees: 0x10106520, 0x101189f0
 */

void __thiscall PostProcess::PostRender(PostProcess *this)
{
  struct RenderDevice *v2; // eax

  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 196))(v2);
  if ( PostProcess::EffectsActive(this) )
  {
    if ( !*(_BYTE *)this )
      PostProcess::PostRenderFunc(this);
  }
}
