/*
 * func-name: ?ConfirmChangeSeat@AircraftVehicle@GameClient@@UAE_NPAVRobot@2@H@Z_0
 * func-address: 0x101b6210
 * callers: 0x10007527
 * callees: 0x10007982
 */

bool __thiscall GameClient::AircraftVehicle::ConfirmChangeSeat(
        GameClient::AircraftVehicle *this,
        struct GameClient::Robot *a2,
        int a3)
{
  int v3; // edi
  bool result; // al

  v3 = *((_DWORD *)a2 + 71);
  result = GameClient::ControlledEstab::ConfirmChangeSeat(this, a2, a3);
  if ( result )
  {
    if ( v3 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      if ( *((_DWORD *)this + 114) )
        *(_BYTE *)(*((_DWORD *)this + 134) + 252) = 0;
      *((_DWORD *)this + 136) = 0;
      *((_DWORD *)this + 138) = 0;
      *((_DWORD *)this + 137) = 0;
    }
    if ( a3 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      if ( *((_DWORD *)this + 114) )
        *(_BYTE *)(*((_DWORD *)this + 134) + 252) = 1;
    }
    return 1;
  }
  return result;
}
