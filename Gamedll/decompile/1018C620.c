/*
 * func-name: ?GetVersionID@RobotBody@GameClient@@UBEKXZ_0
 * func-address: 0x1018c620
 * callers: 0x1000fd30
 * callees: none
 */

unsigned int __thiscall GameClient::RobotBody::GetVersionID(GameClient::RobotBody *this)
{
  return *(_DWORD *)(*((_DWORD *)this + 38) + 240);
}
