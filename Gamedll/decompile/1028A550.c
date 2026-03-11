/*
 * func-name: sub_1028A550
 * func-address: 0x1028a550
 * callers: 0x100151ae
 * callees: 0x1000cf7c, 0x10012e9f, 0x10019c86, 0x102c9d98, 0x102c9ea8
 */

int __thiscall sub_1028A550(int this)
{
  int v2; // eax
  struct CREControl *Control; // eax
  struct CREControl *v4; // eax
  struct CREControl *v5; // eax
  struct CREControl *v6; // eax
  struct CREControl *v7; // eax
  CRETabPages *v8; // eax
  CRETabPages *v9; // edi
  int v10; // ecx
  void (__thiscall *v11)(int, _DWORD, _DWORD); // eax
  CREScrollBar *v12; // eax
  CREScrollBar *v13; // edi
  CREScrollBar *v14; // ecx
  void (__thiscall *v15)(CREScrollBar *, int, int); // eax
  CREStatic *v16; // eax
  CREStatic *v17; // edi
  CREStatic *v18; // ecx
  void (__thiscall *v19)(CREStatic *, int, int); // edx
  int v20; // eax
  int FontInfo; // eax
  void (__thiscall **v22)(_DWORD, int, int, int); // edi
  int v23; // eax
  int v24; // eax
  int v25; // ecx
  void (__thiscall *v26)(int, int, int); // eax
  int i; // edi
  struct CREControl *v28; // eax
  struct CREControl *v29; // edi
  CREStatic *v30; // eax
  CREStatic *v31; // ebp
  CREStatic *v32; // ecx
  void (__thiscall *v33)(CREStatic *, int, int); // eax
  int v35; // [esp+A8h] [ebp-50h]
  int v36; // [esp+ACh] [ebp-4Ch]
  int v37; // [esp+B0h] [ebp-48h]
  int v38; // [esp+B0h] [ebp-48h]
  int v39; // [esp+B4h] [ebp-44h]
  int v40; // [esp+B4h] [ebp-44h]
  int v41; // [esp+B4h] [ebp-44h]
  int v42; // [esp+B8h] [ebp-40h]
  void *v43; // [esp+CCh] [ebp-2Ch]
  _BYTE v44[8]; // [esp+E4h] [ebp-14h] BYREF
  int v45; // [esp+F4h] [ebp-4h]

  *(_DWORD *)(this + 700) = 300;
  *(_DWORD *)(this + 704) = 300;
  *(_DWORD *)(this + 692) = 0;
  *(_DWORD *)(this + 696) = 0;
  CTYDialog::MoveNestedDialog((CTYDialog *)this);
  std::string::string(v44, "DlgDatabase.xml");
  v2 = CDlgMgr::Instance();
  CDlgMgr::FillControls(v2);
  std::string::~string(v44);
  Control = CREDialog::GetControl((CREDialog *)this, 4);
  *(_DWORD *)(this + 3880) = _RTDynamicCast(Control, v42, 0, &CREControl `RTTI Type Descriptor');
  v4 = CREDialog::GetControl((CREDialog *)this, 5);
  *(_DWORD *)(this + 3884) = _RTDynamicCast(v4, v39, 0, &CREControl `RTTI Type Descriptor');
  v5 = CREDialog::GetControl((CREDialog *)this, 6);
  *(_DWORD *)(this + 3888) = _RTDynamicCast(v5, v37, 0, &CREControl `RTTI Type Descriptor');
  v6 = CREDialog::GetControl((CREDialog *)this, 7);
  *(_DWORD *)(this + 3892) = _RTDynamicCast(v6, v36, 0, &CREControl `RTTI Type Descriptor');
  v7 = CREDialog::GetControl((CREDialog *)this, 8);
  *(_DWORD *)(this + 3896) = _RTDynamicCast(v7, v35, 0, &CREControl `RTTI Type Descriptor');
  v8 = (CRETabPages *)operator new(0x22Cu);
  v9 = v8;
  v45 = 1;
  if ( v8 )
  {
    CRETabPages::CRETabPages(v8, (struct CREDialog *)this);
    *(_DWORD *)v9 = &CRETabPages::`vftable';
  }
  else
  {
    v9 = 0;
  }
  *(_DWORD *)(this + 3904) = v9;
  *((_DWORD *)v9 + 34) = 12;
  v10 = *(_DWORD *)(this + 3904);
  v11 = *(void (__thiscall **)(int, _DWORD, _DWORD))(*(_DWORD *)v10 + 156);
  v45 = -1;
  v11(v10, 0, 0);
  (*(void (__thiscall **)(_DWORD, _DWORD, _DWORD))(**(_DWORD **)(this + 3904) + 160))(
    *(_DWORD *)(this + 3904),
    *(_DWORD *)(this + 700),
    *(_DWORD *)(this + 704));
  (*(void (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(this + 3904) + 172))(
    *(_DWORD *)(this + 3904),
    &unk_103232D8,
    40);
  (*(void (__thiscall **)(_DWORD, void *, int))(**(_DWORD **)(this + 3904) + 172))(
    *(_DWORD *)(this + 3904),
    &unk_103232DC,
    80);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3904));
  *(_DWORD *)(this + 736) = &sub_10010E7E;
  v12 = (CREScrollBar *)operator new(0x268u);
  v13 = v12;
  v45 = 2;
  if ( v12 )
  {
    CREScrollBar::CREScrollBar(v12, (struct CREDialog *)this);
    *(_DWORD *)v13 = &CREScrollBar::`vftable';
    v14 = v13;
  }
  else
  {
    v14 = 0;
  }
  *(_DWORD *)(this + 3872) = v14;
  v15 = *(void (__thiscall **)(CREScrollBar *, int, int))(*(_DWORD *)v14 + 156);
  v45 = -1;
  v15(v14, 643, 39);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3872) + 160))(*(_DWORD *)(this + 3872), 12, 420);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3872));
  CRETabPages::AddControlToTabPage(*(CRETabPages **)(this + 3904), 1, *(struct CREControl **)(this + 3872));
  v16 = (CREStatic *)operator new(0x2B8u);
  v17 = v16;
  v45 = 3;
  if ( v16 )
  {
    CREStatic::CREStatic(v16, (struct CREDialog *)this);
    *(_DWORD *)v17 = &CREStatic::`vftable';
    v18 = v17;
  }
  else
  {
    v18 = 0;
  }
  *(_DWORD *)(this + 3876) = v18;
  v19 = *(void (__thiscall **)(CREStatic *, int, int))(*(_DWORD *)v18 + 156);
  v45 = -1;
  v19(v18, 22, 18);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3876) + 160))(*(_DWORD *)(this + 3876), 100, 25);
  v20 = GUISystem::Instance(2);
  FontInfo = GUISystem::GetFontInfo(v20);
  if ( FontInfo )
  {
    v40 = *(unsigned __int8 *)(FontInfo + 32);
    v38 = *(_DWORD *)(FontInfo + 28);
    v22 = (void (__thiscall **)(_DWORD, int, int, int))(**(_DWORD **)(this + 3876) + 168);
    v23 = std::wstring::c_str(FontInfo);
    (*v22)(*(_DWORD *)(this + 3876), v23, v38, v40);
  }
  (*(void (__thiscall **)(_DWORD, _DWORD))(**(_DWORD **)(this + 3876) + 188))(*(_DWORD *)(this + 3876), 0);
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3876));
  v43 = operator new(0x27Cu);
  v45 = 4;
  if ( v43 )
    v24 = sub_1000CF7C(this);
  else
    v24 = 0;
  *(_DWORD *)(this + 3916) = v24;
  v25 = v24;
  v26 = *(void (__thiscall **)(int, int, int))(*(_DWORD *)v24 + 156);
  v45 = -1;
  v26(v25, 297, 39);
  (*(void (__thiscall **)(_DWORD, int, int))(**(_DWORD **)(this + 3916) + 160))(*(_DWORD *)(this + 3916), 337, 420);
  sub_10019C86(*(_DWORD *)(this + 3872));
  CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3916));
  CRETabPages::AddControlToTabPage(*(CRETabPages **)(this + 3904), 1, *(struct CREControl **)(this + 3916));
  for ( i = 1; i <= 11; ++i )
  {
    v28 = CREDialog::GetControl((CREDialog *)this, i);
    CRETabPages::AddControlToTabPage(*(CRETabPages **)(this + 3904), 1, v28);
  }
  *(_DWORD *)(this + 692) = 59;
  *(_DWORD *)(this + 696) = -500;
  CTYDialog::MoveNestedDialog((CTYDialog *)this);
  *(_BYTE *)(this + 62) = 0;
  CREDialog::RefreshControlByZOrder((CREDialog *)this);
  CRETabPages::SelectTab(*(CRETabPages **)(this + 3904), 1);
  sub_10012E9F(0, 0);
  v29 = CREDialog::GetControl((CREDialog *)this, 13);
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v29 + 160))(v29, 529, *((_DWORD *)v29 + 27));
  (*(void (__thiscall **)(struct CREControl *, int, _DWORD))(*(_DWORD *)v29 + 156))(v29, 136, *((_DWORD *)v29 + 25));
  v30 = (CREStatic *)operator new(0x2B8u);
  v31 = v30;
  v45 = 5;
  if ( v30 )
  {
    CREStatic::CREStatic(v30, (struct CREDialog *)this);
    *(_DWORD *)v31 = &CREStatic::`vftable';
    v32 = v31;
  }
  else
  {
    v32 = 0;
  }
  *(_DWORD *)(this + 3900) = v32;
  v41 = *((_DWORD *)v29 + 26);
  v33 = *(void (__thiscall **)(CREStatic *, int, int))(*(_DWORD *)v32 + 160);
  v45 = -1;
  v33(v32, v41 - 20, v41);
  (*(void (__thiscall **)(_DWORD, int, _DWORD))(**(_DWORD **)(this + 3900) + 156))(
    *(_DWORD *)(this + 3900),
    *((_DWORD *)v29 + 24) + 10,
    *((_DWORD *)v29 + 25));
  (*(void (__thiscall **)(_DWORD, int))(**(_DWORD **)(this + 3900) + 188))(*(_DWORD *)(this + 3900), 4);
  (*(void (__thiscall **)(_DWORD, _DWORD, int, _DWORD))(**(_DWORD **)(this + 3900) + 180))(
    *(_DWORD *)(this + 3900),
    0,
    -1685752,
    0);
  return CREDialog::AddControl((CREDialog *)this, *(struct CREControl **)(this + 3900));
}
