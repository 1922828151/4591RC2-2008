/*
 * func-name: ??1?$ProductorTemplate@VFSAlarm@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1024adc0
 * callers: 0x1001167b
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FSAlarm>::~ProductorTemplate<GameClient::FSAlarm>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSAlarm>::`vftable';
  GameClient::Productor::~Productor(this);
}
