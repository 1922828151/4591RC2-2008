/*
 * func-name: ?Render@CItemHolder@@UAEXPAUIDirect3DDevice9@@M@Z
 * func-address: 0x10156140
 * callers: none
 * callees: 0x1009ad30, 0x100a5480, 0x100a5500, 0x100a5550, 0x100a56d0, 0x100a57a0, 0x100a5e50, 0x100a5f80, 0x100b5550, 0x100b55d0, 0x100b5820, 0x100b5850, 0x100b5e40, 0x100b6890, 0x100d5bd0, 0x100d6d20, 0x101a2500
 */

void __thiscall CItemHolder::Render(CItemHolder *this, struct IDirect3DDevice9 *a2, float a3)
{
  unsigned int *v4; // eax
  unsigned int v5; // edi
  GUISystem *v6; // eax
  int v7; // eax
  unsigned int v8; // ebx
  int v9; // ecx
  int v10; // ebp
  unsigned int *v11; // eax
  void (__stdcall *v12)(LPRECT, int, int, int, int); // ebx
  unsigned int v13; // eax
  float v14; // edx
  double v15; // st6
  int v16; // eax
  int i; // ebx
  unsigned int v18; // eax
  struct REFontNode *Font; // edi
  const wchar_t *v20; // eax
  unsigned int v21; // eax
  unsigned int v22; // eax
  struct REFontNode *v23; // edi
  const wchar_t *v24; // eax
  void *v25; // eax
  CREDialog *v26; // ecx
  unsigned int v27; // eax
  struct REFontNode *v28; // edi
  const wchar_t *v29; // eax
  unsigned int v30; // eax
  struct REFontNode *v31; // eax
  unsigned int v32; // ebx
  int v33; // edi
  const wchar_t *v34; // eax
  char *v35; // edi
  char *v36; // ebx
  int v37; // ebx
  LONG v38; // edx
  LONG v39; // eax
  LONG v40; // ecx
  int v41; // edx
  int v42; // eax
  int v43; // ecx
  int v44; // edx
  unsigned int v45; // edi
  unsigned int j; // ebx
  int v47; // ecx
  int v48; // edx
  int v49; // edi
  unsigned int *v50; // eax
  int v51; // eax
  unsigned int *v52; // eax
  GUISystem *v53; // eax
  int v54; // edx
  LONG v55; // ecx
  LONG v56; // edx
  LONG v57; // eax
  int v58; // ecx
  int v59; // [esp+18h] [ebp-1E4h]
  int x; // [esp+18h] [ebp-1E4h]
  struct REFontNode *v61; // [esp+18h] [ebp-1E4h]
  char v62; // [esp+1Fh] [ebp-1DDh]
  int v63; // [esp+20h] [ebp-1DCh]
  POINT pt; // [esp+24h] [ebp-1D8h] BYREF
  struct tagRECT v65; // [esp+2Ch] [ebp-1D0h] BYREF
  int v66; // [esp+3Ch] [ebp-1C0h]
  int v67; // [esp+40h] [ebp-1BCh] BYREF
  void *v68; // [esp+44h] [ebp-1B8h]
  char *v69; // [esp+48h] [ebp-1B4h]
  int v70; // [esp+4Ch] [ebp-1B0h]
  struct tagRECT v71; // [esp+50h] [ebp-1ACh] BYREF
  struct tagRECT v72; // [esp+60h] [ebp-19Ch] BYREF
  struct tagPOINT v73; // [esp+70h] [ebp-18Ch] BYREF
  int v74; // [esp+78h] [ebp-184h] BYREF
  float v75; // [esp+7Ch] [ebp-180h]
  float v76; // [esp+80h] [ebp-17Ch]
  float v77; // [esp+84h] [ebp-178h]
  float v78; // [esp+88h] [ebp-174h]
  struct tagRECT v79; // [esp+8Ch] [ebp-170h] BYREF
  float v80; // [esp+9Ch] [ebp-160h]
  float v81; // [esp+A0h] [ebp-15Ch]
  float v82; // [esp+A4h] [ebp-158h]
  float v83; // [esp+A8h] [ebp-154h]
  void *v84[2]; // [esp+ACh] [ebp-150h] BYREF
  int v85; // [esp+B4h] [ebp-148h]
  int v86; // [esp+B8h] [ebp-144h]
  int v87; // [esp+C4h] [ebp-138h] BYREF
  wchar_t *v88; // [esp+C8h] [ebp-134h] BYREF
  int v89; // [esp+D8h] [ebp-124h]
  unsigned int v90; // [esp+DCh] [ebp-120h]
  struct tagRECT v91; // [esp+E0h] [ebp-11Ch] BYREF
  struct tagRECT v92; // [esp+F0h] [ebp-10Ch] BYREF
  int v93; // [esp+100h] [ebp-FCh] BYREF
  wchar_t *v94[5]; // [esp+104h] [ebp-F8h] BYREF
  unsigned int v95; // [esp+118h] [ebp-E4h]
  struct tagRECT rc; // [esp+11Ch] [ebp-E0h] BYREF
  int v97; // [esp+12Ch] [ebp-D0h] BYREF
  unsigned int v98; // [esp+130h] [ebp-CCh]
  char v99; // [esp+148h] [ebp-B4h]
  float v100; // [esp+1E0h] [ebp-1Ch]
  float v101; // [esp+1E4h] [ebp-18h]
  float v102; // [esp+1E8h] [ebp-14h]
  float v103; // [esp+1ECh] [ebp-10h]
  int v104; // [esp+1F8h] [ebp-4h]

  v4 = (unsigned int *)*((_DWORD *)this + 133);
  v5 = 0;
  if ( v4 && *((_BYTE *)this + 632) )
  {
    if ( !v4[5] || !v4[6] )
    {
      *(_DWORD *)(*((_DWORD *)this + 133) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v4)
                                                  + 131);
      *(_DWORD *)(*((_DWORD *)this + 133) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                *((CREDialog **)this + 28),
                                                                **((_DWORD **)this + 133))
                                                  + 132);
    }
    REBlendColor::Blend((REBlendColor *)(*((_DWORD *)this + 133) + 36), 0, a3, 0.0);
    CREDialog::DrawSprite(
      *((CREDialog **)this + 28),
      *((struct CREElement **)this + 133),
      (struct tagRECT *)((char *)this + 164),
      1.0);
  }
  v6 = GUISystem::Instance();
  GUISystem::GetLogicMousePos(v6, &pt);
  v7 = *((_DWORD *)this + 28);
  pt.x -= *(_DWORD *)(v7 + 692);
  pt.y -= *(_DWORD *)(v7 + 696);
  if ( *(_BYTE *)(v7 + 176) )
    pt.y -= *(_DWORD *)(v7 + 708);
  v8 = 0;
  v66 = 0;
  while ( 1 )
  {
    v9 = *((_DWORD *)this + 135);
    if ( !v9 || v8 >= (*((_DWORD *)this + 136) - v9) >> 2 )
      break;
    v10 = *(_DWORD *)(*((_DWORD *)this + 135) + 4 * v8);
    v11 = *(unsigned int **)(v10 + 4);
    if ( !v11 )
    {
      v37 = *(_DWORD *)(*((_DWORD *)this + 30) + 64);
      REBlendColor::Blend((REBlendColor *)(v37 + 36), 0, a3, 1.0);
      v38 = *(_DWORD *)(v10 + 12);
      v39 = *(_DWORD *)(v10 + 16);
      v92.left = *(_DWORD *)(v10 + 8);
      v40 = *(_DWORD *)(v10 + 20);
      v92.top = v38;
      v41 = *((_DWORD *)this + 42);
      v92.right = v39;
      v42 = *((_DWORD *)this + 41);
      v92.bottom = v40;
      OffsetRect(&v92, v42, v41);
      CREDialog::DrawSprite(*((CREDialog **)this + 28), (struct CREElement *)v37, &v92, 1.0);
LABEL_57:
      v12 = (void (__stdcall *)(LPRECT, int, int, int, int))SetRect;
      goto LABEL_58;
    }
    if ( !v11[6] || !v11[5] )
    {
      *(_DWORD *)(*(_DWORD *)(v10 + 4) + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v11) + 131);
      *(_DWORD *)(*(_DWORD *)(v10 + 4) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                             *((CREDialog **)this + 28),
                                                             **(_DWORD **)(v10 + 4))
                                               + 132);
    }
    v12 = (void (__stdcall *)(LPRECT, int, int, int, int))SetRect;
    SetRect(
      &rc,
      *((_DWORD *)this + 41) + *(_DWORD *)(v10 + 8),
      *((_DWORD *)this + 42) + *(_DWORD *)(v10 + 12),
      *((_DWORD *)this + 41) + *(_DWORD *)(v10 + 16),
      *((_DWORD *)this + 42) + *(_DWORD *)(v10 + 20));
    v13 = *(_DWORD *)(v10 + 72);
    v75 = (double)BYTE2(v13) * 0.003921568859368563;
    v76 = (double)BYTE1(v13) * 0.003921568859368563;
    v14 = v76;
    v15 = (double)(unsigned __int8)v13;
    v59 = HIBYTE(v13);
    v16 = *(_DWORD *)(v10 + 4) + 100;
    *(float *)v16 = v75;
    *(float *)(v16 + 4) = v14;
    v77 = v15 * 0.003921568859368563;
    *(float *)(v16 + 8) = v77;
    v78 = 0.003921568859368563 * (double)v59;
    *(float *)(v16 + 12) = v78;
    CREDialog::DrawSprite(*((CREDialog **)this + 28), *(struct CREElement **)(v10 + 4), &rc, 1.0);
    if ( *(_DWORD *)(v10 + 96) && !*((_DWORD *)this + 156) && PtInRect(&rc, pt) )
    {
      v72.left = rc.left;
      v72.bottom = rc.top - 2;
      v68 = 0;
      v69 = 0;
      v70 = 0;
      v104 = 0;
      v62 = 0;
      std::wstring::wstring(&v93);
      LOBYTE(v104) = 1;
      x = 0;
      v63 = 0;
      CREEditBox::CUniBuffer::CUniBuffer((CREEditBox::CUniBuffer *)v84, 1);
      LOBYTE(v104) = 2;
      for ( i = std::wstring::find(v10 + 76, L"\\n", 0);
            i != std::wstring::npos;
            i = std::wstring::find(v10 + 76, L"\\n", i + 2) )
      {
        std::wstring::substr(v10 + 76, &v87, v5, i - v5);
        LOBYTE(v104) = 3;
        if ( v62 )
        {
          if ( v89 )
            sub_1009AD30(&v67, &v87);
        }
        else
        {
          std::wstring::operator=(&v93, &v87);
          v62 = 1;
          v18 = CREDialog::AddFont(*((CREDialog **)this + 28), (wchar_t *)&word_101CD450, 16, 1);
          Font = CREDialog::GetFont(*((CREDialog **)this + 28), v18);
          v86 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)Font + 130) + 32))(*((_DWORD *)Font + 130));
          CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v84);
          v20 = v94[0];
          if ( v95 < 8 )
            v20 = (const wchar_t *)v94;
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)v84, v20);
          v74 = 0;
          if ( CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)v84, v85, (int *)1, &v74) >= 0 && v74 > x )
            x = v74;
          v63 += *((_DWORD *)Font + 131);
        }
        v5 = i + 2;
        LOBYTE(v104) = 2;
        std::wstring::~wstring(&v87);
      }
      v21 = *(_DWORD *)(v10 + 96);
      if ( v5 < v21 )
      {
        std::wstring::substr(v10 + 76, &v87, v5, v21 - v5);
        LOBYTE(v104) = 4;
        if ( v89 )
        {
          sub_1009AD30(&v67, &v87);
          v22 = CREDialog::AddFont(*((CREDialog **)this + 28), (wchar_t *)&word_101CD458, 14, 0);
          v23 = CREDialog::GetFont(*((CREDialog **)this + 28), v22);
          v86 = (*(int (__stdcall **)(_DWORD))(**((_DWORD **)v23 + 130) + 32))(*((_DWORD *)v23 + 130));
          CREEditBox::CUniBuffer::Analyse((CREEditBox::CUniBuffer *)v84);
          v24 = v88;
          if ( v90 < 8 )
            v24 = (const wchar_t *)&v88;
          CREEditBox::CUniBuffer::SetText((CREEditBox::CUniBuffer *)v84, v24);
          v73.x = 0;
          if ( CREEditBox::CUniBuffer::CPtoX((CREEditBox::CUniBuffer *)v84, v85, (int *)1, &v73.x) >= 0 && v73.x > x )
            x = v73.x;
          v63 += *((_DWORD *)v23 + 131);
        }
        LOBYTE(v104) = 2;
        std::wstring::~wstring(&v87);
      }
      v25 = v68;
      if ( v68 )
        v25 = (void *)((v69 - (_BYTE *)v68) / 28);
      v72.right = v72.left + x + 8;
      v72.top = v72.bottom - ((_DWORD)v25 + 2 * (_DWORD)v25 + v63 + 8);
      CREDialog::DrawRect(*((CREDialog **)this + 28), &v72, 0xB4C2E6C4, 1.0);
      InflateRect(&v72, -2, -2);
      CREDialog::DrawRect(*((CREDialog **)this + 28), &v72, 0xB4003D53, 1.0);
      InflateRect(&v72, 2, 2);
      v26 = (CREDialog *)*((_DWORD *)this + 28);
      v99 = 0;
      v97 = -1;
      v27 = CREDialog::AddFont(v26, (wchar_t *)&word_101CD460, 16, 1);
      CREElement::SetFont((CREElement *)&v97, v27, 0xC8FFFFFF, 0);
      v28 = CREDialog::GetFont(*((CREDialog **)this + 28), v98);
      SetRect(&v91, v72.left + 4, v72.top + 4, v72.right - 4, v72.top + *((_DWORD *)v28 + 131) + 4);
      v80 = 1.0;
      v81 = 1.0;
      v82 = 1.0;
      v83 = 0.60000002;
      v100 = 1.0;
      v101 = 1.0;
      v102 = 1.0;
      v29 = v94[0];
      v103 = 0.60000002;
      if ( v95 < 8 )
        v29 = (const wchar_t *)v94;
      CREDialog::DrawTextW(*((CREDialog **)this + 28), v29, (struct CREElement *)&v97, &v91, 1, -1);
      OffsetRect(&v91, 0, *((_DWORD *)v28 + 131) + 3);
      v30 = CREDialog::AddFont(*((CREDialog **)this + 28), (wchar_t *)&word_101CD468, 14, 0);
      CREElement::SetFont((CREElement *)&v97, v30, 0xC8FFFFFF, 0);
      v31 = CREDialog::GetFont(*((CREDialog **)this + 28), v98);
      *(float *)&v71.left = 1.0;
      v61 = v31;
      *(float *)&v71.top = 1.0;
      *(float *)&v71.right = 1.0;
      *(float *)&v71.bottom = 0.7843138;
      v100 = 1.0;
      v32 = 0;
      v101 = 1.0;
      v102 = 1.0;
      v103 = 0.7843138;
      v33 = 0;
      while ( v68 && v32 < (v69 - (_BYTE *)v68) / 28 )
      {
        if ( *(_DWORD *)((char *)v68 + v33 + 24) < 8u )
          v34 = (const wchar_t *)((char *)v68 + v33 + 4);
        else
          v34 = *(const wchar_t **)((char *)v68 + v33 + 4);
        CREDialog::DrawTextW(*((CREDialog **)this + 28), v34, (struct CREElement *)&v97, &v91, 1, -1);
        OffsetRect(&v91, 0, *((_DWORD *)v61 + 131) + 3);
        ++v32;
        v33 += 28;
      }
      LOBYTE(v104) = 1;
      CREEditBox::CUniBuffer::~CUniBuffer(v84);
      LOBYTE(v104) = 0;
      std::wstring::~wstring(&v93);
      v35 = (char *)v68;
      v104 = -1;
      if ( v68 )
      {
        v36 = v69;
        if ( v68 != v69 )
        {
          do
          {
            std::wstring::~wstring(v35);
            v35 += 28;
          }
          while ( v35 != v36 );
          v35 = (char *)v68;
        }
        operator delete(v35);
      }
      v68 = 0;
      v69 = 0;
      v70 = 0;
      goto LABEL_57;
    }
