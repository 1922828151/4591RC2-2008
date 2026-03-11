/*
 * func-name: ?DestroyInstance@FAura@GameClient@@UAEXK@Z_0
 * func-address: 0x1024a8d0
 * callers: 0x10010f3c
 * callees: 0x1000f849, 0x10012837
 */

void __thiscall GameClient::FAura::DestroyInstance(GameClient::FAura *this, unsigned int a2)
{
  GameClient::AuraManager *v2; // eax
  struct GameClient::Aura *v3; // eax

  v2 = GameClient::AuraManager::Instance();
  v3 = GameClient::AuraManager::RemoveAura(v2, a2);
  if ( v3 )
    (**(void (__thiscall ***)(struct GameClient::Aura *, int))v3)(v3, 1);
}
