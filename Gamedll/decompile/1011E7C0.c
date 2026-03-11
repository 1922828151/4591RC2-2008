/*
 * func-name: ?GetRobotID@Seat@GameClient@@QAEKXZ_0
 * func-address: 0x1011e7c0
 * callers: 0x1001592e
 * callees: none
 */

unsigned int __thiscall GameClient::Seat::GetRobotID(GameClient::Seat *this)
{
  return *((_DWORD *)this + 19);
}
