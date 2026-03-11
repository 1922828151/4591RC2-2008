/*
 * func-name: ?DrawHierarchy@StaticModel@@QAEXXZ
 * func-address: 0x100eeb40
 * callers: none
 * callees: 0x100ee670, 0x101189f0
 */

void __thiscall StaticModel::DrawHierarchy(struct ModelFrame ***this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax

  dword_11240D9C = 0;
  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v2 + 360))(v2);
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v3 + 440))(v3, 0, 2, 3);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v4 + 440))(v4, 0, 1, 2);
  StaticModel::DrawHierarchy((StaticModel *)this, this[77], 0);
}
