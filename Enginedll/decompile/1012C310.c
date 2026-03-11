/*
 * func-name: ?DrawSkySimple@SkyController@@UAEXPAVCamera@@@Z
 * func-address: 0x1012c310
 * callers: none
 * callees: 0x100e8cd0, 0x101189f0
 */

void __thiscall SkyController::DrawSkySimple(SkyController *this, struct Camera *a2)
{
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct VertexManager *v7; // ebx
  _DWORD *v8; // ebp
  void (__stdcall **v9)(_DWORD *, _DWORD); // edi
  _DWORD *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  int v16; // [esp+58h] [ebp-8h]
  int v17; // [esp+5Ch] [ebp-4h]

  v3 = RenderDevice::Instance();
  v16 = (*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v3 + 432))(v3, 14, 0);
  v4 = RenderDevice::Instance();
  v17 = (*(int (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v4 + 432))(v4, 7, 0);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v5 + 432))(v5, 22, 1);
  v6 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, _DWORD, int))(**((_DWORD **)v6 + 427) + 400))(
    *((_DWORD *)v6 + 427),
    0,
    *((_DWORD *)this + 886),
    0,
    56);
  v7 = VertexManager::Instance();
  v8 = (_DWORD *)*((_DWORD *)RenderDevice::Instance() + 427);
  v9 = (void (__stdcall **)(_DWORD *, _DWORD))(*v8 + 348);
  v10 = (_DWORD *)(*(int (__thiscall **)(struct VertexManager *, int))(*(_DWORD *)v7 + 20))(v7, 56);
  (*v9)(v8, *v10);
  v11 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v11 + 427) + 416))(
    *((_DWORD *)v11 + 427),
    *((_DWORD *)this + 887));
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int, int))(*(_DWORD *)v12 + 424))(
    v12,
    4,
    *((_DWORD *)this + 888) * *((_DWORD *)this + 888),
    (*((_DWORD *)this + 888) - 1) * (2 * *((_DWORD *)this + 888) - 2));
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 432))(v13, 22, 3);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v14 + 432))(v14, 14, v16);
  v15 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v15 + 432))(v15, 7, v17);
}
