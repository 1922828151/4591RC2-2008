/*
 * func-name: ??1?$ProductorTemplate@VFAAlarm@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x10246e30
 * callers: 0x1000c96e
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FAAlarm>::~ProductorTemplate<GameClient::FAAlarm>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FAAlarm>::`vftable';
  GameClient::Productor::~Productor(this);
}
