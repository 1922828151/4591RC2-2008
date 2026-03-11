/*
 * func-name: ?OnResetDevice@PostProcess@@QAEJXZ
 * func-address: 0x101087e0
 * callers: none
 * callees: 0x10108250, 0x10108550, 0x101189f0
 */

int __thiscall PostProcess::OnResetDevice(PostProcess *this)
{
  struct RenderDevice *v2; // ebx
  struct RenderDevice *v3; // eax
  int v4; // edi
  struct RenderDevice *v5; // ebx
  struct RenderDevice *v6; // eax
  int v7; // edi

  v2 = RenderDevice::Instance();
  v3 = RenderDevice::Instance();
  v4 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v3 + 296))(v3) % 8;
  *((_DWORD *)this + 1) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 296))(v2) - v4;
  v5 = RenderDevice::Instance();
  v6 = RenderDevice::Instance();
  v7 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v6 + 300))(v6) % 8;
  *((_DWORD *)this + 2) = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v5 + 300))(v5) - v7;
  if ( *((_DWORD *)this + 20) )
    PostProcess::CreateFXFromConfigFile(this, *((struct ConfigFile **)this + 20));
  else
    PostProcessEffect_Permanent::ReloadPermanentEffects();
  return 0;
}
