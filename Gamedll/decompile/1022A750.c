/*
 * func-name: ?DestroyInstance@FEstablishment@GameClient@@UAEXK@Z_0
 * func-address: 0x1022a750
 * callers: 0x1000db43
 * callees: 0x1000adc6, 0x1000c90a, 0x10016784, 0x10019d6c
 */

void __thiscall GameClient::FEstablishment::DestroyInstance(GameClient::FEstablishment *this, unsigned int a2)
{
  GameClient::EstabManager *v2; // eax
  struct GameClient::Establishment *v3; // esi

  GameClient::DamageManager::RemoveDamageUnit(GameClient::DamageManager::ms_pInstance, a2);
  v2 = GameClient::EstabManager::Instance();
  v3 = GameClient::EstabManager::RemoveEstablishment(v2, a2);
  sub_10016784(a2);
  if ( v3 )
  {
    (*(void (__thiscall **)(struct GameClient::Establishment *))(*(_DWORD *)v3 + 8))(v3);
    (**(void (__thiscall ***)(struct GameClient::Establishment *, int))v3)(v3, 1);
  }
}
