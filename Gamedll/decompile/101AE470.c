/*
 * func-name: ??0AircraftVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101ae470
 * callers: 0x100049fd
 * callees: 0x100106fe
 */

GameClient::AircraftVehicle *__thiscall GameClient::AircraftVehicle::AircraftVehicle(
        GameClient::AircraftVehicle *this,
        const struct GameClient::AircraftVehicle *a2)
{
  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::AircraftVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::AircraftVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_DWORD *)this + 138) = *((_DWORD *)a2 + 138);
  *((_BYTE *)this + 556) = *((_BYTE *)a2 + 556);
  AnimationSet::AnimationSet(
    (GameClient::AircraftVehicle *)((char *)this + 560),
    (const struct GameClient::AircraftVehicle *)((char *)a2 + 560));
  *((_DWORD *)this + 151) = *((_DWORD *)a2 + 151);
  AnimationSet::AnimationSet(
    (GameClient::AircraftVehicle *)((char *)this + 608),
    (const struct GameClient::AircraftVehicle *)((char *)a2 + 608));
  *((_DWORD *)this + 163) = *((_DWORD *)a2 + 163);
  return this;
}
