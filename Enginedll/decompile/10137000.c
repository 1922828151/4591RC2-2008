/*
 * func-name: ?Instance@TextureManager@@SAPAV1@XZ
 * func-address: 0x10137000
 * callers: 0x1010d330, 0x10136140, 0x101361a0, 0x10136210, 0x10136360, 0x10136400, 0x10136530, 0x1013e1c0, 0x1015c210, 0x10171950
 * callees: 0x101189f0
 */

struct TextureManager *__cdecl TextureManager::Instance()
{
  struct RenderDevice *v0; // eax

  v0 = RenderDevice::Instance();
  return (struct TextureManager *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v0 + 16))(v0);
}
