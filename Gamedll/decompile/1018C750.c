/*
 * func-name: ?GetMaxAngleTurnU@RobotBody@GameClient@@QBEHXZ_0
 * func-address: 0x1018c750
 * callers: 0x100137be
 * callees: none
 */

int __thiscall GameClient::RobotBody::GetMaxAngleTurnU(GameClient::RobotBody *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 360);
}
