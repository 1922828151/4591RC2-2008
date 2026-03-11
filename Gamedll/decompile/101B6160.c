/*
 * func-name: ?ConfirmBoard@AircraftVehicle@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101b6160
 * callers: 0x10010b27
 * callees: 0x10019aab
 */

bool __thiscall GameClient::AircraftVehicle::ConfirmBoard(
        GameClient::AircraftVehicle *this,
        int a2,
        struct GameClient::Robot *a3)
{
  bool result; // al

  result = GameClient::ControlledEstab::ConfirmBoard(this, a2, a3);
  if ( result )
  {
    result = 1;
    if ( a2 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      if ( *((_DWORD *)this + 114) )
        *(_BYTE *)(*((_DWORD *)this + 134) + 252) = 1;
    }
  }
  return result;
}
