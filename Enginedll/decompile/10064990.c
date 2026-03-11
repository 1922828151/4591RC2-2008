/*
 * func-name: ?SimpleObject@Canvas@@UAEXHPAXH0H_N11@Z
 * func-address: 0x10064990
 * callers: none
 * callees: 0x100956d0, 0x101189f0
 */

void __thiscall Canvas::SimpleObject(
        Canvas *this,
        int a2,
        void *a3,
        int a4,
        void *a5,
        int a6,
        bool a7,
        bool a8,
        bool a9)
{
  int v9; // ebp
  int v10; // edi
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  int v14; // esi
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax

  v9 = a6;
  v10 = -1;
  switch ( a6 )
  {
    case 56:
      v10 = 262674;
      goto LABEL_7;
    case 24:
      v10 = 322;
      break;
    case 28:
      v10 = 324;
      break;
    default:
      Error("AVertexSize not validly specified for SimpleObject() call");
      goto LABEL_7;
  }
  if ( !a8 )
  {
    v11 = RenderDevice::Instance();
    a6 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 22, 1);
  }
LABEL_7:
  if ( a9 )
  {
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *))(*(_DWORD *)v12 + 496))(v12);
  }
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v13 + 416))(v13, v10);
  if ( a7 )
    v14 = a4 - 2;
  else
    v14 = a4 / 3;
  v15 = RenderDevice::Instance();
  if ( (*(int (__thiscall **)(struct RenderDevice *, int, int, void *, int, void *, int))(*(_DWORD *)v15 + 420))(
         v15,
         a7 + 4,
         a2,
         a3,
         v9,
         a5,
         v14) < 0 )
    Error(
      "Canvas::SimpleObject() failed. Make sure you aren't trying to draw outside of Begin/EndRender()\nVerts: %d",
      a2);
  if ( (v10 == 324 || v10 == 322) && !a8 )
  {
    v16 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v16 + 432))(v16, 22, a6);
  }
}
