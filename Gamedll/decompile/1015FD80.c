/*
 * func-name: ??0RobotBody@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1015fd80
 * callers: 0x10010c3a
 * callees: 0x10011d1a
 */

GameClient::RobotBody *__thiscall GameClient::RobotBody::RobotBody(
        GameClient::RobotBody *this,
        const struct GameClient::RobotBody *a2)
{
  GameClient::WorldObject::WorldObject(this, a2);
  *(_DWORD *)this = &GameClient::SystemPart::`vftable';
  *((_DWORD *)this + 37) = *((_DWORD *)a2 + 37);
  *(_DWORD *)this = &GameClient::RobotBody::`vftable';
  *((_DWORD *)this + 38) = *((_DWORD *)a2 + 38);
  return this;
}
