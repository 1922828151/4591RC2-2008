/*
 * func-name: ?Instance@LocalUserManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x1018ec00
 * callers: 0x10001087
 * callees: none
 */

struct GameClient::LocalUserManager *__cdecl GameClient::LocalUserManager::Instance()
{
  return GameClient::LocalUserManager::s_pInstance;
}
