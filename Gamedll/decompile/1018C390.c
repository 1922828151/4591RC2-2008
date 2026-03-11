/*
 * func-name: ?GetVersionID@RobotArmor@GameClient@@UBEKXZ_0
 * func-address: 0x1018c390
 * callers: 0x10018278
 * callees: none
 */

unsigned int __thiscall GameClient::RobotArmor::GetVersionID(GameClient::RobotArmor *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 240);
}
