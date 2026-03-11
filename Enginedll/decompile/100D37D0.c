/*
 * func-name: sub_100D37D0
 * func-address: 0x100d37d0
 * callers: 0x100c7520, 0x100c7850, 0x100c87e0, 0x100cb5e0, 0x100ccaf0, 0x10157070
 * callees: 0x100116a0, 0x100ce470, 0x100d03f0
 */

int __thiscall sub_100D37D0(
        _DWORD *this,
        int a2,
        void *a3,
        char a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11)
{
  _DWORD *v12; // eax
  _BYTE v14[12]; // [esp+8h] [ebp-84h] BYREF
  _DWORD v15[3]; // [esp+14h] [ebp-78h] BYREF
  _BYTE v16[28]; // [esp+20h] [ebp-6Ch] BYREF
  _DWORD v17[10]; // [esp+3Ch] [ebp-50h] BYREF
  _BYTE v18[28]; // [esp+64h] [ebp-28h] BYREF
  int v19; // [esp+88h] [ebp-4h]

  v19 = 0;
  std::string::string(v16);
  v15[1] = a11;
  LOBYTE(v19) = 1;
  v15[0] = 5;
  v15[2] = a2;
  std::string::operator=(v16, &a4);
  v12 = sub_100CE470(v17, (int)a3, v15);
  LOBYTE(v19) = 2;
  sub_100D03F0(this + 1, (int)v14, v12);
  LOBYTE(v19) = 3;
  std::string::~string(v18);
  LOBYTE(v19) = 1;
  std::string::~string(v17);
  sub_100116A0(this + 11, a3);
  LOBYTE(v19) = 0;
  std::string::~string(v16);
  v19 = -1;
  return std::string::~string(&a4);
}
