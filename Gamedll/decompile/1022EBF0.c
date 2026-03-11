/*
 * func-name: ?LoadFlyweightFromMemory@FlyweightManager@GameClient@@QAE_NPBEIAAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x1022ebf0
 * callers: 0x10016e5a
 * callees: 0x10018ec1, 0x102c9d62
 */

char __stdcall GameClient::FlyweightManager::LoadFlyweightFromMemory(int a1, int a2, int a3)
{
  _BYTE v4[92]; // [esp+10h] [ebp-6Ch] BYREF
  int v5; // [esp+78h] [ebp-4h]

  XMLSystem::XMLSystem((XMLSystem *)v4);
  v5 = 0;
  if ( (unsigned __int8)XMLSystem::Load(v4, a1, a2, a3) )
  {
    if ( (unsigned __int8)GameClient::FlyweightManager::_loadFlyweight((int)v4, a3) )
    {
      XMLSystem::Destroy((XMLSystem *)v4);
      v5 = -1;
      XMLSystem::~XMLSystem((XMLSystem *)v4);
      return 1;
    }
    else
    {
      XMLSystem::Destroy((XMLSystem *)v4);
      v5 = -1;
      XMLSystem::~XMLSystem((XMLSystem *)v4);
      return 0;
    }
  }
  else
  {
    v5 = -1;
    XMLSystem::~XMLSystem((XMLSystem *)v4);
    return 0;
  }
}
