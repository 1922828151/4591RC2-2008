/*
 * func-name: ??1?$ProductorTemplate@VFFunc_Power@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1022bba0
 * callers: 0x100158c5
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FFunc_Power>::~ProductorTemplate<GameClient::FFunc_Power>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FFunc_Power>::`vftable';
  GameClient::Productor::~Productor(this);
}
