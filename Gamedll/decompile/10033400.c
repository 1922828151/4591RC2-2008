/*
 * func-name: ?HasState@Robot@GameClient@@QAE_NW4RobotOtherState@12@@Z_0
 * func-address: 0x10033400
 * callers: 0x1000de7c
 * callees: none
 */

bool __thiscall GameClient::Robot::HasState(_DWORD *this, int a2)
{
  return (a2 & this[92]) != 0;
}
