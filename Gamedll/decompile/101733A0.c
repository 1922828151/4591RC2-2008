/*
 * func-name: ?ComputerBasicSpeed@Robot@GameClient@@SAMHHH@Z_0
 * func-address: 0x101733a0
 * callers: 0x10018a57
 * callees: 0x102c9dbc
 */

double __cdecl GameClient::Robot::ComputerBasicSpeed(int a1, int a2, int a3)
{
  float v4; // [esp+8h] [ebp+8h]
  float v5; // [esp+8h] [ebp+8h]

  v4 = (double)a2 / (double)a3;
  v5 = sqrt(v4);
  return (float)(v5 * (double)a1);
}
