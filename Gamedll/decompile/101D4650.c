/*
 * func-name: ??1SOccupy@GameClient@@UAE@XZ_0
 * func-address: 0x101d4650
 * callers: 0x1000e872
 * callees: none
 */

void __thiscall GameClient::SOccupy::~SOccupy(GameClient::Skill *this)
{
  *(_DWORD *)this = &GameClient::SOccupy::`vftable';
  GameClient::Skill::~Skill(this);
}
