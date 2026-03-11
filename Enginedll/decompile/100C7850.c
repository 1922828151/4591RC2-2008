/*
 * func-name: ??0CRESlider@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c7850
 * callers: 0x1006a9f0, 0x100c7fa0, 0x100cb120, 0x100d8860, 0x1014a750
 * callees: 0x100c6ff0, 0x100d35b0, 0x100d36c0, 0x100d37d0
 */

CRESlider *__thiscall CRESlider::CRESlider(CRESlider *this, struct CREDialog *a2)
{
  char v4; // [esp-20h] [ebp-5Ch] BYREF
  int v5; // [esp-1Ch] [ebp-58h]
  int v6; // [esp-18h] [ebp-54h]
  int v7; // [esp-14h] [ebp-50h]
  int v8; // [esp-10h] [ebp-4Ch]
  int v9; // [esp-Ch] [ebp-48h]
  int v10; // [esp-8h] [ebp-44h]
  LPRECT v11; // [esp-4h] [ebp-40h]
  CRESlider *v12; // [esp+10h] [ebp-2Ch]
  _BYTE v13[28]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+38h] [ebp-4h]

  v12 = this;
  CREControl::CREControl(this, 0);
  v14 = 0;
  *(_DWORD *)this = &CRESlider::`vftable';
  std::wstring::wstring((char *)this + 580);
  std::wstring::wstring((char *)this + 608);
  *((float *)this + 133) = 1.0;
  v11 = (LPRECT)((char *)this + 564);
  LOBYTE(v14) = 2;
  *((_DWORD *)this + 35) = 6;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 135) = 0;
  *((_DWORD *)this + 136) = 100;
  *((_DWORD *)this + 134) = 50;
  *((_BYTE *)this + 561) = 1;
  SetRectEmpty(v11);
  v11 = (LPRECT)"Slider";
  *((_BYTE *)this + 560) = 0;
  std::string::string(v13, v11);
  LOBYTE(v14) = 3;
  std::string::operator=((char *)this + 16, v13);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  std::string::string(v13, &unk_101C4D60);
  v11 = 0;
  LOBYTE(v14) = 4;
  std::string::string(&v4, &unk_101C4D50);
  sub_100D35B0((int)this + 540, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  std::string::string(v13, &unk_101C4D74);
  v11 = 0;
  LOBYTE(v14) = 5;
  std::string::string(&v4, &unk_101C4D64);
  sub_100D35B0((int)this + 544, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  std::string::string(v13, "Value");
  v11 = 0;
  LOBYTE(v14) = 6;
  std::string::string(&v4, &unk_101C4D78);
  sub_100D35B0((int)this + 536, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  std::string::string(v13, "ShowCustomeText");
  v11 = 0;
  LOBYTE(v14) = 7;
  std::string::string(&v4, &unk_101C4D90);
  sub_100D36C0((int)this + 561, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  std::string::string(v13, "MinText");
  v11 = 0;
  LOBYTE(v14) = 8;
  std::string::string(&v4, &unk_101C4DB0);
  sub_100D37D0((int)this + 580, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  std::string::string(v13, "MaxText");
  v11 = 0;
  LOBYTE(v14) = 9;
  std::string::string(&v4, &unk_101C4DC4);
  sub_100D37D0((int)this + 608, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 2;
  std::string::~string(v13);
  return this;
}
