/*
 * func-name: ??0FPedrailVehicleWheel@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101af750
 * callers: 0x10006532
 * callees: 0x100026b7
 */

GameClient::FPedrailVehicleWheel *__thiscall GameClient::FPedrailVehicleWheel::FPedrailVehicleWheel(
        GameClient::FPedrailVehicleWheel *this,
        const struct GameClient::FPedrailVehicleWheel *a2)
{
  GameClient::FPedrailVehicleWheel *result; // eax

  GameClient::FWheel::FWheel(this, a2);
  *(_DWORD *)this = &GameClient::FPedrailVehicleWheel::`vftable';
  *((_BYTE *)this + 148) = *((_BYTE *)a2 + 148);
  *((float *)this + 38) = *((float *)a2 + 38);
  result = this;
  *((float *)this + 39) = *((float *)a2 + 39);
  return result;
}
