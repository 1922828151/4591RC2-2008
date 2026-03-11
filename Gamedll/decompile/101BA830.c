/*
 * func-name: ?SetFlyweight@WheelVehicle@GameClient@@UAEXPAVFlyweight@2@@Z_0
 * func-address: 0x101ba830
 * callers: 0x100029aa
 * callees: 0x1000b13b
 */

void __thiscall GameClient::WheelVehicle::SetFlyweight(
        GameClient::WheelVehicle *this,
        struct GameClient::Flyweight *a2)
{
  GameClient::ControlledEstab::SetFlyweight(this, a2);
  *((_DWORD *)this + 135) = a2;
}
