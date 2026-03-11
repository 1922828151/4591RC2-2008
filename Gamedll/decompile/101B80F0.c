/*
 * func-name: ??0PedrailVehicle@GameClient@@QAE@K@Z_0
 * func-address: 0x101b80f0
 * callers: 0x10009b88
 * callees: 0x100060e6
 */

GameClient::PedrailVehicle *__thiscall GameClient::PedrailVehicle::PedrailVehicle(
        GameClient::PedrailVehicle *this,
        unsigned int a2)
{
  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *((_DWORD *)this + 134) = 0;
  *((_DWORD *)this + 136) = 0;
  *((_DWORD *)this + 137) = 0;
  *((_BYTE *)this + 552) = 0;
  *(_DWORD *)this = &GameClient::PedrailVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::PedrailVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 140) = 0;
  *((_DWORD *)this + 141) = 0;
  *((_DWORD *)this + 142) = 0;
  *((float *)this + 146) = 0.0;
  *((float *)this + 147) = 0.0;
  return this;
}
