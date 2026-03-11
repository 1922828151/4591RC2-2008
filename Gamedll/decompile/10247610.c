/*
 * func-name: ??0?$ProductorTemplate@VFACapability@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10247610
 * callers: 0x10009403
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FACapability>::ProductorTemplate<GameClient::FACapability>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FACapability>::`vftable';
  return this;
}
