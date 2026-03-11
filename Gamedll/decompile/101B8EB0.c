/*
 * func-name: ?SetFlyweight@SuspendVehicle@GameClient@@UAEXPAVFlyweight@2@@Z_0
 * func-address: 0x101b8eb0
 * callers: 0x1000e57a
 * callees: 0x1000b13b
 */

void __thiscall GameClient::SuspendVehicle::SetFlyweight(
        GameClient::SuspendVehicle *this,
        struct GameClient::Flyweight *a2)
{
  GameClient::ControlledEstab::SetFlyweight(this, a2);
  *((_DWORD *)this + 135) = a2;
}
