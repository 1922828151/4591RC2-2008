/*
 * func-name: ?performCreate@?$ProductorTemplate@VFSOccupy@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1024d050
 * callers: 0x10007d60
 * callees: 0x100186e2, 0x102c9d98
 */

GameClient::FSkill *__thiscall GameClient::ProductorTemplate<GameClient::FSOccupy>::performCreate(char *this)
{
  GameClient::FSkill *v2; // eax
  GameClient::FSkill *v3; // esi

  v2 = (GameClient::FSkill *)operator new(0x2BCu);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FSkill::FSkill(v2);
    *(_DWORD *)v3 = &GameClient::FSOccupy::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
