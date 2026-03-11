/*
 * func-name: ??0CREComboBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cbcc0
 * callers: 0x1006a8b0, 0x100cc300, 0x100cd540, 0x100d88c0, 0x1014a750
 * callees: 0x100a5d90, 0x100c7b00, 0x100cb5e0
 */

CREComboBox *__thiscall CREComboBox::CREComboBox(CREComboBox *this, struct CREDialog *a2)
{
  _BYTE v4[28]; // [esp+10h] [ebp-28h] BYREF
  int v5; // [esp+34h] [ebp-4h]

  CREButton::CREButton(this, 0);
  v5 = 0;
  *(_DWORD *)this = &CREComboBox::`vftable';
  CREScrollBar::CREScrollBar((CREComboBox *)((char *)this + 828), a2);
  *((_DWORD *)this + 380) = 0;
  *((_DWORD *)this + 381) = 0;
  *((_DWORD *)this + 382) = 0;
  *((_DWORD *)this + 28) = a2;
  LOBYTE(v5) = 2;
  *((_DWORD *)this + 35) = 5;
  *((_DWORD *)this + 206) = 100;
  *((_DWORD *)this + 361) = 16;
  *((_BYTE *)this + 1448) = 0;
  *((_DWORD *)this + 204) = -1;
  *((_DWORD *)this + 205) = -1;
  *((_DWORD *)this + 363) = 0;
  *((_DWORD *)this + 383) = 0;
  REBlendColor::Init((CREComboBox *)((char *)this + 1536), 0xFF000000, 0xC8808080, 0);
  *((_DWORD *)this + 404) = 0;
  REBlendColor::Init((CREComboBox *)((char *)this + 1620), 0xFFFFFFFF, 0xC8808080, 0);
  std::string::string(v4, "ComboBox");
  LOBYTE(v5) = 3;
  std::string::operator=((char *)this + 16, v4);
  LOBYTE(v5) = 2;
  std::string::~string(v4);
  return this;
}
