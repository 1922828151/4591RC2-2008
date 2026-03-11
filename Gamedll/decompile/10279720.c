/*
 * func-name: sub_10279720
 * func-address: 0x10279720
 * callers: 0x1001457e
 * callees: 0x102c9d98
 */

int __thiscall sub_10279720(int this)
{
  CSeperateLine *v2; // eax
  CSeperateLine *v3; // ebx
  CSeperateLine *v4; // ecx
  void (__thiscall *v5)(CSeperateLine *, _DWORD, _DWORD); // edx
  CSeperateLine *v6; // eax
  CSeperateLine *v7; // ebx
  CSeperateLine *v8; // ecx
  int v9; // eax
  void (__thiscall *v10)(CSeperateLine *, int, _DWORD); // edx
  CPictureLabel *v11; // eax
  CPictureLabel *v12; // ebx
  CPictureLabel *v13; // ecx
  void (__thiscall *v14)(CPictureLabel *, _DWORD, _DWORD); // eax
  CPictureLabel *v15; // eax
  CPictureLabel *v16; // edi
  CPictureLabel *v17; // ecx
  void (__thiscall *v18)(CPictureLabel *, _DWORD, int); // eax
  struct CREControl **v19; // edi
  CPictureLabel *v20; // eax
  struct CREControl *v21; // ecx
  int v22; // eax
  void (__thiscall *v23)(struct CREControl *, int, int); // edx
  CREStatic *v24; // eax
  CREStatic *v25; // edi
  CREStatic *v26; // ecx
  void (__thiscall *v27)(CREStatic *, _DWORD, int); // eax
  CREButton *v28; // eax
  CREButton *v29; // edi
  CREButton *v30; // ecx
  void (__thiscall *v31)(CREButton *, int, int); // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  CPictureLabel *v35; // eax
  CPictureLabel *v36; // edi
  CPictureLabel *v37; // ecx
  void (__thiscall *v38)(CPictureLabel *, int, int); // eax
  CPictureLabel *v39; // eax
  CPictureLabel *v40; // edi
  CPictureLabel *v41; // ecx
  void (__thiscall *v42)(CPictureLabel *, int, int); // eax
  CPictureLabel *v43; // eax
  CPictureLabel *v44; // edi
  CPictureLabel *v45; // ecx
  void (__thiscall *v46)(CPictureLabel *, int, int); // eax
  int v48; // [esp+160h] [ebp-90h] BYREF
  int v49; // [esp+164h] [ebp-8Ch]
  int v50; // [esp+168h] [ebp-88h]
  int v51; // [esp+16Ch] [ebp-84h]
  int v52; // [esp+170h] [ebp-80h]
  int v53; // [esp+174h] [ebp-7Ch]
  int v54; // [esp+178h] [ebp-78h]
  struct tagRECT *p_rc; // [esp+17Ch] [ebp-74h]
  int v56; // [esp+194h] [ebp-5Ch]
  CSeperateLine *v57; // [esp+198h] [ebp-58h]
  struct tagRECT rc; // [esp+19Ch] [ebp-54h] BYREF
  _BYTE v59[28]; // [esp+1ACh] [ebp-44h] BYREF
  _BYTE v60[28]; // [esp+1C8h] [ebp-28h] BYREF
  int v61; // [esp+1ECh] [ebp-4h]

  v2 = (CSeperateLine *)operator new(0x220u);
  v3 = v2;
  v57 = v2;
  v61 = 0;
  if ( v2 )
  {
    CSeperateLine::CSeperateLine(v2, (struct CREDialog *)this);
    *(_DWORD *)v3 = &CSeperateLine::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  *(_DWORD *)(this + 3940) = v4;
  v5 = *(void (__thiscall **)(CSeperateLine *, _DWORD, _DWORD))(*(_DWORD *)v4 + 156);
  v61 = -1;
  v5(v4, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3940) + 160))(
    *(_DWORD *)(this + 3940),
    1,
    *(_DWORD *)(this + 704));
  *(_BYTE *)(*(_DWORD *)(this + 3940) + 536) = 1;
  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 3940), 0xFF77C5D1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3940));
  v6 = (CSeperateLine *)operator new(0x220u);
  v7 = v6;
  v57 = v6;
  v61 = 1;
  if ( v6 )
  {
    CSeperateLine::CSeperateLine(v6, (struct CREDialog *)this);
    *(_DWORD *)v7 = &CSeperateLine::`vftable';
    v8 = v7;
  }
  else
  {
    v8 = 0;
  }
  v9 = *(_DWORD *)(this + 700);
  *(_DWORD *)(this + 3944) = v8;
  v10 = *(void (__thiscall **)(CSeperateLine *, int, _DWORD))(*(_DWORD *)v8 + 156);
  v61 = -1;
  v10(v8, v9 - 1, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3944) + 160))(
    *(_DWORD *)(this + 3944),
    1,
    *(_DWORD *)(this + 704));
  *(_BYTE *)(*(_DWORD *)(this + 3944) + 536) = 1;
  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 3944), 0xFF77C5D1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3944));
  v11 = (CPictureLabel *)operator new(0x40Cu);
  v12 = v11;
  v57 = v11;
  v61 = 2;
  if ( v11 )
  {
    CPictureLabel::CPictureLabel(v11, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v12 = &CPictureLabel::`vftable';
    v13 = v12;
  }
  else
  {
    v13 = 0;
  }
  *(_DWORD *)(this + 3880) = v13;
  v14 = *(void (__thiscall **)(CPictureLabel *, _DWORD, _DWORD))(*(_DWORD *)v13 + 156);
  v61 = -1;
  v14(v13, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3880) + 160))(*(_DWORD *)(this + 3880), 217, 8);
  SetRect(&rc, 14, 961, 231, 969);
  p_rc = &rc;
  v57 = (CSeperateLine *)&v48;
  std::wstring::wstring(&v48, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3880), v48, v49, v50, v51, v52, v53, v54, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3880));
  v15 = (CPictureLabel *)operator new(0x40Cu);
  v16 = v15;
  v57 = v15;
  v61 = 3;
  if ( v15 )
  {
    CPictureLabel::CPictureLabel(v15, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v16 = &CPictureLabel::`vftable';
    v17 = v16;
  }
  else
  {
    v17 = 0;
  }
  *(_DWORD *)(this + 3884) = v17;
  v18 = *(void (__thiscall **)(CPictureLabel *, _DWORD, int))(*(_DWORD *)v17 + 156);
  v61 = -1;
  v18(v17, 0, 103);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3884) + 160))(*(_DWORD *)(this + 3884), 217, 7);
  SetRect(&rc, 14, 975, 231, 982);
  p_rc = &rc;
  v57 = (CSeperateLine *)&v48;
  std::wstring::wstring(&v48, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3884), v48, v49, v50, v51, v52, v53, v54, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3884));
  SetRect(&rc, 14, 950, 34, 953);
  v56 = 2;
  v19 = (struct CREControl **)(this + 3900);
  do
  {
    v20 = (CPictureLabel *)operator new(0x40Cu);
    v57 = v20;
    v61 = 4;
    if ( v20 )
    {
      CPictureLabel::CPictureLabel(v20, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
      v21 = v57;
      *(_DWORD *)v57 = &CPictureLabel::`vftable';
    }
    else
    {
      v21 = 0;
    }
    v22 = v56;
    *v19 = v21;
    v23 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v21 + 156);
    v61 = -1;
    v23(v21, v22, 3);
    (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)*v19 + 160))(*v19, 20, 3);
    p_rc = &rc;
    v57 = (CSeperateLine *)&v48;
    std::wstring::wstring(&v48, L"GUI.dds");
    CPictureLabel::ChangeTexture(*v19, v48, v49, v50, v51, v52, v53, v54, p_rc);
    CREDialog::AddControl((CREDialog *)this, *v19++);
    v56 += 21;
  }
  while ( v56 < 212 );
  v24 = (CREStatic *)operator new(0x2B8u);
  v25 = v24;
  v57 = v24;
  v61 = 5;
  if ( v24 )
  {
    CREStatic::CREStatic(v24, (struct CREDialog *)this);
    *(_DWORD *)v25 = &CREStatic::`vftable';
    v26 = v25;
  }
  else
  {
    v26 = 0;
  }
  *(_DWORD *)(this + 3872) = v26;
  v27 = *(void (__thiscall **)(CREStatic *, _DWORD, int))(*(_DWORD *)v26 + 156);
  v61 = -1;
  v27(v26, 0, 30);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3872) + 160))(*(_DWORD *)(this + 3872), 217, 30);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3872) + 188))(*(_DWORD *)(this + 3872), 1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3872));
  v28 = (CREButton *)operator new(0x330u);
  v29 = v28;
  v57 = v28;
  v61 = 6;
  if ( v28 )
  {
    CREButton::CREButton(v28, (struct CREDialog *)this);
    *(_DWORD *)v29 = &CREButton::`vftable';
    v30 = v29;
  }
  else
  {
    v30 = 0;
  }
  *(_DWORD *)(this + 3876) = v30;
  v31 = *(void (__thiscall **)(CREButton *, int, int))(*(_DWORD *)v30 + 156);
  v61 = -1;
  v31(v30, 115, 58);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3876) + 160))(*(_DWORD *)(this + 3876), 77, 31);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v59, L"GUI.dds");
  v32 = *(_DWORD *)(this + 3876);
  v61 = 7;
  CREControl::SetCustomPic(v32, v59, &rc, 0);
  v61 = -1;
  std::wstring::~wstring(v59);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v59, L"GUI.dds");
  v33 = *(_DWORD *)(this + 3876);
  v61 = 8;
  CREControl::SetCustomPic(v33, v59, &rc, 4);
  v61 = -1;
  std::wstring::~wstring(v59);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v60, L"GUI.dds");
  v34 = *(_DWORD *)(this + 3876);
  v61 = 9;
  CREControl::SetCustomPic(v34, v60, &rc, 5);
  v61 = -1;
  std::wstring::~wstring(v60);
  CREStatic::SetText(*(CREStatic **)(this + 3876), word_103229F4);
  *(_DWORD *)(*(_DWORD *)(this + 3876) + 136) = 1;
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3876));
  v35 = (CPictureLabel *)operator new(0x40Cu);
  v36 = v35;
  v57 = v35;
  v61 = 10;
  if ( v35 )
  {
    CPictureLabel::CPictureLabel(v35, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v36 = &CPictureLabel::`vftable';
    v37 = v36;
  }
  else
  {
    v37 = 0;
  }
  *(_DWORD *)(this + 3888) = v37;
  v38 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v37 + 160);
  v61 = -1;
  v38(v37, 20, 3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3888) + 156))(*(_DWORD *)(this + 3888), 78, 105);
  SetRect(&rc, 14, 950, 34, 953);
  p_rc = &rc;
  v57 = (CSeperateLine *)&v48;
  std::wstring::wstring(&v48, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3888), v48, v49, v50, v51, v52, v53, v54, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3888));
  v39 = (CPictureLabel *)operator new(0x40Cu);
  v40 = v39;
  v57 = v39;
  v61 = 11;
  if ( v39 )
  {
    CPictureLabel::CPictureLabel(v39, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v40 = &CPictureLabel::`vftable';
    v41 = v40;
  }
  else
  {
    v41 = 0;
  }
  *(_DWORD *)(this + 3892) = v41;
  v42 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v41 + 160);
  v61 = -1;
  v42(v41, 20, 3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3892) + 156))(*(_DWORD *)(this + 3892), 99, 105);
  SetRect(&rc, 35, 950, 55, 953);
  p_rc = &rc;
  v57 = (CSeperateLine *)&v48;
  std::wstring::wstring(&v48, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3892), v48, v49, v50, v51, v52, v53, v54, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3892));
  v43 = (CPictureLabel *)operator new(0x40Cu);
  v44 = v43;
  v57 = v43;
  v61 = 12;
  if ( v43 )
  {
    CPictureLabel::CPictureLabel(v43, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v44 = &CPictureLabel::`vftable';
    v45 = v44;
  }
  else
  {
    v45 = 0;
  }
  *(_DWORD *)(this + 3896) = v45;
  v46 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v45 + 160);
  v61 = -1;
  v46(v45, 20, 3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3896) + 156))(*(_DWORD *)(this + 3896), 120, 105);
  SetRect(&rc, 56, 950, 76, 953);
  p_rc = &rc;
  v57 = (CSeperateLine *)&v48;
  std::wstring::wstring(&v48, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3896), v48, v49, v50, v51, v52, v53, v54, p_rc);
  return CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3896));
}
