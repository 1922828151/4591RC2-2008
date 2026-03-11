/*
 * func-name: ?Instance@VertexManager@@SAPAV1@XZ
 * func-address: 0x100e8cd0
 * callers: 0x10035930, 0x1003d0f0, 0x100769d0, 0x100805c0, 0x100ee9d0, 0x10101a60, 0x10128c50, 0x1012c310, 0x1012e2b0
 * callees: 0x101189f0
 */

struct VertexManager *__cdecl VertexManager::Instance()
{
  struct RenderDevice *v0; // eax

  v0 = RenderDevice::Instance();
  return (struct VertexManager *)(*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v0 + 20))(v0);
}
