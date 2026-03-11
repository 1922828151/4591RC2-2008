/*
 * func-name: ??0PedrailVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101ae240
 * callers: 0x1000f3d0
 * callees: 0x1000e53e, 0x100106fe
 */

GameClient::PedrailVehicle *__thiscall GameClient::PedrailVehicle::PedrailVehicle(
        GameClient::PedrailVehicle *this,
        const struct GameClient::PedrailVehicle *a2)
{
  GameClient::PedrailVehicle *result; // eax

  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::PedrailVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::PedrailVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_BYTE *)this + 552) = *((_BYTE *)a2 + 552);
  sub_1000E53E((int)a2 + 556);
  *((float *)this + 143) = *((float *)a2 + 143);
  *((_DWORD *)this + 144) = *((_DWORD *)a2 + 144);
  *((_DWORD *)this + 145) = *((_DWORD *)a2 + 145);
  *((float *)this + 146) = *((float *)a2 + 146);
  result = this;
  *((float *)this + 147) = *((float *)a2 + 147);
  return result;
}
