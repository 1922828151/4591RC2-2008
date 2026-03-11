/*
 * func-name: ?DestroyInstance@LogicFactory@GameClient@@SAXXZ_0
 * func-address: 0x101dd6b0
 * callers: 0x100144d4
 * callees: 0x1001267a, 0x102c9d50
 */

void __cdecl GameClient::LogicFactory::DestroyInstance()
{
  GameClient::LogicFactory *v0; // esi

  if ( GameClient::LogicFactory::s_pInstance )
  {
    v0 = GameClient::LogicFactory::s_pInstance;
    GameClient::LogicFactory::~LogicFactory(GameClient::LogicFactory::s_pInstance);
    operator delete(v0);
    GameClient::LogicFactory::s_pInstance = 0;
  }
}
