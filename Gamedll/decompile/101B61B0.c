/*
 * func-name: ?ConfirmUnBoard@AircraftVehicle@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101b61b0
 * callers: 0x1000d17f
 * callees: 0x10017418
 */

bool __thiscall GameClient::AircraftVehicle::ConfirmUnBoard(
        GameClient::AircraftVehicle *this,
        int a2,
        struct GameClient::Robot *a3)
{
  bool result; // al

  result = GameClient::ControlledEstab::ConfirmUnBoard(this, a2, a3);
  if ( result )
  {
    if ( a2 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      if ( *((_DWORD *)this + 114) )
        *(_BYTE *)(*((_DWORD *)this + 134) + 252) = 0;
      *((_DWORD *)this + 136) = 0;
      *((_DWORD *)this + 138) = 0;
      *((_DWORD *)this + 137) = 0;
    }
    return 1;
  }
  return result;
}
