/*
 * func-name: ?PostRender@FXManager@@QAEXAAVCamera@@_N@Z
 * func-address: 0x100a0d00
 * callers: 0x101396e0
 * callees: 0x100a0220, 0x100a0810, 0x101189f0
 */

void __userpurge FXManager::PostRender(FXManager *this@<ecx>, int a2@<ebx>, int a3@<edi>, struct Camera *a4, bool a5)
{
  struct RenderDevice *v6; // eax
  int v7; // ebp
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // edi
  struct RenderDevice *v14; // ebx
  void (__thiscall **v15)(struct RenderDevice *, _DWORD, int, int); // esi
  int v16; // eax
  struct RenderDevice *v17; // eax

  v6 = RenderDevice::Instance();
  v7 = (*(int (__thiscall **)(struct RenderDevice *, _DWORD, int))(*(_DWORD *)v6 + 452))(v6, 0, 5);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v8 + 448))(v8, 0, 7, 2);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v9 + 448))(v9, 0, 5, 2);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v10 + 448))(v10, 0, 6, 2);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 19, 5);
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v12 + 448))(v12, 0, 10, 1);
  byte_102C7A49 = 0;
  FXManager::DrawBatchedQuads(this);
  if ( a5 )
    FXManager::DrawShadedQuads(a2, v7, a3, (int)this);
  v13 = RenderDevice::Instance();
  v14 = RenderDevice::Instance();
  v15 = (void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v14 + 448);
  v16 = (*(int (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v13 + 284))(v13);
  (*v15)(v14, 0, 10, v16);
  v17 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 448))(v17, 0, 5, v7);
}
