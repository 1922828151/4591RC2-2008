/*
 * func-name: ??0CPaster@@QAE@PAVCREDialog@@@Z
 * func-address: 0x10157070
 * callers: 0x100a2e50, 0x100d8800
 * callees: 0x100c6ff0, 0x100d37d0, 0x100d39f0
 */

CPaster *__thiscall CPaster::CPaster(CPaster *this, struct CREDialog *a2)
{
  char v4; // [esp-20h] [ebp-5Ch] BYREF
  int v5; // [esp-1Ch] [ebp-58h]
  int v6; // [esp-18h] [ebp-54h]
  int v7; // [esp-14h] [ebp-50h]
  int v8; // [esp-10h] [ebp-4Ch]
  int v9; // [esp-Ch] [ebp-48h]
  int v10; // [esp-8h] [ebp-44h]
  int v11; // [esp-4h] [ebp-40h]
  CPaster *v12; // [esp+10h] [ebp-2Ch]
  _BYTE v13[28]; // [esp+14h] [ebp-28h] BYREF
  int v14; // [esp+38h] [ebp-4h]

  v12 = this;
  CREControl::CREControl(this, a2);
  v14 = 0;
  *(_DWORD *)this = &CPaster::`vftable';
  *((_DWORD *)this + 133) = 0;
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 135) = 0;
  *((_BYTE *)this + 544) = 0;
  std::wstring::wstring((char *)this + 548);
  std::wstring::wstring((char *)this + 592);
  std::wstring::wstring((char *)this + 636);
  LOBYTE(v14) = 3;
  SetRect((LPRECT)this + 36, 0, 0, 0, 0);
  SetRect((LPRECT)((char *)this + 620), 0, 0, 0, 0);
  SetRect((LPRECT)((char *)this + 664), 0, 0, 0, 0);
  std::string::string(v13, "Paster");
  LOBYTE(v14) = 4;
  std::string::operator=((char *)this + 16, v13);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  std::string::string(v13, "FirstPicFileName");
  v11 = 1;
  LOBYTE(v14) = 5;
  std::string::string(&v4, &unk_101CD524);
  sub_100D37D0(this, (int)this + 548, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  std::string::string(v13, "FirstPicRect");
  v11 = 1;
  LOBYTE(v14) = 6;
  std::string::string(&v4, &unk_101CD54C);
  sub_100D39F0(this, (int)this + 576, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  std::string::string(v13, "LastPicFileName");
  v11 = 1;
  LOBYTE(v14) = 7;
  std::string::string(&v4, &unk_101CD570);
  sub_100D37D0(this, (int)this + 592, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  std::string::string(v13, "LastPicRect");
  v11 = 1;
  LOBYTE(v14) = 8;
  std::string::string(&v4, &unk_101CD594);
  sub_100D39F0(this, (int)this + 620, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  std::string::string(v13, "MiddlePicFileName");
  v11 = 1;
  LOBYTE(v14) = 9;
  std::string::string(&v4, &unk_101CD5B8);
  sub_100D37D0(this, (int)this + 636, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  std::string::string(v13, "MiddlePicRect");
  v11 = 1;
  LOBYTE(v14) = 10;
  std::string::string(&v4, &unk_101CD5DC);
  sub_100D39F0(this, (int)this + 664, v13, v4, v5, v6, v7, v8, v9, v10, v11);
  LOBYTE(v14) = 3;
  std::string::~string(v13);
  return this;
}
