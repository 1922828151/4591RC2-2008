/*
 * func-name: ?DestroyInstance@FSeat@GameClient@@UAEXK@Z_0
 * func-address: 0x1023eec0
 * callers: 0x10009a0c
 * callees: 0x1000adc6, 0x10017e0e
 */

void __thiscall GameClient::FSeat::DestroyInstance(GameClient::FSeat *this, unsigned int a2)
{
  GameClient::EstabManager *v2; // eax
  struct GameClient::Seat *v3; // eax

  v2 = GameClient::EstabManager::Instance();
  v3 = GameClient::EstabManager::RemoveSeat(v2, a2);
  if ( v3 )
    (**(void (__thiscall ***)(struct GameClient::Seat *, int))v3)(v3, 1);
}
