/*
 * func-name: ?NewFunction@FlyweightManager@GameClient@@QAEPAVFunction@2@KK@Z_0
 * func-address: 0x1022df60
 * callers: 0x10015537
 * callees: 0x10013a84
 */

struct GameClient::Function *__thiscall GameClient::FlyweightManager::NewFunction(
        GameClient::FlyweightManager *this,
        unsigned int a2,
        unsigned int a3)
{
  struct GameClient::DataObject *v3; // eax

  v3 = GameClient::FlyweightManager::NewInstance(this, a2, a3);
  if ( v3 )
    return (struct GameClient::DataObject *)((char *)v3 - 16);
  else
    return 0;
}
