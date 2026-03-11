/*
 * func-name: ??4?$ProductorTemplate@VFWheelVehicle@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10245190
 * callers: 0x1001398f
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FWheelVehicle>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}
