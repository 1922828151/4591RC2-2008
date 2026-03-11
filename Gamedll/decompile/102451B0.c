/*
 * func-name: ??1?$ProductorTemplate@VFWheelVehicle@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102451b0
 * callers: 0x10011d29
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FWheelVehicle>::~ProductorTemplate<GameClient::FWheelVehicle>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FWheelVehicle>::`vftable';
  GameClient::Productor::~Productor(this);
}
