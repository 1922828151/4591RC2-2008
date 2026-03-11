/*
 * func-name: ??0CREButton@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100cb5e0
 * callers: 0x1006a120, 0x100cbb60, 0x100cbba0, 0x100cbcc0, 0x100cc020, 0x100cc6d0, 0x100cc710, 0x100cd100, 0x100d8500, 0x1014a750, 0x101509f0, 0x1015ac30
 * callees: 0x100a5d90, 0x100c7520, 0x100d36c0, 0x100d37d0, 0x100d39f0, 0x100d3b00
 */

CREButton *__thiscall CREButton::CREButton(CREButton *this, struct CREDialog *a2)
{
  char v4; // [esp-20h] [ebp-5Ch] BYREF
  int v5; // [esp-1Ch] [ebp-58h]
  int v6; // [esp-18h] [ebp-54h]
  int v7; // [esp-14h] [ebp-50h]
  int v8; // [esp-10h] [ebp-4Ch]
  int v9; // [esp-Ch] [ebp-48h]
  int v10; // [esp-8h] [ebp-44h]
  unsigned int v11; // [esp-4h] [ebp-40h]
  CREButton *v12; // [esp+10h] [ebp-2Ch]
  _BYTE v13[28]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+38h] [ebp-4h]

  v12 = this;
  CREStatic::CREStatic(this, 0);
  v11 = 0;
  v10 = -931102592;
  v9 = -1;
  v14 = 0;
  *(_DWORD *)this = &CREButton::`vftable';
  *((_BYTE *)this + 776) = 0;
  *((_BYTE *)this + 777) = 1;
  *((_BYTE *)this + 778) = 0;
  *((_DWORD *)this + 195) = 0;
  *((_DWORD *)this + 35) = 1;
  *((_DWORD *)this + 28) = a2;
  *((_BYTE *)this + 779) = 0;
  *((_DWORD *)this + 36) = 0;
  *((_DWORD *)this + 197) = -1;
  *((_DWORD *)this + 196) = -1;
  *((_DWORD *)this + 199) = 1;
  *((_DWORD *)this + 198) = 1;
  REBlendColor::Init((CREButton *)((char *)this + 564), v9, v10, v11);
  v11 = 0;
  v10 = -931102592;
  v9 = -1;
  *((_DWORD *)this + 145) = -16777216;
  REBlendColor::Init((CREButton *)((char *)this + 696), v9, v10, v11);
  v11 = (unsigned int)"Button";
  *((_DWORD *)this + 178) = -16777216;
  std::string::string(v13, v11);
  LOBYTE(v14) = 1;
  std::string::operator=((char *)this + 16, v13);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "ShowBG");
  v11 = 1;
  LOBYTE(v14) = 2;
  std::string::string(&v4, &unk_101C4A50);
  sub_100D36C0((int)this + 777, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "NormalPicName");
  v11 = 1;
  LOBYTE(v14) = 3;
  std::string::string(&v4, &unk_101C4A68);
  sub_100D37D0((int)this + 180, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "NormalPicRect");
  v11 = 1;
  LOBYTE(v14) = 4;
  std::string::string(&v4, &unk_101C4A90);
  sub_100D39F0((int)this + 376, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "ClickPicName");
  v11 = 1;
  LOBYTE(v14) = 5;
  std::string::string(&v4, &unk_101C4AB4);
  sub_100D37D0((int)this + 320, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "ClickPicRect");
  v11 = 1;
  LOBYTE(v14) = 6;
  std::string::string(&v4, &unk_101C4ADC);
  sub_100D39F0((int)this + 456, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "FocusedPicName");
  v11 = 1;
  LOBYTE(v14) = 7;
  std::string::string(&v4, &unk_101C4B00);
  sub_100D37D0((int)this + 264, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "FocusedPicRect");
  v11 = 1;
  LOBYTE(v14) = 8;
  std::string::string(&v4, &unk_101C4B28);
  sub_100D39F0((int)this + 424, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "MouseOverPicName");
  v11 = 1;
  LOBYTE(v14) = 9;
  std::string::string(&v4, &unk_101C4B4C);
  sub_100D37D0((int)this + 292, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "MouseOverPicRect");
  v11 = 1;
  LOBYTE(v14) = 10;
  std::string::string(&v4, &unk_101C4B7C);
  sub_100D39F0((int)this + 440, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "DisabledPicName");
  v11 = 1;
  LOBYTE(v14) = 11;
  std::string::string(&v4, &unk_101C4BA8);
  sub_100D37D0((int)this + 208, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "DisabledPicRect");
  v11 = 1;
  LOBYTE(v14) = 12;
  std::string::string(&v4, &unk_101C4BD0);
  sub_100D39F0((int)this + 392, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "HoverDistX");
  v11 = 1;
  LOBYTE(v14) = 13;
  std::string::string(&v4, &unk_101C4BF4);
  sub_100D3B00((int)this + 784, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "HoverDistY");
  v11 = 1;
  LOBYTE(v14) = 14;
  std::string::string(&v4, &unk_101C4C14);
  sub_100D3B00((int)this + 788, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "ClickDistX");
  v11 = 1;
  LOBYTE(v14) = 15;
  std::string::string(&v4, &unk_101C4C34);
  sub_100D3B00((int)this + 792, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "ClickDistY");
  v11 = 1;
  LOBYTE(v14) = 16;
  std::string::string(&v4, &unk_101C4C54);
  sub_100D3B00((int)this + 796, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  return this;
}
