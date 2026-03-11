/*
 * func-name: ??1?$ProductorTemplate@VFEstabDoor@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1022a550
 * callers: 0x1001a38e
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FEstabDoor>::~ProductorTemplate<GameClient::FEstabDoor>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FEstabDoor>::`vftable';
  GameClient::Productor::~Productor(this);
}
