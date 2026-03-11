/*
 * func-name: ??1?$ProductorTemplate@VFItem@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1022dad0
 * callers: 0x10015839
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FItem>::~ProductorTemplate<GameClient::FItem>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FItem>::`vftable';
  GameClient::Productor::~Productor(this);
}
