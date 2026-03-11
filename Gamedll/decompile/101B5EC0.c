/*
 * func-name: ?OnCreate@AircraftVehicle@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101b5ec0
 * callers: 0x1000906b
 * callees: 0x10004ea8
 */

bool __thiscall GameClient::AircraftVehicle::OnCreate(
        GameClient::AircraftVehicle *this,
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
