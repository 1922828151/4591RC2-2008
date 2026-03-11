/*
 * func-name: ?GetDriverSeat@SuspendVehicle@GameClient@@QAEPAVSeat@2@XZ_0
 * func-address: 0x101b9600
 * callers: 0x100158d9
 * callees: none
 */

struct GameClient::Seat *__thiscall GameClient::SuspendVehicle::GetDriverSeat(GameClient::SuspendVehicle *this)
{
  int v2; // ecx
  unsigned int v3; // edi

  v2 = *((_DWORD *)this + 49);
  v3 = *(_DWORD *)(*((_DWORD *)this + 135) + 516);
  if ( v2 && v3 < (*((_DWORD *)this + 50) - v2) >> 2 )
    return *(struct GameClient::Seat **)(v2 + 4 * v3);
  _invalid_parameter_noinfo();
  return *(struct GameClient::Seat **)(*((_DWORD *)this + 49) + 4 * v3);
}
