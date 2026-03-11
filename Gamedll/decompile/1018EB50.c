/*
 * func-name: ?CreateInstance@LocalUserManager@GameClient@@SA_NXZ_0
 * func-address: 0x1018eb50
 * callers: 0x10017544
 * callees: 0x100084ae, 0x102c9d98
 */

bool __cdecl GameClient::LocalUserManager::CreateInstance()
{
  GameClient::LocalUserManager *v0; // eax
  GameClient::LocalUserManager *v1; // eax

  v0 = (GameClient::LocalUserManager *)operator new(0x2Cu);
  if ( v0 )
    v1 = (GameClient::LocalUserManager *)GameClient::LocalUserManager::LocalUserManager(v0);
  else
    v1 = 0;
  GameClient::LocalUserManager::s_pInstance = v1;
  return v1 != 0;
}
