/*
 * func-name: sub_100551B0
 * func-address: 0x100551b0
 * callers: 0x1005bd90, 0x1005cb50
 * callees: 0x101189f0
 */

int __thiscall sub_100551B0(_BYTE *this, int a2, char a3)
{
  struct RenderDevice *v4; // eax
  int v5; // eax
  struct RenderDevice *v6; // eax
  struct RenderDevice *v7; // eax
  int result; // eax
  int v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax

  if ( a3 )
  {
    if ( !*this )
    {
      v5 = *(_DWORD *)(a2 + 276);
      if ( *(_BYTE *)(v5 + 84) )
      {
        if ( *(_BYTE *)(v5 + 81) )
        {
          v6 = RenderDevice::Instance();
          (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v6 + 432))(v6, 27, 0);
        }
      }
    }
  }
  else
  {
    v4 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v4 + 432))(v4, 27, 1);
  }
  v7 = RenderDevice::Instance();
  result = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v7 + 432))(v7, 25, 7);
  if ( *this )
  {
    v9 = *(_DWORD *)(a2 + 276);
    if ( *(_BYTE *)(v9 + 84) && *(_BYTE *)(v9 + 81) )
    {
      v10 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v10 + 432))(v10, 25, 2);
    }
    v11 = RenderDevice::Instance();
    result = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 23, 2);
  }
  if ( !a3 )
  {
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 20, 2);
    if ( *(_BYTE *)(*(_DWORD *)(a2 + 276) + 81) )
    {
      v13 = RenderDevice::Instance();
      return (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 432))(v13, 19, 5);
    }
    else
    {
      v14 = RenderDevice::Instance();
      return (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v14 + 432))(v14, 19, 2);
    }
  }
  return result;
}
