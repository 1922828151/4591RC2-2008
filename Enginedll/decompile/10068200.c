/*
 * func-name: ?InitLine3D@Canvas@@UAEXXZ
 * func-address: 0x10068200
 * callers: none
 * callees: 0x101189f0, 0x101786e0, 0x101a251c
 */

void __thiscall Canvas::InitLine3D(Canvas *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  float v13[16]; // [esp+54h] [ebp-40h] BYREF

  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD))(*(_DWORD *)v2 + 484))(v2, 0);
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v3 + 432))(v3, 26, 1);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v4 + 432))(v4, 27, 1);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v5 + 432))(v5, 176, 1);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v6 + 440))(v6, 0, 1, 2);
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v7 + 440))(v7, 0, 2, 0);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v8 + 440))(v8, 0, 4, 1);
  v9 = RenderDevice::Instance();
  *((_DWORD *)this + 1) = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v9 + 432))(v9, 22, 1);
  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v10 + 496))(v10);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v11 + 416))(v11, 322);
  memset(v13, 0, sizeof(v13));
  sub_101786E0(1.0);
  v13[15] = 1.0;
  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, float *))(*(_DWORD *)v12 + 456))(v12, v13);
}
