/*
 * func-name: ?performCreate@?$ProductorTemplate@VFADamage@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10247d40
 * callers: 0x10017d2d
 * callees: 0x100058df, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FADamage>::performCreate(char *this)
{
  GameClient::FADamage *v2; // eax
  int v3; // esi

  v2 = (GameClient::FADamage *)operator new(0x10Cu);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FADamage::FADamage(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
