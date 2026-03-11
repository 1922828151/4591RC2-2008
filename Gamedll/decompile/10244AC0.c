/*
 * func-name: ?performCreate@?$ProductorTemplate@VFWeapon@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10244ac0
 * callers: 0x10006d11
 * callees: 0x10016f2c, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FWeapon>::performCreate(char *this)
{
  GameClient::FWeapon *v2; // eax
  int v3; // esi

  v2 = (GameClient::FWeapon *)operator new(0xB44u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FWeapon::FWeapon(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
