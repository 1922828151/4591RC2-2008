/*
 * func-name: ?OnDestroy@WorldObject@GameClient@@UAEXXZ_0
 * func-address: 0x1019b230
 * callers: 0x10003139
 * callees: 0x100084f4, 0x1000aff6, 0x10014178
 */

void __thiscall GameClient::WorldObject::OnDestroy(GameClient::WorldObject *this)
{
  int v2; // eax
  GameClient::FlyweightManager *v3; // eax
  unsigned int v4; // [esp-8h] [ebp-Ch]
  unsigned int v5; // [esp-4h] [ebp-8h]

  GameClient::WorldObject::ClearAura(this);
  v2 = *((_DWORD *)this + 36);
  if ( v2 )
  {
    v5 = *(_DWORD *)(v2 + 12);
    v4 = *(_DWORD *)(v2 + 4);
    v3 = GameClient::FlyweightManager::Instance();
    GameClient::FlyweightManager::DeleteInstance(v3, v4, v5);
    *((_DWORD *)this + 36) = 0;
  }
}
