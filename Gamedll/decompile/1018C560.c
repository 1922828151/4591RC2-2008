/*
 * func-name: ?OnCreate@RobotBody@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x1018c560
 * callers: 0x100145a6
 * callees: none
 */

bool __thiscall GameClient::RobotBody::OnCreate(GameClient::RobotBody *this, struct GameClient::Flyweight *a2)
{
  if ( !a2 )
    return 0;
  *((_DWORD *)this + 38) = a2;
  return GameClient::SystemPart::OnCreate(this, a2);
}
