/*
 * func-name: ?BoxOutline@Canvas@@UAEXKHHHHHW4BlendMode@@0@Z
 * func-address: 0x10064b70
 * callers: none
 * callees: 0x101189f0
 */

int __thiscall Canvas::BoxOutline(void *this, int a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax

  v10 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool))(*(_DWORD *)v10 + 432))(v10, 27, a8 != 0);
  if ( a8 )
  {
    v11 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 19, a8);
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 20, a9);
  }
  (*(void (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 56))(
    this,
    a2,
    a3,
    a4,
    a5,
    a4 + a6,
    a5,
    a8,
    a9);
  (*(void (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 56))(
    this,
    a2,
    a3,
    a4,
    a5,
    a4,
    a5 + a7,
    a8,
    a9);
  (*(void (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 56))(
    this,
    a2,
    a3,
    a4 + a6,
    a5,
    a4 + a6,
    a7 + a5 + a3,
    a8,
    a9);
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 56))(
           this,
           a2,
           a3,
           a4,
           a5 + a7,
           a4 + a6,
           a5 + a7,
           a8,
           a9);
}
