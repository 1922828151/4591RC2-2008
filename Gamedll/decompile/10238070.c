/*
 * func-name: ?performCreate@?$ProductorTemplate@VFRobotArmor@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x10238070
 * callers: 0x1000accc
 * callees: 0x10017fda, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FRobotArmor>::performCreate(char *this)
{
  GameClient::FRobotArmor *v2; // eax
  int v3; // esi

  v2 = (GameClient::FRobotArmor *)operator new(0x1D8u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FRobotArmor::FRobotArmor(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
