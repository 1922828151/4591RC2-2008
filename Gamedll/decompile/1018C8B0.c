/*
 * func-name: ?OnCreate@RobotCore@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x1018c8b0
 * callers: 0x10001c53
 * callees: none
 */

bool __thiscall GameClient::RobotCore::OnCreate(GameClient::RobotCore *this, struct GameClient::Flyweight *a2)
{
  if ( !a2 )
    return 0;
  *((_DWORD *)this + 38) = a2;
  return GameClient::SystemPart::OnCreate(this, a2);
}
