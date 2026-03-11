/*
 * func-name: ?SetFlyweight@PedrailVehicle@GameClient@@UAEXPAVFlyweight@2@@Z_0
 * func-address: 0x101b73d0
 * callers: 0x1000ba7d
 * callees: 0x1000b13b
 */

void __thiscall GameClient::PedrailVehicle::SetFlyweight(
        GameClient::PedrailVehicle *this,
        struct GameClient::Flyweight *a2)
{
  GameClient::ControlledEstab::SetFlyweight(this, a2);
  *((_DWORD *)this + 135) = a2;
}
