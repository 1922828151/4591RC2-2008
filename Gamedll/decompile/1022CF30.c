/*
 * func-name: ?DestroyInstance@FFunc_Store@GameClient@@UAEXK@Z_0
 * func-address: 0x1022cf30
 * callers: 0x1000b901
 * callees: 0x1000676c, 0x1000a506
 */

void __thiscall GameClient::FFunc_Store::DestroyInstance(GameClient::FFunc_Store *this, unsigned int a2)
{
  GameClient::FuncManager *v2; // eax
  struct GameClient::Function *v3; // eax

  v2 = GameClient::FuncManager::Instance();
  v3 = GameClient::FuncManager::RemoveFunction(v2, a2);
  if ( v3 )
    (**(void (__thiscall ***)(struct GameClient::Function *, int))v3)(v3, 1);
}
