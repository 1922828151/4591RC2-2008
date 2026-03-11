/*
 * func-name: ??0CPictureLabel@@QAE@PAVCREDialog@@W4_D3DBLEND@@1@Z
 * func-address: 0x100c87e0
 * callers: 0x1006ae70, 0x100d85c0, 0x1014a750, 0x1015ac30
 * callees: 0x100c6ff0, 0x100d36c0, 0x100d37d0, 0x100d39f0
 */

CPictureLabel *__thiscall CPictureLabel::CPictureLabel(
        CPictureLabel *this,
        struct CREDialog *a2,
        enum _D3DBLEND a3,
        enum _D3DBLEND a4)
{
  char v6; // [esp-20h] [ebp-5Ch] BYREF
  int v7; // [esp-1Ch] [ebp-58h]
  int v8; // [esp-18h] [ebp-54h]
  int v9; // [esp-14h] [ebp-50h]
  int v10; // [esp-10h] [ebp-4Ch]
  int v11; // [esp-Ch] [ebp-48h]
  int v12; // [esp-8h] [ebp-44h]
  const char *v13; // [esp-4h] [ebp-40h]
  CPictureLabel *v14; // [esp+10h] [ebp-2Ch]
  _BYTE v15[28]; // [esp+14h] [ebp-28h] BYREF
  int v16; // [esp+38h] [ebp-4h]

  v14 = this;
  CREControl::CREControl(this, a2);
  *(_DWORD *)this = &CPictureLabel::`vftable';
  *((_BYTE *)this + 604) = 0;
  *((_DWORD *)this + 144) = -1;
  v16 = 0;
  *((_BYTE *)this + 816) = 0;
  *((_DWORD *)this + 197) = -1;
  std::wstring::wstring((char *)this + 984);
  *((float *)this + 140) = 1.0;
  *((_DWORD *)this + 137) = a3;
  v13 = "PictureLabel";
  LOBYTE(v16) = 1;
  *((_BYTE *)this + 1012) = 0;
  *((_BYTE *)this + 1013) = 0;
  *((_BYTE *)this + 1032) = 0;
  *((_DWORD *)this + 35) = 22;
  *((_DWORD *)this + 43) = 0;
  *((_DWORD *)this + 42) = 0;
  *((_DWORD *)this + 44) = 0;
  *((_DWORD *)this + 138) = a4;
  *((_DWORD *)this + 144) = -1;
  *((_DWORD *)this + 197) = -1;
  *((_BYTE *)this + 556) = 0;
  *((_BYTE *)this + 1014) = 0;
  *((_DWORD *)this + 143) = 0;
  *((_DWORD *)this + 141) = -1;
  std::string::string(v15, v13);
  LOBYTE(v16) = 2;
  std::string::operator=((char *)this + 16, v15);
  LOBYTE(v16) = 1;
  std::string::~string(v15);
  std::string::string(v15, "Texture");
  v13 = 0;
  LOBYTE(v16) = 3;
  std::string::string(&v6, &unk_101C5200);
  sub_100D37D0((int)this + 984, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 1;
  std::string::~string(v15);
  std::string::string(v15, "Rect");
  LOBYTE(v16) = 4;
  v13 = 0;
  std::string::string(&v6, &unk_101C5214);
  sub_100D39F0((int)this + 532, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 1;
  std::string::~string(v15);
  std::string::string(v15, "CanBeClicked");
  v13 = 0;
  LOBYTE(v16) = 5;
  std::string::string(&v6, &unk_101C5228);
  sub_100D36C0((int)this + 1032, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 1;
  std::string::~string(v15);
  return this;
}
