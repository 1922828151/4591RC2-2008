/*
 * func-name: ?ConfirmUnBoard@PedrailVehicle@GameClient@@UAE_NHPAVRobot@2@@Z_0
 * func-address: 0x101b7510
 * callers: 0x1001a852
 * callees: 0x10017418
 */

bool __thiscall GameClient::PedrailVehicle::ConfirmUnBoard(
        GameClient::PedrailVehicle *this,
        int a2,
        struct GameClient::Robot *a3)
{
  bool result; // al

  result = GameClient::ControlledEstab::ConfirmUnBoard(this, a2, a3);
  if ( result )
  {
    if ( a2 == *(_DWORD *)(*((_DWORD *)this + 115) + 516) )
    {
      *((_DWORD *)this + 136) = 0;
      *((_DWORD *)this + 137) = 0;
      *((_BYTE *)this + 552) = 1;
    }
    return 1;
  }
  return result;
}
