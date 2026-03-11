/*
 * func-name: ?OnDestroy@Item@GameClient@@UAEXXZ_0
 * func-address: 0x10160ee0
 * callers: 0x1001960f
 * callees: 0x100084f4, 0x1000aff6
 */

void __thiscall GameClient::Item::OnDestroy(GameClient::Item *this)
{
  int v2; // eax
  GameClient::FlyweightManager *v3; // eax
  int v4; // eax
  GameClient::FlyweightManager *v5; // eax
  unsigned int v6; // [esp-8h] [ebp-Ch]
  unsigned int v7; // [esp-8h] [ebp-Ch]
  unsigned int v8; // [esp-4h] [ebp-8h]
  unsigned int v9; // [esp-4h] [ebp-8h]

  v2 = *((_DWORD *)this + 192);
  if ( v2 )
  {
    v8 = *(_DWORD *)(v2 + 12);
    v6 = *(_DWORD *)(v2 + 4);
    v3 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v3, v6, v8);
    *((_DWORD *)this + 192) = 0;
  }
  v4 = *((_DWORD *)this + 193);
  if ( v4 )
  {
    v9 = *(_DWORD *)(v4 + 12);
    v7 = *(_DWORD *)(v4 + 4);
    v5 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v5, v7, v9);
    *((_DWORD *)this + 193) = 0;
  }
  GameClient::Equip::OnDestroy(this);
}
