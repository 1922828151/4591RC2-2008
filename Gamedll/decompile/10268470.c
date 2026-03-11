/*
 * func-name: ?InitComponent@CDropBagUI@@QAEXXZ_0
 * func-address: 0x10268470
 * callers: 0x10007c7f
 * callees: 0x10002d24, 0x10004e21, 0x10006dd4, 0x1000811b, 0x1000bd6b, 0x102c9d98
 */

void __thiscall CDropBagUI::InitComponent(CItemHolder **this)
{
  CItemHolder *v2; // eax
  CItemHolder *v3; // edi
  CItemHolder *v4; // ecx
  void (__thiscall *v5)(CItemHolder *, int, int); // edx
  CItemHolder *v6; // eax
  CItemHolder *v7; // ecx
  CItemHolder *v8; // eax
  CItemHolder *v9; // ebp
  CItemHolder *v10; // ecx
  void (__thiscall *v11)(CItemHolder *, int, int); // eax
  CItemHolder *v12; // eax
  CItemHolder *v13; // ecx
  CREScrollBar *v14; // eax
  CREScrollBar *v15; // edi
  CItemHolder *v16; // ecx
  void (__thiscall *v17)(CItemHolder *, int, int); // eax
  int v18; // eax
  int v19; // ecx
  void (__thiscall *v20)(int, int, int); // eax
  CREButton *v21; // eax
  CREButton *v22; // ebp
  CREButton *v23; // eax
  CItemHolder *v24; // eax
  CItemHolder *v25; // ecx
  void (__thiscall *v26)(CItemHolder *, int, int); // edx
  CItemHolder *v27; // ecx
  CItemHolder *v28; // ecx
  CItemHolder *v29; // ecx
  int v30; // eax
  int v31; // ecx
  void (__thiscall *v32)(int, int, int); // eax
  int v33; // eax
  int v34; // ecx
  void (__thiscall *v35)(int, int, int); // eax
  void *v36; // [esp+C0h] [ebp-58h]
  void *v37; // [esp+C0h] [ebp-58h]
  struct tagRECT rc; // [esp+C4h] [ebp-54h] BYREF
  _BYTE v39[28]; // [esp+D4h] [ebp-44h] BYREF
  _BYTE v40[28]; // [esp+F0h] [ebp-28h] BYREF
  int v41; // [esp+114h] [ebp-4h]

  v2 = (CItemHolder *)operator new(0x27Cu);
  v3 = v2;
  v41 = 0;
  if ( v2 )
  {
    CItemHolder::CItemHolder(v2, (struct CTYDialog *)this);
    *(_DWORD *)v3 = &CItemHolder::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  this[987] = v4;
  v5 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v4 + 156);
  v41 = -1;
  v5(v4, 118, 59);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[987] + 160))(this[987], 106, 104);
  *((_DWORD *)this[987] + 144) = 4;
  *((_DWORD *)this[987] + 143) = 0;
  v6 = this[987];
  *((_DWORD *)v6 + 147) = 106;
  *((_DWORD *)v6 + 148) = 32;
  v7 = this[987];
  *((_DWORD *)v7 + 149) = 1;
  *((_DWORD *)v7 + 150) = 4;
  CItemHolder::SetMaxItem(v7, 4);
  CItemHolder::SetMaxItem(this[987], 0);
  *((_BYTE *)this[987] + 628) = 0;
  *((_BYTE *)this[987] + 629) = 0;
  *((_BYTE *)this[987] + 631) = 1;
  *((_BYTE *)this[987] + 633) = 1;
  *((_DWORD *)this[987] + 34) = 6;
  CREDialog::AddControl((CREDialog *)this, this[987]);
  v8 = (CItemHolder *)operator new(0x27Cu);
  v9 = v8;
  v41 = 1;
  if ( v8 )
  {
    CItemHolder::CItemHolder(v8, (struct CTYDialog *)this);
    *(_DWORD *)v9 = &CItemHolder::`vftable';
    v10 = v9;
  }
  else
  {
    v10 = 0;
  }
  this[988] = v10;
  v11 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v10 + 156);
  v41 = -1;
  v11(v10, 118, 167);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[988] + 160))(this[988], 106, 104);
  *((_DWORD *)this[988] + 144) = 4;
  *((_DWORD *)this[988] + 143) = 4;
  v12 = this[988];
  *((_DWORD *)v12 + 147) = 51;
  *((_DWORD *)v12 + 148) = 32;
  v13 = this[988];
  *((_DWORD *)v13 + 149) = 2;
  *((_DWORD *)v13 + 150) = 3;
  CItemHolder::SetMaxItem(v13, 6);
  CItemHolder::SetMaxItem(this[988], 0);
  *((_BYTE *)this[988] + 628) = 0;
  *((_BYTE *)this[988] + 629) = 0;
  *((_BYTE *)this[988] + 631) = 1;
  *((_BYTE *)this[988] + 633) = 1;
  *((_DWORD *)this[988] + 34) = 7;
  CREDialog::AddControl((CREDialog *)this, this[988]);
  v14 = (CREScrollBar *)operator new(0x268u);
  v15 = v14;
  v41 = 2;
  if ( v14 )
  {
    CREScrollBar::CREScrollBar(v14, (struct CREDialog *)this);
    *(_DWORD *)v15 = &CREScrollBar::`vftable';
    v16 = v15;
  }
  else
  {
    v16 = 0;
  }
  this[989] = v16;
  v17 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v16 + 156);
  v41 = -1;
  v17(v16, 442, 11);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[989] + 160))(this[989], 12, 364);
  CREDialog::AddControl((CREDialog *)this, this[989]);
  v41 = 3;
  if ( operator new(0x2BCu) )
    v18 = sub_1000BD6B((int)this);
  else
    v18 = 0;
  this[996] = (CItemHolder *)v18;
  v19 = v18;
  v20 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v18 + 156);
  v41 = -1;
  v20(v19, 247, 60);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[996] + 160))(this[996], 186, 313);
  sub_10004E21((int)this[989]);
  *((_DWORD *)this[996] + 162) = -16385803;
  *((_DWORD *)this[996] + 163) = -65536;
  CREDialog::AddControl((CREDialog *)this, this[996]);
  v21 = (CREButton *)operator new(0x330u);
  v22 = v21;
  v41 = 4;
  if ( v21 )
  {
    CREButton::CREButton(v21, (struct CREDialog *)this);
    *(_DWORD *)v22 = &CREButton::`vftable';
    v23 = v22;
  }
  else
  {
    v23 = 0;
  }
  this[990] = v23;
  *((_DWORD *)v23 + 196) = 0;
  *((_DWORD *)v23 + 197) = 0;
  v24 = this[990];
  *((_DWORD *)v24 + 198) = 0;
  *((_DWORD *)v24 + 199) = 0;
  v25 = this[990];
  v26 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v25 + 160);
  v41 = -1;
  v26(v25, 77, 31);
  *((_DWORD *)this[990] + 131) = 3;
  (*(void (__thiscall **)(CItemHolder *, _DWORD, int, _DWORD))(*(_DWORD *)this[990] + 180))(this[990], 0, -14134154, 0);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v39, L"GUI.dds");
  v27 = this[990];
  v41 = 5;
  CREControl::SetCustomPic(v27, v39, &rc, 0);
  v41 = -1;
  std::wstring::~wstring(v39);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v39, L"GUI.dds");
  v28 = this[990];
  v41 = 6;
  CREControl::SetCustomPic(v28, v39, &rc, 4);
  v41 = -1;
  std::wstring::~wstring(v39);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v39, L"GUI.dds");
  v41 = 7;
  CREControl::SetCustomPic(this[990], v39, &rc, 5);
  v41 = -1;
  std::wstring::~wstring(v39);
  SetRect(&rc, 169, 16, 246, 47);
  std::wstring::wstring(v40, L"GUI.dds");
  v29 = this[990];
  v41 = 8;
  CREControl::SetCustomPic(v29, v40, &rc, 1);
  v41 = -1;
  std::wstring::~wstring(v40);
  CREStatic::SetText(this[990], word_1032171C);
  CREDialog::InitControl((CREDialog *)this, this[990]);
  sub_1000811B((int)this[990]);
  v36 = operator new(0xF90u);
  v41 = 9;
  if ( v36 )
    v30 = sub_10002D24((int)this);
  else
    v30 = 0;
  this[1016] = (CItemHolder *)v30;
  v31 = v30;
  v32 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v30 + 160);
  v41 = -1;
  v32(v31, 29, 29);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[1016] + 156))(this[1016], 183, 16);
  sub_10006DD4(-16646148);
  *((float *)this[1016] + 995) = 2550.0;
  CREDialog::AddControl((CREDialog *)this, this[1016]);
  v37 = operator new(0xF90u);
  v41 = 10;
  if ( v37 )
    v33 = sub_10002D24((int)this);
  else
    v33 = 0;
  this[1017] = (CItemHolder *)v33;
  v34 = v33;
  v35 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v33 + 160);
  v41 = -1;
  v35(v34, 29, 29);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[1017] + 156))(this[1017], 391, 16);
  sub_10006DD4(-16646148);
  *((float *)this[1017] + 995) = 2550.0;
  CREDialog::AddControl((CREDialog *)this, this[1017]);
}
