/*
 * func-name: ?SimpleFanObject@Canvas@@UAEXHPAXH@Z
 * func-address: 0x100647a0
 * callers: none
 * callees: 0x100956d0, 0x101189f0
 */

void __thiscall Canvas::SimpleFanObject(Canvas *this, int a2, void *a3, int a4)
{
  int v4; // edi
  int v5; // esi
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax

  v4 = a4;
  switch ( a4 )
  {
    case 56:
      v5 = 262674;
      goto LABEL_10;
    case 24:
      v5 = 322;
LABEL_9:
      v6 = RenderDevice::Instance();
      a4 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v6 + 432))(v6, 22, 1);
      goto LABEL_10;
    case 28:
      v5 = 324;
      goto LABEL_9;
  }
  v5 = a4;
  if ( a4 == 324 || a4 == 322 )
    goto LABEL_9;
LABEL_10:
  v7 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v7 + 496))(v7);
  v8 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v8 + 416))(v8, v5);
  v9 = RenderDevice::Instance();
  if ( (*(int (__thiscall **)(struct RenderDevice *, int, int, void *, int, _DWORD, _DWORD))(*(_DWORD *)v9 + 420))(
         v9,
         6,
         a2 - 2,
         a3,
         v4,
         0,
         0) < 0 )
    Error(
      "Canvas::SimpleObject() failed. Make sure you aren't trying to draw outside of Begin/EndRender()\nVerts: %d",
      a2);
  if ( v5 == 324 || v5 == 322 )
  {
    v10 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v10 + 432))(v10, 22, a4);
  }
}
