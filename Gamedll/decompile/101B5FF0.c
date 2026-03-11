/*
 * func-name: ?SetFlyweight@AircraftVehicle@GameClient@@UAEXPAVFlyweight@2@@Z_0
 * func-address: 0x101b5ff0
 * callers: 0x10008201
 * callees: 0x1000b13b
 */

void __thiscall GameClient::AircraftVehicle::SetFlyweight(
        GameClient::AircraftVehicle *this,
        struct GameClient::Flyweight *a2)
{
  GameClient::ControlledEstab::SetFlyweight(this, a2);
  *((_DWORD *)this + 135) = a2;
}
