/*
 * func-name: ?EndLine3D@Canvas@@UAEXXZ
 * func-address: 0x10064ea0
 * callers: none
 * callees: 0x101189f0
 */

void __thiscall Canvas::EndLine3D(Canvas *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax

  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v2 + 432))(v2, 26, 0);
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v3 + 432))(v3, 27, 1);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v4 + 432))(v4, 176, 0);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v5 + 440))(v5, 0, 1, 4);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v6 + 440))(v6, 0, 2, 2);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v7 + 440))(v7, 0, 4, 2);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v8 + 432))(v8, 22, *((_DWORD *)this + 1));
}
