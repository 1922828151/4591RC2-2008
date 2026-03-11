/*
 * func-name: ?DestroyInstance@LocalUserManager@GameClient@@SAXXZ_0
 * func-address: 0x1018ebd0
 * callers: 0x10007126
 * callees: none
 */

void __cdecl GameClient::LocalUserManager::DestroyInstance()
{
  if ( GameClient::LocalUserManager::s_pInstance )
  {
    (**(void (__thiscall ***)(GameClient::LocalUserManager *, int))GameClient::LocalUserManager::s_pInstance)(
      GameClient::LocalUserManager::s_pInstance,
      1);
    GameClient::LocalUserManager::s_pInstance = 0;
  }
}
