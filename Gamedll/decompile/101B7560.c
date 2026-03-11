/*
 * func-name: ?ConfirmChangeSeat@PedrailVehicle@GameClient@@UAE_NPAVRobot@2@H@Z_0
 * func-address: 0x101b7560
 * callers: 0x1000c865
 * callees: 0x10007982
 */

bool __thiscall GameClient::PedrailVehicle::ConfirmChangeSeat(
        GameClient::PedrailVehicle *this,
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
      *((_DWORD *)this + 136) = 0;
      *((_DWORD *)this + 137) = 0;
      *((_BYTE *)this + 552) = 1;
    }
    return 1;
  }
  return result;
}
