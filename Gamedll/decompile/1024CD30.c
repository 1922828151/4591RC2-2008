/*
 * func-name: ??1?$ProductorTemplate@VFSLock@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1024cd30
 * callers: 0x1000bed8
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FSLock>::~ProductorTemplate<GameClient::FSLock>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSLock>::`vftable';
  GameClient::Productor::~Productor(this);
}
