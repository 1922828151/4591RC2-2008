/*
 * func-name: ??1?$ProductorTemplate@VFAArmor@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10247300
 * callers: 0x100147d1
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FAArmor>::~ProductorTemplate<GameClient::FAArmor>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FAArmor>::`vftable';
  GameClient::Productor::~Productor(this);
}
