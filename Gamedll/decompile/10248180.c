/*
 * func-name: ??1?$ProductorTemplate@VFAEnergy@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10248180
 * callers: 0x10018255
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FAEnergy>::~ProductorTemplate<GameClient::FAEnergy>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FAEnergy>::`vftable';
  GameClient::Productor::~Productor(this);
}
