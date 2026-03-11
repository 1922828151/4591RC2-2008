/*
 * func-name: ??0?$ProductorTemplate@VFSLock@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1024c9c0
 * callers: 0x1000285b
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSLock>::ProductorTemplate<GameClient::FSLock>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSLock>::`vftable';
  return this;
}
