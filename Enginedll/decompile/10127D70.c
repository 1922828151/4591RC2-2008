/*
 * func-name: sub_10127D70
 * func-address: 0x10127d70
 * callers: 0x100dd720, 0x100df7d0
 * callees: 0x101189f0, 0x10127b40, 0x10127cb0, 0x1017eaef
 */

int __thiscall sub_10127D70(int this, int a2)
{
  struct RenderDevice *v3; // eax
  int result; // eax
  int v5; // eax
  int v6; // edi
  int v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax

  *(_DWORD *)(this + 4) = a2;
  if ( *((float *)RenderDevice::Instance() + 411) < 3.0 )
  {
    v8 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, _DWORD, _DWORD, int, int, _DWORD))(**((_DWORD **)v8 + 427) + 116))(
      *((_DWORD *)v8 + 427),
      *(_DWORD *)(this + 4),
      *(_DWORD *)(this + 4),
      75,
      0,
      0,
      1,
      this + 20,
      0);
  }
  else
  {
    v3 = RenderDevice::Instance();
    result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, _DWORD, int, _DWORD))(**((_DWORD **)v3 + 427)
                                                                                              + 92))(
               *((_DWORD *)v3 + 427),
               *(_DWORD *)(this + 4),
               *(_DWORD *)(this + 4),
               1,
               2,
               75,
               0,
               this + 24,
               0);
    if ( result < 0 )
      return result;
    v5 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(**(_DWORD **)(this + 24) + 72))(
           *(_DWORD *)(this + 24),
           0,
           this + 20);
    if ( v5 < 0 )
    {
      v6 = *(_DWORD *)dword_11249F38;
      v7 = sub_1017EAEF(v5);
      (*(void (**)(void *, const char *, ...))(v6 + 4))(
        dword_11249F38,
        " Error: %s, in: m_pTexDepthShadow->GetSurfaceLevel( 0, &m_pDSShadow )",
        v7);
    }
  }
  if ( *((float *)RenderDevice::Instance() + 411) >= 2.0 )
  {
    v10 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, _DWORD, int, _DWORD))(**((_DWORD **)v10 + 427) + 92))(
      *((_DWORD *)v10 + 427),
      *(_DWORD *)(this + 4),
      *(_DWORD *)(this + 4),
      1,
      1,
      114,
      0,
      this + 16,
      0);
  }
  else
  {
    v9 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, int, _DWORD, int, _DWORD))(**((_DWORD **)v9 + 427) + 92))(
      *((_DWORD *)v9 + 427),
      *(_DWORD *)(this + 4),
      *(_DWORD *)(this + 4),
      1,
      1,
      22,
      0,
      this + 16,
      0);
  }
  sub_10127B40(this);
  return sub_10127CB0((_DWORD *)this);
}
