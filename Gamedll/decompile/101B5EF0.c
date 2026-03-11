/*
 * func-name: ?LoadResource@AircraftVehicle@GameClient@@UAE_NXZ_0
 * func-address: 0x101b5ef0
 * callers: 0x10002ce3
 * callees: 0x100015d2
 */

bool __thiscall GameClient::AircraftVehicle::LoadResource(GameClient::AircraftVehicle *this)
{
  bool result; // al

  result = GameClient::ControlledEstab::LoadResource(this);
  if ( result )
  {
    if ( (unsigned __int8)std::operator!=<char>(*((_DWORD *)this + 135) + 1208, &unk_10315D85) )
      AnimationSet::Load((char *)this + 560, *((_DWORD *)this + 135) + 1208, *((_DWORD *)this + 135) + 1208, 0, 0, 0);
    if ( (unsigned __int8)std::operator!=<char>(*((_DWORD *)this + 135) + 1236, &unk_10315D86) )
      AnimationSet::Load((char *)this + 608, *((_DWORD *)this + 135) + 1236, *((_DWORD *)this + 135) + 1236, 0, 0, 0);
    return 1;
  }
  return result;
}
