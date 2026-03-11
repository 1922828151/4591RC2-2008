/*
 * func-name: ??0FSuspendVehicleWheel@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101afa40
 * callers: 0x10009f98
 * callees: 0x100026b7
 */

GameClient::FSuspendVehicleWheel *__thiscall GameClient::FSuspendVehicleWheel::FSuspendVehicleWheel(
        GameClient::FSuspendVehicleWheel *this,
        const struct GameClient::FSuspendVehicleWheel *a2)
{
  GameClient::FWheel::FWheel(this, a2);
  *(_DWORD *)this = &GameClient::FSuspendVehicleWheel::`vftable';
  return this;
}
