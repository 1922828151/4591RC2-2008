/*
 * func-name: ??0CRECheckBox@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cbba0
 * callers: 0x1006a260, 0x100cbc90, 0x100cc430, 0x100cc940, 0x100cd2f0, 0x100cd400, 0x100d8680
 * callees: 0x100cb5e0, 0x100d36c0
 */

CRECheckBox *__thiscall CRECheckBox::CRECheckBox(CRECheckBox *this, struct CREDialog *a2)
{
  char v4; // [esp-20h] [ebp-54h] BYREF
  int v5; // [esp-1Ch] [ebp-50h]
  int v6; // [esp-18h] [ebp-4Ch]
  int v7; // [esp-14h] [ebp-48h]
  int v8; // [esp-10h] [ebp-44h]
  int v9; // [esp-Ch] [ebp-40h]
  int v10; // [esp-8h] [ebp-3Ch]
  LPRECT v11; // [esp-4h] [ebp-38h]
  CRECheckBox *v12; // [esp+8h] [ebp-2Ch]
  _BYTE v13[28]; // [esp+Ch] [ebp-28h] BYREF
  int v14; // [esp+30h] [ebp-4h]

  v12 = this;
  CREButton::CREButton(this, 0);
  v11 = (LPRECT)((char *)this + 820);
  v14 = 0;
  *(_DWORD *)this = &CRECheckBox::`vftable';
  *((_DWORD *)this + 35) = 3;
  *((_DWORD *)this + 28) = a2;
  *((_BYTE *)this + 816) = 0;
  SetRectEmpty(v11);
  std::string::string(v13, "CheckBox");
  LOBYTE(v14) = 1;
  std::string::operator=((char *)this + 16, v13);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "Checked");
  v11 = 0;
  LOBYTE(v14) = 2;
  std::string::string(&v4, &unk_101C4D28);
  sub_100D36C0((int)this + 816, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  return this;
}
