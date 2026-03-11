/*
 * func-name: ?OnCreate@RobotArmor@GameClient@@UAE_NPAVFlyweight@2@@Z_0
 * func-address: 0x1018c2c0
 * callers: 0x10006069
 * callees: none
 */

bool __thiscall GameClient::RobotArmor::OnCreate(GameClient::RobotArmor *this, struct GameClient::Flyweight *a2)
{
  if ( !a2 )
    return 0;
  *((_DWORD *)this + 38) = a2;
  *((_DWORD *)this + 39) = *((_DWORD *)a2 + 91);
  return GameClient::SystemPart::OnCreate(this, a2);
}
