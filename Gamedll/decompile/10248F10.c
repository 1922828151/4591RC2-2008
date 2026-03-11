/*
 * func-name: ?performCreate@?$ProductorTemplate@VFARepair@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10248f10
 * callers: 0x10016e0a
 * callees: 0x10010956, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FARepair>::performCreate(char *this)
{
  GameClient::FARepair *v2; // eax
  int v3; // esi

  v2 = (GameClient::FARepair *)operator new(0x118u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FARepair::FARepair(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
