/*
 * func-name: ?Initialize@DamageManager@GameClient@@QAE_NXZ_0
 * func-address: 0x10154ff0
 * callers: 0x10017300
 * callees: 0x1000f407
 */

char __thiscall GameClient::DamageManager::Initialize(GameClient::DamageManager *this)
{
  int v2; // [esp+Ch] [ebp-90h] BYREF
  _BYTE v3[28]; // [esp+10h] [ebp-8Ch] BYREF
  _BYTE v4[12]; // [esp+2Ch] [ebp-70h] BYREF
  _BYTE v5[28]; // [esp+38h] [ebp-64h] BYREF
  int v6; // [esp+54h] [ebp-48h] BYREF
  _BYTE v7[28]; // [esp+58h] [ebp-44h] BYREF
  _BYTE v8[28]; // [esp+74h] [ebp-28h] BYREF
  int v9; // [esp+98h] [ebp-4h]

  std::string::string(v5, "BloodFiber");
  v9 = 0;
  v2 = 1;
  std::string::string(v3, v5);
  LOBYTE(v9) = 1;
  sub_1000F407((int)v4, (int)&v2);
  LOBYTE(v9) = 0;
  std::string::~string(v3);
  v9 = -1;
  std::string::~string(v5);
  std::string::string(v5, "BloodComplex");
  v9 = 2;
  v2 = 2;
  std::string::string(v3, v5);
  LOBYTE(v9) = 3;
  sub_1000F407((int)v4, (int)&v2);
  LOBYTE(v9) = 2;
  std::string::~string(v3);
  v9 = -1;
  std::string::~string(v5);
  std::string::string(v8, "BloodMetal");
  v9 = 4;
  v6 = 4;
  std::string::string(v7, v8);
  LOBYTE(v9) = 5;
  sub_1000F407((int)v4, (int)&v6);
  LOBYTE(v9) = 4;
  std::string::~string(v7);
  v9 = -1;
  std::string::~string(v8);
  return 1;
}
