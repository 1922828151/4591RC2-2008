/*
 * func-name: ??1?$ProductorTemplate@VFSkill@GameClient@@@GameClient@@UAE@XZ_0
 * func-address: 0x1024c7e0
 * callers: 0x10014e9d
 * callees: none
 */

void __thiscall GameClient::ProductorTemplate<GameClient::FSkill>::~ProductorTemplate<GameClient::FSkill>(
        GameClient::Productor *this)
{
  *(_DWORD *)this = &GameClient::ProductorTemplate<GameClient::FSkill>::`vftable';
  GameClient::Productor::~Productor(this);
}
