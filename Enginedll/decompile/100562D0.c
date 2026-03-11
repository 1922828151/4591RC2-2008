/*
 * func-name: ?RenderQueuedBatches@BatchRenderer@@QAEXPAVWorld@@@Z
 * func-address: 0x100562d0
 * callers: 0x10139890, 0x1016dcd0
 * callees: 0x10055d20, 0x101189f0
 */

void __thiscall BatchRenderer::RenderQueuedBatches(BatchRenderer *this, struct World *a2)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax

  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v2 + 432))(v2, 24, 255);
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v3 + 432))(v3, 14, 1);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v4 + 432))(v4, 25, 7);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v5 + 432))(v5, 19, 5);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 20, 6);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 23, 2);
  sub_10055D20(&unk_10280B80);
  sub_10055D20(&byte_10280BD0);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 23, 4);
}
