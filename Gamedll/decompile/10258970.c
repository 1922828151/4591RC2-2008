/*
 * func-name: ?InitComponent@CChatInputUI@@QAEXXZ_0
 * func-address: 0x10258970
 * callers: 0x10007928
 * callees: 0x1000412e, 0x102c9d98
 */

void __thiscall CChatInputUI::InitComponent(struct CREControl **this)
{
  CREIMEEditBox *v2; // eax
  CREIMEEditBox *v3; // edi
  struct CREControl *v4; // ecx
  void (__thiscall *v5)(struct CREControl *, int, int); // edx
  _BYTE v6[28]; // [esp+14h] [ebp-44h] BYREF
  _BYTE v7[28]; // [esp+30h] [ebp-28h] BYREF
  int v8; // [esp+54h] [ebp-4h]

  v2 = (CREIMEEditBox *)operator new(0x370u);
  v3 = v2;
  v8 = 0;
  if ( v2 )
  {
    CREIMEEditBox::CREIMEEditBox(v2, (struct CREDialog *)this);
    *(_DWORD *)v3 = &CREIMEEditBox::`vftable';
    v4 = v3;
  }
  else
  {
    v4 = 0;
  }
  this[969] = v4;
  v5 = *(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)v4 + 156);
  v8 = -1;
  v5(v4, 51, 7);
  (*(void (__thiscall **)(struct CREControl *, int, int))(*(_DWORD *)this[969] + 160))(this[969], 204, 14);
  *((_BYTE *)this[969] + 789) = 0;
  *((_DWORD *)this[969] + 34) = 2;
  *((_DWORD *)this[969] + 195) = 200;
  CREDialog::AddControl((CREDialog *)this, this[969]);
  std::wstring::wstring(v6, ",g0W");
  v8 = 1;
  CChatInputUI::AddChannel((int)v6, 9);
  v8 = -1;
  std::wstring::~wstring(v6);
  std::wstring::wstring(v6, &unk_10320858);
  v8 = 2;
  CChatInputUI::AddChannel((int)v6, 2);
  v8 = -1;
  std::wstring::~wstring(v6);
  std::wstring::wstring(v6, &unk_10320860);
  v8 = 3;
  CChatInputUI::AddChannel((int)v6, 5);
  v8 = -1;
  std::wstring::~wstring(v6);
  std::wstring::wstring(v6, &unk_10320864);
  v8 = 4;
  CChatInputUI::AddChannel((int)v6, 4);
  v8 = -1;
  std::wstring::~wstring(v6);
  std::wstring::wstring(v7, L"GM");
  v8 = 5;
  CChatInputUI::AddChannel((int)v7, 7);
  v8 = -1;
  std::wstring::~wstring(v7);
}
