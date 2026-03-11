/*
 * func-name: ??0SLock@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d4300
 * callers: 0x1000bc6c
 * callees: 0x10007fae, 0x1000fe8e
 */

GameClient::SLock *__thiscall GameClient::SLock::SLock(GameClient::SLock *this, const struct GameClient::SLock *a2)
{
  GameClient::Skill::Skill(this, a2);
  *(_DWORD *)this = &GameClient::SLock::`vftable';
  *((_DWORD *)this + 167) = *((_DWORD *)a2 + 167);
  *((_DWORD *)this + 168) = *((_DWORD *)a2 + 168);
  *((float *)this + 169) = *((float *)a2 + 169);
  *((_DWORD *)this + 170) = *((_DWORD *)a2 + 170);
  sub_1000FE8E((int)a2 + 684);
  return this;
}
