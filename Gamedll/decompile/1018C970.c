/*
 * func-name: ?GetVersionID@RobotCore@GameClient@@UBEKXZ_0
 * func-address: 0x1018c970
 * callers: 0x100030e4
 * callees: none
 */

unsigned int __thiscall GameClient::RobotCore::GetVersionID(GameClient::RobotCore *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 240);
}
