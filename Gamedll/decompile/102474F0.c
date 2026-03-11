/*
 * func-name: ??0FAArmor@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x102474f0
 * callers: 0x10013cf5
 * callees: 0x1000ed77
 */

GameClient::FAArmor *__thiscall GameClient::FAArmor::FAArmor(
        GameClient::FAArmor *this,
        const struct GameClient::FAArmor *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FAArmor::`vftable';
  *((_DWORD *)this + 65) = *((_DWORD *)a2 + 65);
  *((_DWORD *)this + 66) = *((_DWORD *)a2 + 66);
  return this;
}
