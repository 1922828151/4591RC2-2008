/*
 * func-name: ??0CSeperateLine@@QAE@PAVCREDialog@@@Z
 * func-address: 0x10156da0
 * callers: 0x100a2b70, 0x100d8560, 0x1014a750, 0x1015ac30
 * callees: 0x100c6ff0, 0x100d36c0, 0x100d38e0
 */

CSeperateLine *__thiscall CSeperateLine::CSeperateLine(CSeperateLine *this, struct CREDialog *a2)
{
  char v4; // [esp-20h] [ebp-58h] BYREF
  int v5; // [esp-1Ch] [ebp-54h]
  int v6; // [esp-18h] [ebp-50h]
  int v7; // [esp-14h] [ebp-4Ch]
  int v8; // [esp-10h] [ebp-48h]
  int v9; // [esp-Ch] [ebp-44h]
  int v10; // [esp-8h] [ebp-40h]
  const char *v11; // [esp-4h] [ebp-3Ch]
  CSeperateLine *v12; // [esp+Ch] [ebp-2Ch]
  _BYTE v13[28]; // [esp+10h] [ebp-28h] BYREF
  int v14; // [esp+34h] [ebp-4h]

  v12 = this;
  CREControl::CREControl(this, a2);
  v11 = "SeperateLine";
  v14 = 0;
  *(_DWORD *)this = &CSeperateLine::`vftable';
  *((_DWORD *)this + 133) = 0;
  *((_BYTE *)this + 536) = 0;
  *((_DWORD *)this + 35) = 26;
  std::string::string(v13, v11);
  LOBYTE(v14) = 1;
  std::string::operator=((char *)this + 16, v13);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "UseColor");
  v11 = 0;
  LOBYTE(v14) = 2;
  std::string::string(&v4, &unk_101CD494);
  sub_100D36C0(this, (int)this + 536, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "Color");
  v11 = 0;
  LOBYTE(v14) = 3;
  std::string::string(&v4, &unk_101CD4B0);
  sub_100D38E0(this, (int)this + 540, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  return this;
}
