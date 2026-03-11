/*
 * func-name: ?GetAngleDown@RobotArmor@GameClient@@QBEHXZ_0
 * func-address: 0x1018c3e0
 * callers: 0x1000db89
 * callees: none
 */

int __thiscall GameClient::RobotArmor::GetAngleDown(GameClient::RobotArmor *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 360);
}
