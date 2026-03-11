/*
 * func-name: ?GetCombinRobot@Robot@GameClient@@QBEPAVCombinRobot@2@XZ_0
 * func-address: 0x10033690
 * callers: 0x1000731a
 * callees: none
 */

struct GameClient::CombinRobot *__thiscall GameClient::Robot::GetCombinRobot(GameClient::Robot *this)
{
  return (struct GameClient::CombinRobot *)*((_DWORD *)this + 43);
}
