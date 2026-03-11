/*
 * func-name: ?CreateInstance@DamageManager@GameClient@@SA_NXZ_0
 * func-address: 0x10157980
 * callers: 0x1000ae7a
 * callees: 0x100177e2, 0x102c9d98
 */

bool __cdecl GameClient::DamageManager::CreateInstance()
{
  GameClient::DamageManager *v0; // eax
  GameClient::DamageManager *v1; // eax

  v0 = (GameClient::DamageManager *)operator new(0x50u);
  if ( v0 )
    v1 = (GameClient::DamageManager *)GameClient::DamageManager::DamageManager(v0);
  else
    v1 = 0;
  GameClient::DamageManager::ms_pInstance = v1;
  return v1 != 0;
}
