/*
 * func-name: ??0FARepair@GameClient@@QAE@XZ_0
 * func-address: 0x10248ae0
 * callers: 0x10010956
 * callees: 0x1000c563, 0x102c3880, 0x102c3a00
 */

GameClient::FARepair *__thiscall GameClient::FARepair::FARepair(GameClient::FARepair *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FAura::FAura(this);
  *((float *)this + 67) = 1.0;
  *((float *)this + 68) = 1.0;
  *((float *)this + 69) = 1.0;
  v5 = 0;
  *(_DWORD *)this = &GameClient::FARepair::`vftable';
  *((_DWORD *)this + 65) = -1;
  *((_DWORD *)this + 66) = 1;
  std::string::string(v4, &unk_1031F754);
  LOBYTE(v5) = 1;
  std::string::string(v3, "MaxRepairPointCount");
  LOBYTE(v5) = 2;
  sub_102C3880(this, v3, (char *)this + 260, v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  LOBYTE(v5) = 0;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031F784);
  LOBYTE(v5) = 3;
  std::string::string(v4, "RepairPoint");
  LOBYTE(v5) = 4;
  sub_102C3880(this, v4, (char *)this + 264, v3);
  LOBYTE(v5) = 3;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F7AC);
  LOBYTE(v5) = 5;
  std::string::string(v4, "RepairPointToFiberArmor");
  LOBYTE(v5) = 6;
  sub_102C3A00(this, v4, (char *)this + 268, v3);
  LOBYTE(v5) = 5;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F7E0);
  LOBYTE(v5) = 7;
  std::string::string(v4, "RepairPointToComplexArmor");
  LOBYTE(v5) = 8;
  sub_102C3A00(this, v4, (char *)this + 272, v3);
  LOBYTE(v5) = 7;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031F818);
  LOBYTE(v5) = 9;
  std::string::string(v4, "RepairPointToMetalArmor");
  LOBYTE(v5) = 10;
  sub_102C3A00(this, v4, (char *)this + 276, v3);
  LOBYTE(v5) = 9;
  std::string::~string(v4);
  LOBYTE(v5) = 0;
  std::string::~string(v3);
  return this;
}
