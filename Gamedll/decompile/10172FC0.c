/*
 * func-name: ?init@Robot@GameClient@@IAEXXZ_0
 * func-address: 0x10172fc0
 * callers: 0x1000b2e9
 * callees: 0x100061c7, 0x1000c02c, 0x1001589d, 0x1001a451
 */

void __thiscall GameClient::Robot::init(GameClient::RobotBody **this)
{
  int PrimarySlotCount; // edi
  int v3; // eax
  GameClient::RobotBody *v4; // ecx
  int SecondarySlotCount; // edi
  GameClient::RobotBody *v6; // edi
  GameClient::RobotBody *v7; // eax
  GameClient::RobotBody *v8; // edx

  PrimarySlotCount = GameClient::RobotBody::GetPrimarySlotCount(this[50]);
  v3 = GameClient::RobotArmor::GetPrimarySlotCount(this[51]);
  v4 = this[50];
  this[86] = (GameClient::RobotBody *)(v3 + PrimarySlotCount);
  SecondarySlotCount = GameClient::RobotBody::GetSecondarySlotCount(v4);
  v6 = (GameClient::RobotBody *)(GameClient::RobotArmor::GetSecondarySlotCount(this[51]) + SecondarySlotCount);
  v7 = this[50];
  this[87] = v6;
  v8 = *(GameClient::RobotBody **)(*((_DWORD *)v7 + 2) + 392);
  *((float *)this + 198) = 1.0;
  this[182] = v8;
}
