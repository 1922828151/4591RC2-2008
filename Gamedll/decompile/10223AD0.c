/*
 * func-name: ??0?$ProductorTemplate@VFBullet@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10223ad0
 * callers: 0x100146aa
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FBullet>::ProductorTemplate<GameClient::FBullet>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FBullet>::`vftable';
  return this;
}
