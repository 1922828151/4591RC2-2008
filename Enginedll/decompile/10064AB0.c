/*
 * func-name: ?DrawLines@Canvas@@UAEXHPAXH_N@Z
 * func-address: 0x10064ab0
 * callers: none
 * callees: 0x100956d0, 0x101189f0
 */

void __thiscall Canvas::DrawLines(Canvas *this, int a2, void *a3, int a4, bool a5)
{
  int v5; // esi
  struct RenderDevice *v6; // eax
  int v7; // edi
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax

  if ( a4 == 56 )
  {
    v5 = 262674;
  }
  else if ( a4 == 24 )
  {
    v5 = 322;
  }
  else
  {
    v5 = 324;
    if ( a4 != 28 )
      v5 = a4;
  }
  v6 = RenderDevice::Instance();
  v7 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 22, 1);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v8 + 496))(v8);
  v9 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v9 + 416))(v9, v5);
  v10 = RenderDevice::Instance();
  if ( (*(int (__thiscall **)(struct RenderDevice *, int, int, void *, int, _DWORD, _DWORD))(*(_DWORD *)v10 + 420))(
         v10,
         3,
         a2 - 1,
         a3,
         a4,
         0,
         0) < 0 )
    Error(
      "Canvas::SimpleObject() failed. Make sure you aren't trying to draw outside of Begin/EndRender()\nVerts: %d",
      a2);
  v11 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 22, v7);
}
