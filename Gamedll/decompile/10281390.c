/*
 * func-name: ?InitComponent@CRobotRoofUI@@AAEXXZ_0
 * func-address: 0x10281390
 * callers: 0x10011f6d
 * callees: 0x10004e21, 0x1000811b, 0x1000bd6b, 0x102c9d98
 */

void __thiscall CRobotRoofUI::InitComponent(CItemHolder **this)
{
  CItemHolder *v2; // eax
  CItemHolder *v3; // edi
  CItemHolder *v4; // ecx
  void (__thiscall *v5)(CItemHolder *, int, int); // edx
  CItemHolder *v6; // eax
  CItemHolder *v7; // ecx
  CItemHolder *v8; // eax
  CItemHolder *v9; // ecx
  void (__thiscall *v10)(CItemHolder *, int, int); // eax
  CItemHolder *v11; // eax
  CItemHolder *v12; // ecx
  CREScrollBar *v13; // eax
  CREScrollBar *v14; // edi
  CItemHolder *v15; // ecx
  void (__thiscall *v16)(CItemHolder *, int, int); // eax
  int v17; // eax
  int v18; // ecx
  void (__thiscall *v19)(int, int, int); // eax
  CREButton *v20; // eax
  CREButton *v21; // edi
  CREButton *v22; // eax
  CItemHolder *v23; // eax
  CItemHolder *v24; // ecx
  void (__thiscall *v25)(CItemHolder *, int, int); // edx
  CItemHolder *v26; // ecx
  CItemHolder *v27; // ecx
  CItemHolder *v28; // ecx
  CItemHolder *v29; // [esp+94h] [ebp-58h]
  struct tagRECT rc; // [esp+98h] [ebp-54h] BYREF
  _BYTE v31[28]; // [esp+A8h] [ebp-44h] BYREF
  _BYTE v32[28]; // [esp+C4h] [ebp-28h] BYREF
  int v33; // [esp+E8h] [ebp-4h]

  v2 = (CItemHolder *)operator new(0x27Cu);
  v3 = v2;
  v33 = 0;
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
  this[969] = v4;
  v5 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v4 + 156);
  v33 = -1;
  v5(v4, 228, 48);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[969] + 160))(this[969], 106, 104);
  *((_DWORD *)this[969] + 144) = 4;
  *((_DWORD *)this[969] + 143) = 0;
  v6 = this[969];
  *((_DWORD *)v6 + 147) = 106;
  *((_DWORD *)v6 + 148) = 32;
  v7 = this[969];
  *((_DWORD *)v7 + 149) = 1;
  *((_DWORD *)v7 + 150) = 4;
  CItemHolder::SetMaxItem(v7, 4);
  CItemHolder::SetMaxItem(this[969], 0);
  *((_BYTE *)this[969] + 628) = 0;
  *((_BYTE *)this[969] + 629) = 0;
  *((_BYTE *)this[969] + 631) = 1;
  *((_BYTE *)this[969] + 633) = 1;
  *((_DWORD *)this[969] + 34) = 18;
  CREDialog::AddControl((CREDialog *)this, this[969]);
  v8 = (CItemHolder *)operator new(0x27Cu);
  v29 = v8;
  v33 = 1;
  if ( v8 )
  {
    CItemHolder::CItemHolder(v8, (struct CTYDialog *)this);
    v9 = v29;
    *(_DWORD *)v29 = &CItemHolder::`vftable';
  }
  else
  {
    v9 = 0;
  }
  this[970] = v9;
  v10 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v9 + 156);
  v33 = -1;
  v10(v9, 228, 156);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[970] + 160))(this[970], 106, 104);
  *((_DWORD *)this[970] + 144) = 4;
  *((_DWORD *)this[970] + 143) = 4;
  v11 = this[970];
  *((_DWORD *)v11 + 147) = 51;
  *((_DWORD *)v11 + 148) = 32;
  v12 = this[970];
  *((_DWORD *)v12 + 149) = 2;
  *((_DWORD *)v12 + 150) = 3;
  CItemHolder::SetMaxItem(v12, 6);
  CItemHolder::SetMaxItem(this[970], 0);
  *((_BYTE *)this[970] + 628) = 0;
  *((_BYTE *)this[970] + 629) = 0;
  *((_BYTE *)this[970] + 631) = 1;
  *((_BYTE *)this[970] + 633) = 1;
  *((_DWORD *)this[970] + 34) = 19;
  CREDialog::AddControl((CREDialog *)this, this[970]);
  v13 = (CREScrollBar *)operator new(0x268u);
  v14 = v13;
  v33 = 2;
  if ( v13 )
  {
    CREScrollBar::CREScrollBar(v13, (struct CREDialog *)this);
    *(_DWORD *)v14 = &CREScrollBar::`vftable';
    v15 = v14;
  }
  else
  {
    v15 = 0;
  }
  this[976] = v15;
  v16 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v15 + 156);
  v33 = -1;
  v16(v15, 548, 10);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[976] + 160))(this[976], 12, 410);
  CREDialog::AddControl((CREDialog *)this, this[976]);
  v33 = 3;
  if ( operator new(0x2BCu) )
    v17 = sub_1000BD6B((int)this);
  else
    v17 = 0;
  this[971] = (CItemHolder *)v17;
  v18 = v17;
  v19 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v17 + 156);
  v33 = -1;
  v19(v18, 351, 10);
  (*(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)this[971] + 160))(this[971], 186, 410);
  sub_10004E21((int)this[976]);
  *((_DWORD *)this[971] + 162) = -16385803;
  *((_DWORD *)this[971] + 163) = -65536;
  CREDialog::AddControl((CREDialog *)this, this[971]);
  v20 = (CREButton *)operator new(0x330u);
  v21 = v20;
  v33 = 4;
  if ( v20 )
  {
    CREButton::CREButton(v20, (struct CREDialog *)this);
    *(_DWORD *)v21 = &CREButton::`vftable';
    v22 = v21;
  }
  else
  {
    v22 = 0;
  }
  this[977] = v22;
  *((_DWORD *)v22 + 196) = 0;
  *((_DWORD *)v22 + 197) = 0;
  v23 = this[977];
  *((_DWORD *)v23 + 198) = 0;
  *((_DWORD *)v23 + 199) = 0;
  v24 = this[977];
  v25 = *(void (__thiscall **)(CItemHolder *, int, int))(*(_DWORD *)v24 + 160);
  v33 = -1;
  v25(v24, 77, 31);
  *((_DWORD *)this[977] + 131) = 3;
  (*(void (__thiscall **)(CItemHolder *, _DWORD, int, _DWORD))(*(_DWORD *)this[977] + 180))(this[977], 0, -14134154, 0);
  SetRect(&rc, 169, 52, 246, 83);
  std::wstring::wstring(v31, L"GUI.dds");
  v26 = this[977];
  v33 = 5;
  CREControl::SetCustomPic(v26, v31, &rc, 0);
  v33 = -1;
  std::wstring::~wstring(v31);
  SetRect(&rc, 169, 87, 246, 118);
  std::wstring::wstring(v31, L"GUI.dds");
  v27 = this[977];
  v33 = 6;
  CREControl::SetCustomPic(v27, v31, &rc, 4);
  v33 = -1;
  std::wstring::~wstring(v31);
  SetRect(&rc, 169, 122, 246, 153);
  std::wstring::wstring(v31, L"GUI.dds");
  v33 = 7;
  CREControl::SetCustomPic(this[977], v31, &rc, 5);
  v33 = -1;
  std::wstring::~wstring(v31);
  SetRect(&rc, 169, 16, 246, 47);
  std::wstring::wstring(v32, L"GUI.dds");
  v28 = this[977];
  v33 = 8;
  CREControl::SetCustomPic(v28, v32, &rc, 1);
  v33 = -1;
  std::wstring::~wstring(v32);
  CREStatic::SetText(this[977], word_10322F20);
  CREDialog::InitControl((CREDialog *)this, this[977]);
  sub_1000811B((int)this[977]);
}
