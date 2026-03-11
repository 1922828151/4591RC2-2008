/*
 * func-name: ?AddRobot@RobotManager@GameClient@@QAEPAVRobot@2@PAV32@@Z_0
 * func-address: 0x1018d470
 * callers: 0x100045a7
 * callees: 0x10015bd6
 */

struct GameClient::Robot *__thiscall GameClient::RobotManager::AddRobot(
        GameClient::RobotManager *this,
        struct GameClient::Robot *a2)
{
  _DWORD v3[2]; // [esp+4h] [ebp-14h] BYREF
  _BYTE v4[12]; // [esp+Ch] [ebp-Ch] BYREF

  v3[0] = *((_DWORD *)a2 + 3);
  v3[1] = a2;
  sub_10015BD6((int)v4, (int)v3);
  return a2;
}
