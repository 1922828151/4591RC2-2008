/*
 * func-name: ?EnableState@Robot@GameClient@@QAEXW4RobotOtherState@12@@Z_0
 * func-address: 0x10033420
 * callers: 0x1000b244
 * callees: none
 */

int __thiscall GameClient::Robot::EnableState(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[92] |= a2;
  return result;
}
