/*
 * func-name: sub_102A5280
 * func-address: 0x102a5280
 * callers: 0x1000501f
 * callees: 0x102c9d98
 */

int __thiscall sub_102A5280(int this)
{
  CSeperateLine *v2; // eax
  CSeperateLine *v3; // edi
  CSeperateLine *v4; // ecx
  void (__thiscall *v5)(CSeperateLine *, _DWORD, _DWORD); // edx
  CSeperateLine *v6; // eax
  CSeperateLine *v7; // edi
  CSeperateLine *v8; // ecx
  int v9; // eax
  void (__thiscall *v10)(CSeperateLine *, int, _DWORD); // edx
  CPictureLabel *v11; // eax
  CPictureLabel *v12; // edi
  CPictureLabel *v13; // ecx
  void (__thiscall *v14)(CPictureLabel *, _DWORD, _DWORD); // eax
  CPictureLabel *v15; // eax
  CPictureLabel *v16; // ebp
  CPictureLabel *v17; // ecx
  void (__thiscall *v18)(CPictureLabel *, _DWORD, int); // eax
  struct CREControl **v19; // ebp
  CPictureLabel *v20; // eax
  struct CREControl *v21; // ecx
  int v22; // eax
  void (__thiscall *v23)(struct CREControl *, int, int); // edx
  CREStatic *v24; // eax
  CREStatic *v25; // ebp
  CREStatic *v26; // ecx
  void (__thiscall *v27)(CREStatic *, _DWORD, int); // eax
  CREButton *v28; // eax
  CREButton *v29; // ebp
  CREButton *v30; // ecx
  void (__thiscall *v31)(CREButton *, int, int); // eax
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  CREButton *v35; // eax
  CSeperateLine *v36; // ecx
  void (__thiscall *v37)(CSeperateLine *, int, int); // eax
  int v38; // ecx
  int v39; // ecx
  int v40; // ecx
  CPictureLabel *v41; // eax
  CPictureLabel *v42; // ebp
  CPictureLabel *v43; // ecx
  void (__thiscall *v44)(CPictureLabel *, int, int); // eax
  CPictureLabel *v45; // eax
  CPictureLabel *v46; // ebp
  CPictureLabel *v47; // ecx
  void (__thiscall *v48)(CPictureLabel *, int, int); // eax
  CPictureLabel *v49; // eax
  CPictureLabel *v50; // ebp
  CPictureLabel *v51; // ecx
  void (__thiscall *v52)(CPictureLabel *, int, int); // eax
  int v54; // [esp+1ACh] [ebp-90h] BYREF
  int v55; // [esp+1B0h] [ebp-8Ch]
  int v56; // [esp+1B4h] [ebp-88h]
  int v57; // [esp+1B8h] [ebp-84h]
  int v58; // [esp+1BCh] [ebp-80h]
  int v59; // [esp+1C0h] [ebp-7Ch]
  int v60; // [esp+1C4h] [ebp-78h]
  struct tagRECT *p_rc; // [esp+1C8h] [ebp-74h]
  int v62; // [esp+1E0h] [ebp-5Ch]
  CSeperateLine *v63; // [esp+1E4h] [ebp-58h]
  struct tagRECT rc; // [esp+1E8h] [ebp-54h] BYREF
  _BYTE v65[28]; // [esp+1F8h] [ebp-44h] BYREF
  _BYTE v66[28]; // [esp+214h] [ebp-28h] BYREF
  int v67; // [esp+238h] [ebp-4h]

  v2 = (CSeperateLine *)operator new(0x220u);
  v3 = v2;
  v63 = v2;
  v67 = 0;
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
  *(_DWORD *)(this + 3944) = v4;
  v5 = *(void (__thiscall **)(CSeperateLine *, _DWORD, _DWORD))(*(_DWORD *)v4 + 156);
  v67 = -1;
  v5(v4, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3944) + 160))(
    *(_DWORD *)(this + 3944),
    1,
    *(_DWORD *)(this + 704));
  *(_BYTE *)(*(_DWORD *)(this + 3944) + 536) = 1;
  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 3944), 0xFF77C5D1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3944));
  v6 = (CSeperateLine *)operator new(0x220u);
  v7 = v6;
  v63 = v6;
  v67 = 1;
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
  *(_DWORD *)(this + 3948) = v8;
  v10 = *(void (__thiscall **)(CSeperateLine *, int, _DWORD))(*(_DWORD *)v8 + 156);
  v67 = -1;
  v10(v8, v9 - 1, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3948) + 160))(
    *(_DWORD *)(this + 3948),
    1,
    *(_DWORD *)(this + 704));
  *(_BYTE *)(*(_DWORD *)(this + 3948) + 536) = 1;
  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 3948), 0xFF77C5D1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3948));
  v11 = (CPictureLabel *)operator new(0x40Cu);
  v12 = v11;
  v63 = v11;
  v67 = 2;
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
  *(_DWORD *)(this + 3884) = v13;
  v14 = *(void (__thiscall **)(CPictureLabel *, _DWORD, _DWORD))(*(_DWORD *)v13 + 156);
  v67 = -1;
  v14(v13, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3884) + 160))(*(_DWORD *)(this + 3884), 217, 8);
  SetRect(&rc, 14, 961, 231, 969);
  p_rc = &rc;
  v63 = (CSeperateLine *)&v54;
  std::wstring::wstring(&v54, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3884), v54, v55, v56, v57, v58, v59, v60, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3884));
  v15 = (CPictureLabel *)operator new(0x40Cu);
  v16 = v15;
  v63 = v15;
  v67 = 3;
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
  *(_DWORD *)(this + 3888) = v17;
  v18 = *(void (__thiscall **)(CPictureLabel *, _DWORD, int))(*(_DWORD *)v17 + 156);
  v67 = -1;
  v18(v17, 0, 103);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3888) + 160))(*(_DWORD *)(this + 3888), 217, 7);
  SetRect(&rc, 14, 975, 231, 982);
  p_rc = &rc;
  v63 = (CSeperateLine *)&v54;
  std::wstring::wstring(&v54, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3888), v54, v55, v56, v57, v58, v59, v60, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3888));
  SetRect(&rc, 14, 950, 34, 953);
  v62 = 2;
  v19 = (struct CREControl **)(this + 3904);
  do
  {
    v20 = (CPictureLabel *)operator new(0x40Cu);
    v63 = v20;
    v67 = 4;
    if ( v20 )
    {
      CPictureLabel::CPictureLabel(v20, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
      v21 = v63;
      *(_DWORD *)v63 = &CPictureLabel::`vftable';
    }
    else
    {
      v21 = 0;
    }
    v22 = v62;
    *v19 = v21;
    v23 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v21 + 156);
    v67 = -1;
    v23(v21, v22, 3);
    (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)*v19 + 160))(*v19, 20, 3);
    p_rc = &rc;
    v63 = (CSeperateLine *)&v54;
    std::wstring::wstring(&v54, L"GUI.dds");
    CPictureLabel::ChangeTexture(*v19, v54, v55, v56, v57, v58, v59, v60, p_rc);
    CREDialog::AddControl((CREDialog *)this, *v19++);
    v62 += 21;
  }
  while ( v62 < 212 );
  v24 = (CREStatic *)operator new(0x2B8u);
  v25 = v24;
  v63 = v24;
  v67 = 5;
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
  v67 = -1;
  v27(v26, 0, 30);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3872) + 160))(*(_DWORD *)(this + 3872), 217, 30);
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3872) + 188))(*(_DWORD *)(this + 3872), 1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3872));
  v28 = (CREButton *)operator new(0x330u);
  v29 = v28;
  v63 = v28;
  v67 = 6;
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
  v67 = -1;
  v31(v30, 28, 58);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3876) + 160))(*(_DWORD *)(this + 3876), 77, 31);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v65, L"GUI.dds");
  v32 = *(_DWORD *)(this + 3876);
  v67 = 7;
  CREControl::SetCustomPic(v32, v65, &rc, 0);
  v67 = -1;
  std::wstring::~wstring(v65);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v65, L"GUI.dds");
  v33 = *(_DWORD *)(this + 3876);
  v67 = 8;
  CREControl::SetCustomPic(v33, v65, &rc, 4);
  v67 = -1;
  std::wstring::~wstring(v65);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v65, L"GUI.dds");
  v34 = *(_DWORD *)(this + 3876);
  v67 = 9;
  CREControl::SetCustomPic(v34, v65, &rc, 5);
  v67 = -1;
  std::wstring::~wstring(v65);
  CREStatic::SetText(*(CREStatic **)(this + 3876), word_103247F4);
  *(_DWORD *)(*(_DWORD *)(this + 3876) + 136) = 1;
  (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 3876) + 180))(
    *(_DWORD *)(this + 3876),
    0,
    -14134154,
    0);
  v35 = (CREButton *)operator new(0x330u);
  v63 = v35;
  v67 = 10;
  if ( v35 )
  {
    CREButton::CREButton(v35, (struct CREDialog *)this);
    v36 = v63;
    *(_DWORD *)v63 = &CREButton::`vftable';
  }
  else
  {
    v36 = 0;
  }
  *(_DWORD *)(this + 3880) = v36;
  v37 = *(void (__thiscall **)(CSeperateLine *, int, int))(*(_DWORD *)v36 + 156);
  v67 = -1;
  v37(v36, 115, 58);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3880) + 160))(*(_DWORD *)(this + 3880), 77, 31);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v65, L"GUI.dds");
  v38 = *(_DWORD *)(this + 3880);
  v67 = 11;
  CREControl::SetCustomPic(v38, v65, &rc, 0);
  v67 = -1;
  std::wstring::~wstring(v65);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v65, L"GUI.dds");
  v39 = *(_DWORD *)(this + 3880);
  v67 = 12;
  CREControl::SetCustomPic(v39, v65, &rc, 4);
  v67 = -1;
  std::wstring::~wstring(v65);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v66, L"GUI.dds");
  v40 = *(_DWORD *)(this + 3880);
  v67 = 13;
  CREControl::SetCustomPic(v40, v66, &rc, 5);
  v67 = -1;
  std::wstring::~wstring(v66);
  CREStatic::SetText(*(CREStatic **)(this + 3880), word_1032482C);
  *(_DWORD *)(*(_DWORD *)(this + 3880) + 136) = 2;
  (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 3880) + 180))(
    *(_DWORD *)(this + 3880),
    0,
    -14134154,
    0);
  v41 = (CPictureLabel *)operator new(0x40Cu);
  v42 = v41;
  v63 = v41;
  v67 = 14;
  if ( v41 )
  {
    CPictureLabel::CPictureLabel(v41, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v42 = &CPictureLabel::`vftable';
    v43 = v42;
  }
  else
  {
    v43 = 0;
  }
  *(_DWORD *)(this + 3892) = v43;
  v44 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v43 + 160);
  v67 = -1;
  v44(v43, 20, 3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3892) + 156))(*(_DWORD *)(this + 3892), 78, 105);
  SetRect(&rc, 14, 950, 34, 953);
  p_rc = &rc;
  v63 = (CSeperateLine *)&v54;
  std::wstring::wstring(&v54, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3892), v54, v55, v56, v57, v58, v59, v60, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3892));
  v45 = (CPictureLabel *)operator new(0x40Cu);
  v46 = v45;
  v63 = v45;
  v67 = 15;
  if ( v45 )
  {
    CPictureLabel::CPictureLabel(v45, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v46 = &CPictureLabel::`vftable';
    v47 = v46;
  }
  else
  {
    v47 = 0;
  }
  *(_DWORD *)(this + 3896) = v47;
  v48 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v47 + 160);
  v67 = -1;
  v48(v47, 20, 3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3896) + 156))(*(_DWORD *)(this + 3896), 99, 105);
  SetRect(&rc, 35, 950, 55, 953);
  p_rc = &rc;
  v63 = (CSeperateLine *)&v54;
  std::wstring::wstring(&v54, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3896), v54, v55, v56, v57, v58, v59, v60, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3896));
  v49 = (CPictureLabel *)operator new(0x40Cu);
  v50 = v49;
  v63 = v49;
  v67 = 16;
  if ( v49 )
  {
    CPictureLabel::CPictureLabel(v49, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    *(_DWORD *)v50 = &CPictureLabel::`vftable';
    v51 = v50;
  }
  else
  {
    v51 = 0;
  }
  *(_DWORD *)(this + 3900) = v51;
  v52 = *(void (__thiscall **)(CPictureLabel *, int, int))(*(_DWORD *)v51 + 160);
  v67 = -1;
  v52(v51, 20, 3);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3900) + 156))(*(_DWORD *)(this + 3900), 120, 105);
  SetRect(&rc, 56, 950, 76, 953);
  p_rc = &rc;
  v63 = (CSeperateLine *)&v54;
  std::wstring::wstring(&v54, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3900), v54, v55, v56, v57, v58, v59, v60, p_rc);
  return CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3900));
}
