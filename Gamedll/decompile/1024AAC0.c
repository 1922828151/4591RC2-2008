/*
 * func-name: ?performCreate@?$ProductorTemplate@VFAura@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1024aac0
 * callers: 0x100011e5
 * callees: 0x1000c563, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FAura>::performCreate(char *this)
{
  GameClient::FAura *v2; // eax
  int v3; // esi

  v2 = (GameClient::FAura *)operator new(0x104u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FAura::FAura(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
