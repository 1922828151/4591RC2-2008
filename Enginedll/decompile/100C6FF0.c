/*
 * func-name: ??0CREControl@@QAE@PAVCREDialog@@@Z
 * func-address: 0x100c6ff0
 * callers: 0x10069f20, 0x100c7520, 0x100c7850, 0x100c7b00, 0x100c7bc0, 0x100c7c80, 0x100c7df0, 0x100c7e50, 0x100c84a0, 0x100c87e0, 0x100c89e0, 0x100c8b90, 0x100c9cb0, 0x100caa50, 0x101553b0, 0x101555a0, 0x10155770, 0x10156da0, 0x10157070
 * callees: 0x100d35b0, 0x100d36c0, 0x100d46f0, 0x101a28f8
 */

CREControl *__thiscall CREControl::CREControl(CREControl *this, struct CREDialog *a2)
{
  struct tagRECT *v3; // edi
  int v4; // ebp
  char v6; // [esp-20h] [ebp-5Ch] BYREF
  int v7; // [esp-1Ch] [ebp-58h]
  int v8; // [esp-18h] [ebp-54h]
  int v9; // [esp-14h] [ebp-50h]
  int v10; // [esp-10h] [ebp-4Ch]
  int v11; // [esp-Ch] [ebp-48h]
  int v12; // [esp-8h] [ebp-44h]
  void *v13; // [esp-4h] [ebp-40h]
  CREControl *v14; // [esp+10h] [ebp-2Ch]
  _BYTE v15[28]; // [esp+14h] [ebp-28h] BYREF
  int v16; // [esp+38h] [ebp-4h]

  v14 = this;
  sub_100D46F0();
  *(_DWORD *)this = &CREControl::`vftable';
  *((_DWORD *)this + 16) = 0;
  *((_DWORD *)this + 17) = 0;
  *((_DWORD *)this + 18) = 0;
  *((_DWORD *)this + 19) = 0;
  *((_DWORD *)this + 20) = 0;
  v16 = 0;
  *((_DWORD *)this + 30) = 0;
  *((_DWORD *)this + 31) = 0;
  *((_DWORD *)this + 32) = 0;
  `eh vector constructor iterator'((char *)this + 180, 0x1Cu, 7, std::wstring::wstring, std::wstring::~wstring);
  *((float *)this + 132) = 1.0;
  *((_BYTE *)this + 516) = 0;
  *((_DWORD *)this + 130) = 0;
  *((_DWORD *)this + 122) = 0;
  *((_DWORD *)this + 123) = 0;
  *((_DWORD *)this + 124) = 0;
  *((_DWORD *)this + 125) = 0;
  *((_DWORD *)this + 126) = 0;
  *((_DWORD *)this + 127) = 0;
  *((_DWORD *)this + 128) = 0;
  *((_DWORD *)this + 15) = -1;
  *((_DWORD *)this + 35) = 1;
  *((_DWORD *)this + 28) = a2;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 29) = 0;
  *((_DWORD *)this + 37) = 0;
  *((_DWORD *)this + 38) = 0;
  *((_BYTE *)this + 156) = 1;
  *((_BYTE *)this + 90) = 1;
  *((_BYTE *)this + 89) = 0;
  *((_BYTE *)this + 91) = 0;
  *((_BYTE *)this + 92) = 0;
  *((_BYTE *)this + 93) = 0;
  *((_BYTE *)this + 157) = 0;
  *((_BYTE *)this + 132) = 0;
  *((_DWORD *)this + 24) = 0;
  *((_DWORD *)this + 25) = 0;
  *((_DWORD *)this + 26) = 0;
  *((_DWORD *)this + 27) = 0;
  *((_DWORD *)this + 41) = 0;
  v13 = &unk_101C47F8;
  LOBYTE(v16) = 2;
  *((_DWORD *)this + 131) = 1;
  std::string::string(v15, v13);
  v13 = 0;
  LOBYTE(v16) = 3;
  std::string::string(&v6, &unk_101C47F0);
  sub_100D35B0((int)this + 136, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "Visible");
  v13 = 0;
  LOBYTE(v16) = 4;
  std::string::string(&v6, &unk_101C47FC);
  sub_100D36C0((int)this + 90, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "Enable");
  v13 = 0;
  LOBYTE(v16) = 5;
  std::string::string(&v6, &unk_101C4810);
  sub_100D36C0((int)this + 156, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "PosX");
  v13 = 0;
  LOBYTE(v16) = 6;
  std::string::string(&v6, &unk_101C4824);
  sub_100D35B0((int)this + 96, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "PosY");
  v13 = 0;
  LOBYTE(v16) = 7;
  std::string::string(&v6, &unk_101C4838);
  sub_100D35B0((int)this + 100, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "Width");
  v13 = 0;
  LOBYTE(v16) = 8;
  std::string::string(&v6, &unk_101C484C);
  sub_100D35B0((int)this + 104, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "Height");
  v13 = 0;
  LOBYTE(v16) = 9;
  std::string::string(&v6, &unk_101C485C);
  sub_100D35B0((int)this + 108, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  std::string::string(v15, "ZOrder");
  v13 = 0;
  LOBYTE(v16) = 10;
  std::string::string(&v6, &unk_101C486C);
  sub_100D35B0((int)this + 524, v15, v6, v7, v8, v9, v10, v11, v12, (int)v13);
  LOBYTE(v16) = 2;
  std::string::~string(v15);
  v3 = (struct tagRECT *)((char *)this + 376);
  v4 = 7;
  do
  {
    SetRect(v3++, 0, 0, 0, 0);
    --v4;
  }
  while ( v4 );
  return this;
}
