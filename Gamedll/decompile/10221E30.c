/*
 * func-name: ??4?$ProductorTemplate@VFAircraftVehicle@GameClient@@@GameClient@@QAEAAV01@ABV01@@Z_0
 * func-address: 0x10221e30
 * callers: 0x10001bc2
 * callees: none
 */

char *__thiscall GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::operator=(char *this, int a2)
{
  std::string::operator=(this + 4, a2 + 4);
  return this;
}
