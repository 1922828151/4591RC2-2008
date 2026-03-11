/*
 * func-name: ?BoxWithOutline@Canvas@@UAEXKKHHHHHPAVTexture@@W4BlendMode@@1@Z
 * func-address: 0x10064d00
 * callers: none
 * callees: 0x101189f0
 */

int __thiscall Canvas::BoxWithOutline(
        void *this,
        int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax

  v12 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool))(*(_DWORD *)v12 + 432))(v12, 27, a10 != 0);
  if ( a10 )
  {
    v13 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 432))(v13, 19, a10);
    v14 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v14 + 432))(v14, 20, a11);
  }
  (*(void (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 60))(
    this,
    a3,
    a4,
    a5,
    a6,
    a7,
    a8,
    a10,
    a11);
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 68))(
           this,
           a2,
           a5 + a4,
           a4 + a6,
           a7 - a4,
           a8 - a4,
           a9,
           a10,
           a11);
}
