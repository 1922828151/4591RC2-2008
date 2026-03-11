/*
 * func-name: ?UnloadResource@AircraftVehicle@GameClient@@UAEXXZ_0
 * func-address: 0x101b5f80
 * callers: 0x10001771
 * callees: none
 */

void __thiscall GameClient::AircraftVehicle::UnloadResource(GameClient::AircraftVehicle *this)
{
  AnimationSet::Destroy((GameClient::AircraftVehicle *)((char *)this + 560));
  AnimationSet::Destroy((GameClient::AircraftVehicle *)((char *)this + 608));
  GameClient::ControlledEstab::UnloadResource(this);
}
