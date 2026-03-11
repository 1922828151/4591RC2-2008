/*
 * func-name: ?Render@CHotZonePic@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x100c3c90
 * callers: none
 * callees: 0x100a5e50, 0x100a9030, 0x100b4f40, 0x100b5280, 0x100b5e40, 0x101189f0, 0x101a26a0, 0x101a26c0
 */

void __thiscall CHotZonePic::Render(CHotZonePic *this, struct IDirect3DDevice9 *a2, float a3)
{
  int *v4; // eax
  int v5; // edi
  int v6; // ebx
  struct CREDialogResourceManager *v7; // eax
  int v8; // edi
  int v9; // edi
  int v10; // ebx
  int v11; // edi
  int v12; // edi
  int *v13; // eax
  int v14; // edi
  int v15; // ebx
  struct CREDialogResourceManager *v16; // eax
  int v17; // edi
  int v18; // edi
  int v19; // ebx
  int v20; // edi
  int v21; // edi
  _DWORD *v22; // edi
  LONG v23; // edx
  LONG v24; // ecx
  LONG v25; // ebp
  LONG v26; // ebx
  LONG v27; // eax
  LONG v28; // edx
  LONG v29; // ecx
  LONG v30; // ecx
  LONG v31; // ecx
  LONG v32; // edx
  LONG v33; // eax
  int v34; // ebx
  LONG bottom; // ecx
  LONG right; // ecx
  LONG v37; // edx
  _DWORD *v38; // eax
  unsigned int i; // edi
  int v40; // ecx
  int v41; // edi
  LONG v42; // ecx
  LONG v43; // edx
  LONG v44; // eax
  __int64 v45; // rax
  int v46; // ebp
  __int64 v47; // rax
  double v48; // st7
  double v49; // st7
  struct CREDialogResourceManager *v50; // eax
  struct RenderDevice *v51; // eax
  int v52; // ebx
  struct RenderDevice *v53; // eax
  int v54; // ebp
  unsigned int v55; // eax
  LONG top; // ecx
  double v57; // st6
  LONG *v58; // eax
  struct CREDialogResourceManager *v59; // eax
  struct RenderDevice *v60; // eax
  struct RenderDevice *v61; // eax
  unsigned int j; // ebx
  int v63; // ecx
  int v64; // edi
  struct RenderDevice *v65; // eax
  int v66; // ebx
  struct RenderDevice *v67; // eax
  int v68; // ebp
  struct RenderDevice *v69; // eax
  struct RenderDevice *v70; // eax
  int v71; // [esp+2Ch] [ebp-40h]
  int v72; // [esp+30h] [ebp-3Ch]
  float v73; // [esp+34h] [ebp-38h]
  int v74; // [esp+34h] [ebp-38h]
  int v75; // [esp+34h] [ebp-38h]
  unsigned int v76; // [esp+38h] [ebp-34h]
  unsigned int v77; // [esp+38h] [ebp-34h]
  struct tagRECT rc; // [esp+3Ch] [ebp-30h] BYREF
  struct tagRECT v79; // [esp+4Ch] [ebp-20h] BYREF
  struct tagRECT v80; // [esp+5Ch] [ebp-10h] BYREF

  v4 = (int *)*((_DWORD *)this + 134);
  if ( v4 )
  {
    if ( !v4[5] || !v4[6] )
    {
      v5 = *v4;
      v6 = *((_DWORD *)this + 28);
      v7 = REGetGlobalDialogResourceManager();
      if ( v7 )
      {
        v8 = *(_DWORD *)(*(_DWORD *)(v6 + 740) + 4 * v5);
        v7 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v8);
      }
      *(_DWORD *)(*((_DWORD *)this + 134) + 20) = *((_DWORD *)v7 + 131);
      v9 = **((_DWORD **)this + 134);
      v10 = *((_DWORD *)this + 28);
      if ( REGetGlobalDialogResourceManager() )
      {
        v12 = *(_DWORD *)(*(_DWORD *)(v10 + 740) + 4 * v9);
        v11 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v12);
      }
      else
      {
        v11 = 0;
      }
      *(_DWORD *)(*((_DWORD *)this + 134) + 24) = *(_DWORD *)(v11 + 528);
    }
    REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 134) + 36), 0, a3, 0.0);
    CREDialog::DrawSprite(
      *((CREDialog **)this + 28),
      *((struct CREElement **)this + 134),
      (struct tagRECT *)((char *)this + 164),
      1.0);
  }
  v13 = (int *)*((_DWORD *)this + 133);
  if ( v13 )
  {
    if ( !v13[5] || !v13[6] )
    {
      v14 = *v13;
      v15 = *((_DWORD *)this + 28);
      v16 = REGetGlobalDialogResourceManager();
      if ( v16 )
      {
        v17 = *(_DWORD *)(*(_DWORD *)(v15 + 740) + 4 * v14);
        v16 = *(struct CREDialogResourceManager **)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v17);
      }
      *(_DWORD *)(*((_DWORD *)this + 133) + 20) = *((_DWORD *)v16 + 131);
      v18 = **((_DWORD **)this + 133);
      v19 = *((_DWORD *)this + 28);
      if ( REGetGlobalDialogResourceManager() )
      {
        v21 = *(_DWORD *)(*(_DWORD *)(v19 + 740) + 4 * v18);
        v20 = *(_DWORD *)(*((_DWORD *)REGetGlobalDialogResourceManager() + 2) + 4 * v21);
      }
      else
      {
        v20 = 0;
      }
      *(_DWORD *)(*((_DWORD *)this + 133) + 24) = *(_DWORD *)(v20 + 528);
    }
    REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 133) + 36), 0, a3, 0.0);
    if ( *((_BYTE *)this + 627) )
    {
      v22 = (_DWORD *)*((_DWORD *)this + 133);
      v23 = *((_DWORD *)this + 41);
      v24 = *((_DWORD *)this + 43);
      v25 = v22[4];
      v26 = v22[5];
      v79.top = *((_DWORD *)this + 42);
      v27 = v22[3];
      v79.left = v23;
      v28 = *((_DWORD *)this + 44);
      v79.right = v24;
      v29 = v22[6];
      v79.bottom = v28;
      rc.left = v27;
      rc.top = v25;
      rc.right = v26;
      rc.bottom = v29;
      if ( v27 < 0 )
      {
        v79.left = (int)((double)v79.left
                       - (double)rc.left
                       / (double)(v26 - v27)
                       * (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41)));
        rc.left = 0;
      }
      if ( v25 < 0 )
      {
        v79.top = (int)((double)v79.top
                      - (double)rc.top
                      / (double)(v22[6] - v25)
                      * (double)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42)));
        rc.top = 0;
      }
      if ( v26 > *((_DWORD *)this + 154) - *((_DWORD *)this + 152) )
      {
        v30 = *((_DWORD *)this + 154) - *((_DWORD *)this + 152);
        v79.right = (int)((double)v79.right
                        - (double)(v26 + *((_DWORD *)this + 152) - *((_DWORD *)this + 154))
                        / (double)(v26 - v22[3])
                        * (double)(*((_DWORD *)this + 43) - *((_DWORD *)this + 41)));
        rc.right = v30;
      }
      if ( rc.bottom > *((_DWORD *)this + 155) - *((_DWORD *)this + 153) )
      {
        v31 = *((_DWORD *)this + 155) - *((_DWORD *)this + 153);
        v79.bottom = (int)((double)v79.bottom
                         - (double)(rc.bottom + *((_DWORD *)this + 153) - *((_DWORD *)this + 155))
                         / (double)(v22[6] - v25)
                         * (double)(*((_DWORD *)this + 44) - *((_DWORD *)this + 42)));
        rc.bottom = v31;
      }
      v32 = v22[5];
      v33 = v22[6];
      v34 = v22[3];
      v22[3] = rc.left;
      bottom = rc.bottom;
      v80.right = v32;
      v22[4] = rc.top;
      v80.bottom = v33;
      v22[5] = rc.right;
      v22[6] = bottom;
      CREDialog::DrawSprite(*((CREDialog **)this + 28), *((struct CREElement **)this + 133), &v79, 1.0);
      right = v80.right;
      v37 = v80.bottom;
      v38 = (_DWORD *)(*((_DWORD *)this + 133) + 12);
      *v38 = v34;
      v38[1] = v25;
      v38[2] = right;
      v38[3] = v37;
    }
    else
    {
      CREDialog::DrawSprite(
        *((CREDialog **)this + 28),
        *((struct CREElement **)this + 133),
        (struct tagRECT *)((char *)this + 164),
        1.0);
    }
  }
  for ( i = 0; ; i = v76 + 1 )
  {
    v40 = *((_DWORD *)this + 141);
    v76 = i;
    if ( !v40 || i >= (*((_DWORD *)this + 142) - v40) >> 2 )
      break;
    v41 = *(_DWORD *)(*((_DWORD *)this + 141) + 4 * i);
    if ( (!*(_DWORD *)v41 || CHotZonePic::CheckHoverPicType(this, *(_DWORD *)v41)) && *(_BYTE *)(v41 + 44) )
    {
      if ( !*(_BYTE *)(v41 + 52) )
        goto LABEL_42;
      if ( *(float *)(v41 + 64) > 0.0 && GSeconds > *(float *)(v41 + 68) + *(float *)(v41 + 64) )
        *(_BYTE *)(v41 + 52) = 0;
      if ( *(_BYTE *)(v41 + 52) )
      {
        v45 = *(_DWORD *)(v41 + 8) + *(_DWORD *)(v41 + 16);
        v46 = ((int)v45 - HIDWORD(v45)) >> 1;
        v73 = (GSeconds - *(float *)(v41 + 68)) / (*(float *)(v41 + 60) * 0.5);
        v48 = v73;
        v71 = (int)v73;
        if ( v71 % 2 )
          v49 = (v48 - (double)v71) * (1.0 - *(float *)(v41 + 56)) + *(float *)(v41 + 56);
        else
          v49 = 1.0 - (v48 - (double)v71) * (1.0 - *(float *)(v41 + 56));
        v72 = *(_DWORD *)(v41 + 16) - *(_DWORD *)(v41 + 8);
        v74 = *(_DWORD *)(v41 + 20) - *(_DWORD *)(v41 + 12);
        v47 = *(_DWORD *)(v41 + 12) + *(_DWORD *)(v41 + 20);
        SetRect(
          &rc,
          v46 - (int)((double)v72 * v49) / 2,
          (((int)v47 - HIDWORD(v47)) >> 1) - (int)(v49 * (double)v74) / 2,
          (int)((double)v72 * v49) / 2 + v46,
          (int)(v49 * (double)v74) / 2 + (((int)v47 - HIDWORD(v47)) >> 1));
      }
      else
      {
LABEL_42:
        v42 = *(_DWORD *)(v41 + 12);
        v43 = *(_DWORD *)(v41 + 16);
        rc.left = *(_DWORD *)(v41 + 8);
        v44 = *(_DWORD *)(v41 + 20);
        rc.top = v42;
        rc.right = v43;
        rc.bottom = v44;
      }
      if ( CHotZonePic::SetZoneRect(
             this,
             &rc,
             (RECT *)this + 37,
             (struct tagRECT *)(v41 + 24),
             (struct tagRECT *)(*(_DWORD *)(v41 + 4) + 12),
             &v80,
             *(_BYTE *)(v41 + 45)) )
      {
        v50 = REGetGlobalDialogResourceManager();
        (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v50 + 1) + 40))(*((_DWORD *)v50 + 1));
        v51 = RenderDevice::Instance();
        v52 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v51 + 432))(v51, 19, 5);
        v53 = RenderDevice::Instance();
        v54 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v53 + 432))(v53, 20, 6);
        OffsetRect(&v80, *((_DWORD *)this + 41), *((_DWORD *)this + 42));
        v55 = *(_DWORD *)(v41 + 48);
        *(float *)&v79.left = (double)BYTE2(v55) * 0.003921568859368563;
        *(float *)&v79.top = (double)BYTE1(v55) * 0.003921568859368563;
        top = v79.top;
        v57 = (double)(unsigned __int8)v55;
        v75 = HIBYTE(v55);
        v58 = (LONG *)(*(_DWORD *)(v41 + 4) + 100);
        *v58 = v79.left;
        v58[1] = top;
        *(float *)&v79.right = v57 * 0.003921568859368563;
        v58[2] = v79.right;
        *(float *)&v79.bottom = 0.003921568859368563 * (double)v75;
        v58[3] = v79.bottom;
        CREDialog::DrawSprite(*((CREDialog **)this + 28), *(struct CREElement **)(v41 + 4), &v80, 1.0);
        v59 = REGetGlobalDialogResourceManager();
        (*(void (__stdcall **)(_DWORD))(**((_DWORD **)v59 + 1) + 40))(*((_DWORD *)v59 + 1));
        v60 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v60 + 432))(v60, 19, v52);
        v61 = RenderDevice::Instance();
        (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v61 + 432))(v61, 20, v54);
      }
    }
  }
  for ( j = 0; ; ++j )
  {
    v63 = *((_DWORD *)this + 137);
    v77 = j;
    if ( !v63 || j >= (*((_DWORD *)this + 138) - v63) >> 2 )
      break;
    v64 = *(_DWORD *)(*((_DWORD *)this + 137) + 4 * j);
    if ( *(_BYTE *)(v64 + 36)
      && CHotZonePic::SetZoneRect(
           this,
           (struct tagRECT *)v64,
           (RECT *)this + 37,
           (struct tagRECT *)(v64 + 16),
           (struct tagRECT *)(*(_DWORD *)(v64 + 32) + 12),
           &v80,
           *(_BYTE *)(v64 + 37)) )
    {
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
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_11240B20 + 40))(dword_11240B20);
      v65 = RenderDevice::Instance();
      v66 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v65 + 432))(v65, 19, 5);
      v67 = RenderDevice::Instance();
      v68 = (*(int (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v67 + 432))(v67, 20, 6);
      OffsetRect(&v80, *((_DWORD *)this + 41), *((_DWORD *)this + 42));
      REBlendColor::Blend((REBlendColor *)(*(_DWORD *)(v64 + 32) + 36), 0, a3, 0.0);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), *(struct CREElement **)(v64 + 32), &v80, 1.0);
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
      (*(void (__stdcall **)(int))(*(_DWORD *)dword_11240B20 + 40))(dword_11240B20);
      v69 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v69 + 432))(v69, 19, v66);
      v70 = RenderDevice::Instance();
      (*(void (__thiscall **)(struct RenderDevice *, int, int))(*(_DWORD *)v70 + 432))(v70, 20, v68);
      j = v77;
    }
  }
}
