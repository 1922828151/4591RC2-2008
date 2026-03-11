/*
 * func-name: ?Instance@AuraManager@GameClient@@SAPAV12@XZ_0
 * func-address: 0x10143dc0
 * callers: 0x10012837
 * callees: 0x1000765d, 0x102c9d98
 */

struct GameClient::AuraManager *__cdecl GameClient::AuraManager::Instance()
{
  struct GameClient::AuraManager *result; // eax
  struct GameClient::AuraManager *v1; // esi
  char v2; // [esp+Bh] [ebp-11h] BYREF
  struct GameClient::AuraManager *v3; // [esp+Ch] [ebp-10h]
  int v4; // [esp+18h] [ebp-4h]

  result = GameClient::AuraManager::ms_pInstance;
  if ( !GameClient::AuraManager::ms_pInstance )
  {
    v1 = (struct GameClient::AuraManager *)operator new(0x2Cu);
    v3 = v1;
    v4 = 0;
    if ( v1 )
    {
      sub_1000765D((int)&v2, (int)&v2);
      *((_DWORD *)v1 + 10) = 0;
    }
    else
    {
      v1 = 0;
    }
    result = v1;
    GameClient::AuraManager::ms_pInstance = v1;
  }
  return result;
}
