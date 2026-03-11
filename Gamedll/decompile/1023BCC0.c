/*
 * func-name: ?performCreate@?$ProductorTemplate@VFRobotBody@GameClient@@@GameClient@@UAEPAVSerializeObject@@XZ_0
 * func-address: 0x1023bcc0
 * callers: 0x10010118
 * callees: 0x1000b348, 0x102c9d98
 */

int __thiscall GameClient::ProductorTemplate<GameClient::FRobotBody>::performCreate(char *this)
{
  GameClient::FRobotBody *v2; // eax
  int v3; // esi

  v2 = (GameClient::FRobotBody *)operator new(0x3F8u);
  v3 = 0;
  if ( v2 )
    v3 = GameClient::FRobotBody::FRobotBody(v2);
  std::string::operator=(v3 + 4, this + 4);
  return v3;
}
