/*
 * func-name: ?GetAngleTurnU@RobotBody@GameClient@@QBEHXZ_0
 * func-address: 0x1018c660
 * callers: 0x10008d0f
 * callees: none
 */

int __thiscall GameClient::RobotBody::GetAngleTurnU(GameClient::RobotBody *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 360);
}
