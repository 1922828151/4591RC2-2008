/*
 * func-name: ??0SuspendVehicle@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101ae380
 * callers: 0x1000390e
 * callees: 0x1000e53e, 0x100106fe
 */

GameClient::SuspendVehicle *__thiscall GameClient::SuspendVehicle::SuspendVehicle(
        GameClient::SuspendVehicle *this,
        const struct GameClient::SuspendVehicle *a2)
{
  GameClient::ControlledEstab::ControlledEstab(this, a2);
  *(_DWORD *)this = &GameClient::SuspendVehicle::`vftable'{for `GameClient::WorldObject'};
  *((_DWORD *)this + 37) = &GameClient::SuspendVehicle::`vftable'{for `GameClient::DamageUnit'};
  *((_DWORD *)this + 134) = *((_DWORD *)a2 + 134);
  *((_DWORD *)this + 135) = *((_DWORD *)a2 + 135);
  *((_DWORD *)this + 136) = *((_DWORD *)a2 + 136);
  *((_DWORD *)this + 137) = *((_DWORD *)a2 + 137);
  *((_BYTE *)this + 552) = *((_BYTE *)a2 + 552);
  sub_1000E53E((int)a2 + 556);
  return this;
}
