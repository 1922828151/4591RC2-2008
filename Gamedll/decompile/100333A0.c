/*
 * func-name: ?SetSurvivalState@Robot@GameClient@@QAEXW4RobotSurvival@12@@Z_0
 * func-address: 0x100333a0
 * callers: 0x1001219d
 * callees: none
 */

int __thiscall GameClient::Robot::SetSurvivalState(_DWORD *this, int a2)
{
  int result; // eax

  result = a2;
  this[90] = a2;
  return result;
}
