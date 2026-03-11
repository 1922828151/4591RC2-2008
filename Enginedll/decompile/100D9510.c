/*
 * func-name: sub_100D9510
 * func-address: 0x100d9510
 * callers: 0x100d77a0
 * callees: 0x100d9350
 */

int __thiscall sub_100D9510(_DWORD *this, char a2, int a3, int a4, int a5, int a6, int a7, int a8, int a9)
{
  _BYTE v11[12]; // [esp+4h] [ebp-38h] BYREF
  _BYTE v12[28]; // [esp+10h] [ebp-2Ch] BYREF
  int v13; // [esp+2Ch] [ebp-10h]
  int v14; // [esp+38h] [ebp-4h]

  v14 = 0;
  std::string::string(v12, &a2);
  v13 = a9;
  LOBYTE(v14) = 1;
  sub_100D9350(this, (int)v11, (int)v12);
  LOBYTE(v14) = 0;
  std::string::~string(v12);
  v14 = -1;
  return std::string::~string(&a2);
}
