/*
 * func-name: ?GetDriver@ControlledEstab@GameClient@@QAEPAVRobot@2@XZ_0
 * func-address: 0x1019d090
 * callers: 0x10006938
 * callees: 0x10008e6d, 0x1000a3a8, 0x1000ed13
 */

struct GameClient::Robot *__thiscall GameClient::ControlledEstab::GetDriver(GameClient::ControlledEstab *this)
{
  struct GameClient::Seat *DriverSeat; // eax
  int v3; // eax
  GameClient::RobotManager *v4; // eax
  int v5; // [esp-4h] [ebp-4h]

  DriverSeat = GameClient::ControlledEstab::GetDriverSeat(this);
  if ( !DriverSeat )
    return 0;
  v3 = *((_DWORD *)DriverSeat + 19);
  if ( v3 == -1 )
    return 0;
  v5 = v3;
  v4 = GameClient::RobotManager::Instance();
  return GameClient::RobotManager::GetRobot(v4, v5);
}