LABEL_58:
    v65.left = *(_DWORD *)(v10 + 8);
    v65.top = *(_DWORD *)(v10 + 12);
    v43 = *((_DWORD *)this + 42);
    v65.right = *(_DWORD *)(v10 + 16);
    v44 = *((_DWORD *)this + 41);
    v65.bottom = *(_DWORD *)(v10 + 20);
    OffsetRect(&v65, v44, v43);
    v45 = *(_BYTE *)(v10 + 104) != 0 ? -8927791 : -1938307631;
    v12(&v79, v65.left, v65.top, v65.right, v65.top + 1);
    CREDialog::DrawRect(*((CREDialog **)this + 28), &v79, v45, 1.0);
    v12(&v79, v65.left, v65.top, v65.left + 1, v65.bottom);
    CREDialog::DrawRect(*((CREDialog **)this + 28), &v79, v45, 1.0);
    v12(&v79, v65.right - 1, v65.top, v65.right, v65.bottom);
    CREDialog::DrawRect(*((CREDialog **)this + 28), &v79, v45, 1.0);
    v12(&v79, v65.left, v65.bottom - 1, v65.right, v65.bottom);
    CREDialog::DrawRect(*((CREDialog **)this + 28), &v79, v45, 1.0);
    v8 = ++v66;
    v5 = 0;
  }
  for ( j = 0; ; ++j )
  {
    v47 = *((_DWORD *)this + 139);
    if ( !v47 || j >= (*((_DWORD *)this + 140) - v47) >> 2 )
      break;
    v48 = *((_DWORD *)this + 139);
    if ( *(_DWORD *)(v48 + 4 * j) )
    {
      if ( !v48 || j >= (*((_DWORD *)this + 140) - v48) >> 2 )
        invalid_parameter_noinfo();
      v49 = *(_DWORD *)(*((_DWORD *)this + 139) + 4 * j);
      v50 = *(unsigned int **)v49;
      if ( *(_DWORD *)v49 )
      {
        if ( !v50[6] || !v50[5] )
        {
          *(_DWORD *)(*(_DWORD *)v49 + 20) = *((_DWORD *)CREDialog::GetTexture(*((CREDialog **)this + 28), *v50) + 131);
          *(_DWORD *)(*(_DWORD *)v49 + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                           *((CREDialog **)this + 28),
                                                           **(_DWORD **)v49)
                                             + 132);
        }
        REBlendColor::Blend((REBlendColor *)(*(_DWORD *)v49 + 36), 0, a3, 0.0);
        SetRect(
          &v91,
          *((_DWORD *)this + 41) + *(_DWORD *)(v49 + 4),
          *((_DWORD *)this + 42) + *(_DWORD *)(v49 + 8),
          *((_DWORD *)this + 41) + *(_DWORD *)(v49 + 12),
          *((_DWORD *)this + 42) + *(_DWORD *)(v49 + 16));
        CREDialog::DrawSprite(*((CREDialog **)this + 28), *(struct CREElement **)v49, &v91, 1.0);
      }
    }
  }
  v51 = *((_DWORD *)this + 156);
  if ( v51 )
  {
    v52 = *(unsigned int **)(v51 + 4);
    if ( !v52[6] || !v52[5] )
    {
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 156) + 4) + 20) = *((_DWORD *)CREDialog::GetTexture(
                                                                                 *((CREDialog **)this + 28),
                                                                                 *v52)
                                                                   + 131);
      *(_DWORD *)(*(_DWORD *)(*((_DWORD *)this + 156) + 4) + 24) = *((_DWORD *)CREDialog::GetTexture(
                                                                                 *((CREDialog **)this + 28),
                                                                                 **(_DWORD **)(*((_DWORD *)this + 156)
                                                                                             + 4))
                                                                   + 132);
    }
    v53 = GUISystem::Instance();
    GUISystem::GetLogicMousePos(v53, &v73);
    v54 = *((_DWORD *)this + 28);
    v71.left = v73.x - *(_DWORD *)(v54 + 692);
    v55 = v73.y - *(_DWORD *)(v54 + 696);
    v56 = v71.left + *((_DWORD *)this + 147);
    v57 = v55 + *((_DWORD *)this + 148);
    v71.top = v55;
    v58 = *((_DWORD *)this + 156);
    v71.right = v56;
    v71.bottom = v57;
    REBlendColor::Blend((REBlendColor *)(*(_DWORD *)(v58 + 4) + 36), 0, a3, 0.0);
    CREDialog::DrawSprite(*((CREDialog **)this + 28), *(struct CREElement **)(*((_DWORD *)this + 156) + 4), &v71, 1.0);
  }
}
