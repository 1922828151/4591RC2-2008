/*
 * func-name: ?Instance@DamageManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x101514a0
 * callers: 0x100135f2
 * callees: none
 */

struct GameClient::DamageManager *__cdecl GameClient::DamageManager::Instance()
{
  return GameClient::DamageManager::ms_pInstance;
}
