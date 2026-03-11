/*
 * func-name: ??1FSOccupy@GameClient@@UAE@XZ_0
 * func-address: 0x1024cf80
 * callers: 0x10005add
 * callees: none
 */

void __thiscall GameClient::FSOccupy::~FSOccupy(GameClient::FSkill *this)
{
  *(_DWORD *)this = &GameClient::FSOccupy::`vftable';
  GameClient::FSkill::~FSkill(this);
}
