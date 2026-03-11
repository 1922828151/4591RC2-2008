/*
 * func-name: ??1?$ProductorTemplate@VFAircraftVehicle@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10223260
 * callers: 0x10001875
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::~ProductorTemplate<GameClient::FAircraftVehicle>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FAircraftVehicle>::`vftable';
  GameClient::Productor::~Productor(this);
}
