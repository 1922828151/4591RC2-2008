/*
 * func-name: ?SimpleObject_Shaded@Canvas@@UAEXHPAXH_N11@Z
 * func-address: 0x10064880
 * callers: none
 * callees: 0x100956d0, 0x101189f0
 */

void __userpurge Canvas::SimpleObject_Shaded(
        int a1@<ebx>,
        int a2@<ebp>,
        int a3@<esi>,
        int a4,
        void *a5,
        int a6,
        int a7,
        int a8,
        bool a9,
        char a10)
{
  int v11; // edi
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  int v15; // esi
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  int v18; // [esp+24h] [ebp-4h]

  if ( a6 == 56 )
  {
    v11 = 262674;
  }
  else
  {
    if ( a6 == 24 )
    {
      v11 = 322;
    }
    else if ( a6 == 28 )
    {
      v11 = 324;
    }
    else
    {
      v11 = a7;
      if ( a7 != 324 && a7 != 322 )
        goto LABEL_10;
    }
    v12 = RenderDevice::Instance();
    v18 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 22, 1);
  }
LABEL_10:
  v13 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int, int, int))(*(_DWORD *)v13 + 496))(v13, a3, a2, a1);
  v14 = RenderDevice::Instance();
  (*(void (__thiscall **)(struct RenderDevice *, int))(*(_DWORD *)v14 + 416))(v14, v11);
  if ( a10 )
    v15 = a7 - 2;
  else
    v15 = a7 / 3;
  v16 = RenderDevice::Instance();
  if ( (*(int (__thiscall **)(struct RenderDevice *, int, int, int))(*(_DWORD *)v16 + 420))(
         v16,
         (a10 != 0) + 4,
         v15,
         a8) < 0 )
    Error(
      "Canvas::SimpleObject() failed. Make sure you aren't trying to draw outside of Begin/EndRender()\nVerts: %d",
      a7);
  if ( v11 == 324 || v11 == 322 )
  {
    v17 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v17 + 432))(v17, 22, v18);
  }
}
