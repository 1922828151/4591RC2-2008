/*
 * func-name: ??0FWheelVehicleWheel@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101aa6f0
 * callers: 0x1000402a
 * callees: 0x100026b7
 */

GameClient::FWheelVehicleWheel *__thiscall GameClient::FWheelVehicleWheel::FWheelVehicleWheel(
        GameClient::FWheelVehicleWheel *this,
        const struct GameClient::FWheelVehicleWheel *a2)
{
  GameClient::FWheel::FWheel(this, a2);
  *(_DWORD *)this = &GameClient::FWheelVehicleWheel::`vftable';
  *((float *)this + 37) = *((float *)a2 + 37);
  *((_BYTE *)this + 152) = *((_BYTE *)a2 + 152);
  return this;
}
