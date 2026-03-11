/*
 * func-name: ?performCreate@?$ProductorTemplate@VFDamageEquip@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10226780
 * callers: 0x10002acc
 * callees: 0x10017017, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FDamageEquip>::performCreate(char *this)
{
  GameClient::FDamageEquip *v2; // eax
  int v3; // esi

  v2 = (GameClient::FDamageEquip *)operator new(0x948u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FDamageEquip::FDamageEquip(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
