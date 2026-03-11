/*
 * func-name: sub_102A1DC0
 * func-address: 0x102a1dc0
 * callers: 0x10001311
 * callees: 0x102c9d98
 */

int __thiscall sub_102A1DC0(int this)
{
  CSeperateLine *v2; // eax
  CSeperateLine *v3; // edi
  CSeperateLine *v4; // ecx
  void (__thiscall *v5)(CSeperateLine *, _DWORD, _DWORD); // edx
  CSeperateLine *v6; // eax
  CSeperateLine *v7; // ebp
  CSeperateLine *v8; // ecx
  int v9; // eax
  void (__thiscall *v10)(CSeperateLine *, int, _DWORD); // edx
  CSeperateLine *v11; // eax
  CSeperateLine *v12; // ebp
  void (__thiscall *v13)(CSeperateLine *, _DWORD, _DWORD); // eax
  CSeperateLine *v14; // eax
  CSeperateLine *v15; // ebp
  void (__thiscall *v16)(CSeperateLine *, _DWORD, int); // edx
  CPictureLabel *v17; // eax
  CSeperateLine *v18; // ecx
  void (__thiscall *v19)(CSeperateLine *, int, int); // eax
  CREIMEEditBox *v20; // eax
  CSeperateLine *v21; // ecx
  void (__thiscall *v22)(CSeperateLine *, int, int); // edx
  int v23; // eax
  int v24; // eax
  unsigned int v25; // eax
  CREButton *v26; // eax
  CREButton *v27; // edi
  CREButton *v28; // ecx
  void (__thiscall *v29)(CREButton *, int, int); // eax
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  CREButton *v33; // eax
  CSeperateLine *v34; // ecx
  void (__thiscall *v35)(CSeperateLine *, int, int); // eax
  int v36; // ecx
  int v37; // ecx
  int v38; // ecx
  _DWORD v40[5]; // [esp+F0h] [ebp-8Ch] BYREF
  const wchar_t *v41; // [esp+104h] [ebp-78h]
  int v42; // [esp+108h] [ebp-74h]
  int p_rc; // [esp+10Ch] [ebp-70h]
  CSeperateLine *v44; // [esp+124h] [ebp-58h]
  struct tagRECT rc; // [esp+128h] [ebp-54h] BYREF
  _BYTE v46[28]; // [esp+138h] [ebp-44h] BYREF
  _BYTE v47[28]; // [esp+154h] [ebp-28h] BYREF
  int v48; // [esp+178h] [ebp-4h]

  v2 = (CSeperateLine *)operator new(0x220u);
  v3 = v2;
  v44 = v2;
  v48 = 0;
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
  *(_DWORD *)(this + 3884) = v4;
  v5 = *(void (__thiscall **)(CSeperateLine *, _DWORD, _DWORD))(*(_DWORD *)v4 + 156);
  v48 = -1;
  v5(v4, 0, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3884) + 160))(
    *(_DWORD *)(this + 3884),
    1,
    *(_DWORD *)(this + 704));
  *(_BYTE *)(*(_DWORD *)(this + 3884) + 536) = 1;
  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 3884), 0xFF77C5D1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3884));
  v6 = (CSeperateLine *)operator new(0x220u);
  v7 = v6;
  v44 = v6;
  v48 = 1;
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
  *(_DWORD *)(this + 3888) = v8;
  v10 = *(void (__thiscall **)(CSeperateLine *, int, _DWORD))(*(_DWORD *)v8 + 156);
  v48 = -1;
  v10(v8, v9 - 1, 0);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3888) + 160))(
    *(_DWORD *)(this + 3888),
    1,
    *(_DWORD *)(this + 704));
  *(_BYTE *)(*(_DWORD *)(this + 3888) + 536) = 1;
  CSeperateLine::SetBackGroundColor(*(CSeperateLine **)(this + 3888), 0xFF77C5D1);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3888));
  v11 = (CSeperateLine *)operator new(0x220u);
  v12 = v11;
  v44 = v11;
  v48 = 2;
  if ( v11 )
  {
    CSeperateLine::CSeperateLine(v11, (struct CREDialog *)this);
    *(_DWORD *)v12 = &CSeperateLine::`vftable';
  }
  else
  {
    v12 = 0;
  }
  v13 = *(void (__thiscall **)(CSeperateLine *, _DWORD, _DWORD))(*(_DWORD *)v12 + 156);
  v48 = -1;
  v13(v12, 0, 0);
  (*(void (__thiscall **)(CSeperateLine *, _DWORD, int))(*(_DWORD *)v12 + 160))(v12, *(_DWORD *)(this + 700), 1);
  p_rc = -8927791;
  *((_BYTE *)v12 + 536) = 1;
  CSeperateLine::SetBackGroundColor(v12, p_rc);
  CREDialog::AddControl((CREDialog *)this, v12);
  v14 = (CSeperateLine *)operator new(0x220u);
  v15 = v14;
  v44 = v14;
  v48 = 3;
  if ( v14 )
  {
    CSeperateLine::CSeperateLine(v14, (struct CREDialog *)this);
    *(_DWORD *)v15 = &CSeperateLine::`vftable';
  }
  else
  {
    v15 = 0;
  }
  v16 = *(void (__thiscall **)(CSeperateLine *, _DWORD, int))(*(_DWORD *)v15 + 156);
  p_rc = *(_DWORD *)(this + 696) - 1;
  v48 = -1;
  v16(v15, 0, p_rc);
  (*(void (__thiscall **)(CSeperateLine *, _DWORD, int))(*(_DWORD *)v15 + 160))(v15, *(_DWORD *)(this + 700), 1);
  p_rc = -8927791;
  *((_BYTE *)v15 + 536) = 1;
  CSeperateLine::SetBackGroundColor(v15, p_rc);
  CREDialog::AddControl((CREDialog *)this, v15);
  SetRect(&rc, 114, 988, 293, 1018);
  v17 = (CPictureLabel *)operator new(0x40Cu);
  v44 = v17;
  v48 = 4;
  if ( v17 )
  {
    CPictureLabel::CPictureLabel(v17, (struct CREDialog *)this, D3DBLEND_SRCALPHA, D3DBLEND_INVSRCALPHA);
    v18 = v44;
    *(_DWORD *)v44 = &CPictureLabel::`vftable';
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(this + 3892) = v18;
  v19 = *(void (__thiscall **)(CSeperateLine *, int, int))(*(_DWORD *)v18 + 156);
  v48 = -1;
  v19(v18, 19, 19);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3892) + 160))(*(_DWORD *)(this + 3892), 179, 30);
  p_rc = (int)&rc;
  v44 = (CSeperateLine *)v40;
  std::wstring::wstring(v40, L"GUI.dds");
  CPictureLabel::ChangeTexture(*(_DWORD *)(this + 3892), v40[0], v40[1], v40[2], v40[3], v40[4], v41, v42, p_rc);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3892));
  v20 = (CREIMEEditBox *)operator new(0x370u);
  v44 = v20;
  v48 = 5;
  if ( v20 )
  {
    CREIMEEditBox::CREIMEEditBox(v20, (struct CREDialog *)this);
    v21 = v44;
    *(_DWORD *)v44 = &CREIMEEditBox::`vftable';
  }
  else
  {
    v21 = 0;
  }
  *(_DWORD *)(this + 3900) = v21;
  v22 = *(void (__thiscall **)(CSeperateLine *, int, int))(*(_DWORD *)v21 + 156);
  v48 = -1;
  v22(v21, 19, 19);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3900) + 160))(*(_DWORD *)(this + 3900), 179, 30);
  v23 = *(_DWORD *)(this + 3900);
  p_rc = 0;
  *(_BYTE *)(v23 + 789) = 0;
  v24 = *(_DWORD *)(this + 3900);
  v42 = 16;
  v41 = (const wchar_t *)&unk_10324340;
  *(_DWORD *)(v24 + 524) = 2;
  v25 = CREDialog::AddFont((CREDialog *)this, v41, v42, p_rc);
  CREEditBox::SetTextFont(*(CREEditBox **)(this + 3900), v25);
  *(_DWORD *)(*(_DWORD *)(this + 3900) + 780) = 20;
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3900));
  v26 = (CREButton *)operator new(0x330u);
  v27 = v26;
  v44 = v26;
  v48 = 6;
  if ( v26 )
  {
    CREButton::CREButton(v26, (struct CREDialog *)this);
    *(_DWORD *)v27 = &CREButton::`vftable';
    v28 = v27;
  }
  else
  {
    v28 = 0;
  }
  *(_DWORD *)(this + 3876) = v28;
  v29 = *(void (__thiscall **)(CREButton *, int, int))(*(_DWORD *)v28 + 156);
  v48 = -1;
  v29(v28, 28, 58);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3876) + 160))(*(_DWORD *)(this + 3876), 77, 31);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v46, L"GUI.dds");
  v30 = *(_DWORD *)(this + 3876);
  v48 = 7;
  CREControl::SetCustomPic(v30, v46, &rc, 0);
  v48 = -1;
  std::wstring::~wstring(v46);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v46, L"GUI.dds");
  v31 = *(_DWORD *)(this + 3876);
  v48 = 8;
  CREControl::SetCustomPic(v31, v46, &rc, 4);
  v48 = -1;
  std::wstring::~wstring(v46);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v46, L"GUI.dds");
  v32 = *(_DWORD *)(this + 3876);
  v48 = 9;
  CREControl::SetCustomPic(v32, v46, &rc, 5);
  v48 = -1;
  std::wstring::~wstring(v46);
  CREStatic::SetText(*(CREStatic **)(this + 3876), word_10324378);
  *(_DWORD *)(*(_DWORD *)(this + 3876) + 136) = 1;
  (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 3876) + 180))(
    *(_DWORD *)(this + 3876),
    0,
    -14134154,
    0);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3876));
  v33 = (CREButton *)operator new(0x330u);
  v44 = v33;
  v48 = 10;
  if ( v33 )
  {
    CREButton::CREButton(v33, (struct CREDialog *)this);
    v34 = v44;
    *(_DWORD *)v44 = &CREButton::`vftable';
  }
  else
  {
    v34 = 0;
  }
  *(_DWORD *)(this + 3880) = v34;
  v35 = *(void (__thiscall **)(CSeperateLine *, int, int))(*(_DWORD *)v34 + 156);
  v48 = -1;
  v35(v34, 115, 58);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3880) + 160))(*(_DWORD *)(this + 3880), 77, 31);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v46, L"GUI.dds");
  v36 = *(_DWORD *)(this + 3880);
  v48 = 11;
  CREControl::SetCustomPic(v36, v46, &rc, 0);
  v48 = -1;
  std::wstring::~wstring(v46);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v46, L"GUI.dds");
  v37 = *(_DWORD *)(this + 3880);
  v48 = 12;
  CREControl::SetCustomPic(v37, v46, &rc, 4);
  v48 = -1;
  std::wstring::~wstring(v46);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v47, L"GUI.dds");
  v38 = *(_DWORD *)(this + 3880);
  v48 = 13;
  CREControl::SetCustomPic(v38, v47, &rc, 5);
  v48 = -1;
  std::wstring::~wstring(v47);
  CREStatic::SetText(*(CREStatic **)(this + 3880), word_103243B0);
  *(_DWORD *)(*(_DWORD *)(this + 3880) + 136) = 2;
  (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 3880) + 180))(
    *(_DWORD *)(this + 3880),
    0,
    -14134154,
    0);
  return CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3880));
}
