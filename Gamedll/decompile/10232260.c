/*
 * func-name: ?performCreate@?$ProductorTemplate@VFNonControlledEstab@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10232260
 * callers: 0x1000cc39
 * callees: 0x10011ce3, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FNonControlledEstab>::performCreate(char *this)
{
  GameClient::FNonControlledEstab *v2; // eax
  int v3; // esi

  v2 = (GameClient::FNonControlledEstab *)operator new(0x208u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FNonControlledEstab::FNonControlledEstab(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
