/*
 * func-name: ??1?$ProductorTemplate@VFAMovement@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x102488b0
 * callers: 0x1000c52c
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FAMovement>::~ProductorTemplate<GameClient::FAMovement>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FAMovement>::`vftable';
  GameClient::Productor::~Productor(this);
}
