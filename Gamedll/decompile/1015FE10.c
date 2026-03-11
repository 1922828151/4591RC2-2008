/*
 * func-name: ??0RobotCore@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1015fe10
 * callers: 0x100085bc
 * callees: 0x10011d1a
 */

GameClient::RobotCore *__thiscall GameClient::RobotCore::RobotCore(
        GameClient::RobotCore *this,
        const struct GameClient::RobotCore *a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *(_DWORD *)this = &GameClient::RobotCore::`vftable';
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  return this;
}
