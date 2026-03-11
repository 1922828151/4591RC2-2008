/*
 * func-name: ?performCreate@?$ProductorTemplate@VFRobotCore@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1023c580
 * callers: 0x1001a604
 * callees: 0x10010eb0, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FRobotCore>::performCreate(char *this)
{
  GameClient::FRobotCore *v2; // eax
  int v3; // esi

  v2 = (GameClient::FRobotCore *)operator new(0x140u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FRobotCore::FRobotCore(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
