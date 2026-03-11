/*
 * func-name: sub_1016D7C0
 * func-address: 0x1016d7c0
 * callers: 0x1016da70, 0x1016dcd0
 * callees: 0x101189f0, 0x1017eaef
 */

int __thiscall sub_1016D7C0(int this)
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
  int *v15; // edi
  float *v16; // edx
  double v17; // st7
  double v18; // st6
  unsigned int v19; // ecx
  double v20; // st6
  double v21; // st7
  int v22; // eax
  int result; // eax
  int v24; // esi
  int v25; // eax
  unsigned __int16 v26; // [esp+4Ah] [ebp-Eh]
  int v27; // [esp+4Ch] [ebp-Ch] BYREF
  __int64 v28; // [esp+50h] [ebp-8h]

  v2 = RenderDevice::Instance();
  v3 = (*(int (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v2 + 427) + 152))(*((_DWORD *)v2 + 427), 0, this + 20);
  if ( v3 < 0 )
  {
    v4 = *(_DWORD *)dword_11249F38;
    v5 = sub_1017EAEF(v3);
    (*(void (**)(void *, const char *, ...))(v4 + 4))(
      dword_11249F38,
      " Error: %s, in: RenderDevice::Instance()->dev->GetRenderTarget( 0, &m_pOldRT )",
      v5);
  }
  v6 = (*(int (__stdcall **)(_DWORD, _DWORD, int *))(**(_DWORD **)(this + 24) + 72))(*(_DWORD *)(this + 24), 0, &v27);
  if ( v6 < 0 )
  {
    v7 = *(_DWORD *)dword_11249F38;
    v8 = sub_1017EAEF(v6);
    (*(void (**)(void *, const char *, ...))(v7 + 4))(
      dword_11249F38,
      " Error: %s, in: m_pFrame->GetSurfaceLevel( 0, &pShadowSurf )",
      v8);
  }
  v9 = RenderDevice::Instance();
  (*(void (__stdcall **)(_DWORD, _DWORD, int))(**((_DWORD **)v9 + 427) + 148))(*((_DWORD *)v9 + 427), 0, v27);
  if ( v27 )
  {
    (*(void (__stdcall **)(int))(*(_DWORD *)v27 + 8))(v27);
    v27 = 0;
  }
  v10 = RenderDevice::Instance();
  v11 = (*(int (__stdcall **)(_DWORD, int))(**((_DWORD **)v10 + 427) + 160))(*((_DWORD *)v10 + 427), this + 16);
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
    *(_DWORD *)(this + 28));
  v15 = (int *)*((_DWORD *)RenderDevice::Instance() + 427);
  v16 = *(float **)(this + 12);
  LODWORD(v28) = v26 | 0xC00;
  v17 = v16[380];
  v16 += 377;
  v18 = v17 * 255.0;
  v28 = (__int64)v18;
  v28 = (__int64)(*v16 * 255.0);
  v19 = ((unsigned int)v28 | ((unsigned int)(__int64)v18 << 8)) << 8;
  v20 = v16[1] * 255.0;
  v28 = (__int64)v20;
  v21 = 255.0 * v16[2];
  LODWORD(v28) = v26 | 0xC00;
  v22 = *v15;
  v28 = (__int64)v21;
  result = (*(int (__stdcall **)(int *, _DWORD, _DWORD, int, _DWORD, _DWORD, _DWORD))(v22 + 172))(
             v15,
             0,
             0,
             7,
             (__int64)v21 | (((unsigned int)(__int64)v20 | v19) << 8),
             1.0,
             0);
  if ( result < 0 )
  {
    v24 = *(_DWORD *)dword_11249F38;
    v25 = sub_1017EAEF(result);
    return (*(int (**)(void *, const char *, ...))(v24 + 4))(
             dword_11249F38,
             " Error: %s, in: RenderDevice::Instance()->dev->Clear( 0L, NULL, D3DCLEAR_TARGET|D3DCLEAR_ZBUFFER|D3DCLEAR_S"
             "TENCIL, m_pParent->m_fcBackColor.DWORDColor(), 1.0f, 0L )",
             v25);
  }
  return result;
}
