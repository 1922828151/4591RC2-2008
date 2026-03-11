/*
 * func-name: ??0FRobotCore@GameClient@@QAE@XZ_0
 * func-address: 0x1023c1a0
 * callers: 0x10010eb0
 * callees: 0x1001018b, 0x102c3880, 0x102c3a00, 0x102c3c40
 */

GameClient::FRobotCore *__thiscall GameClient::FRobotCore::FRobotCore(GameClient::FRobotCore *this)
{
  _BYTE v3[28]; // [esp+18h] [ebp-44h] BYREF
  _BYTE v4[28]; // [esp+34h] [ebp-28h] BYREF
  int v5; // [esp+58h] [ebp-4h]

  GameClient::FSystemPart::FSystemPart(this);
  v5 = 0;
  *(_DWORD *)this = &GameClient::FRobotCore::`vftable';
  std::string::string((char *)this + 292);
  *((float *)this + 71) = 0.0;
  LOBYTE(v5) = 1;
  *((_DWORD *)this + 49) = 2;
  *((_DWORD *)this + 68) = 200;
  *((_DWORD *)this + 69) = 1;
  *((_DWORD *)this + 70) = 200;
  *((_DWORD *)this + 72) = 100;
  std::string::operator=((char *)this + 292, &unk_1031D840);
  std::string::string(v4, &unk_1031D844);
  LOBYTE(v5) = 2;
  std::string::string(v3, "OffsetSteadyCoefficient");
  LOBYTE(v5) = 3;
  sub_102C3A00(this, v3, (char *)this + 284, v4);
  LOBYTE(v5) = 2;
  std::string::~string(v3);
  LOBYTE(v5) = 1;
  std::string::~string(v4);
  std::string::string(v3, &unk_1031D86C);
  LOBYTE(v5) = 4;
  std::string::string(v4, "MaxPower");
  LOBYTE(v5) = 5;
  sub_102C3880(this, v4, (char *)this + 272, v3);
  LOBYTE(v5) = 4;
  std::string::~string(v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  std::string::string(v3, &unk_1031D8AC);
  LOBYTE(v5) = 6;
  std::string::string(v4, "PowerName");
  LOBYTE(v5) = 7;
  sub_102C3C40(this, v4, (char *)this + 292, v3);
  LOBYTE(v5) = 6;
  std::string::~string(v4);
  LOBYTE(v5) = 1;
  std::string::~string(v3);
  return this;
}
