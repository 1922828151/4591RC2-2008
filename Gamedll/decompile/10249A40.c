/*
 * func-name: ?performCreate@?$ProductorTemplate@VFASearch@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10249a40
 * callers: 0x10018b38
 * callees: 0x1000c563, 0x102c9d98
 */

GameClient::FAura *__thiscall GameClient::ProductorTemplate<GameClient::FASearch>::performCreate(char *this)
{
  GameClient::FAura *v2; // eax
  GameClient::FAura *v3; // esi

  v2 = (GameClient::FAura *)operator new(0x104u);
  v3 = v2;
  if ( v2 )
  {
    GameClient::FAura::FAura(v2);
    *(_DWORD *)v3 = &GameClient::FASearch::`vftable';
  }
  else
  {
    v3 = 0;
  }
  std::string::operator=((char *)v3 + 4, this + 4);
  return v3;
}
