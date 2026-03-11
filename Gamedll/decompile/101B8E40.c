/*
 * func-name: ?OnCreate@SuspendVehicle@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x101b8e40
 * callers: 0x1000e642
 * callees: 0x10004ea8
 */

bool __thiscall GameClient::SuspendVehicle::OnCreate(
        GameClient::SuspendVehicle *this,
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
