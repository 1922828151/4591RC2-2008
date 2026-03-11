/*
 * func-name: ?performCreate@?$ProductorTemplate@VFBooty@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x102239a0
 * callers: 0x10010816
 * callees: 0x10012d32, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FBooty>::performCreate(char *this)
{
  GameClient::FBooty *v2; // eax
  int v3; // esi

  v2 = (GameClient::FBooty *)operator new(0xB8u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FBooty::FBooty(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
