/*
 * func-name: ??0FASummon@GameClient@@QAE@ABV01@@Z_0
 * func-address: 0x101d0f40
 * callers: 0x10004b92
 * callees: 0x1000ed77
 */

GameClient::FASummon *__thiscall GameClient::FASummon::FASummon(
        GameClient::FASummon *this,
        const struct GameClient::FASummon *a2)
{
  GameClient::FAura::FAura(this, a2);
  *(_DWORD *)this = &GameClient::FASummon::`vftable';
  std::string::string((char *)this + 260, (char *)a2 + 260);
  *((_DWORD *)this + 72) = *((_DWORD *)a2 + 72);
  *((_BYTE *)this + 292) = *((_BYTE *)a2 + 292);
  return this;
}
