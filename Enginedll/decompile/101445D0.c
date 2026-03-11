/*
 * func-name: ?DebugRender@NxPhysics@@QAEXXZ
 * func-address: 0x101445d0
 * callers: 0x10088cd0, 0x10145a20
 * callees: 0x101189f0, 0x10144030, 0x10148e60
 */

void __thiscall NxPhysics::DebugRender(NxPhysics *this)
{
  struct RenderDevice *v2; // eax
  struct RenderDevice *v3; // eax
  struct RenderDevice *v4; // eax
  struct RenderDevice *v5; // eax
  struct RenderDevice *v6; // eax
  int v7; // eax
  _BYTE v8[64]; // [esp+8h] [ebp-80h] BYREF
  _BYTE v9[64]; // [esp+48h] [ebp-40h] BYREF

  NxPhysics::FlushScene(this);
  v2 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v2 + 468))(v2, v8);
  v3 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v3 + 480))(v3, v9);
  v4 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v4 + 364))(v4);
  v5 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v5 + 464))(v5, v8);
  v6 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, _BYTE *))(*(_DWORD *)v6 + 476))(v6, v9);
  v7 = (*(int (__thiscall **)(_DWORD))(**((_DWORD **)this + 3) + 336))(*((_DWORD *)this + 3));
  sub_10148E60(v7);
}
