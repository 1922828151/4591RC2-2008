/*
 * func-name: ?OnRender@CTYMenu@@UAEJM@Z
 * func-address: 0x101543d0
 * callers: none
 * callees: 0x100a5e50, 0x100a78a0, 0x100a9ad0, 0x100b5280, 0x100b5820, 0x100b5e40, 0x100b6890, 0x101189f0
 */

int __userpurge CTYMenu::OnRender@<eax>(CTYMenu *this@<ecx>, int a2@<ebp>, int a3@<edi>, float a4, float a5, float a6)
{
  struct CREDialogResourceManager *v7; // eax
  struct RenderDevice *v8; // eax
  struct RenderDevice *v9; // eax
  struct RenderDevice *v10; // eax
  struct RenderDevice *v11; // eax
  struct RenderDevice *v12; // eax
  struct RenderDevice *v13; // eax
  struct RenderDevice *v14; // eax
  struct RenderDevice *v15; // eax
  struct RenderDevice *v16; // eax
  struct RenderDevice *v17; // eax
  struct RETextureNode *Texture; // edi
  struct RenderDevice *v19; // eax
  struct CREDialogResourceManager *v20; // eax
  struct RenderDevice *v21; // eax
  unsigned int v22; // edi
  int i; // ebp
  int v24; // eax
  int v25; // eax
  void (__cdecl *v26)(); // ebx
  unsigned int *v27; // eax
  int v28; // eax
  int v29; // eax
  int v30; // edx
  int v31; // eax
  int v32; // eax
  struct CREElement *DefaultElement; // eax
  struct CREElement *v34; // ebx
  int v35; // eax
  int v36; // eax
  bool v37; // cf
  int v38; // eax
  const wchar_t *v39; // eax
  int v40; // eax
  struct CREDialogResourceManager *v41; // eax
  struct CREDialogResourceManager *v42; // eax
  struct tagRECT v44; // [esp+ACh] [ebp-28h] BYREF
  struct tagRECT rc; // [esp+BCh] [ebp-18h] BYREF
  char v46; // [esp+CCh] [ebp-8h] BYREF

  if ( CTYDialog::GetVisible(this) )
  {
    REGetGlobalDialogResourceManager();
    v7 = REGetGlobalDialogResourceManager();
    (*(void (__stdcall **)(_DWORD, int, int))(**(_DWORD **)v7 + 16))(*(_DWORD *)v7, a3, a2);
    v8 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v8 + 432))(v8, 27, 1);
    v9 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v9 + 432))(v9, 19, 5);
    v10 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v10 + 432))(v10, 20, 6);
    v11 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v11 + 440))(v11, 0, 1, 4);
    v12 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v12 + 440))(v12, 0, 2, 2);
    v13 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v13 + 440))(v13, 0, 3, 0);
    v14 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v14 + 440))(v14, 0, 4, 4);
    v15 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v15 + 440))(v15, 0, 5, 2);
    v16 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, _DWORD))(*(_DWORD *)v16 + 440))(v16, 0, 6, 0);
    v17 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, _DWORD, int, int))(*(_DWORD *)v17 + 448))(v17, 0, 6, 2);
    Texture = CREDialog::GetTexture(this, 0);
    v19 = RenderDevice::Instance();
    (*(void (__stdcall **)(_DWORD, _DWORD, _DWORD))(**((_DWORD **)v19 + 427) + 260))(
      *((_DWORD *)v19 + 427),
      0,
      *((_DWORD *)Texture + 130));
    v20 = REGetGlobalDialogResourceManager();
    (*(void (__stdcall **)(_DWORD, int))(**((_DWORD **)v20 + 1) + 32))(*((_DWORD *)v20 + 1), 1);
    v21 = RenderDevice::Instance();
    (*(void (__thiscall **)(struct RenderDevice *, int, _DWORD))(*(_DWORD *)v21 + 432))(v21, 7, 0);
    SetRect((LPRECT)&v46, 0, 0, *((_DWORD *)this + 175), *((_DWORD *)this + 176));
    if ( *((_DWORD *)this + 973) )
    {
      SetRect(&rc, 0, 0, *((_DWORD *)this + 175), *((_DWORD *)this + 176));
      REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 973) + 36), 0, a6, 0.0);
      CREDialog::DrawSprite(this, *((struct CREElement **)this + 973), &rc, 1.0);
    }
    SetRect(&v44, 0, 0, *((_DWORD *)this + 175), *((_DWORD *)this + 977));
    v22 = 0;
    for ( i = 0; ; i += 36 )
    {
      v24 = *((_DWORD *)this + 969);
      if ( !v24 || v22 >= (*((_DWORD *)this + 970) - v24) / 36 )
        break;
      if ( *((_DWORD *)this + 972) )
      {
        v25 = *((_DWORD *)this + 969);
        if ( v25 && v22 < (*((_DWORD *)this + 970) - v25) / 36 )
        {
          v26 = invalid_parameter_noinfo;
        }
        else
        {
          v26 = invalid_parameter_noinfo;
          invalid_parameter_noinfo();
        }
        if ( *(_DWORD *)(*((_DWORD *)this + 969) + i) == *((_DWORD *)this + 975) )
        {
          v27 = (unsigned int *)*((_DWORD *)this + 972);
          if ( !v27[5] || !v27[6] )
          {
            *(_DWORD *)(*((_DWORD *)this + 972) + 20) = *((_DWORD *)CREDialog::GetTexture(this, *v27) + 131);
            *(_DWORD *)(*((_DWORD *)this + 972) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                      this,
                                                                      **((_DWORD **)this + 972))
                                                        + 132);
          }
          REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 972) + 36), 0, a6, 0.0);
          CREDialog::DrawSprite(this, *((struct CREElement **)this + 972), &v44, 1.0);
        }
      }
      else
      {
        v26 = invalid_parameter_noinfo;
      }
      v28 = *((_DWORD *)this + 969);
      if ( !v28 || v22 >= (*((_DWORD *)this + 970) - v28) / 36 )
        v26();
      v29 = *((_DWORD *)this + 969);
      if ( *((_DWORD *)this + 975) != *(_DWORD *)(v29 + i) )
      {
        if ( !v29 || v22 >= (*((_DWORD *)this + 970) - v29) / 36 )
          v26();
        v30 = *((_DWORD *)this + 969);
        if ( *(_DWORD *)(v30 + i + 32) )
        {
          if ( !v30 || v22 >= (*((_DWORD *)this + 970) - v30) / 36 )
            v26();
          REBlendColor::Blend((REBlendColor *)(*(_DWORD *)(*((_DWORD *)this + 969) + i + 32) + 36), 0, a6, 0.0);
          v32 = *((_DWORD *)this + 969);
          if ( !v32 || v22 >= (*((_DWORD *)this + 970) - v32) / 36 )
            v26();
          CREDialog::DrawSprite(this, *(struct CREElement **)(*((_DWORD *)this + 969) + i + 32), &v44, 1.0);
        }
        else
        {
          v31 = *((_DWORD *)this + 974);
          if ( v31 )
          {
            REBlendColor::Blend((REBlendColor *)(v31 + 36), 0, a6, 0.0);
            CREDialog::DrawSprite(this, *((struct CREElement **)this + 974), &v44, 1.0);
          }
        }
      }
      DefaultElement = CREDialog::GetDefaultElement(this, 2u, 0);
      v34 = DefaultElement;
      if ( DefaultElement )
      {
        REBlendColor::Blend((struct CREElement *)((char *)DefaultElement + 116), 0, a6, 0.0);
        *((_DWORD *)v34 + 2) = 5;
        v35 = *((_DWORD *)this + 969);
        if ( !v35 || v22 >= (*((_DWORD *)this + 970) - v35) / 36 )
          invalid_parameter_noinfo();
        v36 = *((_DWORD *)this + 969);
        v37 = *(_DWORD *)(v36 + i + 28) < 8u;
        v38 = v36 + i + 4;
        if ( v37 )
          v39 = (const wchar_t *)(v38 + 4);
        else
          v39 = *(const wchar_t **)(v38 + 4);
        CREDialog::DrawTextW(this, v39, v34, &v44, 0, -1);
      }
      v40 = *((_DWORD *)this + 977);
      v44.top += v40;
      v44.bottom += v40;
      ++v22;
    }
    v41 = REGetGlobalDialogResourceManager();
    (*(void (__cdecl **)(_DWORD))(**((_DWORD **)v41 + 1) + 44))(*((_DWORD *)v41 + 1));
    v42 = REGetGlobalDialogResourceManager();
    (*(void (__cdecl **)(_DWORD))(**(_DWORD **)v42 + 20))(*(_DWORD *)v42);
  }
  return 0;
}
