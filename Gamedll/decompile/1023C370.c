/*
 * func-name: ??1FRobotCore@GameClient@@UAE@XZ_0
 * func-address: 0x1023c370
 * callers: 0x10014be1
 * callees: 0x10013a6b
 */

void __thiscall GameClient::FRobotCore::~FRobotCore(GameClient::FRobotCore *this)
{
  *(_DWORD *)this = &GameClient::FRobotCore::`vftable';
  std::string::~string((char *)this + 292);
  GameClient::FSystemPart::~FSystemPart(this);
}
