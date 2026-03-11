/*
 * func-name: ??1?$ProductorTemplate@VFPedrailVehicle@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10232b60
 * callers: 0x10003571
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::~ProductorTemplate<GameClient::FPedrailVehicle>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FPedrailVehicle>::`vftable';
  GameClient::Productor::~Productor(this);
}
