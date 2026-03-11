/*
 * func-name: ?BoxWithOutline@Canvas@@UAEXKKHAAUtagRECT@@PAVTexture@@W4BlendMode@@2@Z
 * func-address: 0x10064dc0
 * callers: none
 * callees: 0x101189f0
 */

int __thiscall Canvas::BoxWithOutline(void *this, int a2, int a3, int a4, int *a5, int a6, int a7, int a8)
{
  int v8; // ebx
  int v9; // esi
  int v10; // edi
  int v12; // esi
  int v13; // edi
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  int v18; // [esp+4Ch] [ebp+10h]

  v8 = *a5;
  v9 = a5[2];
  v10 = a5[3];
  v18 = a5[1];
  v12 = v9 - v8;
  v13 = v10 - v18;
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, bool))(*(_DWORD *)v14 + 432))(v14, 27, a7 != 0);
  if ( a7 )
  {
    v15 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v15 + 432))(v15, 19, a7);
    v16 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v16 + 432))(v16, 20, a8);
  }
  (*(void (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 60))(
    this,
    a3,
    a4,
    v8,
    v18,
    v12,
    v13,
    a7,
    a8);
  return (*(int (__thiscall **)(void *, int, int, int, int, int, int, int, int))(*(_DWORD *)this + 68))(
           this,
           a2,
           a4 + v8,
           a4 + v18,
           v12 - a4,
           v13 - a4,
           a6,
           a7,
           a8);
}
