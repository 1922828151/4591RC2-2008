/*
 * func-name: ??1?$ProductorTemplate@VFSuspendVehicle@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1023fe40
 * callers: 0x1000687f
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::~ProductorTemplate<GameClient::FSuspendVehicle>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSuspendVehicle>::`vftable';
  GameClient::Productor::~Productor(this);
}
