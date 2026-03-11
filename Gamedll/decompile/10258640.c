/*
 * func-name: ?AddChannel@CChatInputUI@@IAEXABV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@W4CHANNEL_TYPE@GameClient@@@Z_0
 * func-address: 0x10258640
 * callers: 0x1000412e
 * callees: 0x100179bd, 0x102c9d62, 0x102c9d98
 */

void __thiscall CChatInputUI::AddChannel(struct CREDialog *this, int a2, int a3)
{
  CREButton *v4; // eax
  CREStatic *v5; // esi
  void (__thiscall *v6)(CREStatic *, int, int); // eax
  int v7; // edx
  int v8; // eax
  const wchar_t *v9; // eax
  struct tagRECT rc; // [esp+64h] [ebp-98h] BYREF
  _BYTE v12[28]; // [esp+74h] [ebp-88h] BYREF
  _BYTE v13[28]; // [esp+90h] [ebp-6Ch] BYREF
  int v14; // [esp+ACh] [ebp-50h] BYREF
  _DWORD v15[8]; // [esp+B0h] [ebp-4Ch] BYREF
  _DWORD v16[7]; // [esp+D0h] [ebp-2Ch] BYREF
  int v17; // [esp+F8h] [ebp-4h]

  v4 = (CREButton *)operator new(0x330u);
  v5 = v4;
  v17 = 0;
  if ( v4 )
  {
    CREButton::CREButton(v4, this);
    *(_DWORD *)v5 = &CREButton::`vftable';
  }
  else
  {
    v5 = 0;
  }
  v6 = *(void (__thiscall **)(CREStatic *, int, int))(*(_DWORD *)v5 + 160);
  v17 = -1;
  v6(v5, 52, 18);
  v7 = *((_DWORD *)this + 972);
  if ( v7 )
    v8 = (*((_DWORD *)this + 973) - v7) / 36;
  else
    v8 = 0;
  (*(void (__thiscall **)(CREStatic *, int, int))(*(_DWORD *)v5 + 156))(v5, 4, -15 - 19 * v8);
  SetRect(&rc, 452, 904, 504, 922);
  std::wstring::wstring(v12, L"GUI.dds");
  v17 = 1;
  CREControl::SetCustomPic(v5, v12, &rc, 0);
  v17 = -1;
  std::wstring::~wstring(v12);
  std::wstring::wstring(v12, L"GUI.dds");
  v17 = 2;
  CREControl::SetCustomPic(v5, v12, &rc, 1);
  v17 = -1;
  std::wstring::~wstring(v12);
  SetRect(&rc, 506, 904, 558, 922);
  std::wstring::wstring(v12, L"GUI.dds");
  v17 = 3;
  CREControl::SetCustomPic(v5, v12, &rc, 3);
  v17 = -1;
  std::wstring::~wstring(v12);
  std::wstring::wstring(v12, L"GUI.dds");
  v17 = 4;
  CREControl::SetCustomPic(v5, v12, &rc, 4);
  v17 = -1;
  std::wstring::~wstring(v12);
  std::wstring::wstring(v13, L"GUI.dds");
  v17 = 5;
  CREControl::SetCustomPic(v5, v13, &rc, 5);
  v17 = -1;
  std::wstring::~wstring(v13);
  std::operator+<wchar_t>(v16, a2, &unk_103208C0);
  v17 = 6;
  v9 = (const wchar_t *)std::wstring::c_str(v16);
  CREStatic::SetText(v5, v9);
  CREDialog::AddControl(this, v5);
  std::wstring::wstring(v15);
  v14 = a3;
  LOBYTE(v17) = 7;
  std::wstring::operator=(v15, a2);
  v15[7] = v5;
  (*(void (__thiscall **)(CREStatic *, _DWORD))(*(_DWORD *)v5 + 136))(v5, 0);
  sub_100179BD((int)&v14);
  LOBYTE(v17) = 6;
  std::wstring::~wstring(v15);
  v17 = -1;
  std::wstring::~wstring(v16);
}
