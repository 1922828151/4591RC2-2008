/*
 * func-name: ??0?$ProductorTemplate@VFFunc_Power_Input@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1022bd80
 * callers: 0x10006a41
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FFunc_Power_Input>::ProductorTemplate<GameClient::FFunc_Power_Input>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FFunc_Power_Input>::`vftable';
  return this;
}
