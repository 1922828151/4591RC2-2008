/*
 * func-name: ?performCreate@?$ProductorTemplate@VFASummon@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1024a070
 * callers: 0x10013020
 * callees: 0x1001882c, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FASummon>::performCreate(char *this)
{
  GameClient::FASummon *v2; // eax
  int v3; // esi

  v2 = (GameClient::FASummon *)operator new(0x128u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FASummon::FASummon(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
