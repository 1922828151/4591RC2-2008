/*
 * func-name: ??0FSOccupy@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d47c0
 * callers: 0x100071fd
 * callees: 0x1001ac76
 */

GameClient::FSOccupy *__thiscall GameClient::FSOccupy::FSOccupy(
        GameClient::FSOccupy *this,
        const struct GameClient::FSOccupy *a2)
{
  GameClient::FSkill::FSkill(this, a2);
  *(_DWORD *)this = &GameClient::FSOccupy::`vftable';
  return this;
}
