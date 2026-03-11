/*
 * func-name: ??0RobotArmor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1015fcd0
 * callers: 0x100118a6
 * callees: 0x10011d1a
 */

GameClient::RobotArmor *__thiscall GameClient::RobotArmor::RobotArmor(
        GameClient::RobotArmor *this,
        const struct GameClient::RobotArmor *a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *(_DWORD *)this = &GameClient::RobotArmor::`vftable';
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 39);
  return this;
}
