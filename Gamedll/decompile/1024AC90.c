/*
 * func-name: ??0?$ProductorTemplate@VFSAlarm@GameClient@@@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x1024ac90
 * callers: 0x10002694
 * callees: none
 */

_DWORD *__thiscall GameClient::ProductorTemplate<GameClient::FSAlarm>::ProductorTemplate<GameClient::FSAlarm>(
        _DWORD *this,
        int a2)
{
  *this = &GameClient::Productor::`vftable';
  std::string::string(this + 1, (void *)(a2 + 4));
  *this = &GameClient::ProductorTemplate<GameClient::FSAlarm>::`vftable';
  return this;
}
