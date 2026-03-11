/*
 * func-name: ?OnRender@CREDialog@@UAEJM@Z
 * func-address: 0x100c4d20
 * callers: 0x100c54e0
 * callees: 0x100a5e50, 0x100af820, 0x100b5280, 0x100b5850, 0x100b5e40, 0x101189f0, 0x101a26a0
 */

int __userpurge CREDialog::OnRender@<eax>(
        CREDialog *this@<ecx>,
        int a2@<ebp>,
        int a3@<edi>,
        float a4,
        float a5,
        float a6)
{
  CREDialog **v7; // ecx
  int i; // edi
  CREDialog **v9; // eax
  struct CREDialogResourceManager *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RenderDevice *v18; // eax
  struct RenderDevice *v19; // eax
  struct RenderDevice *v20; // eax
  struct CREDialogResourceManager *v21; // eax
  struct RenderDevice *v22; // eax
  int v23; // eax
  LONG v24; // edx
  LONG v25; // eax
  int v26; // edi
  int j; // ebp
  struct CREControl *v28; // edi
  int v30; // [esp+8Ch] [ebp-40h]
  int v31; // [esp+A0h] [ebp-2Ch]
  struct tagRECT v32; // [esp+A4h] [ebp-28h] BYREF
  struct tagRECT rc; // [esp+B4h] [ebp-18h] BYREF
  char v34; // [esp+C4h] [ebp-8h] BYREF
  int v35; // [esp+C8h] [ebp-4h]

  if ( s_fTimeRefresh > *((double *)this + 20) )
  {
    *((double *)this + 20) = GSeconds;
    CREDialog::Refresh(this);
  }
  if ( *((_BYTE *)this + 87) )
  {
    v30 = a3;
    if ( !*((_BYTE *)this + 177) )
    {
      v7 = (CREDialog **)CREDialog::s_pControlFocus;
      for ( i = 0; i < *((_DWORD *)this + 192); ++i )
      {
        v9 = *(CREDialog ***)(*((_DWORD *)this + 191) + 4 * i);
        if ( v9 != v7 )
        {
          (*((void (__thiscall **)(_DWORD, int))*v9 + 6))(*(_DWORD *)(*((_DWORD *)this + 191) + 4 * i), v30);
          v7 = (CREDialog **)CREDialog::s_pControlFocus;
        }
      }
      if ( v7 && v7[28] == this )
        (*((void (__thiscall **)(CREDialog **))*v7 + 6))(v7);
    }
    REGetGlobalDialogResourceManager();
    v10 = REGetGlobalDialogResourceManager();
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)v10 + 16))(*(_DWORD *)v10, a2, v30);
    v11 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v11 + 432))(v11, 27, 1);
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v12 + 432))(v12, 19, 5);
    v13 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v13 + 432))(v13, 20, 6);
    v14 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v14 + 440))(v14, 0, 1, 4);
    v15 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v15 + 440))(v15, 0, 2, 2);
    v16 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v16 + 440))(v16, 0, 3, 0);
    v17 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 440))(v17, 0, 4, 4);
    v18 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v18 + 440))(v18, 0, 5, 2);
    v19 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v19 + 440))(v19, 0, 6, 0);
    v20 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v20 + 448))(v20, 0, 6, 2);
    v21 = REGetGlobalDialogResourceManager();
    (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v21 + 1) + 32))(*((_DWORD *)v21 + 1), 1);
    v22 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v22 + 432))(v22, 7, 0);
    SetRect(&rc, 0, 0, *((_DWORD *)this + 175), *((_DWORD *)this + 176));
    SetRect((LPRECT)&v34, 0, 0, *((_DWORD *)this + 175), *((_DWORD *)this + 176) - *((_DWORD *)this + 178));
    if ( *((_BYTE *)this + 176) )
      v35 = *((_DWORD *)this + 177);
    if ( !*((_BYTE *)this + 177) && *((_BYTE *)this + 62) )
    {
      if ( *((_BYTE *)this + 100) && (v23 = *((_DWORD *)this + 37)) != 0 )
      {
        REBlendColor::Blend((REBlendColor *)(v23 + 36), 0, a6, 0.0);
        CREDialog::DrawSprite(this, *((struct CREElement **)this + 37), &rc, 1.0);
      }
      else
      {
        CREDialog::DrawRect(this, &rc, 0x8C225D68, 1.0);
      }
    }
    if ( *((_BYTE *)this + 176) )
    {
      v24 = *((_DWORD *)this + 202) - *((_DWORD *)this + 200);
      v25 = *((_DWORD *)this + 177);
      v32.left = 0;
      v32.top = 0;
      v32.right = v24;
      v32.bottom = v25;
      REBlendColor::Blend((CREDialog *)((char *)this + 824), 0, 1.0, 1.0);
      CREDialog::DrawSprite(this, (CREDialog *)((char *)this + 788), &v32, 1.0);
      REBlendColor::Blend((CREDialog *)((char *)this + 1020), 0, 1.0, 1.0);
      v26 = *((_DWORD *)this + 175)
          + *((_DWORD *)this + 200)
          + *((_DWORD *)this + 298)
          - *((_DWORD *)this + 300)
          - *((_DWORD *)this + 202);
      if ( v26 > 0 )
      {
        SetRect(
          &v32,
          *((_DWORD *)this + 202) - *((_DWORD *)this + 200),
          0,
          *((_DWORD *)this + 202) - *((_DWORD *)this + 200) + 1,
          *((_DWORD *)this + 177));
        do
        {
          CREDialog::DrawSprite(this, (CREDialog *)((char *)this + 984), &v32, 1.0);
          OffsetRect(&v32, 1, 0);
          --v26;
        }
        while ( v26 );
      }
      REBlendColor::Blend((CREDialog *)((char *)this + 1216), 0, 1.0, 1.0);
      SetRect(
        &v32,
        *((_DWORD *)this + 298) + *((_DWORD *)this + 175) - *((_DWORD *)this + 300),
        0,
        *((_DWORD *)this + 175),
        *((_DWORD *)this + 177));
      CREDialog::DrawSprite(this, (CREDialog *)((char *)this + 1180), &v32, 1.0);
    }
    for ( j = 0; j < *((_DWORD *)this + 192); ++j )
    {
      v28 = *(struct CREControl **)(*((_DWORD *)this + 191) + 4 * j);
      if ( v28 != CREDialog::s_pControlFocus
        && (*(unsigned __int8 (__thiscall **)(struct CREControl *))(*(_DWORD *)v28 + 140))(v28) )
      {
        (*(void (__thiscall **)(struct CREControl *))(*(_DWORD *)v28 + 20))(v28);
      }
    }
    if ( CREDialog::s_pControlFocus
      && *((CREDialog **)CREDialog::s_pControlFocus + 28) == this
      && (*(unsigned __int8 (**)(void))(*(_DWORD *)CREDialog::s_pControlFocus + 140))() )
    {
      (*(void (__stdcall **)(int, float))(*(_DWORD *)CREDialog::s_pControlFocus + 20))(v31, COERCE_FLOAT(LODWORD(a6)));
    }
    if ( (dword_11240B40 & 1) == 0 )
    {
      dword_11240B40 |= 1u;
      dword_11240B24 = 0;
      dword_11240B28 = 0;
      dword_11240B2C = 0;
      dword_11240B30 = 0;
      dword_11240B34 = 0;
      dword_11240B38 = 0;
      dword_11240B3C = 0;
      dword_11240B1C = 0;
      dword_11240B20 = 0;
      atexit(sub_101B8F70);
    }
    (*(void (__cdecl **)(int))(*(_DWORD *)dword_11240B20 + 44))(dword_11240B20);
    if ( (dword_11240B40 & 1) == 0 )
    {
      dword_11240B40 |= 1u;
      dword_11240B24 = 0;
      dword_11240B28 = 0;
      dword_11240B2C = 0;
      dword_11240B30 = 0;
      dword_11240B34 = 0;
      dword_11240B38 = 0;
      dword_11240B3C = 0;
      dword_11240B1C = 0;
      dword_11240B20 = 0;
      atexit(sub_101B8F70);
    }
    (*(void (__cdecl **)(_DWORD))(*dword_11240B1C + 20))(dword_11240B1C);
  }
  return 0;
}
