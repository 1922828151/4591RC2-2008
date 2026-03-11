/*
 * func-name: ??0FASummon@GameClient@@QAE@XZ_0
 * func-address: 0x10249d60
 * callers: 0x1001882c
 * callees: 0x1000c563
 */

GameClient::FASummon *__thiscall GameClient::FASummon::FASummon(GameClient::FASummon *this)
{
  GameClient::FAura::FAura(this);
  *(_DWORD *)this = &GameClient::FASummon::`vftable';
  std::string::string((char *)this + 260);
  std::string::operator=((char *)this + 260, &unk_1031F958);
  *((_DWORD *)this + 72) = 0;
  *((_BYTE *)this + 292) = 0;
  return this;
}
