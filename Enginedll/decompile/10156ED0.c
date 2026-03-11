/*
 * func-name: ??0CTYVStatic@@QAE@PAVCREDialog@@@Z
 * func-address: 0x10156ed0
 * callers: 0x100a2c10, 0x100d8920
 * callees: 0x100c7520, 0x100d35b0, 0x100d3b00
 */

CTYVStatic *__thiscall CTYVStatic::CTYVStatic(CTYVStatic *this, struct CREDialog *a2)
{
  char v4; // [esp-20h] [ebp-54h] BYREF
  int v5; // [esp-1Ch] [ebp-50h]
  int v6; // [esp-18h] [ebp-4Ch]
  int v7; // [esp-14h] [ebp-48h]
  int v8; // [esp-10h] [ebp-44h]
  int v9; // [esp-Ch] [ebp-40h]
  int v10; // [esp-8h] [ebp-3Ch]
  const char *v11; // [esp-4h] [ebp-38h]
  CTYVStatic *v12; // [esp+8h] [ebp-2Ch]
  _BYTE v13[28]; // [esp+Ch] [ebp-28h] BYREF
  int v14; // [esp+30h] [ebp-4h]

  v12 = this;
  CREStatic::CREStatic(this, a2);
  v11 = "VerticalStaticText";
  v14 = 0;
  *(_DWORD *)this = &CTYVStatic::`vftable';
  std::string::string(v13, v11);
  LOBYTE(v14) = 1;
  std::string::operator=((char *)this + 16, v13);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "CenterX");
  v11 = 0;
  LOBYTE(v14) = 2;
  std::string::string(&v4, &unk_101CD4D4);
  sub_100D3B00(this, (int)this + 696, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "CenterY");
  v11 = 0;
  LOBYTE(v14) = 3;
  std::string::string(&v4, &unk_101CD4E8);
  sub_100D3B00(this, (int)this + 700, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  std::string::string(v13, "WordDist");
  v11 = 0;
  LOBYTE(v14) = 4;
  std::string::string(&v4, &unk_101CD4FC);
  sub_100D35B0(this, (int)this + 704, v13, v4, v5, v6, v7, v8, v9, v10, (int)v11);
  LOBYTE(v14) = 0;
  std::string::~string(v13);
  return this;
}
