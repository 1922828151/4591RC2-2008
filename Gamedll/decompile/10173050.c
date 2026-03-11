/*
 * func-name: ?BindFuncPower@Robot@GameClient@@QAEXKK@Z_0
 * func-address: 0x10173050
 * callers: 0x1000fef2
 * callees: 0x1000aff6, 0x10015537, 0x102c9ea8
 */

void __thiscall GameClient::Robot::BindFuncPower(GameClient::Robot *this, unsigned int a2, unsigned int a3)
{
  GameClient::FlyweightManager *v4; // eax
  struct GameClient::Function *v5; // eax

  v4 = GameClient::FlyweightManager::Instance();
  v5 = GameClient::FlyweightManager::NewFunction(v4, a2, a3);
  *((_DWORD *)this + 48) = _RTDynamicCast(
                             v5,
                             0,
                             &GameClient::Function `RTTI Type Descriptor',
                             &GameClient::Func_Power `RTTI Type Descriptor',
                             0);
}
