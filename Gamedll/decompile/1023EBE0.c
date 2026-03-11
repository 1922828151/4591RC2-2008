/*
 * func-name: ?performCreate@?$ProductorTemplate@VFRobotFramework@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1023ebe0
 * callers: 0x10016301
 * callees: 0x100157b7, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FRobotFramework>::performCreate(char *this)
{
  GameClient::FRobotFramework *v2; // eax
  int v3; // esi

  v2 = (GameClient::FRobotFramework *)operator new(0x760u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FRobotFramework::FRobotFramework(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
