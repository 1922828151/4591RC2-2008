/*
 * func-name: ??1?$ProductorTemplate@VFARepair@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10248f00
 * callers: 0x1000d7a6
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FARepair>::~ProductorTemplate<GameClient::FARepair>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FARepair>::`vftable';
  GameClient::Productor::~Productor(this);
}
