/*
 * func-name: ??0?$ProductorTemplate@VFADamage@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x10247ac0
 * callers: 0x1000a344
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FADamage>::ProductorTemplate<GameClient::FADamage>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FADamage>::`vftable';
  return this;
}
