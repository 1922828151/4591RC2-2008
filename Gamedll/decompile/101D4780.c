/*
 * func-name: ??0SOccupy@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d4780
 * callers: 0x10001267
 * callees: 0x10007fae
 */

GameClient::SOccupy *__thiscall GameClient::SOccupy::SOccupy(
        GameClient::SOccupy *this,
        const struct GameClient::SOccupy *a2)
{
  GameClient::Skill::Skill(this, a2);
  *(_DWORD *)this = &GameClient::SOccupy::`vftable';
  return this;
}
