/*
 * func-name: ?performCreate@?$ProductorTemplate@VFSkill@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1024c7f0
 * callers: 0x10006cda
 * callees: 0x100186e2, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FSkill>::performCreate(char *this)
{
  GameClient::FSkill *v2; // eax
  int v3; // esi

  v2 = (GameClient::FSkill *)operator new(0x2BCu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FSkill::FSkill(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
