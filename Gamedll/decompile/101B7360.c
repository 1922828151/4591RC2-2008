/*
 * func-name: ?OnCreate@PedrailVehicle@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101b7360
 * callers: 0x10016bd0
 * callees: 0x10004ea8
 */

bool __thiscall GameClient::PedrailVehicle::OnCreate(
        GameClient::PedrailVehicle *this,
        struct GameClient::Flyweight *a2)
{
  bool result; // al

  result = GameClient::ControlledEstab::OnCreate(this, a2);
  if ( result )
  {
    *((_DWORD *)this + 135) = a2;
    return 1;
  }
  return result;
}
