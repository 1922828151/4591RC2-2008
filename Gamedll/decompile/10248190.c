/*
 * func-name: ?performCreate@?$ProductorTemplate@VFAEnergy@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10248190
 * callers: 0x1000ddd7
 * callees: 0x10010726, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FAEnergy>::performCreate(char *this)
{
  GameClient::FAEnergy *v2; // eax
  int v3; // esi

  v2 = (GameClient::FAEnergy *)operator new(0x10Cu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FAEnergy::FAEnergy(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
