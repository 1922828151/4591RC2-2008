/*
 * func-name: ?DestroyInstance@FFunc_Sheild@GameClient@@UAEXK@Z_0
 * func-address: 0x1022cb90
 * callers: 0x1000b429
 * callees: 0x1000676c, 0x1000a506
 */

void __thiscall GameClient::FFunc_Sheild::DestroyInstance(GameClient::FFunc_Sheild *this, unsigned int a2)
{
  GameClient::FuncManager *v2; // eax
  struct GameClient::Function *v3; // eax
  struct GameClient::Function *v4; // esi

  v2 = GameClient::FuncManager::Instance();
  v3 = GameClient::FuncManager::RemoveFunction(v2, a2);
  v4 = v3;
  if ( v3 )
  {
    (*(void (__thiscall **)(int))(*((_DWORD *)v3 + 4) + 8))((int)v3 + 16);
    (**(void (__thiscall ***)(struct GameClient::Function *, int))v4)(v4, 1);
  }
}
