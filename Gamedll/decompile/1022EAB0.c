/*
 * func-name: ?LoadFlyweightFromFile@FlyweightManager@GameClient@@QAE_NABV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z_0
 * func-address: 0x1022eab0
 * callers: 0x100130a2
 * callees: 0x10018ec1, 0x102c9d62
 */

char __stdcall GameClient::FlyweightManager::LoadFlyweightFromFile(void *a1)
{
  _DWORD v2[12]; // [esp-14h] [ebp-B8h] BYREF
  _BYTE v3[28]; // [esp+1Ch] [ebp-88h] BYREF
  _BYTE v4[92]; // [esp+38h] [ebp-6Ch] BYREF
  int v5; // [esp+A0h] [ebp-4h]

  std::string::string(v3, a1);
  v5 = 0;
  FindMedia(v3, "Flyweights", 0, 0);
  XMLSystem::XMLSystem((XMLSystem *)v4);
  v2[11] = v2;
  LOBYTE(v5) = 1;
  std::string::string(v2, v3);
  if ( !(unsigned __int8)XMLSystem::Load(v4, v2[0], v2[1], v2[2], v2[3], v2[4], v2[5], v2[6]) )
    goto LABEL_4;
  if ( !(unsigned __int8)GameClient::FlyweightManager::_loadFlyweight((int)v4, (int)a1) )
  {
    XMLSystem::Destroy((XMLSystem *)v4);
LABEL_4:
    LOBYTE(v5) = 0;
    XMLSystem::~XMLSystem((XMLSystem *)v4);
    v5 = -1;
    std::string::~string(v3);
    return 0;
  }
  XMLSystem::Destroy((XMLSystem *)v4);
  LOBYTE(v5) = 0;
  XMLSystem::~XMLSystem((XMLSystem *)v4);
  v5 = -1;
  std::string::~string(v3);
  return 1;
}
