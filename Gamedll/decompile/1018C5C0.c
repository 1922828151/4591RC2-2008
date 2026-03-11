/*
 * func-name: ?GetMass@RobotBody@GameClient@@UBEHXZ_0
 * func-address: 0x1018c5c0
 * callers: 0x100039c7
 * callees: none
 */

int __thiscall GameClient::RobotBody::GetMass(GameClient::RobotBody *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 200);
}
