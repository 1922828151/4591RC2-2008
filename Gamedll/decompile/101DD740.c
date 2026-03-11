/*
 * func-name: ?CreateInstance@LogicFactory@GameClient@@SA_NXZ_0
 * func-address: 0x101dd740
 * callers: 0x1000d1ac
 * callees: 0x100055e7, 0x1001267a, 0x102c9d50, 0x102c9d98
 */

bool __cdecl GameClient::LogicFactory::CreateInstance()
{
  GameClient::LogicFactory *v0; // esi
  GameClient::LogicFactory *v1; // eax
  GameClient::LogicFactory *v2; // eax

  if ( GameClient::LogicFactory::s_pInstance )
  {
    v0 = GameClient::LogicFactory::s_pInstance;
    GameClient::LogicFactory::~LogicFactory(GameClient::LogicFactory::s_pInstance);
    operator delete(v0);
    GameClient::LogicFactory::s_pInstance = 0;
  }
  v1 = (GameClient::LogicFactory *)operator new(0x50u);
  if ( v1 )
    v2 = (GameClient::LogicFactory *)GameClient::LogicFactory::LogicFactory(v1);
  else
    v2 = 0;
  GameClient::LogicFactory::s_pInstance = v2;
  return v2 != 0;
}
