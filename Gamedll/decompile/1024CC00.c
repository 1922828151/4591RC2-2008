/*
 * func-name: ??1FSLock@GameClient@@UAE@XZ_0
 * func-address: 0x1024cc00
 * callers: 0x1000240a
 * callees: none
 */

void __thiscall GameClient::FSLock::~FSLock(GameClient::FSkill *this)
{
  *(_DWORD *)this = &GameClient::FSLock::`vftable';
  GameClient::FSkill::~FSkill(this);
}
