/*
 * func-name: ??1?$ProductorTemplate@VFAura@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1024aab0
 * callers: 0x100056aa
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FAura>::~ProductorTemplate<GameClient::FAura>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FAura>::`vftable';
  GameClient::Productor::~Productor(this);
}
