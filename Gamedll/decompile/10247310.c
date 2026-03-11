/*
 * func-name: ?performCreate@?$ProductorTemplate@VFAArmor@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10247310
 * callers: 0x10005321
 * callees: 0x100033d7, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FAArmor>::performCreate(char *this)
{
  GameClient::FAArmor *v2; // eax
  int v3; // esi

  v2 = (GameClient::FAArmor *)operator new(0x10Cu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FAArmor::FAArmor(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
