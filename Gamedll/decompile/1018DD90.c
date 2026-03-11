/*
 * func-name: ??1RobotManager@GameClient@@QAE@XZ_0
 * func-address: 0x1018dd90
 * callers: 0x100038f0
 * callees: 0x10001da2, 0x10016bc6, 0x102c9d50
 */

void __thiscall GameClient::RobotManager::~RobotManager(void **this)
{
  GameClient::RobotManager::ClearRobot((GameClient::RobotManager *)this);
  if ( this[5] )
    operator delete(this[5]);
  this[5] = 0;
  this[6] = 0;
  this[7] = 0;
  sub_10001DA2();
}
