/*
 * func-name: sub_10127B40
 * func-address: 0x10127b40
 * callers: 0x10127d70, 0x101282d0
 * callees: 0x101189f0, 0x1017eaef
 */

int __thiscall sub_10127B40(int this)
{
  struct RenderDevice *v2; // eax
  int v3; // eax
  int v4; // edi
  int v5; // eax
  int v6; // eax
  int v7; // edi
  int v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  int v11; // eax
  int v12; // edi
  int v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  int result; // eax
  int v17; // esi
  int v18; // eax
  int v19; // [esp+48h] [ebp-4h] BYREF

  v2 = RenderDevice::Instance();
  v3 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 427) + 152))(*((_DWORD *)v2 + 427), 0, this + 12);
  if ( v3 < 0 )
  {
    v4 = *(_DWORD *)dword_11249F38;
    v5 = sub_1017EAEF(v3);
    (*(void (**)(void *, const char *, ...))(v4 + 4))(
      dword_11249F38,
      " Error: %s, in: RenderDevice::Instance()->dev->GetRenderTarget( 0, &m_pOldRT )",
      v5);
  }
  v6 = (*(int (__stdcall **)(_DWORD, _DWORD, int *))(**(_DWORD **)(this + 16) + 72))(*(_DWORD *)(this + 16), 0, &v19);
  if ( v6 < 0 )
  {
    v7 = *(_DWORD *)dword_11249F38;
    v8 = sub_1017EAEF(v6);
    (*(void (**)(void *, const char *, ...))(v7 + 4))(
      dword_11249F38,
      " Error: %s, in: m_pShadowMap->GetSurfaceLevel( 0, &pShadowSurf )",
      v8);
  }
  v9 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v9 + 427) + 148))(*((_DWORD *)v9 + 427), 0, v19);
  if ( v19 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v19 + 8))(v19);
    v19 = 0;
  }
  v10 = RenderDevice::Instance();
  v11 = (*(int (__stdcall **)(_DWORD, int))(**((_DWORD **)v10 + 427) + 160))(*((_DWORD *)v10 + 427), this + 8);
  if ( v11 < 0 )
  {
    v12 = *(_DWORD *)dword_11249F38;
    v13 = sub_1017EAEF(v11);
    (*(void (**)(void *, const char *, ...))(v12 + 4))(
      dword_11249F38,
      " Error: %s, in: RenderDevice::Instance()->dev->GetDepthStencilSurface( &m_pOldDS )",
      v13);
  }
  v14 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD))(**((_DWORD **)v14 + 427) + 156))(
    *((_DWORD *)v14 + 427),
    *(_DWORD *)(this + 20));
  v15 = RenderDevice::Instance();
  result = (*(int (__stdcall **)(_DWORD, _DWORD, _DWORD, int, int, _DWORD, _DWORD))(**((_DWORD **)v15 + 427) + 172))(
             *((_DWORD *)v15 + 427),
             0,
             0,
             3,
             -1,
             1.0,
             0);
  if ( result < 0 )
  {
    v17 = *(_DWORD *)dword_11249F38;
    v18 = sub_1017EAEF(result);
    return (*(int (**)(void *, const char *, ...))(v17 + 4))(
             dword_11249F38,
             " Error: %s, in: RenderDevice::Instance()->dev->Clear( 0L, NULL, D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER, 0xffffffff, 1.0f, 0L )",
             v18);
  }
  return result;
}
