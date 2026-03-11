/*
 * func-name: ??0?$ProductorTemplate@VFDamageEquip@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10225ed0
 * callers: 0x10007289
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FDamageEquip>::ProductorTemplate<GameClient::FDamageEquip>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FDamageEquip>::`vftable';
  return this;
}
